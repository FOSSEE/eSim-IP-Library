// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSEQDETECT31__SYMS_H_
#define VERILATED_VSEQDETECT31__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vseqdetect31.h"

// INCLUDE MODULE CLASSES
#include "Vseqdetect31___024root.h"

// SYMS CLASS (contains all model state)
class Vseqdetect31__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vseqdetect31* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vseqdetect31___024root         TOP;

    // CONSTRUCTORS
    Vseqdetect31__Syms(VerilatedContext* contextp, const char* namep, Vseqdetect31* modelp);
    ~Vseqdetect31__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
