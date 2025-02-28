// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb.h"
#include "Vsystolic_array_tb___024root.h"
#include "Vsystolic_array_tb_systolic_array_if.h"
#include "Vsystolic_array_tb_sysarr_MAC.h"
#include "Vsystolic_array_tb_systolic_array_control_unit_if.h"
#include "Vsystolic_array_tb_systolic_array_add_if.h"

// FUNCTIONS
Vsystolic_array_tb__Syms::~Vsystolic_array_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vsystolic_array_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vsystolic_array_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vsystolic_array_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vsystolic_array_tb__Syms::Vsystolic_array_tb__Syms(VerilatedContext* contextp, const char* namep, Vsystolic_array_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__0__KET__{this, Verilated::catName(namep, "systolic_array_tb.DUT.add_ifs[0]")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__1__KET__{this, Verilated::catName(namep, "systolic_array_tb.DUT.add_ifs[1]")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__2__KET__{this, Verilated::catName(namep, "systolic_array_tb.DUT.add_ifs[2]")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__3__KET__{this, Verilated::catName(namep, "systolic_array_tb.DUT.add_ifs[3]")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if{this, Verilated::catName(namep, "systolic_array_tb.DUT.control_unit_if")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[0].genblk1[0].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[0].genblk1[1].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[0].genblk1[2].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[0].genblk1[3].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[1].genblk1[0].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[1].genblk1[1].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[1].genblk1[2].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[1].genblk1[3].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[2].genblk1[0].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[2].genblk1[1].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[2].genblk1[2].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[2].genblk1[3].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[3].genblk1[0].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[3].genblk1[1].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[3].genblk1[2].mac_inst")}
    , TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst{this, Verilated::catName(namep, "systolic_array_tb.DUT.genblk4[3].genblk1[3].mac_inst")}
    , TOP__systolic_array_tb__DOT__memory_if{this, Verilated::catName(namep, "systolic_array_tb.memory_if")}
{
        // Check resources
        Verilated::stackCheck(1309);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__0__KET__ = &TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__0__KET__;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__1__KET__ = &TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__1__KET__;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__2__KET__ = &TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__2__KET__;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__3__KET__ = &TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__3__KET__;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__control_unit_if = &TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst = &TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    TOP.__PVT__systolic_array_tb__DOT__memory_if = &TOP__systolic_array_tb__DOT__memory_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__0__KET__.__Vconfigure(true);
    TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__1__KET__.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__2__KET__.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__3__KET__.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.__Vconfigure(true);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__Vconfigure(true);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__Vconfigure(false);
    TOP__systolic_array_tb__DOT__memory_if.__Vconfigure(true);
}
