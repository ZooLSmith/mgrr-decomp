// src/unsorted/unit_00D12030.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D12030..00D12030, 1 functions

#include "mgrr.h"

// 00D12030  FUN_00d12030  size=98  [run]
void __thiscall FUN_00d12030(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
         ((param_3 == 0 || (iVar2 = FUN_00cf7390(piVar1 + 10,param_3), iVar2 == 0)))))) {
    FUN_00dd5650(&DAT_016b9264,param_3);
  }
  return;
}

