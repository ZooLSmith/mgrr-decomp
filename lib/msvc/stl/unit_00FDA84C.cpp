// lib/msvc/stl/unit_00FDA84C.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA84C..00FDA84C, 1 functions

#include "mgrr.h"

// 00FDA84C  std::_Lockit::_Lockit  size=40  [run]
/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2010 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 < 4) {
    __Mtxlock((_Rmtx *)(&DAT_01f8ed38 + param_1 * 0x18));
  }
  return this;
}

