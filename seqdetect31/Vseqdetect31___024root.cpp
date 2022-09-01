// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseqdetect31.h for the primary calling header

#include "Vseqdetect31___024root.h"
#include "Vseqdetect31__Syms.h"

//==========

extern const VlUnpacked<CData/*1:0*/, 128> Vseqdetect31__ConstPool__TABLE_3b4af746_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vseqdetect31__ConstPool__TABLE_6daa695f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vseqdetect31__ConstPool__TABLE_b4f66d1a_0;

VL_INLINE_OPT void Vseqdetect31___024root___sequent__TOP__1(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->seqdetect31__DOT__state) 
                     << 2U) | (((IData)(vlSelf->I) 
                                << 1U) | (IData)(vlSelf->RST)));
    if ((1U & Vseqdetect31__ConstPool__TABLE_3b4af746_0
         [__Vtableidx1])) {
        vlSelf->seqdetect31__DOT__state = Vseqdetect31__ConstPool__TABLE_6daa695f_0
            [__Vtableidx1];
    }
    if ((2U & Vseqdetect31__ConstPool__TABLE_3b4af746_0
         [__Vtableidx1])) {
        vlSelf->Z = Vseqdetect31__ConstPool__TABLE_b4f66d1a_0
            [__Vtableidx1];
    }
}

void Vseqdetect31___024root___eval(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK))) 
         | ((IData)(vlSelf->RST) & (~ (IData)(vlSelf->__Vclklast__TOP__RST))))) {
        Vseqdetect31___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__RST = vlSelf->RST;
}

QData Vseqdetect31___024root___change_request_1(Vseqdetect31___024root* vlSelf);

VL_INLINE_OPT QData Vseqdetect31___024root___change_request(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___change_request\n"); );
    // Body
    return (Vseqdetect31___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vseqdetect31___024root___change_request_1(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vseqdetect31___024root___eval_debug_assertions(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->I & 0xfeU))) {
        Verilated::overWidthError("I");}
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST & 0xfeU))) {
        Verilated::overWidthError("RST");}
}
#endif  // VL_DEBUG
