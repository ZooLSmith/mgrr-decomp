// src/unsorted/unit_00CBF4A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF4A0..00CBF4A0, 1 functions

#include "types.h"

// 00CBF4A0  FUN_00cbf4a0  size=173  [run]
void FUN_00cbf4a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_00a81330();
  if ((((iVar1 != 0) && (iVar2 = FUN_00a7c800(), iVar2 != 0)) &&
      (iVar2 = FUN_00a7c800(), (*(byte *)(iVar2 + 0x4c0) & 1) != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    uVar3 = 0;
    uVar4 = 0xffffffff;
    do {
      if ((&DAT_01dc132c)[uVar3] == 0) {
        if (uVar4 == 0xffffffff) {
          uVar4 = uVar3;
        }
      }
      else {
        iVar2 = FUN_00a81330();
        if ((iVar2 == iVar1) &&
           (uVar5 = uVar3, *(int *)((&DAT_01dc132c)[uVar3] + 4) == *(int *)(param_1 + 4))) break;
      }
      uVar5 = uVar4;
      uVar3 = uVar3 + 1;
      uVar4 = uVar5;
    } while (uVar3 < 5);
    if ((uVar5 != 0xffffffff) && ((*(uint *)(iVar1 + 0x24) & 0xf0000) == 0x20000)) {
      (&DAT_01dc132c)[uVar5] = param_1;
      (&DAT_01dbf950)[uVar5] = 1;
    }
  }
  return;
}

