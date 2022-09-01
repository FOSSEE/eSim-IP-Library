// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriencode83.h for the primary calling header

#include "Vpriencode83___024root.h"
#include "Vpriencode83__Syms.h"

//==========

extern const VlUnpacked<CData/*0:0*/, 256> Vpriencode83__ConstPool__TABLE_362cb652_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vpriencode83__ConstPool__TABLE_026fb9a4_0;

VL_INLINE_OPT void Vpriencode83___024root___combo__TOP__1(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___combo__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = vlSelf->din;
    if (Vpriencode83__ConstPool__TABLE_362cb652_0[__Vtableidx1]) {
        vlSelf->dout = Vpriencode83__ConstPool__TABLE_026fb9a4_0
            [__Vtableidx1];
    }
}

void Vpriencode83___024root___eval(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval\n"); );
    // Body
    Vpriencode83___024root___combo__TOP__1(vlSelf);
}

QData Vpriencode83___024root___change_request_1(Vpriencode83___024root* vlSelf);

VL_INLINE_OPT QData Vpriencode83___024root___change_request(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___change_request\n"); );
    // Body
    return (Vpriencode83___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpriencode83___024root___change_request_1(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpriencode83___024root___eval_debug_assertions(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
