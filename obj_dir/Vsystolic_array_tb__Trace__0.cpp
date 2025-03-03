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
        bufp->chgBit(oldp+147,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
        bufp->chgBit(oldp+148,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start));
        bufp->chgCData(oldp+149,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[0]),4);
        bufp->chgCData(oldp+150,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[1]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[2]),4);
        bufp->chgCData(oldp+152,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full),3);
        bufp->chgBit(oldp+153,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading));
        bufp->chgCData(oldp+154,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row),2);
        bufp->chgBit(oldp+155,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading));
        bufp->chgCData(oldp+156,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row),2);
        bufp->chgBit(oldp+157,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading));
        bufp->chgCData(oldp+158,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded),4);
        bufp->chgCData(oldp+159,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded),4);
        bufp->chgBit(oldp+160,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded));
        bufp->chgCData(oldp+161,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded),2);
        bufp->chgBit(oldp+162,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready));
        bufp->chgBit(oldp+163,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done));
        bufp->chgIData(oldp+164,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i),32);
        bufp->chgIData(oldp+165,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__j),32);
        bufp->chgIData(oldp+166,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l),32);
        bufp->chgIData(oldp+167,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m),32);
        bufp->chgIData(oldp+168,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n),32);
        bufp->chgWData(oldp+169,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+173,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+174,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+178,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+179,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+183,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+184,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+188,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+189,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+193,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+194,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+198,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+199,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+203,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+204,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+208,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgBit(oldp+209,((1U & ((~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading)) 
                                      & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading))))));
        bufp->chgCData(oldp+210,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift),4);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift),4);
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+213,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+219,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+220,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+221,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+222,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+223,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+224,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+225,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+226,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+227,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+228,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+229,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+230,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+231,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+232,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+233,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+234,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+235,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+236,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+237,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+238,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+239,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+240,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+241,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+242,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+243,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+244,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+245,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+246,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+247,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+248,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+249,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+250,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+251,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+252,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+253,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+254,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+255,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+256,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+257,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+258,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+259,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+260,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+261,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+262,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+263,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+264,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+265,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+266,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+267,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+268,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[0]),16);
        bufp->chgSData(oldp+269,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[1]),16);
        bufp->chgSData(oldp+270,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[2]),16);
        bufp->chgSData(oldp+271,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[3]),16);
        bufp->chgQData(oldp+272,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[0]),64);
        bufp->chgQData(oldp+274,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[1]),64);
        bufp->chgQData(oldp+276,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[2]),64);
        bufp->chgQData(oldp+278,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[3]),64);
        bufp->chgIData(oldp+280,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__z),32);
        bufp->chgIData(oldp+281,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__y),32);
        bufp->chgWData(oldp+282,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out),256);
        bufp->chgCData(oldp+290,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[0]),4);
        bufp->chgCData(oldp+291,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[1]),4);
        bufp->chgCData(oldp+292,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[2]),4);
        bufp->chgCData(oldp+293,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full),3);
        bufp->chgCData(oldp+294,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded),4);
        bufp->chgCData(oldp+295,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded),4);
        bufp->chgBit(oldp+296,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded));
        bufp->chgCData(oldp+297,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded),2);
        bufp->chgBit(oldp+298,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done));
        bufp->chgWData(oldp+299,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+303,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+304,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+308,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+309,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+313,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+314,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+318,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+319,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+323,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+324,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+328,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+329,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+333,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+334,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+338,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgBit(oldp+339,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+340,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+341,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+342,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+343,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+344,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+345,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [0U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+346,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [0U] >> 0xfU)))));
        bufp->chgSData(oldp+347,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+348,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+349,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+350,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+351,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [0U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [0U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+352,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+353,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+354,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+355,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+356,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+357,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+358,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+359,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+360,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+361,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+362,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+363,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [0U]),16);
        bufp->chgSData(oldp+364,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgCData(oldp+365,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+366,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+367,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [0U] >> 0xaU))),6);
        bufp->chgCData(oldp+368,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+369,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+370,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+371,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+372,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+373,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+374,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+375,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+376,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+377,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+378,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+379,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+380,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+381,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+382,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+383,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+384,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+385,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+386,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+387,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+388,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+389,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+390,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+391,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+392,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+393,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+394,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+395,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+396,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [1U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+397,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [1U] >> 0xfU)))));
        bufp->chgSData(oldp+398,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+399,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+400,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+401,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+402,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [1U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [1U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+403,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+404,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+405,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+406,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+407,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+408,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+409,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+410,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+411,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+412,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+413,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+414,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [1U]),16);
        bufp->chgSData(oldp+415,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgCData(oldp+416,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+417,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+418,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [1U] >> 0xaU))),6);
        bufp->chgCData(oldp+419,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+420,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+421,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+422,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+423,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+424,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+425,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+426,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+427,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+428,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+429,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+430,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+431,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+432,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+433,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+434,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+435,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+436,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+437,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+438,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+439,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+440,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+441,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+442,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+443,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+444,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+445,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+446,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+447,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [2U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [2U] >> 0xfU)))));
        bufp->chgSData(oldp+449,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+450,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+451,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+452,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+453,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [2U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [2U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+454,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+455,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+456,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+457,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+458,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+459,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+460,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+461,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+462,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+463,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+464,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+465,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [2U]),16);
        bufp->chgSData(oldp+466,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgCData(oldp+467,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+468,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+469,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [2U] >> 0xaU))),6);
        bufp->chgCData(oldp+470,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][2U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+471,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+472,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+473,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+474,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+475,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+476,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+477,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+478,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+479,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+480,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+481,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+482,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+483,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+484,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+485,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+486,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+487,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+488,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+489,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+490,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+491,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+492,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+493,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+494,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+495,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+496,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+497,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [3U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+499,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [3U] >> 0xfU)))));
        bufp->chgSData(oldp+500,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+501,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+502,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+503,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+504,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [3U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [3U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+505,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+506,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+507,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+508,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+509,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+510,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+511,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+512,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+513,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+514,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+515,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+516,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [3U]),16);
        bufp->chgSData(oldp+517,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgCData(oldp+518,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+519,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+520,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [3U] >> 0xaU))),6);
        bufp->chgCData(oldp+521,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][3U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+522,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+523,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+524,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+525,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+526,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+527,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+528,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+529,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+530,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+531,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+532,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+533,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+534,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+535,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+536,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+537,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+538,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+539,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+540,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+541,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+542,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgQData(oldp+543,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+545,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+547,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+549,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+551,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+553,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+555,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+557,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained));
        bufp->chgSData(oldp+560,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+561,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+567,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+568,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+569,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+573,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+574,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+575,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+576,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+577,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+578,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+579,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+580,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+581,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+582,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+583,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+584,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+588,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+589,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+590,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+591,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+592,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+593,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+594,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+598,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+599,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+602,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+604,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+605,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+606,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+607,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+608,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+609,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+610,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+611,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+613,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+615,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+616,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+617,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+619,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+620,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+622,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+624,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+625,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+626,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+629,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+630,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+631,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [0U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+632,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+633,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+645,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+647,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+651,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+652,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+653,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+654,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+655,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+656,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+657,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+659,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+660,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+661,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+662,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+664,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+666,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+667,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+668,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+669,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+670,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+671,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+672,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+673,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+674,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+676,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+677,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+678,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+680,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+681,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+682,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+683,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+684,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+685,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+686,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+688,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+690,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+691,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+692,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+693,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+694,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+695,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+697,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+698,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+700,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+703,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+704,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+705,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+706,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+707,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+708,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+709,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [1U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+710,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+711,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+712,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+723,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+724,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+725,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+729,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+730,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+733,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+734,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+735,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+736,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+737,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+738,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+739,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+740,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+742,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+744,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+745,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+746,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+747,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+748,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+749,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+750,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+751,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+752,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+754,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+755,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+756,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+758,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+760,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+761,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+762,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+763,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+764,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+766,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+767,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+770,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+771,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+772,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+773,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+775,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+776,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+778,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+781,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+782,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+784,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+785,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+786,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+787,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [2U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+788,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+789,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+794,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+795,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+801,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+803,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+807,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+808,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+811,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+812,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+813,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+814,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+815,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+816,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+817,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+818,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+820,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+822,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+823,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+824,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+825,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+826,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+827,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+828,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+830,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+831,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+832,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+833,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+834,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+836,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+838,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+839,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+840,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+842,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+844,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+845,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+846,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+847,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+849,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+850,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+851,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+853,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+854,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+855,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+856,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+859,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+860,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+861,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+862,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+863,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+864,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+865,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [3U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+866,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+867,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+872,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+873,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+874,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+879,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+881,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+885,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+886,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+889,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+890,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+891,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+892,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+893,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+894,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+895,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+896,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+898,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+901,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+902,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+903,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+904,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+905,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+906,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+908,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+910,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+911,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+912,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+914,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+916,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+917,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+918,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+919,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+920,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+921,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+922,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+924,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+925,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+926,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+927,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+928,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+929,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+930,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+931,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+932,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+933,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+934,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+935,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+937,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+938,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+940,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+941,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+942,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+943,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+944,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+945,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+946,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [0U] 
                                                        >> 0x2aU))))));
        bufp->chgSData(oldp+947,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+948,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x2aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+949,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+950,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+951,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+953,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+954,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+955,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+960,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+962,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+966,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+967,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+968,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+969,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+970,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+971,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+972,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+973,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+974,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+975,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+976,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+977,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+979,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][1U] >> 0xfU)))));
        bufp->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][1U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+983,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+984,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+985,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+986,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+987,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+988,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+989,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+991,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+992,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+993,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+995,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+997,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+998,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+999,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgCData(oldp+1000,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1003,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1005,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1006,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1007,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1008,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1011,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1012,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1013,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1015,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1022,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1024,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1025,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1026,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1027,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1028,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1029,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1034,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1035,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1047,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1048,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1051,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1053,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1055,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1056,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1057,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1058,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1062,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1063,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1064,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1065,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1066,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1067,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1068,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1072,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1073,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1076,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1078,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1079,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1080,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][2U]),16);
        bufp->chgCData(oldp+1081,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1084,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1086,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1087,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1088,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1089,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1090,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1091,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1092,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1093,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1094,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1096,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1102,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1103,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1105,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1106,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1107,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1108,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1109,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1110,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1111,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1115,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1123,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1124,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1128,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1129,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1132,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1133,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1134,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1136,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1137,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1138,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1139,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1145,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1146,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1147,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1148,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1149,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1153,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1154,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1157,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1159,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1160,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1161,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][3U]),16);
        bufp->chgCData(oldp+1162,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1163,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1165,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1167,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1168,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1169,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1170,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1171,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1172,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1173,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1174,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1175,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1177,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1178,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1183,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1184,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1186,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1187,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1188,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1189,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1190,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1191,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1192,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1196,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1203,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1204,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1205,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1209,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1210,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1213,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1214,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1215,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1217,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1218,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1219,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1220,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1224,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1225,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1226,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1227,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1228,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1229,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1230,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1234,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1235,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1237,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1238,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1240,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1241,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1242,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1243,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1244,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1246,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1248,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1249,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1250,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1251,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1252,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1253,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1254,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1255,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1256,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1258,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1264,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1265,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1267,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1268,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1269,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1270,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1271,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1272,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1277,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1278,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1283,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1284,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1285,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1286,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1290,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1291,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1294,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1295,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1296,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1298,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1299,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1300,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1301,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1306,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1307,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1308,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1309,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1310,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1311,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1315,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1316,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1319,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1321,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1322,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1323,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1324,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1327,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1329,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1330,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1331,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1332,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1333,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1334,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1335,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1336,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1337,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1339,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1345,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1346,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1348,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1349,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1350,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1351,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1352,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1353,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1355,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1358,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1359,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1366,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1367,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1371,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1372,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1375,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1376,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1377,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1379,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1380,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1381,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1382,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1387,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1388,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1389,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1390,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1391,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1392,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1395,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1396,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1397,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1400,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1402,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1403,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1404,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1405,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1408,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1410,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1411,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1412,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1413,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1416,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1417,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1418,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1420,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1423,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1425,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1427,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1429,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1430,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1431,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1432,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1433,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1434,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1435,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1436,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1437,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1438,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1439,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1440,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1446,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1447,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1448,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1450,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1452,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1453,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1454,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1455,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1456,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1457,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1458,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1459,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1460,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1461,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1462,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1463,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1467,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1468,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1469,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1470,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1471,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1472,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1473,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1477,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1478,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1480,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1481,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1483,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1484,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1485,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1486,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1489,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1491,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1492,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1493,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1494,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1495,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1496,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1497,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1498,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1499,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1501,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1508,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1510,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1511,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1512,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1513,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1514,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1515,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1516,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1520,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1521,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1527,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1528,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1529,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1533,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1534,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1537,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1538,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1539,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1541,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1542,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1543,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1544,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1545,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1548,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1549,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1550,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1551,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1552,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1553,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1554,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1555,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1557,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1558,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1559,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1562,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1564,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1565,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1566,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1567,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1568,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1570,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1572,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1573,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1574,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1575,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1576,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1577,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1578,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1579,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1580,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1581,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1582,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1583,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1584,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1585,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1586,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1588,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1589,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1591,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1592,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U]))),16);
        bufp->chgBit(oldp+1593,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1594,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1595,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1596,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1597,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1598,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1599,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1601,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1602,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1604,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1605,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1610,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1611,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1614,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1615,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1617,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1618,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1620,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1621,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1622,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1623,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1624,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1625,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1629,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1630,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1631,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1632,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1633,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1634,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1635,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1639,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1643,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1644,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1645,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1646,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1647,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1648,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1651,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1653,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1654,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1655,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1656,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1657,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1659,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1660,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1661,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1663,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1664,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1666,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1667,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1668,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1669,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1670,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1672,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1673,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U]))),16);
        bufp->chgBit(oldp+1674,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1675,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1676,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1677,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1678,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1679,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1680,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1682,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1683,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1684,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1686,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1688,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1689,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1690,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1691,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1692,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1694,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1695,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1696,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1697,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1698,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1699,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1700,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1701,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1703,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1704,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1705,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1706,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1710,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1711,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1712,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1713,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1714,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1715,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1716,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1720,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1724,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1726,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1727,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1728,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1729,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1730,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1731,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1732,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1733,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1734,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1735,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1736,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1737,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1738,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1739,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1740,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1741,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1742,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1744,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1745,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1747,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1748,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1750,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1751,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1753,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1754,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U]))),16);
        bufp->chgBit(oldp+1755,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1756,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1757,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1758,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1759,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1763,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1764,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1766,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1770,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1771,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1772,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1773,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1774,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1776,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1777,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1778,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1779,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1780,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1781,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1782,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1784,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1785,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1786,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1787,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1788,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1791,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1793,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1794,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1795,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1796,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1797,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1801,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1805,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1807,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1808,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1809,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1810,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1812,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1813,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1815,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1816,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1817,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1818,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1819,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1820,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1821,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1822,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1823,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1824,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1825,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1828,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1830,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1831,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1832,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1833,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1834,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1835,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U]))),16);
        bufp->chgBit(oldp+1836,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1837,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1838,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1839,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1840,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1841,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1842,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1843,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
        bufp->chgBit(oldp+1845,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift));
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift));
        bufp->chgCData(oldp+1849,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[0]),4);
        bufp->chgCData(oldp+1850,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[1]),4);
        bufp->chgCData(oldp+1851,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[2]),4);
        bufp->chgSData(oldp+1852,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1853,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1854,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1855,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1856,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1857,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1858,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1859,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1860,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
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
        bufp->chgBit(oldp+1863,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1864,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1865,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1866,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1867,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1868,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1869,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1870,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+1871,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1872,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1873,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+1874,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1875,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1876,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+1877,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1878,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1879,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+1880,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1881,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1882,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+1883,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1884,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1885,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+1886,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1887,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1888,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+1889,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1890,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1891,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+1892,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1893,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1894,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+1895,(((1U & ((0x3fffffffU 
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
        bufp->chgBit(oldp+1896,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1897,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+1898,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1899,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1900,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1901,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1902,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1903,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1904,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1905,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1906,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1907,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1908,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1909,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1910,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1911,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out),2);
        bufp->chgBit(oldp+1912,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en));
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out),2);
        bufp->chgQData(oldp+1914,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output),64);
    }
    bufp->chgBit(oldp+1916,(vlSelfRef.systolic_array_tb__DOT__tb_clk));
    bufp->chgIData(oldp+1917,(vlSelfRef.systolic_array_tb__DOT__z),32);
    bufp->chgIData(oldp+1918,(vlSelfRef.systolic_array_tb__DOT__y),32);
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
