// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasyupcnt58.h for the primary calling header

#ifndef VERILATED_VASYUPCNT58___024ROOT_H_
#define VERILATED_VASYUPCNT58___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vasyupcnt58__Syms;

//----------

VL_MODULE(Vasyupcnt58___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,3,0);
    VL_OUT8(q,3,0);
    VL_OUT8(qb,3,0);

    // LOCAL VARIABLES
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t2____pinNumber4;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t3____pinNumber4;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t4____pinNumber4;
    CData/*0:0*/ asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t1____pinNumber6;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t1____pinNumber5;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t2____pinNumber6;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t2____pinNumber5;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t3____pinNumber6;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t3____pinNumber5;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t4____pinNumber6;
    CData/*0:0*/ asyupcnt58__DOT____Vcellout__t4____pinNumber5;
    CData/*0:0*/ __VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    CData/*0:0*/ __VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    CData/*0:0*/ __VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    CData/*0:0*/ __VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    CData/*0:0*/ __Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber4;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    CData/*0:0*/ __Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber4;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
    CData/*0:0*/ __Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber4;
    CData/*3:0*/ __Vchglast__TOP__qb;
    CData/*0:0*/ __Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    CData/*0:0*/ __Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    CData/*0:0*/ __Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    CData/*0:0*/ __Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3;

    // INTERNAL VARIABLES
    Vasyupcnt58__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vasyupcnt58___024root);  ///< Copying not allowed
  public:
    Vasyupcnt58___024root(const char* name);
    ~Vasyupcnt58___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vasyupcnt58__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
