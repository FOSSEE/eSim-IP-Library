// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrafficlight2_12.h for the primary calling header

#include "Vtrafficlight2_12___024root.h"
#include "Vtrafficlight2_12__Syms.h"

//==========


void Vtrafficlight2_12___024root___ctor_var_reset(Vtrafficlight2_12___024root* vlSelf);

Vtrafficlight2_12___024root::Vtrafficlight2_12___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtrafficlight2_12___024root___ctor_var_reset(this);
}

void Vtrafficlight2_12___024root::__Vconfigure(Vtrafficlight2_12__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtrafficlight2_12___024root::~Vtrafficlight2_12___024root() {
}

extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_38f2e7b7_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_380d7f69_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_d0d21850_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_8c825528_0;

void Vtrafficlight2_12___024root___settle__TOP__2(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___settle__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = vlSelf->trafficlight2_12__DOT__ps;
    vlSelf->light_S1 = Vtrafficlight2_12__ConstPool__TABLE_38f2e7b7_0
        [__Vtableidx2];
    vlSelf->light_S2 = Vtrafficlight2_12__ConstPool__TABLE_380d7f69_0
        [__Vtableidx2];
    vlSelf->light_S3 = Vtrafficlight2_12__ConstPool__TABLE_d0d21850_0
        [__Vtableidx2];
    vlSelf->light_S4 = Vtrafficlight2_12__ConstPool__TABLE_8c825528_0
        [__Vtableidx2];
}

void Vtrafficlight2_12___024root___eval_initial(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vtrafficlight2_12___024root___eval_settle(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___eval_settle\n"); );
    // Body
    Vtrafficlight2_12___024root___settle__TOP__2(vlSelf);
}

void Vtrafficlight2_12___024root___final(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___final\n"); );
}

void Vtrafficlight2_12___024root___ctor_var_reset(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->light_S1 = VL_RAND_RESET_I(3);
    vlSelf->light_S2 = VL_RAND_RESET_I(3);
    vlSelf->light_S3 = VL_RAND_RESET_I(3);
    vlSelf->light_S4 = VL_RAND_RESET_I(3);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trafficlight2_12__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->trafficlight2_12__DOT__ps = VL_RAND_RESET_I(3);
}
