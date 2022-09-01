// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasyupcnt58.h for the primary calling header

#include "Vasyupcnt58___024root.h"
#include "Vasyupcnt58__Syms.h"

//==========


void Vasyupcnt58___024root___ctor_var_reset(Vasyupcnt58___024root* vlSelf);

Vasyupcnt58___024root::Vasyupcnt58___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vasyupcnt58___024root___ctor_var_reset(this);
}

void Vasyupcnt58___024root::__Vconfigure(Vasyupcnt58__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vasyupcnt58___024root::~Vasyupcnt58___024root() {
}

void Vasyupcnt58___024root___settle__TOP__2(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3 
        = (1U & (IData)(vlSelf->rst));
    vlSelf->q = ((0xeU & (IData)(vlSelf->q)) | (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5));
    vlSelf->qb = ((0xcU & (IData)(vlSelf->qb)) | (((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber6) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber6)));
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 1U));
    vlSelf->qb = ((0xbU & (IData)(vlSelf->qb)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber6) 
                                                  << 2U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 2U));
    vlSelf->qb = ((7U & (IData)(vlSelf->qb)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber6) 
                                                << 3U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 3U));
    vlSelf->q = ((1U & (IData)(vlSelf->q)) | (((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5) 
                                               << 3U) 
                                              | (((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5) 
                                                    << 1U))));
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber4 
        = (1U & (IData)(vlSelf->qb));
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber4 
        = (1U & ((IData)(vlSelf->qb) >> 1U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber4 
        = (1U & ((IData)(vlSelf->qb) >> 2U));
}

void Vasyupcnt58___024root___eval_initial(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3 
        = vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3 
        = vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber4 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber4;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3 
        = vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber4 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber4;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3 
        = vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
    vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber4 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber4;
}

void Vasyupcnt58___024root___eval_settle(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___eval_settle\n"); );
    // Body
    Vasyupcnt58___024root___settle__TOP__2(vlSelf);
}

void Vasyupcnt58___024root___final(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___final\n"); );
}

void Vasyupcnt58___024root___ctor_var_reset(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(4);
    vlSelf->q = VL_RAND_RESET_I(4);
    vlSelf->qb = VL_RAND_RESET_I(4);
    vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__qb = VL_RAND_RESET_I(4);
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3 = VL_RAND_RESET_I(1);
}
