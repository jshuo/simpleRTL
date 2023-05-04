// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_4bit.h for the primary calling header

#include "Vadder_4bit___024root.h"
#include "Vadder_4bit__Syms.h"

//==========

VL_INLINE_OPT void Vadder_4bit___024root___combo__TOP__1(Vadder_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___combo__TOP__1\n"); );
    // Variables
    CData/*4:0*/ adder_4bit__DOT__full_sum;
    // Body
    adder_4bit__DOT__full_sum = (0x1fU & ((((IData)(vlSelf->A) 
                                            << 1U) 
                                           + ((IData)(vlSelf->B) 
                                              << 1U)) 
                                          + (IData)(vlSelf->cin)));
    vlSelf->sum = (0xfU & (IData)(adder_4bit__DOT__full_sum));
    vlSelf->cout = (1U & ((IData)(adder_4bit__DOT__full_sum) 
                          >> 4U));
}

void Vadder_4bit___024root___eval(Vadder_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval\n"); );
    // Body
    Vadder_4bit___024root___combo__TOP__1(vlSelf);
}

QData Vadder_4bit___024root___change_request_1(Vadder_4bit___024root* vlSelf);

VL_INLINE_OPT QData Vadder_4bit___024root___change_request(Vadder_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___change_request\n"); );
    // Body
    return (Vadder_4bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vadder_4bit___024root___change_request_1(Vadder_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadder_4bit___024root___eval_debug_assertions(Vadder_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_4bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
