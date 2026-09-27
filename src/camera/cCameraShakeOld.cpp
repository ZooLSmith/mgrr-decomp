// src/camera/cCameraShakeOld.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DA3B10..00DB2270, 4 functions

#include "types.h"

// 00DA3B10  cCameraShakeOld::vf04  size=22  [class]
void __fastcall cCameraShakeOld::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00DA3B30  cCameraShakeOld::vf08  size=365  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCameraShakeOld::vf08(int param_1)

{
  uint uVar1;
  float10 fVar2;
  float fVar3;
  float10 fVar4;
  
  if ((((0.0 < *(float *)(param_1 + 0x18)) &&
       ((uVar1 = *(uint *)(param_1 + 4), (uVar1 & 8) == 0 || (0.0 <= *(float *)(param_1 + 0x1c)))))
      && (((uVar1 & 4) == 0 ||
          ((0.05 <= *(float *)(param_1 + 0x24) && (0.05 <= *(float *)(param_1 + 0x28))))))) &&
     (((uVar1 & 0xc) != 0 ||
      (((0.05 <= *(float *)(param_1 + 0x24) && (0.05 <= *(float *)(param_1 + 0x28))) &&
       (0.0 <= *(float *)(param_1 + 0x1c))))))) {
    if (0.0 < *(float *)(param_1 + 0x1c) != (*(float *)(param_1 + 0x1c) == 0.0)) {
      *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) - _DAT_01be942c;
    }
    fVar3 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18);
    if (fVar3 < *(float *)(param_1 + 0xc) != (fVar3 == *(float *)(param_1 + 0xc))) {
      fVar4 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      *(float *)(param_1 + 0x10) = (float)fVar4;
      fVar2 = (float10)0;
      if (fVar4 <= fVar2) {
        *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
      }
      if (fVar2 < (float10)*(float *)(param_1 + 0x10) !=
          (fVar2 == (float10)*(float *)(param_1 + 0x10))) {
        *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
      }
      fVar4 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      *(float *)(param_1 + 0x14) = (float)fVar4;
      fVar2 = (float10)0;
      if (fVar4 <= fVar2) {
        *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
      }
      if (fVar2 < (float10)*(float *)(param_1 + 0x14) !=
          (fVar2 == (float10)*(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      }
      *(float *)(param_1 + 0xc) = (float)fVar2;
      if ((float10)*(float *)(param_1 + 0x20) != fVar2) {
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20);
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x20);
      }
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DA3CA0  cCameraShakeOld::vf0C  size=543  [class]
void __thiscall
cCameraShakeOld::vf0C
          (int param_1,float *param_2,undefined4 *param_3,float *param_4,float *param_5,
          undefined4 param_6)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  undefined4 *puStack_e8;
  float *pfStack_e4;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc [21];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_50 [19];
  
  local_cc[0x11] = 0.0;
  local_cc[0x10] = 0.0;
  local_cc[0xf] = 0.0;
  local_cc[0xe] = 0.0;
  pfStack_e4 = (float *)0x0;
  local_cc[0xc] = 0.0;
  local_cc[0xb] = 0.0;
  local_cc[10] = 0.0;
  local_cc[9] = 0.0;
  local_cc[7] = 0.0;
  local_cc[6] = 0.0;
  local_cc[5] = 0.0;
  local_cc[4] = 0.0;
  local_cc[0x12] = 1.0;
  local_cc[0xd] = 1.0;
  local_cc[8] = 1.0;
  local_cc[3] = 1.0;
  local_d0 = *(float *)(param_1 + 0x24) * 0.1 * *(float *)(param_1 + 0x10);
  local_cc[0] = *(float *)(param_1 + 0x28) * 0.1 * *(float *)(param_1 + 0x14);
  local_cc[1] = 0.0;
  local_70 = 0;
  puStack_e8 = &local_70;
  fVar2 = (float10)fpatan((float10)*param_4 - (float10)*param_5,
                          (float10)param_4[2] - (float10)param_5[2]);
  local_6c = (float)fVar2;
  local_68 = 0;
  thunk_FUN_00ddc1d0(local_50);
  pfVar3 = local_cc + 3;
  puStack_e8 = local_50;
  pfStack_e4 = pfVar3;
  D3DXMatrixMultiply();
  D3DXVec3TransformNormal(auStack_dc);
  puStack_e8 = (undefined4 *)(local_cc[9] + (float)puStack_e8);
  pfStack_e4 = (float *)((float)pfStack_e4 + local_cc[10]);
  local_cc[0xb] = 0.0;
  local_cc[10] = 0.0;
  local_cc[9] = 0.0;
  local_cc[8] = 0.0;
  local_cc[6] = 0.0;
  local_cc[5] = 0.0;
  local_cc[4] = 0.0;
  local_cc[3] = 0.0;
  local_cc[1] = 0.0;
  local_cc[0] = 0.0;
  local_d0 = 0.0;
  uStack_d4 = 0;
  local_cc[0xc] = 1.0;
  local_cc[7] = 1.0;
  local_cc[2] = 1.0;
  uStack_d8 = 0x3f800000;
  uStack_74 = 0x3f800000;
  local_cc[0xf] = 1.0;
  uStack_78 = 0;
  local_70 = 0;
  local_cc[0xd] = 0.0;
  local_cc[0xe] = 0.0;
  FUN_00de2bc0(&uStack_d8,&uStack_78,param_6,local_cc + 0xd,0x3f800000,0x40490fdb);
  D3DXVec3TransformNormal(&puStack_e8,&puStack_e8,&uStack_d8);
  fVar1 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0xc)) {
    fVar1 = (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18)) - *(float *)(param_1 + 0xc);
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 / *(float *)(param_1 + 0x18);
  *param_2 = (local_cc[6] + (float)auStack_dc) * fVar1;
  param_2[1] = ((float)local_cc + local_cc[7]) * fVar1;
  param_2[2] = ((float)pfVar3 + local_cc[8]) * fVar1;
  param_2[3] = fVar1 * (float)puStack_e8;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0x3f800000;
  return;
}

// 00DB2270  cCameraShakeOld::vf00  size=31  [class]
undefined4 * __thiscall cCameraShakeOld::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCameraShake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

