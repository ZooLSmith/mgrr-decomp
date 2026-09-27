// src/unsorted/unit_00A11BE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A11BE0..00A11BE0, 1 functions

#include "types.h"

// 00A11BE0  FUN_00a11be0  size=56  [run]
void __thiscall FUN_00a11be0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4);
      if (iVar1 != 0) {
        uVar2 = 0;
        if (param_2 == 0) {
          uVar2 = 0x3f800000;
        }
        *(undefined4 *)(iVar1 + 0x504) = uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x34));
  }
  return;
}

