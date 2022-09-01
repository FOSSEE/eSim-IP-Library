// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRIENCODE16_4__SYMS_H_
#define VERILATED_VPRIENCODE16_4__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vpriencode16_4.h"

// INCLUDE MODULE CLASSES
#include "Vpriencode16_4___024root.h"

// SYMS CLASS (contains all model state)
class Vpriencode16_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpriencode16_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpriencode16_4___024root       TOP;

    // CONSTRUCTORS
    Vpriencode16_4__Syms(VerilatedContext* contextp, const char* namep, Vpriencode16_4* modelp);
    ~Vpriencode16_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
