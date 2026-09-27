// src/unsorted/unit_00CB7FE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7FE0..00CB7FE0, 1 functions

#include "mgrr.h"

// 00CB7FE0  FUN_00cb7fe0  size=176  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cb7fe0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = FUN_00d9fa80(&local_20,param_2);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = local_1c;
  fVar1 = *(float *)(DAT_01dc1490 + 0x40) - *param_2;
  fVar3 = *(float *)(DAT_01dc1490 + 0x44) - param_2[1];
  fVar2 = *(float *)(DAT_01dc1490 + 0x48) - param_2[2];
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar1 < _DAT_018b63cc) {
    fVar1 = _DAT_018b63cc;
  }
  if (_DAT_018b63c8 < fVar1) {
    fVar1 = _DAT_018b63c8;
  }
  *(float *)(param_1 + 0x68) =
       ((1.0 - (fVar1 - _DAT_018b63cc) / (_DAT_018b63c8 - _DAT_018b63cc)) + 1.0) * 0.5;
  return;
}

