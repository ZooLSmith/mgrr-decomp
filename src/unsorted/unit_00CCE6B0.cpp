// src/unsorted/unit_00CCE6B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCE6B0..00CCE780, 2 functions

#include "mgrr.h"

// 00CCE6B0  FUN_00cce6b0  size=200  [run]
void FUN_00cce6b0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  if ((param_1 != 0) && (param_3 != -1)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (param_3 == 0) {
      if (param_2 != 0) {
        *(float *)(param_1 + 0x30) = *(float *)(param_2 + 0x20) + *(float *)(param_1 + 0x30);
        *(float *)(param_1 + 0x34) = *(float *)(param_2 + 0x24) + *(float *)(param_1 + 0x34);
        fVar2 = (float)*(int *)(param_2 + 0x14);
        fVar1 = 0.0;
        if ((0.0 <= fVar2) && (fVar1 = fVar2, 100.0 < fVar2)) {
          fVar1 = 100.0;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(float *)(param_1 + 0x4c) = fVar1 * 0.01 * *(float *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
        return;
      }
    }
    else if ((param_3 != 1) && (param_3 == 2)) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
    }
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  }
  return;
}

// 00CCE780  FUN_00cce780  size=163  [run]
void FUN_00cce780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  if (param_5 != -1) {
    if (param_5 == 0) {
      *param_1 = 3;
      param_1[3] = 0x3f800000;
      param_1[4] = 0x3f800000;
      param_1[5] = 0x3f800000;
      param_1[6] = 0x3f800000;
      *param_2 = 1;
      param_2[1] = 0;
      *(undefined2 *)(param_2 + 2) = 1;
      param_2[3] = 0x3f800000;
      param_2[4] = 0x3f800000;
      param_2[5] = 0x3f800000;
      param_2[6] = 0x3f800000;
      return;
    }
    if ((param_5 == 1) || (param_3 = param_4, param_5 == 2)) {
      *param_1 = 3;
      param_1[3] = 0x3f800000;
      param_1[4] = 0x3f800000;
      param_1[5] = 0x3f800000;
      param_1[6] = 0x3f800000;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
      param_2[3] = 0x3f800000;
      param_2[4] = 0x3f800000;
      param_2[5] = 0x3f800000;
      param_2[6] = 0x3f800000;
    }
  }
  return;
}

