// src/unsorted/unit_00D4B950.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B950..00D4B950, 1 functions

#include "mgrr.h"

// 00D4B950  FUN_00d4b950  size=84  [run]
void __fastcall FUN_00d4b950(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      uVar1 = FUN_00a7f600(0xf0053);
      *(undefined4 *)(param_1 + 0x11c) = uVar1;
      return;
    }
    iVar2 = FUN_00a7c7e0();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x120) = 1;
      piVar3 = (int *)FUN_00a6e640();
      (**(code **)(*piVar3 + 0x48))(3,2);
    }
  }
  return;
}

