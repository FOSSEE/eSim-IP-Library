// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode48.h for the primary calling header

#include "Vdecode48___024root.h"
#include "Vdecode48__Syms.h"

//==========

VL_INLINE_OPT void Vdecode48___024root___combo__TOP__1(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___combo__TOP__1\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->out = 0U;
        vlSelf->out = ((4U & (IData)(vlSelf->in)) ? 
                       ((2U & (IData)(vlSelf->in)) ? 
                        ((1U & (IData)(vlSelf->in))
                          ? (0x80U | (IData)(vlSelf->out))
                          : (0x40U | (IData)(vlSelf->out)))
                         : ((1U & (IData)(vlSelf->in))
                             ? (0x20U | (IData)(vlSelf->out))
                             : (0x10U | (IData)(vlSelf->out))))
                        : ((2U & (IData)(vlSelf->in))
                            ? ((1U & (IData)(vlSelf->in))
                                ? (8U | (IData)(vlSelf->out))
                                : (4U | (IData)(vlSelf->out)))
                            : ((1U & (IData)(vlSelf->in))
                                ? (2U | (IData)(vlSelf->out))
                                : (1U | (IData)(vlSelf->out)))));
    } else {
        vlSelf->out = 0U;
    }
}

void Vdecode48___024root___eval(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___eval\n"); );
    // Body
    Vdecode48___024root___combo__TOP__1(vlSelf);
}

QData Vdecode48___024root___change_request_1(Vdecode48___024root* vlSelf);

VL_INLINE_OPT QData Vdecode48___024root___change_request(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___change_request\n"); );
    // Body
    return (Vdecode48___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdecode48___024root___change_request_1(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdecode48___024root___eval_debug_assertions(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->in & 0xf8U))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
