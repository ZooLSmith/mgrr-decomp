// src/unsorted/unit_00EFFCF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EFFCF0..00EFFCF0, 1 functions

#include "mgrr.h"

// 00EFFCF0  FUN_00effcf0  size=608  [run]
void __thiscall
FUN_00effcf0(int param_1,float *param_2,float *param_3,int param_4,void *param_5,undefined4 param_6,
            int param_7)

{
  float fVar1;
  float10 fVar2;
  undefined1 auStack_98 [4];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_98;
  if (param_7 == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar1 = param_3[3];
  }
  else {
    *param_2 = *param_3 + *(float *)(param_1 + 0x170);
    param_2[1] = *(float *)(param_1 + 0x174) + param_3[1];
    param_2[2] = *(float *)(param_1 + 0x178) + param_3[2];
    fVar1 = *(float *)(param_1 + 0x17c) + param_3[3];
  }
  param_2[3] = fVar1;
  if (param_4 != 0) {
    FID_conflict__memcpy(&local_60,param_5,0x40);
    local_80 = *param_2;
    local_7c = param_2[1];
    local_78 = param_2[2];
    local_74 = param_2[3];
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) {
      local_94 = local_5c * local_5c + local_60 * local_60 + local_58 * local_58;
      fVar2 = (float10)FUN_00fdef70();
      local_70 = 1.0 / (float)fVar2;
      local_94 = local_4c * local_4c + local_50 * local_50 + local_48 * local_48;
      fVar2 = (float10)FUN_00fdef70();
      local_6c = 1.0 / (float)fVar2;
      local_94 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
      fVar2 = (float10)FUN_00fdef70();
      local_94 = (float)fVar2;
      local_68 = 1.0 / local_94;
      local_90 = local_70 * local_80;
      local_8c = local_6c * local_7c;
      local_88 = local_68 * local_78;
      local_84 = local_64 * local_74;
      local_80 = local_90;
      local_7c = local_8c;
      local_78 = local_88;
      local_74 = local_84;
    }
    D3DXVec3TransformNormal(&local_90,&local_80,&local_60);
    local_90 = fStack_30 + local_90;
    local_8c = fStack_2c + local_8c;
    local_88 = fStack_28 + local_88;
    *param_2 = local_90;
    param_2[1] = local_8c;
    param_2[2] = local_88;
    param_2[3] = local_84;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_98);
  return;
}

