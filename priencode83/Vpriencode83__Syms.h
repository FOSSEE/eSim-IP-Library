// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRIENCODE83__SYMS_H_
#define VERILATED_VPRIENCODE83__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vpriencode83.h"

// INCLUDE MODULE CLASSES
#include "Vpriencode83___024root.h"

// SYMS CLASS (contains all model state)
class Vpriencode83__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpriencode83* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpriencode83___024root         TOP;

    // CONSTRUCTORS
    Vpriencode83__Syms(VerilatedContext* contextp, const char* namep, Vpriencode83* modelp);
    ~Vpriencode83__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
