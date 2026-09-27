// src/unsorted/unit_00EE2540.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EE2540..00EE2800, 2 functions

#include "mgrr.h"

// 00EE2540  FUN_00ee2540  size=698  [run]
undefined4 __thiscall FUN_00ee2540(int param_1,float *param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar3 = (float)(int)*(short *)(param_4 + 0x17c) + (float)(int)*(short *)(param_4 + 0xea);
  fVar1 = (float)(int)*(short *)(param_4 + 0xe8) + (float)(int)*(short *)(param_4 + 0xea);
  if (((*(byte *)(param_1 + 0x3f) & 1) == 0) && ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    if (fVar1 < param_3) {
      fVar1 = *(float *)(param_1 + 0x110);
      if (fVar1 == 1.0) {
        fVar2 = *(float *)(param_5 + 0x10);
      }
      else {
        fVar2 = *(float *)(param_5 + 0x10);
        if (fVar2 < 2.0) {
          fVar2 = fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2);
        }
        else {
          fVar4 = (float10)FUN_00fdc1f0();
          fVar2 = (float)fVar4;
        }
      }
      param_2[3] = fVar2 * param_2[3];
    }
    if ((fVar3 < param_3) && ((*(uint *)(param_1 + 0x30) & 0x800) == 0)) {
      fVar3 = *(float *)(param_1 + 0x110);
      if (fVar3 == 1.0) {
        fVar1 = *(float *)(param_4 + 0xec);
      }
      else {
        fVar1 = *(float *)(param_4 + 0xec);
        if (fVar1 < 2.0) {
          fVar1 = fVar1 / ((fVar3 - fVar1 * fVar3) + fVar1);
        }
        else {
          fVar4 = (float10)FUN_00fdc1f0();
          fVar1 = (float)fVar4;
        }
      }
      *param_2 = *param_2 * fVar1;
      fVar3 = *(float *)(param_1 + 0x110);
      if (fVar3 == 1.0) {
        fVar1 = *(float *)(param_4 + 0xf0);
      }
      else {
        fVar1 = *(float *)(param_4 + 0xf0);
        if (fVar1 < 2.0) {
          fVar1 = fVar1 / ((fVar3 - fVar1 * fVar3) + fVar1);
        }
        else {
          fVar4 = (float10)FUN_00fdc1f0();
          fVar1 = (float)fVar4;
        }
      }
      param_2[1] = param_2[1] * fVar1;
      fVar3 = *(float *)(param_1 + 0x110);
      if (fVar3 == 1.0) {
        fVar1 = *(float *)(param_4 + 0xf4);
      }
      else {
        fVar1 = *(float *)(param_4 + 0xf4);
        if (fVar1 < 2.0) {
          fVar1 = fVar1 / ((fVar3 - fVar1 * fVar3) + fVar1);
        }
        else {
          fVar4 = (float10)FUN_00fdc1f0();
          fVar1 = (float)fVar4;
        }
      }
      param_2[2] = param_2[2] * fVar1;
    }
  }
  else {
    if (fVar1 < param_3) {
      param_2[3] = *(float *)(param_5 + 0x10) * param_2[3];
    }
    if ((fVar3 < param_3) && ((*(uint *)(param_1 + 0x30) & 0x800) == 0)) {
      *param_2 = *param_2 * *(float *)(param_4 + 0xec);
      param_2[1] = *(float *)(param_4 + 0xf0) * param_2[1];
      param_2[2] = *(float *)(param_4 + 0xf4) * param_2[2];
      return 1;
    }
  }
  return 1;
}

// 00EE2800  FUN_00ee2800  size=457  [run]
undefined4 __thiscall
FUN_00ee2800(int param_1,float *param_2,float param_3,int param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 0.0;
  uVar4 = (uint)*(ushort *)(param_4 + 0x13c);
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (*(ushort *)(param_4 + 0x13c) == 0) {
    uVar4 = *(uint *)(param_1 + 0x120);
  }
  fVar2 = (float)(int)uVar4;
  if (fVar2 == 0.0) {
    return 1;
  }
  if ((*(uint *)(param_4 + 0x140) & 0x80000000) == 0) {
    if (fVar2 < param_3) {
      param_3 = fVar2;
    }
  }
  else {
    fVar5 = (float10)FUN_00fe090a();
    param_3 = (float)fVar5;
  }
  param_3 = param_3 / fVar2;
  uVar4 = 0;
  while( true ) {
    fVar2 = *(float *)(param_4 + 0xec + uVar4 * 4);
    if (1.0 < fVar2 != (fVar2 == 1.0)) {
      iVar1 = param_4 + 0xec + uVar4 * 0x10;
      local_10 = *(float *)(iVar1 + 0x10);
      local_c = *(float *)(iVar1 + 0x14);
      local_8 = *(float *)(iVar1 + 0x18);
      local_4 = *(float *)(iVar1 + 0x1c);
      goto LAB_00ee2981;
    }
    fVar2 = *(float *)(param_4 + 0xec + uVar4 * 4);
    if ((fVar2 < param_3 != (fVar2 == param_3)) &&
       (param_3 < *(float *)(param_4 + 0xf0 + uVar4 * 4))) break;
    uVar4 = uVar4 + 1;
    if (3 < uVar4) {
LAB_00ee2981:
      *param_2 = *param_5 * local_10;
      param_2[1] = param_5[1] * local_c;
      param_2[2] = param_5[2] * local_8;
      param_2[3] = param_5[3] * local_4;
      return 1;
    }
  }
  iVar1 = param_4 + 0xec + uVar4 * 0x10;
  fVar2 = (param_3 - *(float *)(param_4 + 0xec + uVar4 * 4)) /
          (*(float *)(param_4 + 0xf0 + uVar4 * 4) - *(float *)(param_4 + 0xec + uVar4 * 4));
  fVar3 = 1.0 - fVar2;
  local_10 = *(float *)(param_4 + 0xec + (uVar4 + 2) * 0x10) * fVar2 +
             fVar3 * *(float *)(iVar1 + 0x10);
  local_c = *(float *)(iVar1 + 0x24) * fVar2 + *(float *)(iVar1 + 0x14) * fVar3;
  local_8 = *(float *)(iVar1 + 0x28) * fVar2 + *(float *)(iVar1 + 0x18) * fVar3;
  local_4 = fVar3 * *(float *)(iVar1 + 0x1c) + *(float *)(iVar1 + 0x2c) * fVar2;
  goto LAB_00ee2981;
}

