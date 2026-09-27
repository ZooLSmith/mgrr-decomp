// src/unsorted/unit_00ED6110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED6110..00ED6110, 1 functions

#include "types.h"

// 00ED6110  FUN_00ed6110  size=261  [run]
void __fastcall FUN_00ed6110(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x494) != 0.0) {
    fVar1 = *(float *)(param_1 + 0x488) + *(float *)(param_1 + 0x494);
    *(float *)(param_1 + 0x488) = fVar1;
    if (1.0 < fVar1) {
      fVar1 = *(float *)(param_1 + 0x488);
      do {
        fVar1 = fVar1 - 1.0;
      } while (1.0 < fVar1);
      *(float *)(param_1 + 0x488) = fVar1;
    }
    if (*(float *)(param_1 + 0x488) < 0.0) {
      fVar1 = *(float *)(param_1 + 0x488);
      do {
        fVar1 = fVar1 + 1.0;
      } while (fVar1 < 0.0);
      *(float *)(param_1 + 0x488) = fVar1;
    }
  }
  if (*(float *)(param_1 + 0x498) == 0.0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x48c) + *(float *)(param_1 + 0x498);
  *(float *)(param_1 + 0x48c) = fVar1;
  if (1.0 < fVar1) {
    fVar1 = *(float *)(param_1 + 0x48c);
    do {
      fVar1 = fVar1 - 1.0;
    } while (1.0 < fVar1);
    *(float *)(param_1 + 0x48c) = fVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0x48c)) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x48c);
  do {
    fVar1 = fVar1 + 1.0;
  } while (fVar1 < 0.0);
  *(float *)(param_1 + 0x48c) = fVar1;
  return;
}

