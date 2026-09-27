// src/unsorted/unit_0049F6C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049F6C0..0049F6C0, 1 functions

#include "types.h"

// 0049F6C0  FUN_0049f6c0  size=108  [run]
void __fastcall FUN_0049f6c0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar4 + 0x48);
    fVar2 = *(float *)(iVar4 + 0x4c);
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x50)) * 0.01 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x54)) * 0.01 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         ((fVar1 - 15.0) - *(float *)(param_1 + 0x58)) * 0.01 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (fVar2 - *(float *)(param_1 + 0x5c)) * 0.01 + *(float *)(param_1 + 0x5c);
  }
  return;
}

