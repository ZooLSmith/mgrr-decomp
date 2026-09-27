// src/unsorted/unit_00F0A1E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F0A1E0..00F0A1E0, 1 functions

#include "types.h"

// 00F0A1E0  FUN_00f0a1e0  size=307  [run]
void __fastcall FUN_00f0a1e0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x120) != 0) &&
      (fVar1 = (float)*(int *)(param_1 + 0x120),
      fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) &&
     ((*(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) | 1, *(int *)(param_1 + 0x530) == 0
      || (((*(byte *)(param_1 + 0x520) & 2) != 0 && (*(int *)(param_1 + 0x420) == 0)))))) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  }
  if ((((*(byte *)(param_1 + 0x3f) & 1) == 0) || ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x110);
  }
  else {
    fVar2 = (float10)FUN_009d59c0(param_1);
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x118);
  *(float *)(param_1 + 0x118) = (float)fVar2 + *(float *)(param_1 + 0x118);
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    fVar2 = (float10)FUN_009d59c0(param_1);
    if (0.0 < *(float *)(param_1 + 0x94)) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
      *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - (float)fVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - (float)fVar2;
    if ((*(float *)(param_1 + 0x9c) < 0.0) &&
       ((*(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) | 1, *(int *)(param_1 + 0x530) == 0
        || (((*(byte *)(param_1 + 0x520) & 2) != 0 && (*(int *)(param_1 + 0x420) == 0)))))) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
  }
  return;
}

