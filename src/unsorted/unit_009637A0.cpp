// src/unsorted/unit_009637A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009637A0..009637A0, 1 functions

#include "types.h"

// 009637A0  FUN_009637a0  size=97  [run]
int __fastcall FUN_009637a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = PathData::setParentInfo();
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0xc0000000;
      return 0;
    }
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xbfffffff;
  return iVar2;
}

