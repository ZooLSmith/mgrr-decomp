// src/unsorted/unit_0088A279.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0088A279..0088A279, 1 functions

#include "types.h"

// 0088A279  FUN_0088a279  size=214  [run]
void FUN_0088a279(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBP;
  uint uVar3;
  undefined *puVar4;
  
  if (unaff_EBP == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*unaff_EBP)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)unaff_EBP;
  }
  if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
    puVar4 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar4);
  }
  uVar2 = 0x1d7;
  iVar1 = FUN_00876530();
  if (iVar1 == 0) {
    uVar2 = 0x1d8;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00864400(uVar2,0,0,0x3f800000,0x8000000);
  *(undefined4 *)(uVar3 + 0x300) = 1;
  return;
}

