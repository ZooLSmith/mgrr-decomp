// src/unsorted/unit_00AFC730.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AFC730..00AFC730, 1 functions

#include "mgrr.h"

// 00AFC730  FUN_00afc730  size=93  [run]
undefined4 __thiscall FUN_00afc730(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00af6e00();
  return 1;
}

