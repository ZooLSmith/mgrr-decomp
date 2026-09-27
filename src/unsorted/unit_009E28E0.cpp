// src/unsorted/unit_009E28E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E28E0..009E28E0, 1 functions

#include "mgrr.h"

// 009E28E0  FUN_009e28e0  size=343  [run]
undefined4 __thiscall FUN_009e28e0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  
  *param_2 = *(float *)(param_1 + 0x150);
  param_2[1] = *(float *)(param_1 + 0x154);
  param_2[2] = *(float *)(param_1 + 0x158);
  param_2[3] = *(float *)(param_1 + 0x15c);
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x84);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x68) & 0x40) != 0)) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar3 + 0x48);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar3 + 0x4c);
      *param_2 = *(float *)(param_1 + 0x150);
      param_2[1] = *(float *)(param_1 + 0x154);
      param_2[2] = *(float *)(param_1 + 0x158);
      param_2[3] = *(float *)(param_1 + 0x15c);
    }
    if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] != 0.0)
    goto LAB_009e2a27;
    puVar7 = &DAT_0165ab20;
  }
  else {
    if (*(int *)(param_1 + 0x4fc) != 0) {
      *(undefined4 *)(param_1 + 0x4fc) = 0;
      return 0;
    }
    fVar1 = *(float *)(iVar3 + 0x4c);
    fVar4 = *(float *)(iVar3 + 0x40) - *(float *)(param_1 + 0x4a0);
    fVar6 = *(float *)(iVar3 + 0x44) - *(float *)(param_1 + 0x4a4);
    fVar5 = *(float *)(iVar3 + 0x48) - *(float *)(param_1 + 0x4a8);
    fVar2 = *(float *)(param_1 + 0x4ac);
    *param_2 = fVar4;
    param_2[1] = fVar6;
    param_2[2] = fVar5;
    param_2[3] = fVar1 - fVar2;
    if (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6 != 0.0) {
LAB_009e2a27:
      FUN_00edfd80();
      return 1;
    }
    puVar7 = &DAT_0165ab5c;
  }
  FUN_009cca90(param_1,puVar7);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return 0;
}

