// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTAIRCASE14__SYMS_H_
#define VERILATED_VSTAIRCASE14__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vstaircase14.h"

// INCLUDE MODULE CLASSES
#include "Vstaircase14___024root.h"

// SYMS CLASS (contains all model state)
class Vstaircase14__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstaircase14* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstaircase14___024root         TOP;

    // CONSTRUCTORS
    Vstaircase14__Syms(VerilatedContext* contextp, const char* namep, Vstaircase14* modelp);
    ~Vstaircase14__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
