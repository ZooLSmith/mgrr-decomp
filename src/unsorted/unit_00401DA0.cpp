// src/unsorted/unit_00401DA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401DA0..00401DA0, 1 functions

#include "mgrr.h"

// 00401DA0  FUN_00401da0  size=48  [run]
int __fastcall FUN_00401da0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 4;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  return param_1;
}

