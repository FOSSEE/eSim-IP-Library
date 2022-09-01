// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFREQ8DIV11__SYMS_H_
#define VERILATED_VFREQ8DIV11__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vfreq8div11.h"

// INCLUDE MODULE CLASSES
#include "Vfreq8div11___024root.h"

// SYMS CLASS (contains all model state)
class Vfreq8div11__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfreq8div11* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfreq8div11___024root          TOP;

    // CONSTRUCTORS
    Vfreq8div11__Syms(VerilatedContext* contextp, const char* namep, Vfreq8div11* modelp);
    ~Vfreq8div11__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
