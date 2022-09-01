// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasyupcnt58.h for the primary calling header

#include "Vasyupcnt58___024root.h"
#include "Vasyupcnt58__Syms.h"

//==========

VL_INLINE_OPT void Vasyupcnt58___024root___sequent__TOP__1(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3) {
        vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5 = 0U;
        vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber6 = 1U;
    } else {
        vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5)));
        vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber6 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5)));
    }
    vlSelf->q = ((0xeU & (IData)(vlSelf->q)) | (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber5));
    vlSelf->qb = ((0xeU & (IData)(vlSelf->qb)) | (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t1____pinNumber6));
}

VL_INLINE_OPT void Vasyupcnt58___024root___combo__TOP__3(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3 
        = (1U & (IData)(vlSelf->rst));
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber4 
        = (1U & (IData)(vlSelf->qb));
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber4 
        = (1U & ((IData)(vlSelf->qb) >> 1U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber4 
        = (1U & ((IData)(vlSelf->qb) >> 2U));
}

VL_INLINE_OPT void Vasyupcnt58___024root___sequent__TOP__4(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3) {
        vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5 = 0U;
        vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber6 = 1U;
    } else {
        vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5)));
        vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber6 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5)));
    }
    vlSelf->qb = ((0xdU & (IData)(vlSelf->qb)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber6) 
                                                  << 1U));
    vlSelf->q = ((0xdU & (IData)(vlSelf->q)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t2____pinNumber5) 
                                                << 1U));
}

VL_INLINE_OPT void Vasyupcnt58___024root___sequent__TOP__5(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3) {
        vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5 = 0U;
        vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber6 = 1U;
    } else {
        vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5)));
        vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber6 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5)));
    }
    vlSelf->qb = ((0xbU & (IData)(vlSelf->qb)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber6) 
                                                  << 2U));
    vlSelf->q = ((0xbU & (IData)(vlSelf->q)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t3____pinNumber5) 
                                                << 2U));
}

VL_INLINE_OPT void Vasyupcnt58___024root___sequent__TOP__6(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___sequent__TOP__6\n"); );
    // Body
    if (vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3) {
        vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5 = 0U;
        vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber6 = 1U;
    } else {
        vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5)));
        vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber6 
            = (1U & (~ (IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5)));
    }
    vlSelf->qb = ((7U & (IData)(vlSelf->qb)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber6) 
                                                << 3U));
    vlSelf->q = ((7U & (IData)(vlSelf->q)) | ((IData)(vlSelf->asyupcnt58__DOT____Vcellout__t4____pinNumber5) 
                                              << 3U));
}

VL_INLINE_OPT void Vasyupcnt58___024root___combo__TOP__7(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 1U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 2U));
    vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3 
        = (1U & ((IData)(vlSelf->rst) >> 3U));
}

void Vasyupcnt58___024root___eval(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3))) 
         | ((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))))) {
        Vasyupcnt58___024root___sequent__TOP__1(vlSelf);
    }
    Vasyupcnt58___024root___combo__TOP__3(vlSelf);
    if ((((IData)(vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3))) 
         | ((IData)(vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber4) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber4))))) {
        Vasyupcnt58___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3))) 
         | ((IData)(vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber4) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber4))))) {
        Vasyupcnt58___024root___sequent__TOP__5(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3))) 
         | ((IData)(vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber4) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber4))))) {
        Vasyupcnt58___024root___sequent__TOP__6(vlSelf);
    }
    Vasyupcnt58___024root___combo__TOP__7(vlSelf);
    // Final
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
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    vlSelf->__VinpClk__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
}

QData Vasyupcnt58___024root___change_request_1(Vasyupcnt58___024root* vlSelf);

VL_INLINE_OPT QData Vasyupcnt58___024root___change_request(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___change_request\n"); );
    // Body
    return (Vasyupcnt58___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vasyupcnt58___024root___change_request_1(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->qb ^ vlSelf->__Vchglast__TOP__qb)
         | (vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3)
         | (vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3)
         | (vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3)
         | (vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3));
    VL_DEBUG_IF( if(__req && ((vlSelf->qb ^ vlSelf->__Vchglast__TOP__qb))) VL_DBG_MSGF("        CHANGE: asyupcnt58.v:1: qb\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3))) VL_DBG_MSGF("        CHANGE: jk_ff.v:1: asyupcnt58.__Vcellinp__t1____pinNumber3\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3))) VL_DBG_MSGF("        CHANGE: jk_ff.v:1: asyupcnt58.__Vcellinp__t2____pinNumber3\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3))) VL_DBG_MSGF("        CHANGE: jk_ff.v:1: asyupcnt58.__Vcellinp__t3____pinNumber3\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3 ^ vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3))) VL_DBG_MSGF("        CHANGE: jk_ff.v:1: asyupcnt58.__Vcellinp__t4____pinNumber3\n"); );
    // Final
    vlSelf->__Vchglast__TOP__qb = vlSelf->qb;
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t1____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t1____pinNumber3;
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t2____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t2____pinNumber3;
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t3____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t3____pinNumber3;
    vlSelf->__Vchglast__TOP__asyupcnt58__DOT____Vcellinp__t4____pinNumber3 
        = vlSelf->asyupcnt58__DOT____Vcellinp__t4____pinNumber3;
    return __req;
}

#ifdef VL_DEBUG
void Vasyupcnt58___024root___eval_debug_assertions(Vasyupcnt58___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyupcnt58__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyupcnt58___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xf0U))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
