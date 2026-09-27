// src/unsorted/unit_004B7970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7970..004B7970, 1 functions

#include "mgrr.h"

// 004B7970  FUN_004b7970  size=162  [run]
void __fastcall FUN_004b7970(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1148)) * *(float *)(param_1 + 0x1158)
          + *(float *)(param_1 + 0x1154) *
            (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x1144)) +
            *(float *)(param_1 + 0x1150) *
            (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1140));
  iVar3 = FUN_00a8cab0();
  fVar2 = fVar1;
  if (((iVar3 == 0xe0007) && (fVar2 = 27.25, fVar1 <= 27.25)) && (fVar2 = fVar1, fVar1 < -27.25)) {
    fVar2 = -27.25;
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1150) * fVar2 + *(float *)(param_1 + 0x1140);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1148) + *(float *)(param_1 + 0x1158) * fVar2;
  return;
}

