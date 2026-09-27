// src/unsorted/unit_00CD9D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD9D90..00CD9D90, 1 functions

#include "types.h"

// 00CD9D90  FUN_00cd9d90  size=451  [run]
void __thiscall FUN_00cd9d90(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  if (0x14 < uVar1) {
    uVar1 = uVar1 - 0x14;
  }
  *(uint *)(param_1 + 0x1d0) = uVar1;
  *(uint *)(param_1 + 0x1e0) = param_2[7];
  *(uint *)(param_1 + 0x1e4) = param_2[6];
  FUN_00cc16a0();
  if ((float)param_2[0x3c] != 0.0) {
    *(uint *)(param_1 + 0x1d8) = param_2[0x3c];
  }
  if ((float)param_2[0x3c] == 0.0) {
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
    if ((float)param_2[0x19] * 0.016666668 <= *(float *)(param_1 + 0x2fc)) {
      if ((float)param_2[0x1a] * 0.016666668 <= *(float *)(param_1 + 0x2fc)) {
        if (*(float *)(param_1 + 0x2fc) < (float)param_2[0x1b] * 0.016666668) {
          *(undefined4 *)(param_1 + 0x1d4) = 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1d4) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    uVar2 = FUN_00cc14b0(*(undefined4 *)(param_1 + 0x1d4),0);
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x2fc);
    *(undefined4 *)(param_1 + 0x494) = uVar2;
  }
  else if (*(float *)(param_1 + 0x2fc) < (float)param_2[0x3c]) {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x2fc);
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
    if ((param_2[0x3f] & 1) == 0) {
      if ((float)param_2[0x19] * 0.016666668 <= *(float *)(param_1 + 0x2fc)) {
        if ((float)param_2[0x1a] * 0.016666668 <= *(float *)(param_1 + 0x2fc)) {
          if ((float)param_2[0x1b] * 0.016666668 <= *(float *)(param_1 + 0x2fc)) {
            return;
          }
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
      if ((param_2[0x3f] & 1 << (sbyte)uVar2) == 0) {
        *(undefined4 *)(param_1 + 0x1d4) = uVar2;
        uVar2 = FUN_00cc14b0(uVar2,param_2[0x3f]);
        *(undefined4 *)(param_1 + 0x494) = uVar2;
        return;
      }
    }
  }
  return;
}

