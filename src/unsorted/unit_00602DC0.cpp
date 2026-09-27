// src/unsorted/unit_00602DC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00602DC0..00602DC0, 1 functions

#include "types.h"

// 00602DC0  FUN_00602dc0  size=81  [run]
void FUN_00602dc0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b354b8;
    (**(code **)(*param_1 + 4))(&DAT_01b354b8);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar2 + 0x870) != 0) {
    FUN_00d7b0f0();
  }
  *(undefined4 *)(uVar2 + 0x870) = 0;
  FUN_00a805f0();
  return;
}

