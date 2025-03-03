// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb__Syms.h"
#include "Vsystolic_array_tb___024root.h"

extern const VlWide<10>/*319:0*/ Vsystolic_array_tb__ConstPool__CONST_h19761995_0;
extern const VlWide<31>/*991:0*/ Vsystolic_array_tb__ConstPool__CONST_hc596c996_0;
extern const VlWide<12>/*383:0*/ Vsystolic_array_tb__ConstPool__CONST_h2d12ea0e_0;

VL_INLINE_OPT VlCoroutine Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__get_matrices__2__weights;
    __Vtask_systolic_array_tb__DOT__get_matrices__2__weights = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__5__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__5__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__5__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__5__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__5__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__5__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__5__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__5__rpartial = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__7__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__7__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__7__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__7__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__7__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpartial = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__get_matrices__8__weights;
    __Vtask_systolic_array_tb__DOT__get_matrices__8__weights = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__9__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__9__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__9__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__9__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__9__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__9__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__9__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__9__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__9__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__9__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__10__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__10__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__10__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__10__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__10__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__10__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__10__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__10__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__10__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__10__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__11__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__11__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__11__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__11__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__11__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__11__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__11__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__11__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__11__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__11__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__12__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__12__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__12__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__12__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__12__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__12__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__12__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__12__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__12__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__12__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__13__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__13__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__13__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__13__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__13__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__13__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__13__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__13__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__13__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__13__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__14__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__14__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__14__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__14__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__14__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__14__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__14__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__14__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__14__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__14__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__15__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__15__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__15__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__15__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__15__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__15__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__15__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__15__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__15__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__15__rpartial = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__16__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__16__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__16__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__16__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__16__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__16__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__16__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__16__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__16__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__16__rpartial = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__get_matrices__17__weights;
    __Vtask_systolic_array_tb__DOT__get_matrices__17__weights = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__19__rtype;
    __Vtask_systolic_array_tb__DOT__row_load__19__rtype = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__19__rinnum;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinnum = 0;
    CData/*1:0*/ __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__19__rinput;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinput = 0;
    QData/*63:0*/ __Vtask_systolic_array_tb__DOT__row_load__19__rpartial;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpartial = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSelfRef.systolic_array_tb__DOT__loaded_weights = 0U;
    vlSelfRef.systolic_array_tb__DOT__file = VL_FOPEN_NN(
                                                         VL_CVT_PACK_STR_NW(10, Vsystolic_array_tb__ConstPool__CONST_h19761995_0)
                                                         , 
                                                         std::string{"r"});
    ;
    (void)VL_SYSTEM_IW(31, Vsystolic_array_tb__ConstPool__CONST_hc596c996_0);
    vlSelfRef.systolic_array_tb__DOT__out_file = VL_FOPEN_NN(
                                                             VL_CVT_PACK_STR_NW(12, Vsystolic_array_tb__ConstPool__CONST_h2d12ea0e_0)
                                                             , 
                                                             std::string{"r"});
    ;
    vlSelfRef.systolic_array_tb__DOT__tb_nRST = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f538__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.systolic_array_tb__DOT__tb_nRST = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("In get matrices task\n",0);
    __Vtask_systolic_array_tb__DOT__get_matrices__2__weights = 0U;
    vlSelfRef.systolic_array_tb__DOT__which = 0U;
    (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
    VL_WRITEF_NX("In get matrices task. just fgets'ed\nLine read in: %@\n",0,
                 -1,&(vlSelfRef.systolic_array_tb__DOT__line));
    if ((std::string{"Weights\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 1U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 3U;
        __Vtask_systolic_array_tb__DOT__get_matrices__2__weights = 1U;
    } else if ((std::string{"Inputs\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 2U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 2U;
    }
    VL_WRITEF_NX("In get matrices task. just read value type. which: \n%11d\n",0,
                 32,vlSelfRef.systolic_array_tb__DOT__which);
    vlSelfRef.systolic_array_tb__DOT__k = 0U;
    while (VL_LTS_III(32, vlSelfRef.systolic_array_tb__DOT__k, vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations)) {
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__which = ((IData)(1U) 
                                                   + vlSelfRef.systolic_array_tb__DOT__which);
        (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
        vlSelfRef.systolic_array_tb__DOT__k = ((IData)(1U) 
                                               + vlSelfRef.systolic_array_tb__DOT__k);
    }
    vlSelfRef.systolic_array_tb__DOT__m_weights[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__i = 1U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__i = 2U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__i = 3U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__i = 4U;
    vlSelfRef.systolic_array_tb__DOT__loaded_weights 
        = __Vtask_systolic_array_tb__DOT__get_matrices__2__weights;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [0U][3U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 1U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [0U][2U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 2U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [0U][1U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 3U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [0U][0U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 4U;
    vlSelfRef.systolic_array_tb__DOT__i = 1U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [1U][3U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 1U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [1U][2U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 2U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [1U][1U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 3U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [1U][0U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 4U;
    vlSelfRef.systolic_array_tb__DOT__i = 2U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [2U][3U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 1U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [2U][2U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 2U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [2U][1U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 3U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [2U][0U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 4U;
    vlSelfRef.systolic_array_tb__DOT__i = 3U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [3U][3U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 1U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [3U][2U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 2U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [3U][1U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 3U;
    (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                        16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [3U][0U])) ;
    vlSelfRef.systolic_array_tb__DOT__j = 4U;
    vlSelfRef.systolic_array_tb__DOT__i = 4U;
    vlSelfRef.systolic_array_tb__DOT__m_outputs[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__i = 1U;
    vlSelfRef.systolic_array_tb__DOT__m_outputs[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__i = 2U;
    vlSelfRef.systolic_array_tb__DOT__m_outputs[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__i = 3U;
    vlSelfRef.systolic_array_tb__DOT__m_outputs[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__i = 4U;
    if ((1U == vlSelfRef.systolic_array_tb__DOT__loaded_weights)) {
        __Vtask_systolic_array_tb__DOT__row_load__5__rpartial = 0ULL;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinput 
            = vlSelfRef.systolic_array_tb__DOT__m_weights
            [0U];
        __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum = 0U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinnum = 0U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rtype = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinput;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpartial;
        if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
        } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
                = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype));
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
                = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype) 
                         >> 1U));
        }
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             71);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
        vlSelfRef.systolic_array_tb__DOT__r = 1U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rpartial = 0ULL;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinput 
            = vlSelfRef.systolic_array_tb__DOT__m_weights
            [1U];
        __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum = 0U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinnum = 1U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rtype = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinput;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpartial;
        if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
        } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
                = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype));
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
                = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype) 
                         >> 1U));
        }
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             71);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
        vlSelfRef.systolic_array_tb__DOT__r = 2U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rpartial = 0ULL;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinput 
            = vlSelfRef.systolic_array_tb__DOT__m_weights
            [2U];
        __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum = 0U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinnum = 2U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rtype = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinput;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpartial;
        if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
        } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
                = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype));
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
                = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype) 
                         >> 1U));
        }
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             71);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
        vlSelfRef.systolic_array_tb__DOT__r = 3U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rpartial = 0ULL;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinput 
            = vlSelfRef.systolic_array_tb__DOT__m_weights
            [3U];
        __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum = 0U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rinnum = 3U;
        __Vtask_systolic_array_tb__DOT__row_load__5__rtype = 0U;
        if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
        } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype))) {
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
                = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype));
            vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
                = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__5__rtype) 
                         >> 1U));
        }
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpsnum;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rinput;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
            = __Vtask_systolic_array_tb__DOT__row_load__5__rpartial;
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             71);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
        vlSelfRef.systolic_array_tb__DOT__r = 4U;
    }
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rinnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__7__rtype = 3U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__7__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__7__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__6__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__6__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 4U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("In get matrices task\n",0);
    __Vtask_systolic_array_tb__DOT__get_matrices__8__weights = 0U;
    vlSelfRef.systolic_array_tb__DOT__which = 0U;
    (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
    VL_WRITEF_NX("In get matrices task. just fgets'ed\nLine read in: %@\n",0,
                 -1,&(vlSelfRef.systolic_array_tb__DOT__line));
    if ((std::string{"Weights\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 1U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 3U;
        __Vtask_systolic_array_tb__DOT__get_matrices__8__weights = 1U;
    } else if ((std::string{"Inputs\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 2U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 2U;
    }
    VL_WRITEF_NX("In get matrices task. just read value type. which: \n%11d\n",0,
                 32,vlSelfRef.systolic_array_tb__DOT__which);
    vlSelfRef.systolic_array_tb__DOT__k = 0U;
    while (VL_LTS_III(32, vlSelfRef.systolic_array_tb__DOT__k, vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations)) {
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__which = ((IData)(1U) 
                                                   + vlSelfRef.systolic_array_tb__DOT__which);
        (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
        vlSelfRef.systolic_array_tb__DOT__k = ((IData)(1U) 
                                               + vlSelfRef.systolic_array_tb__DOT__k);
    }
    vlSelfRef.systolic_array_tb__DOT__m_weights[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__i = 1U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__i = 2U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__i = 3U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__i = 4U;
    vlSelfRef.systolic_array_tb__DOT__loaded_weights 
        = __Vtask_systolic_array_tb__DOT__get_matrices__8__weights;
    __Vtask_systolic_array_tb__DOT__row_load__9__rpartial = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__9__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__9__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__9__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__9__rtype = 1U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__9__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__9__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__9__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__9__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__9__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__9__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__9__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__9__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         214);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__10__rpartial = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__10__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__10__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__10__rinnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__10__rtype = 1U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__10__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__10__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__10__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__10__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__10__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__10__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__10__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__10__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         216);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__11__rpartial = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__11__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__11__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__11__rinnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__11__rtype = 1U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__11__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__11__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__11__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__11__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__11__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__11__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__11__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__11__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         218);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__12__rpartial = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__12__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__12__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__12__rinnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__12__rtype = 1U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__12__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__12__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__12__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__12__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__12__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__12__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__12__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__12__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         220);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__13__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__13__rinput = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__13__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__13__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__13__rtype = 2U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__13__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__13__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__13__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__13__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__13__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__13__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__13__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__13__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__14__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__14__rinput = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__14__rpsnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__14__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__14__rtype = 2U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__14__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__14__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__14__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__14__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__14__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__14__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__14__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__14__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         224);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__15__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__15__rinput = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__15__rpsnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__15__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__15__rtype = 2U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__15__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__15__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__15__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__15__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__15__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__15__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__15__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__15__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         226);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__16__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__16__rinput = 0ULL;
    __Vtask_systolic_array_tb__DOT__row_load__16__rpsnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__16__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__16__rtype = 2U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__16__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__16__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__16__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__16__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__16__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__16__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__16__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__16__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         229);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("In get matrices task\n",0);
    __Vtask_systolic_array_tb__DOT__get_matrices__17__weights = 0U;
    vlSelfRef.systolic_array_tb__DOT__which = 0U;
    (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
    VL_WRITEF_NX("In get matrices task. just fgets'ed\nLine read in: %@\n",0,
                 -1,&(vlSelfRef.systolic_array_tb__DOT__line));
    if ((std::string{"Weights\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 1U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 3U;
        __Vtask_systolic_array_tb__DOT__get_matrices__17__weights = 1U;
    } else if ((std::string{"Inputs\n"} == vlSelfRef.systolic_array_tb__DOT__line)) {
        vlSelfRef.systolic_array_tb__DOT__which = 2U;
        vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 2U;
    }
    VL_WRITEF_NX("In get matrices task. just read value type. which: \n%11d\n",0,
                 32,vlSelfRef.systolic_array_tb__DOT__which);
    vlSelfRef.systolic_array_tb__DOT__k = 0U;
    while (VL_LTS_III(32, vlSelfRef.systolic_array_tb__DOT__k, vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations)) {
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [0U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [0U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [0U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [0U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [1U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [1U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [1U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [1U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [2U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [2U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [2U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [2U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][0U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][0U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][0U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][0U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 1U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][1U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][1U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][1U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][1U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 2U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][2U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][2U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][2U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][2U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 3U;
        if (VL_UNLIKELY(((1U == vlSelfRef.systolic_array_tb__DOT__which)))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in weight %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_weights
                         [3U][3U]);
        } else if ((2U == vlSelfRef.systolic_array_tb__DOT__which)) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in input %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_inputs
                         [3U][3U]);
        } else {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                     [3U][3U])) ;
            VL_WRITEF_NX("i just read in partial %x\n",0,
                         16,vlSelfRef.systolic_array_tb__DOT__temp_partials
                         [3U][3U]);
        }
        vlSelfRef.systolic_array_tb__DOT__j = 4U;
        vlSelfRef.systolic_array_tb__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__which = ((IData)(1U) 
                                                   + vlSelfRef.systolic_array_tb__DOT__which);
        (void)VL_FGETS_NI(vlSelfRef.systolic_array_tb__DOT__line, vlSelfRef.systolic_array_tb__DOT__file);
        vlSelfRef.systolic_array_tb__DOT__k = ((IData)(1U) 
                                               + vlSelfRef.systolic_array_tb__DOT__k);
    }
    vlSelfRef.systolic_array_tb__DOT__m_weights[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[0U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [0U]);
    vlSelfRef.systolic_array_tb__DOT__i = 1U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[1U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [1U]);
    vlSelfRef.systolic_array_tb__DOT__i = 2U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[2U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [2U]);
    vlSelfRef.systolic_array_tb__DOT__i = 3U;
    vlSelfRef.systolic_array_tb__DOT__m_weights[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_weights
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_inputs[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_inputs
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__m_partials[3U] 
        = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_partials
                     [3U]);
    vlSelfRef.systolic_array_tb__DOT__i = 4U;
    vlSelfRef.systolic_array_tb__DOT__loaded_weights 
        = __Vtask_systolic_array_tb__DOT__get_matrices__17__weights;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay = 4U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [0U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinnum = 0U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [1U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinnum = 1U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [2U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinnum = 2U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rtype = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpartial;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype) 
                     >> 1U));
    }
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rpartial 
        = vlSelfRef.systolic_array_tb__DOT__m_partials
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rinput 
        = vlSelfRef.systolic_array_tb__DOT__m_inputs
        [3U];
    __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rinnum = 3U;
    __Vtask_systolic_array_tb__DOT__row_load__19__rtype = 3U;
    if ((0U == (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 1U;
    } else if ((0U != (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en 
            = (1U & (IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype));
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en 
            = (1U & ((IData)(__Vtask_systolic_array_tb__DOT__row_load__19__rtype) 
                     >> 1U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpsnum;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rinput;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
        = __Vtask_systolic_array_tb__DOT__row_load__19__rpartial;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials = 0ULL;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en = 0U;
    __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_systolic_array_tb__DOT__load_in_ps__18__delay;
    while (VL_LTS_III(32, 0U, __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.tb_clk)", 
                                                             "src/testbench/systolic_array_tb.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_systolic_array_tb__DOT__load_in_ps__18__systolic_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__in = 4U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8059f569__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.tb_clk)", 
                                                         "src/testbench/systolic_array_tb.sv", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("array should be drained %1#\nfifos should have space  %1#\n",0,
                 1,vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained,
                 1,(1U & ((~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading)) 
                          & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading)))));
    VL_FCLOSE_I(vlSelfRef.systolic_array_tb__DOT__file); VL_FCLOSE_I(vlSelfRef.systolic_array_tb__DOT__out_file); co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                                                                nullptr, 
                                                                                "src/testbench/systolic_array_tb.sv", 
                                                                                240);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_STOP_MT("src/testbench/systolic_array_tb.sv", 241, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__act(Vsystolic_array_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array_tb___024root___eval_triggers__act(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_triggers__act\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_nRST__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.systolic_array_tb__DOT__tb_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_clk__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_clk__0 
        = vlSelfRef.systolic_array_tb__DOT__tb_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_nRST__0 
        = vlSelfRef.systolic_array_tb__DOT__tb_nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___act_comb__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___act_comb__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    // Body
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag 
        = ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en) 
           & (0U == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row))));
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading) 
         & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 1U;
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
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i = 4U;
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_17, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_17[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_18, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_18[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_18[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_18[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_18[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_19, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_19[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_20, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_20[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_20[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_20[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_20[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i = 4U;
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_29, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_29[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_29[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_29[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_29[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_30, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_30[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_30[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_30[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_30[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_31, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_31[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_31[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_31[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_31[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_32, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_32[3U];
    }
}

void Vsystolic_array_tb___024root___nba_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb___024root___nba_sequent__TOP__1(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb___024root___nba_sequent__TOP__2(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf);
void Vsystolic_array_tb___024root___nba_comb__TOP__0(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb___024root___nba_sequent__TOP__3(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb___024root___nba_comb__TOP__1(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb___024root___nba_sequent__TOP__4(Vsystolic_array_tb___024root* vlSelf);

void Vsystolic_array_tb___024root___eval_nba(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_nba\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3 = 0;
    CData/*0:0*/ __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3 = 0;
    CData/*0:0*/ __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3 = 0;
    CData/*0:0*/ __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3 = 0;
    CData/*3:0*/ __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0;
    __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0;
    __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0 = 0;
    CData/*3:0*/ __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v1;
    __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v1 = 0;
    CData/*3:0*/ __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v2;
    __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v2 = 0;
    CData/*0:0*/ __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v3;
    __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v3 = 0;
    // Body
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3;
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v0 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v1 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v2 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v3 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v4 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v5 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v6 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v7 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0 = 0U;
    vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v16 = 0U;
    __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0 = 0U;
    __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__y = 4U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__z = 4U;
    }
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3)));
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3)));
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in)));
    __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3)));
    if (vlSelfRef.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = ((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                    ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                [3U][0U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                         [3U][0U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][0U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                             [0U] >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                   [0U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            } else {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                [0U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                         [0U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                              [0U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                             [3U][0U] 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [0U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            }
        } else {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in 
                = (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in));
        }
        if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = ((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                    ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                [3U][1U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                         [3U][1U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][1U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                             [1U] >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                   [1U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            } else {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                [1U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                         [1U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                              [1U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                             [3U][1U] 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [1U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            }
        } else {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in 
                = (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in));
        }
        if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = ((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                    ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                [3U][2U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                         [3U][2U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][2U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                             [2U] >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                   [2U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            } else {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                [2U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                         [2U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                              [2U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                             [3U][2U] 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [2U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            }
        } else {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in 
                = (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in));
        }
        if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = ((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                    ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                [3U][3U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                         [3U][3U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][3U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                             [3U] >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                   [3U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            } else {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in 
                    = (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                [3U] >> 0xaU));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                    = (((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                         [3U] >> 0xaU))) 
                        << 0xcU) | (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                              [3U] 
                                              << 2U)));
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in 
                    = (0x1fffU & ((((0U != (0x1fU & 
                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                             [3U][3U] 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [3U] 
                                                   << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))));
            }
        } else {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in 
                = (0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in 
                = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in));
        }
        if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw))) {
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v0 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input;
            vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw))) {
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v2 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input;
            vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v2 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw))) {
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v4 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input;
            vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v4 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw))) {
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v6 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input;
            vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v6 = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [3U][3U];
            vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0 = 1U;
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v1 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [3U][2U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v2 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [3U][1U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v3 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [3U][0U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v4 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [2U][3U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v5 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [2U][2U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v6 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [2U][1U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v7 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [2U][0U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v8 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [1U][3U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v9 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [1U][2U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v10 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [1U][1U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v11 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [1U][0U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v12 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [0U][3U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v13 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [0U][2U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v14 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [0U][1U];
            vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v15 
                = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                [0U][0U];
        }
        __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration
            [2U];
        __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0 = 1U;
        __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v1 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration
            [1U];
        __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v2 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration
            [0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[3U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full;
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in = 0U;
        vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v1 = 1U;
        vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v3 = 1U;
        vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v5 = 1U;
        vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v7 = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in = 0U;
        vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v16 = 1U;
        __VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v3 = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem = 0ULL;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem = 0ULL;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem = 0ULL;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem = 0ULL;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                             [0U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][0U] 
                                              >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                             [3U][0U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [0U] 
                                                  >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                             [1U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][1U] 
                                              >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                             [3U][1U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [1U] 
                                                  >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                             [2U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][2U] 
                                              >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                             [3U][2U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [2U] 
                                                  >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                             [3U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                              [3U][3U] 
                                              >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                      ? ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                          ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                             [3U][3U] >> 0xfU) : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [3U] 
                                                  >> 0xfU))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched) 
                | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)) 
               & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched) 
                | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)) 
               & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched) 
                | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)) 
               & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run)
                ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)
                : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched) 
                | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start)) 
               & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST))) 
           || (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3 
        = __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3 
        = __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3 
        = __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3 
        = __Vdly__systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3;
    if (__VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[2U] 
            = __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v0;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[1U] 
            = __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v1;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[0U] 
            = __VdlyVal__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v2;
    }
    if (__VdlySet__systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration__v3) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[0U] = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift = 0U;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift = 1U;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[1U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[2U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[3U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
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

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_sequent__TOP__1(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__1\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
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
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][3U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][2U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v1;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][1U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v2;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][0U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v3;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][3U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v4;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][2U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v5;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][1U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v6;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][0U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v7;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][3U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v8;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][2U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v9;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][1U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v10;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][0U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v11;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][3U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v12;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][2U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v13;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][1U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v14;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][0U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v15;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v16) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[0U][3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[1U][3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[2U][3U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][0U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][1U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][2U] = 0U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs[3U][3U] = 0U;
    }
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
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v0) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[0U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v0;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v1) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[0U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v2) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[1U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v2;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v3) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[1U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v4) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[2U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v4;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v5) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[2U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v6) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[3U] 
            = vlSelfRef.__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v6;
    }
    if (vlSelfRef.__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v7) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[3U] = 0ULL;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
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
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start));
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__tb_nRST) 
           && (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
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
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_sequent__TOP__2(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__2\n"); );
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
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift = 0U;
    if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift 
            = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_comb__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_comb__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row = 0U;
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
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag 
        = ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en) 
           & (0U == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row))));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
            = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input = 0ULL;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type) {
        if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input 
                = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in;
        }
    }
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
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_sequent__TOP__3(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__3\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en))) {
        VL_WRITEF_NX("output row is %1#\n",0,2,vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out);
        vlSelfRef.systolic_array_tb__DOT__z = 4U;
        if (VL_UNLIKELY(((vlSelfRef.systolic_array_tb__DOT__m_outputs
                          [vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out] 
                          != vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output)))) {
            VL_WRITEF_NX("Output incorrect\n\nOur Output is\n",0);
            vlSelfRef.systolic_array_tb__DOT__y = 4U;
            VL_WRITEF_NX("%x, %x, %x, %x, \n",0,16,
                         (0xffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output)),
                         16,(0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
                                                >> 0x10U))),
                         16,(0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
                                                >> 0x20U))),
                         16,(0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
                                                >> 0x30U))));
        }
        VL_WRITEF_NX("Correct Output is\n%x, %x, %x, %x, \n",0,
                     16,(0xffffU & (IData)(vlSelfRef.systolic_array_tb__DOT__m_outputs
                                           [vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out])),
                     16,(0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__m_outputs
                                            [vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out] 
                                            >> 0x10U))),
                     16,(0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__m_outputs
                                            [vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out] 
                                            >> 0x20U))),
                     16,(0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__m_outputs
                                            [vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out] 
                                            >> 0x30U))));
        if ((3U == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out))) {
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [0U][3U])) ;
            vlSelfRef.systolic_array_tb__DOT__j = 4U;
            vlSelfRef.systolic_array_tb__DOT__i = 4U;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [0U][2U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [0U][1U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [0U][0U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [1U][3U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [1U][2U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [1U][1U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [1U][0U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [2U][3U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [2U][2U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [2U][1U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [2U][0U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [3U][3U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [3U][2U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [3U][1U])) ;
            (void)VL_FSCANF_INX(vlSelfRef.systolic_array_tb__DOT__out_file,"%x ",0,
                                16,&(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                     [3U][0U])) ;
            vlSelfRef.systolic_array_tb__DOT__m_outputs[0U] 
                = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [0U]);
            vlSelfRef.systolic_array_tb__DOT__m_outputs[1U] 
                = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [1U]);
            vlSelfRef.systolic_array_tb__DOT__m_outputs[2U] 
                = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [2U]);
            vlSelfRef.systolic_array_tb__DOT__m_outputs[3U] 
                = VL_PACK_QI(64, 16, vlSelfRef.systolic_array_tb__DOT__temp_outputs
                             [3U]);
        }
    }
}

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_comb__TOP__1(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_comb__TOP__1\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    // Body
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
    if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en))));
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
                goto __Vlabel5;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l);
        }
        __Vlabel5: ;
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
                goto __Vlabel6;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m);
        }
        __Vlabel6: ;
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
                goto __Vlabel7;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n);
        }
        __Vlabel7: ;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading) 
         & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 1U;
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
                    goto __Vlabel8;
                }
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i);
        }
        __Vlabel8: ;
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_17, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_17[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_18, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_18[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_18[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_18[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_18[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_19, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_19[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_20, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_20[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_20[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_20[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_20[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_29, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_29[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_29[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_29[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_29[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_30, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_30[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_30[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_30[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_30[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_31, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_31[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_31[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_31[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_31[3U];
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
        VL_SHIFTR_WWI(128,128,32, __Vtemp_32, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_32[3U];
    }
}
