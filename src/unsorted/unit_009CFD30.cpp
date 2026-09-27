// src/unsorted/unit_009CFD30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFD30..009CFDD0, 2 functions

#include "mgrr.h"

// 009CFD30  FUN_009cfd30  size=157  [run]
void __thiscall FUN_009cfd30(int param_1,float *param_2)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return;
  }
  local_20 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_1c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_18 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_14 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  D3DXVec3TransformNormal(param_2,&local_20,iVar1 + 0x10);
  *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
  param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
  param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
  return;
}

// 009CFDD0  FUN_009cfdd0  size=151  [run]
void __fastcall FUN_009cfdd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x470) - *(float *)(param_1 + 400);
  fVar3 = *(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x194);
  fVar2 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x198);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = *(float *)(param_1 + 0x488) * *(float *)(param_1 + 0x100);
  fVar2 = *(float *)(param_1 + 0x48c) * *(float *)(param_1 + 0x104);
  if (*(int *)(param_1 + 0x484) == 0) {
    if (fVar1 < fVar3) {
      *(float *)(param_1 + 0x100) = (fVar1 / fVar3) * *(float *)(param_1 + 0x100);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x484) == 1) && (fVar1 < fVar2)) {
    *(float *)(param_1 + 0x104) = (fVar1 / fVar2) * *(float *)(param_1 + 0x104);
    return;
  }
  return;
}

