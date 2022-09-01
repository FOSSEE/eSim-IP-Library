// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINV11__SYMS_H_
#define VERILATED_VINV11__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vinv11.h"

// INCLUDE MODULE CLASSES
#include "Vinv11___024root.h"

// SYMS CLASS (contains all model state)
class Vinv11__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vinv11* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vinv11___024root               TOP;

    // CONSTRUCTORS
    Vinv11__Syms(VerilatedContext* contextp, const char* namep, Vinv11* modelp);
    ~Vinv11__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
