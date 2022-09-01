// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpwm11__Syms.h"
#include "Vpwm11.h"
#include "Vpwm11___024root.h"

// FUNCTIONS
Vpwm11__Syms::~Vpwm11__Syms()
{
}

Vpwm11__Syms::Vpwm11__Syms(VerilatedContext* contextp, const char* namep,Vpwm11* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
