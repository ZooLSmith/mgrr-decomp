// src/unsorted/unit_00EFC530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EFC530..00EFC630, 4 functions

#include "mgrr.h"

// 00EFC530  FUN_00efc530  size=134  [run]
void FUN_00efc530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((*(int *)param_1[5] != 0) && ((float)param_2[3] != -1.0)) &&
     ((float)param_2[3] < (float)param_2[2] != ((float)param_2[3] == (float)param_2[2]))) {
    local_14 = *(undefined4 *)*param_1;
    local_1c = *param_2;
    local_18 = param_2[1];
    local_10 = param_1[1];
    local_c = param_1[2];
    local_8 = param_1[3];
    local_4 = param_1[4];
    FUN_00edc180(&local_10,&local_1c);
    *(undefined4 *)param_1[5] = 0;
  }
  return;
}

// 00EFC5C0  FUN_00efc5c0  size=73  [run]
void __thiscall FUN_00efc5c0(int param_1,undefined4 *param_2)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x50) != 0) && (*(short *)(param_1 + 0x400) != -1)) &&
     (fVar1 = (float)(int)*(short *)(param_1 + 0x400),
     fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) {
    FUN_00edc5c0(*param_2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

// 00EFC610  FUN_00efc610  size=28  [run]
void __thiscall FUN_00efc610(int param_1,undefined4 *param_2)

{
  FUN_00edc5c0(*param_2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 00EFC630  FUN_00efc630  size=456  [run]
void __thiscall FUN_00efc630(int param_1,float *param_2,float *param_3,int param_4,void *param_5)

{
  float10 fVar1;
  undefined1 auStack_b8 [4];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b8;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  if (param_4 != 0) {
    FID_conflict__memcpy(&local_a0,param_5,0x40);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) {
      local_b4 = local_9c * local_9c + local_a0 * local_a0 + local_98 * local_98;
      fVar1 = (float10)FUN_00fdef70();
      local_b0 = 1.0 / (float)fVar1;
      local_b4 = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
      fVar1 = (float10)FUN_00fdef70();
      local_ac = 1.0 / (float)fVar1;
      local_b4 = local_7c * local_7c + local_80 * local_80 + local_78 * local_78;
      fVar1 = (float10)FUN_00fdef70();
      local_b4 = (float)fVar1;
      local_a8 = 1.0 / local_b4;
      FUN_00ddd140(local_60,&local_b0);
      D3DXMatrixMultiply(&local_a0,local_60,&local_a0);
    }
    D3DXMatrixInverse(&local_a0,0,&local_a0);
    D3DXVec3TransformNormal(param_2,param_2,&local_ac);
    *param_2 = fStack_70 + *param_2;
    param_2[1] = fStack_6c + param_2[1];
    param_2[2] = param_2[2] + fStack_68;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

