// src/unsorted/unit_00CD1970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD1970..00CD1A40, 2 functions

#include "types.h"

// 00CD1970  FUN_00cd1970  size=204  [run]
void FUN_00cd1970(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1 != 0) && ((DAT_01bea090 & 0x80000000) == 0)) && (param_2 != 5)) &&
     ((param_2 != 6 && (iVar1 = FUN_00cb74a0(*(undefined4 *)(param_1 + 0x4b4)), iVar1 != 0)))) {
    uVar3 = 0xffffffff;
    uVar2 = 0;
    do {
      if (param_1 == (&DAT_01dc07e0)[uVar2]) {
        (&DAT_01dc0760)[uVar2] = param_1;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    uVar2 = 0;
    do {
      if ((&DAT_01dc07e0)[uVar2] == 0) {
        if (((&DAT_01dc06b0)[uVar2] == 0) && (uVar3 == 0xffffffff)) {
          uVar3 = uVar2;
        }
      }
      else {
        uVar4 = uVar2;
        if ((&DAT_01dc0760)[uVar2] == param_1) break;
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar3;
    } while (uVar2 < 0x20);
    if (uVar4 != 0xffffffff) {
      (&DAT_01dc0760)[uVar4] = param_1;
      (&DAT_01dc0630)[uVar4] = param_2;
      (&DAT_01dc05b0)[uVar4] = param_3;
      (&DAT_01dc0530)[uVar4] = param_4;
    }
  }
  return;
}

// 00CD1A40  FUN_00cd1a40  size=122  [run]
void FUN_00cd1a40(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((((DAT_01bea090 & 0x80000000) == 0) && (iVar2 = FUN_00cb74a0(param_1), iVar2 != 0)) &&
     ((param_3 == 6 || (param_3 == 5)))) {
    uVar3 = 0;
    while ((&DAT_01dc04b0)[uVar3] != 0) {
      uVar3 = uVar3 + 1;
      if (0xf < uVar3) {
        return;
      }
    }
    (&DAT_01dc04b0)[uVar3] = 1;
    (&DAT_01dc4190)[uVar3 * 4] = *param_2;
    (&DAT_01dc4194)[uVar3 * 4] = param_2[1];
    (&DAT_01dc4198)[uVar3 * 4] = param_2[2];
    uVar1 = param_2[3];
    (&DAT_01dc0470)[uVar3] = param_3;
    (&DAT_01dc419c)[uVar3 * 4] = uVar1;
  }
  return;
}

