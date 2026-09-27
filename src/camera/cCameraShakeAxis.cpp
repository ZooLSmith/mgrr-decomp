// src/camera/cCameraShakeAxis.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DA3ED0..00DBB7E0, 4 functions

#include "types.h"

// 00DA3ED0  cCameraShakeAxis::vf04  size=25  [class]
void __fastcall cCameraShakeAxis::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 00DA3EF0  cCameraShakeAxis::vf08  size=34  [class]
void __fastcall cCameraShakeAxis::vf08(int param_1)

{
  if (*(char *)(param_1 + 9) != '\x01') {
    cCameraShakeOld::vf08();
    return;
  }
  if ((*(uint *)(param_1 + 4) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  return;
}

// 00DA3F20  cCameraShakeAxis::vf0C  size=354  [class]
void __thiscall
cCameraShakeAxis::vf0C
          (int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
          undefined4 param_6)

{
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(char *)(param_1 + 9) != '\x01') {
    cCameraShakeOld::vf0C(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  local_b0 = *(undefined4 *)(param_1 + 0x2c);
  local_ac = *(undefined4 *)(param_1 + 0x30);
  local_a8 = *(undefined4 *)(param_1 + 0x34);
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0.0;
  local_84 = 0.0;
  local_88 = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_98 = 0;
  local_9c = 0;
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  local_8c = 1.0;
  local_a0 = 0x3f800000;
  local_60 = 0;
  fVar1 = (float10)fpatan((float10)*param_4 - (float10)*param_5,
                          (float10)param_4[2] - (float10)param_5[2]);
  local_5c = (float)fVar1;
  local_58 = 0;
  thunk_FUN_00ddc1d0(local_50,&local_60,0);
  puVar3 = &local_a0;
  puVar2 = local_50;
  D3DXMatrixMultiply(puVar3);
  D3DXVec3TransformNormal(&stack0xffffff44,&stack0xffffff44,&local_ac);
  *param_2 = local_88 + (float)puVar2;
  param_2[1] = local_84 + (float)puVar3;
  param_2[2] = local_80 + unaff_EDI;
  param_2[3] = unaff_ESI;
  *param_3 = *(float *)(param_1 + 0x38);
  param_3[1] = *(float *)(param_1 + 0x3c);
  param_3[2] = *(float *)(param_1 + 0x40);
  D3DXVec3TransformNormal(param_3,param_3,auStack_b8);
  *param_3 = *param_3 + local_94;
  param_3[1] = param_3[1] + local_90;
  param_3[2] = param_3[2] + local_8c;
  return;
}

// 00DBB7E0  cCameraShakeAxis::vf00  size=31  [class]
undefined4 * __thiscall cCameraShakeAxis::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCameraShake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

