// src/unsorted/unit_00FDA96D.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA96D..00FDA9E4, 4 functions

#include "types.h"

// 00FDA96D  Facet_Register  size=42  [run]
/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd34e0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_01f8ed9c;
    puVar1[1] = param_1;
  }
  DAT_01f8ed9c = puVar1;
  return;
}

// 00FDA997  __Deletegloballocale  size=33  [run]
/* Library Function - Single Match
    __Deletegloballocale
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __Deletegloballocale(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00e134b0();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

// 00FDA9B8  tidy_global  size=44  [run]
/* Library Function - Single Match
    _tidy_global
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl tidy_global(void)

{
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  __Deletegloballocale(&DAT_01f8eda0);
  DAT_01f8eda0 = 0;
  FUN_00fda874();
  return;
}

// 00FDA9E4  FUN_00fda9e4  size=6  [run]
undefined4 FUN_00fda9e4(void)

{
  return DAT_01f8eda0;
}

