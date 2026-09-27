// src/unsorted/unit_00F4FEC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4FEC0..00F4FEC0, 1 functions

#include "types.h"

// 00F4FEC0  FUN_00f4fec0  size=361  [run]
void FUN_00f4fec0(float *param_1)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  fVar3 = (float10)FUN_00fdef70();
  if ((float)fVar3 <= 1.0) {
    return;
  }
  do {
    fVar3 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    *param_1 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    param_1[1] = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    uVar2 = uVar2 + 1;
    param_1[2] = (float)fVar3;
    if (10 < uVar2) {
      FUN_00dd5650(&DAT_016e11f8);
      fVar3 = (float10)FUN_00fdef70();
      fVar1 = 1.0 / (float)fVar3;
      FUN_00dde300(0,0x3f800000);
      *param_1 = fVar1 * *param_1;
      param_1[1] = fVar1 * param_1[1];
      param_1[2] = fVar1 * param_1[2];
      return;
    }
    fVar3 = (float10)FUN_00fdef70();
  } while (1.0 < (float)fVar3);
  return;
}

