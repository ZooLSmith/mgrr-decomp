// src/unsorted/unit_00CF25D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF25D0..00CF25D0, 1 functions

#include "types.h"

// 00CF25D0  FUN_00cf25d0  size=1140  [run]
void __thiscall FUN_00cf25d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char local_20 [32];
  
  if ((param_2 == 1) || (*(float *)(param_1 + 0xd8) != *(float *)(param_1 + 0xd0))) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 != 0) &&
       ((*(uint *)(param_1 + 0x98) < *(uint *)(iVar2 + 0x80) &&
        (iVar2 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)))) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = 0;
    local_20[0] = '\0';
    if (0.0 < *(float *)(param_1 + 0xd0)) {
      FUN_00cbfc40(*(undefined4 *)(param_1 + 0xd0),local_20,0x20);
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 4) {
          FUN_00cb3cc0(piVar1,local_20);
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0x9c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 4) {
          FUN_00cb3cc0(piVar1,local_20);
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      uVar3 = *(uint *)(param_1 + 0x9c);
    }
    else {
      _sprintf_s(local_20,0x20,"--:--.--");
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 4) {
          FUN_00cb3cc0(piVar1,local_20);
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 4) {
          FUN_00cb3cc0(piVar1,local_20);
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      uVar3 = *(uint *)(param_1 + 0xa4);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar3 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xe8) == 0) {
      FUN_00cb2900(*(undefined4 *)(param_1 + 0xb8),0xc2040000);
    }
  }
  if ((param_2 == 1) || (*(float *)(param_1 + 0xdc) != *(float *)(param_1 + 0xd4))) {
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = 0;
    local_20[0] = '\0';
    FUN_00cbfc40(*(undefined4 *)(param_1 + 0xd4),local_20,0x20);
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 != 0) &&
       ((*(uint *)(param_1 + 0xa8) < *(uint *)(iVar2 + 0x80) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0xa8) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)))) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 4) {
        FUN_00cb3cc0(piVar1,local_20);
      }
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 4) {
        FUN_00cb3cc0(piVar1,local_20);
      }
    }
    FUN_0095bfa0();
    iVar2 = FUN_0095c300();
    if (iVar2 != 0) {
      iVar2 = FUN_00fdbc60();
      if (iVar2 / 0x3c < 1) {
        if (iVar2 % 0x3c < 0xf) {
          if (*(int *)(param_1 + 0xec) == 1) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc4),7);
          }
          *(undefined4 *)(param_1 + 0xec) = 2;
        }
        else if (iVar2 % 0x3c < 0x1e) {
          if (*(int *)(param_1 + 0xec) == 0) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc0),3);
          }
          *(undefined4 *)(param_1 + 0xec) = 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd4);
  }
  return;
}

