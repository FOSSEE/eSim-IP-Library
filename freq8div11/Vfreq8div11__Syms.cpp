// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfreq8div11__Syms.h"
#include "Vfreq8div11.h"
#include "Vfreq8div11___024root.h"

// FUNCTIONS
Vfreq8div11__Syms::~Vfreq8div11__Syms()
{
}

Vfreq8div11__Syms::Vfreq8div11__Syms(VerilatedContext* contextp, const char* namep,Vfreq8div11* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
