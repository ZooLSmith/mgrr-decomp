// src/unsorted/unit_00CD3050.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD3050..00CD3050, 1 functions

#include "types.h"

// 00CD3050  FUN_00cd3050  size=358  [run]
void FUN_00cd3050(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((((DAT_01bea094 & 0x20400) == 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x34) != 0)) &&
      ((iVar1 = FUN_00a81330(), iVar1 != 0 && (iVar1 = FUN_00a7c800(), iVar1 != 0)))) &&
     (iVar1 = FUN_00a7c800(), (*(byte *)(iVar1 + 0x4c0) & 1) != 0)) {
    if (*(byte *)(param_1 + 0x4c) < 2) {
      uVar5 = 0;
      uVar3 = 0xffffffff;
      do {
        if ((&DAT_01dc03b8)[uVar5] == 0) {
          if (uVar3 == 0xffffffff) {
            uVar3 = uVar5;
          }
        }
        else {
          iVar1 = FUN_00a81330();
          iVar2 = FUN_00a81330();
          if ((iVar1 == iVar2) &&
             (uVar4 = uVar5, *(short *)((&DAT_01dc03b8)[uVar5] + 4) == *(short *)(param_1 + 4)))
          break;
        }
        uVar4 = uVar3;
        uVar5 = uVar5 + 1;
        uVar3 = uVar4;
      } while (uVar5 < 0xf);
      if (uVar4 != 0xffffffff) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (&DAT_01dc03b8)[uVar4] = param_1;
          (&DAT_01dbf9dc)[uVar4] = 1;
          DAT_01dc08fc = 1;
          return;
        }
        if (*(int *)(param_1 + 0x54) == 1) {
          (&DAT_01dc03b8)[uVar4] = param_1;
          (&DAT_01dbf9dc)[uVar4] = 1;
          DAT_01dc0900 = 1;
          return;
        }
        if ((*(int *)(param_1 + 0x58) == 1) || (*(int *)(param_1 + 0x5c) == 1)) {
          (&DAT_01dc03b8)[uVar4] = param_1;
          (&DAT_01dbf9dc)[uVar4] = 1;
        }
      }
    }
    else if (*(byte *)(param_1 + 0x4c) == 2) {
      uVar5 = 0;
      uVar3 = 0xffffffff;
      do {
        if ((&DAT_01dc0340)[uVar5] == 0) {
          if (uVar3 == 0xffffffff) {
            uVar3 = uVar5;
          }
        }
        else {
          iVar1 = FUN_00a81330();
          iVar2 = FUN_00a81330();
          uVar4 = uVar5;
          if (iVar1 == iVar2) break;
        }
        uVar4 = uVar3;
        uVar5 = uVar5 + 1;
        uVar3 = uVar4;
      } while (uVar5 < 0x1e);
      if (uVar4 != 0xffffffff) {
        (&DAT_01dc0340)[uVar4] = param_1;
        (&DAT_01dc02c8)[uVar4] = 1;
        return;
      }
    }
  }
  return;
}

