// src/unsorted/unit_00F90160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F90160..00F901A0, 2 functions

#include "mgrr.h"

// 00F90160  FUN_00f90160  size=54  [run]
bool __thiscall FUN_00f90160(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProj");
  return iVar1 != 0;
}

// 00F901A0  FUN_00f901a0  size=24  [run]
bool FUN_00f901a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

