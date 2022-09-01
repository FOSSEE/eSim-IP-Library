// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsmlock31.h for the primary calling header

#include "Vfsmlock31___024root.h"
#include "Vfsmlock31__Syms.h"

//==========

VL_INLINE_OPT void Vfsmlock31___024root___sequent__TOP__1(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->fsmlock31__DOT__present_state = ((IData)(vlSelf->reset)
                                              ? 0U : (IData)(vlSelf->fsmlock31__DOT__next_state));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vfsmlock31__ConstPool__TABLE_b6ba7672_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vfsmlock31__ConstPool__TABLE_13c70812_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vfsmlock31__ConstPool__TABLE_412e52e0_0;

VL_INLINE_OPT void Vfsmlock31___024root___settle__TOP__2(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___settle__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->din) << 2U) | (IData)(vlSelf->fsmlock31__DOT__present_state));
    if ((1U & Vfsmlock31__ConstPool__TABLE_b6ba7672_0
         [__Vtableidx1])) {
        vlSelf->fsmlock31__DOT__next_state = Vfsmlock31__ConstPool__TABLE_13c70812_0
            [__Vtableidx1];
    }
    vlSelf->pattern_detect = Vfsmlock31__ConstPool__TABLE_412e52e0_0
        [__Vtableidx1];
}

void Vfsmlock31___024root___eval(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vfsmlock31___024root___sequent__TOP__1(vlSelf);
    }
    Vfsmlock31___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

QData Vfsmlock31___024root___change_request_1(Vfsmlock31___024root* vlSelf);

VL_INLINE_OPT QData Vfsmlock31___024root___change_request(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___change_request\n"); );
    // Body
    return (Vfsmlock31___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfsmlock31___024root___change_request_1(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfsmlock31___024root___eval_debug_assertions(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->din & 0xfeU))) {
        Verilated::overWidthError("din");}
}
#endif  // VL_DEBUG
