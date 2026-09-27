// src/unsorted/unit_00CF72D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF72D0..00CF7390, 2 functions

#include "mgrr.h"

// 00CF72D0  FUN_00cf72d0  size=177  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cf72d0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0xcd0) = 0x42700000;
  if (*(int *)(param_1 + 0xae8) == 0) {
    DAT_01bea084 = DAT_01bea084 & 0xfffff7ff;
  }
  else {
    DAT_01bea084 = DAT_01bea084 | 0x800;
  }
  FUN_00ce4290();
  *(float *)(param_1 + 0xcb0) = _DAT_01bea530 - *(float *)(param_1 + 0xcb8);
  *(float *)(param_1 + 0xcb4) = _DAT_01bea534 - *(float *)(param_1 + 0xcbc);
  if (0.05 < *(float *)(param_1 + 0xcb0)) {
    *(undefined4 *)(param_1 + 0xcb0) = 0x3d4ccccd;
  }
  if (0.05 < *(float *)(param_1 + 0xcb4)) {
    *(undefined4 *)(param_1 + 0xcb4) = 0x3d4ccccd;
  }
  *(float *)(param_1 + 0xcb8) = _DAT_01bea530;
  fVar1 = _DAT_01bea534;
  *(undefined4 *)(param_1 + 0xae8) = 0;
  *(float *)(param_1 + 0xcbc) = fVar1;
  return;
}

// 00CF7390  FUN_00cf7390  size=190  [run]
undefined4 __thiscall FUN_00cf7390(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = *(int **)(param_1 + 0x1c);
  if (piVar5 != *(int **)(param_1 + 0x20)) {
    do {
      iVar1 = *piVar5;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      iVar3 = *(int *)(iVar1 + 0x18);
      uVar2 = 0;
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          if (((int)uVar2 < 0) || (iVar3 <= (int)uVar2)) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = uVar2;
            if (*(int *)(iVar1 + 0x1c) != 0) {
              uVar6 = *(uint *)(*(int *)(iVar1 + 0x14) + 0x2c + iVar4);
            }
          }
          if (param_3 == uVar6) {
            if (((int)uVar2 < 0) || (*(uint *)(iVar1 + 0x18) <= uVar2)) {
              iVar3 = 0;
            }
            else {
              iVar3 = uVar2 * 0x30 + *(int *)(iVar1 + 0x14);
            }
            param_2[4] = iVar3;
            param_2[1] = iVar1 + 0xc;
            *param_2 = *(undefined4 *)(iVar1 + 0x28);
            param_2[3] = param_3;
            param_2[2] = param_3;
            return 1;
          }
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + 0x30;
        } while ((int)uVar2 < iVar3);
      }
      piVar5 = (int *)piVar5[2];
    } while (piVar5 != *(int **)(param_1 + 0x20));
  }
  return 0;
}

