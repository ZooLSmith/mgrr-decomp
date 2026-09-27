// src/unsorted/unit_0094D2D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094D2D0..0094D2D0, 1 functions

#include "types.h"

// 0094D2D0  FUN_0094d2d0  size=76  [run]
void __thiscall FUN_0094d2d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x90) = param_2;
  if ((*(int *)(param_1 + 0x50) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b35390;
    (**(code **)(*piVar1 + 4))(&DAT_01b35390);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005e9780(*(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}

