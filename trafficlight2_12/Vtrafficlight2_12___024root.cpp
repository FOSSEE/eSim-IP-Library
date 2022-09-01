// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrafficlight2_12.h for the primary calling header

#include "Vtrafficlight2_12___024root.h"
#include "Vtrafficlight2_12__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 256> Vtrafficlight2_12__ConstPool__TABLE_a1f71685_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtrafficlight2_12__ConstPool__TABLE_5a41a674_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtrafficlight2_12__ConstPool__TABLE_8f041616_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_38f2e7b7_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_380d7f69_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_d0d21850_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtrafficlight2_12__ConstPool__TABLE_8c825528_0;

VL_INLINE_OPT void Vtrafficlight2_12___024root___sequent__TOP__1(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->trafficlight2_12__DOT__count) 
                     << 4U) | (((IData)(vlSelf->trafficlight2_12__DOT__ps) 
                                << 1U) | (IData)(vlSelf->rst)));
    vlSelf->trafficlight2_12__DOT__ps = Vtrafficlight2_12__ConstPool__TABLE_a1f71685_0
        [__Vtableidx1];
    if ((2U & Vtrafficlight2_12__ConstPool__TABLE_5a41a674_0
         [__Vtableidx1])) {
        vlSelf->trafficlight2_12__DOT__count = Vtrafficlight2_12__ConstPool__TABLE_8f041616_0
            [__Vtableidx1];
    }
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

void Vtrafficlight2_12___024root___eval(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrafficlight2_12___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vtrafficlight2_12___024root___change_request_1(Vtrafficlight2_12___024root* vlSelf);

VL_INLINE_OPT QData Vtrafficlight2_12___024root___change_request(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___change_request\n"); );
    // Body
    return (Vtrafficlight2_12___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtrafficlight2_12___024root___change_request_1(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtrafficlight2_12___024root___eval_debug_assertions(Vtrafficlight2_12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficlight2_12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficlight2_12___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
