// src/unsorted/unit_0059FDF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0059FDF0..0059FDF0, 1 functions

#include "types.h"

// 0059FDF0  FUN_0059fdf0  size=84  [run]
void __fastcall FUN_0059fdf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0xa50) = *puVar3;
    *(undefined4 *)(param_1 + 0xa54) = puVar3[1];
    *(undefined4 *)(param_1 + 0xa58) = puVar3[2];
    *(undefined4 *)(param_1 + 0xa5c) = puVar3[3];
    uVar4 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa1c) = uVar4;
  }
  return;
}

