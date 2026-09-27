// lib/msvc/stl/unit_012EAFC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 012EAFC0..012EAFC0, 1 functions

#include "mgrr.h"

// 012EAFC0  Concurrency::details::ThreadVirtualProcessor::`scalar_deleting_destructor'  size=49  [run]
/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::ThreadVirtualProcessor::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::ThreadVirtualProcessor::_scalar_deleting_destructor_
          (ThreadVirtualProcessor *this,uint param_1)

{
  CriManaSoundAtomVoice::~CriManaSoundAtomVoice();
  if ((param_1 & 1) != 0) {
    FUN_014a1cbf(this,0x1b0);
  }
  return this;
}

