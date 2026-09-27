// src/unsorted/unit_00F901D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F901D0..00F901D0, 1 functions

#include "types.h"

// 00F901D0  FUN_00f901d0  size=54  [run]
bool __thiscall FUN_00f901d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldArray");
  return iVar1 != 0;
}

