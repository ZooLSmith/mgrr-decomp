// src/unsorted/unit_00401CB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401CB0..00401DA0, 2 functions

#include "types.h"

// 00401CB0  FUN_00401cb0  size=42  [run]
void __fastcall FUN_00401cb0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(0);
    FUN_00dd48d0(puVar1,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

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

