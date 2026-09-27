// src/unsorted/unit_00958590.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00958590..009585D0, 2 functions

#include "types.h"

// 00958590  FUN_00958590  size=54  [run]
void __fastcall FUN_00958590(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00dd4920(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009585D0  FUN_009585d0  size=54  [run]
void __fastcall FUN_009585d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00dd4920(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

