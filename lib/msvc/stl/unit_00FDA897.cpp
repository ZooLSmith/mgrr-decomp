// lib/msvc/stl/unit_00FDA897.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA897..00FDA8B8, 2 functions

#include "mgrr.h"

// 00FDA897  std::_Lockit::_Lockit_ctor  size=33  [run]
/* Library Function - Single Match
    private: static void __cdecl std::_Lockit::_Lockit_ctor(class std::_Lockit *,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl std::_Lockit::_Lockit_ctor(_Lockit *param_1,int param_2)

{
  *(uint *)param_1 = param_2 & 3U;
  __Mtxlock((_Rmtx *)(&DAT_01f8ed38 + (param_2 & 3U) * 0x18));
  return;
}

// 00FDA8B8  std::_Lockit::_Lockit_dtor  size=27  [run]
/* Library Function - Single Match
    private: static void __cdecl std::_Lockit::_Lockit_dtor(class std::_Lockit *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl std::_Lockit::_Lockit_dtor(_Lockit *param_1)

{
  __Mtxunlock((_Rmtx *)(&DAT_01f8ed38 + *(int *)param_1 * 0x18));
  return;
}

