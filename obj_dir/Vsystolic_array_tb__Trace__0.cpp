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
        bufp->chgSData(oldp+586,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+589,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+590,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+591,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+592,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+593,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+595,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+596,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+597,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+599,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+601,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+603,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+605,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+606,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+607,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+609,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+610,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+611,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgSData(oldp+612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+613,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+615,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+616,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+617,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+620,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+621,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+623,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+624,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+627,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+629,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+630,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+631,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+632,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+633,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+637,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+644,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+645,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+646,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+650,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+651,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+653,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+654,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+655,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+656,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+657,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+658,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+659,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+660,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+661,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+662,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+664,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+665,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+666,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+667,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+668,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+669,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+670,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+672,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+674,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+675,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+676,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+678,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+680,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+681,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+682,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+683,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+684,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+686,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgSData(oldp+687,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+688,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+690,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+691,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+692,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+693,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+694,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+695,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+696,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+698,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+701,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+702,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+703,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+704,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+705,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+706,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+707,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+712,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+713,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+721,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+725,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+726,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+729,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+730,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+731,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+732,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+733,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+734,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+735,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+736,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+739,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+740,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+741,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+742,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+743,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+744,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+745,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+747,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+749,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+750,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+753,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+754,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+755,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+756,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+757,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+758,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+759,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+760,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+761,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgSData(oldp+762,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+763,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+764,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+766,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+767,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+770,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+771,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+773,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+776,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+777,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+778,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+779,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+780,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+781,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+782,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+785,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+787,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+788,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+789,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+794,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+796,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+800,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+801,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+804,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+805,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+806,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+807,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+808,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+809,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+810,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+811,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+812,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+814,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+815,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+816,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+817,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+818,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+819,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+820,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+824,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+825,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+828,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+830,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+831,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+832,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+833,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+834,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+836,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgSData(oldp+837,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+838,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+839,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+840,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+842,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+843,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+845,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+846,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+851,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+852,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+853,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+854,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+855,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+856,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+857,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+858,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+862,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+863,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+864,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+865,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+869,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+871,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+875,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+876,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+879,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+880,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+881,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+882,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+883,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+884,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+885,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+886,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+887,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+890,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+891,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+892,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+893,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+894,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+895,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+897,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+899,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+900,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+901,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+903,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+904,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+905,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+906,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+907,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+908,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+909,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+910,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+911,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+912,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+913,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+914,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+915,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+916,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+917,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+919,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+920,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+921,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+923,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+924,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+925,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+926,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+929,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+930,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+931,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+932,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+933,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+934,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+935,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x20U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+936,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+937,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+938,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+940,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+941,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+942,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+943,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+946,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+947,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+948,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+949,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+952,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+953,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+954,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+957,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+958,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+959,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+960,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+961,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+962,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+963,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+964,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+965,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+967,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][1U] >> 0xfU)))));
        bufp->chgBit(oldp+968,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][1U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+969,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+970,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+971,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+972,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+973,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+975,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+977,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+979,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+981,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+982,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+983,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+984,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+985,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgCData(oldp+986,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+987,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+988,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+989,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+991,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+992,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+993,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+994,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+995,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+996,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+997,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+998,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+999,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1001,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1007,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1008,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1011,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x20U)))),16);
        bufp->chgSData(oldp+1012,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1013,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x20U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1018,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1019,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1025,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1027,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1031,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1032,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1035,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1037,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1038,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1039,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1040,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1041,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1042,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1046,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1047,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1048,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1049,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1050,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1051,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1055,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1056,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1059,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1061,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1062,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1063,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][2U]),16);
        bufp->chgCData(oldp+1064,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1067,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1069,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1070,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1071,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1072,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1073,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1074,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1075,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1076,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1077,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1079,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1085,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1086,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1088,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1089,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x20U)))),16);
        bufp->chgSData(oldp+1090,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1091,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x20U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1092,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1096,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1097,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1103,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1104,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1105,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1108,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1109,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1110,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1113,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1114,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1115,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1117,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1118,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1119,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1120,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1123,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1125,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1126,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1127,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1128,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1129,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1133,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1134,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1137,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1139,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1140,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1141,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][3U]),16);
        bufp->chgCData(oldp+1142,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1145,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1146,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1147,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1148,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1149,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1151,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1152,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1153,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1154,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1155,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1156,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1157,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1163,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1164,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1166,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1167,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x20U)))),16);
        bufp->chgSData(oldp+1168,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1169,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x20U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1170,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1174,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1175,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1178,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1180,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1181,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1182,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1183,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1187,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1188,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1191,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1192,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1193,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1195,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1196,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1198,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1202,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1203,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1204,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1205,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1206,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1207,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1211,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1212,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1214,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1215,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1217,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1218,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1219,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1220,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1223,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1225,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1226,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1227,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1228,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1229,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1230,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1231,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1232,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1235,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1237,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1241,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1242,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1244,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1245,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1246,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1247,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1248,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1252,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1253,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1260,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1261,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1265,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1266,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1269,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1270,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1271,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1272,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1273,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1274,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1275,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1276,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1279,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1280,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1281,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1282,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1283,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1284,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1285,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1289,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1290,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1293,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1295,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1296,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1297,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1298,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1301,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1303,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1304,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1305,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1306,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1307,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1308,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1309,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1310,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1311,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1313,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1319,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1320,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1322,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1323,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1324,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1325,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1326,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1330,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1331,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1337,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1338,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1339,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1343,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1344,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1345,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1347,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1348,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1349,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1351,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1352,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1353,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1354,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1357,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1358,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1359,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1360,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1362,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1363,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1367,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1368,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1371,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1372,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1373,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1374,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1375,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1376,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1379,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1381,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1382,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1383,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1384,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1385,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1386,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1387,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1388,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1389,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1391,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1397,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1398,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1400,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1401,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1402,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1403,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1404,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1408,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1409,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1413,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1415,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1416,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1417,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1421,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1422,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1423,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1425,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1427,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1428,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1429,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1430,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1431,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1432,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1433,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1435,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1436,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1437,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1438,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1439,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1440,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1441,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1445,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1446,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1447,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1449,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1450,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1451,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1452,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1453,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1454,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1457,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1458,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1459,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1460,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1461,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1462,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1463,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1465,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1466,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1467,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1468,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1469,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1472,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1473,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1475,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1476,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1478,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1479,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1480,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1481,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1482,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1483,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1485,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1486,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1487,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1493,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1495,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1497,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1498,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1499,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1500,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1501,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1503,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1504,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1505,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1507,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1508,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1509,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1510,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1513,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1514,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1515,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1516,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1517,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1518,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1519,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1520,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1523,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1524,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1527,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1528,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1529,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1530,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1531,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1532,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1533,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1535,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1537,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1538,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1539,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1541,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1542,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1543,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1544,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1545,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1546,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1547,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1550,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1551,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1552,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1553,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1554,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1555,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1556,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1557,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U]))),16);
        bufp->chgSData(oldp+1558,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1559,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1560,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1564,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1567,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1568,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1569,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1570,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1571,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1573,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1575,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1576,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1577,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1578,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1581,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1582,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1583,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1584,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1585,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1586,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1588,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1591,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1592,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1593,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1594,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1595,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1596,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1597,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1598,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1599,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1601,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1602,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1604,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1605,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1606,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1607,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1608,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1609,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1610,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1611,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1613,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1615,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1616,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1617,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1620,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1621,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1622,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1623,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1624,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1625,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1630,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1631,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1632,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1634,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1635,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U]))),16);
        bufp->chgSData(oldp+1636,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1637,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1645,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1650,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1651,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1655,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1656,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1657,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1659,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1660,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1661,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1663,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1664,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1665,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1666,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1670,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1671,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1672,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1673,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1674,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1675,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1677,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1679,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1680,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1681,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1682,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1683,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1684,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1685,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1686,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1687,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1688,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1691,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1693,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1694,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1695,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1696,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1697,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1698,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1699,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1700,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1701,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1703,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1706,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1709,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1710,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1712,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1713,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U]))),16);
        bufp->chgSData(oldp+1714,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1715,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1720,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1724,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1725,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1727,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1728,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1729,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1730,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1733,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1734,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1735,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1736,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1737,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1738,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1739,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1740,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1741,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1742,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1743,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1744,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1745,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1748,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1749,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
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
        bufp->chgSData(oldp+1750,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1751,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1752,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1753,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1754,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1755,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1757,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1758,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1759,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1760,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1761,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1763,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1764,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1765,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1766,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1769,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1770,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1771,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp))));
        bufp->chgBit(oldp+1772,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1773,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1774,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1775,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1776,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1777,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1778,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1779,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1781,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1784,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1785,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1786,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1787,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1788,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1791,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U]))),16);
        bufp->chgSData(oldp+1792,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1793,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1794,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1795,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1796,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
        bufp->chgCData(oldp+1799,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_count),3);
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
        bufp->chgCData(oldp+1801,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_count),2);
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift));
        bufp->chgCData(oldp+1804,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[0]),4);
        bufp->chgCData(oldp+1805,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[1]),4);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[2]),4);
        bufp->chgSData(oldp+1807,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1808,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1809,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1810,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1811,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1812,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1813,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1814,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1815,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1816,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1817,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1818,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1819,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+1820,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1821,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+1822,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1823,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+1824,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1825,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+1826,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1827,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+1828,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1829,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+1830,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1831,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+1832,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1833,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+1834,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1835,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+1836,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1837,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+1838,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1839,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1840,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1841,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1842,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1843,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1844,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1845,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1846,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1847,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1848,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1849,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1850,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1851,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out),2);
        bufp->chgBit(oldp+1852,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en));
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out),2);
        bufp->chgQData(oldp+1854,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output),64);
    }
    bufp->chgBit(oldp+1856,(vlSelfRef.systolic_array_tb__DOT__tb_clk));
    bufp->chgIData(oldp+1857,(vlSelfRef.systolic_array_tb__DOT__z),32);
    bufp->chgIData(oldp+1858,(vlSelfRef.systolic_array_tb__DOT__y),32);
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
