// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_4bit.h for the primary calling header

#ifndef VERILATED_VADDER_4BIT___024ROOT_H_
#define VERILATED_VADDER_4BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vadder_4bit__Syms;

//----------

VL_MODULE(Vadder_4bit___024root) {
  public:

    // PORTS
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,3,0);
    VL_OUT8(cout,0,0);

    // INTERNAL VARIABLES
    Vadder_4bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadder_4bit___024root);  ///< Copying not allowed
  public:
    Vadder_4bit___024root(const char* name);
    ~Vadder_4bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vadder_4bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
