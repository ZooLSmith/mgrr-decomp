// src/unsorted/unit_0085F8F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F8F0..0085F9D0, 2 functions

#include "types.h"

// 0085F8F0  FUN_0085f8f0  size=223  [run]
undefined4 FUN_0085f8f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_14;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  iVar3 = FUN_00f98a90();
  iVar4 = FUN_00f98aa0();
  FUN_00d9fa80(&local_20,param_1);
  if ((((1.0 < local_14) && ((float)iVar1 * 0.5 - (float)(iVar3 / 2) < local_20)) &&
      (local_20 < (float)(iVar3 / 2) + (float)iVar1 * 0.5)) &&
     (((float)iVar2 * 0.5 - (float)(iVar4 / 2) < local_1c &&
      (local_1c < (float)(iVar4 / 2) + (float)iVar2 * 0.5)))) {
    return 1;
  }
  return 0;
}

// 0085F9D0  FUN_0085f9d0  size=971  [run]
undefined4
FUN_0085f9d0(undefined4 param_1,float *param_2,float *param_3,float *param_4,int param_5,
            undefined4 param_6,float param_7,undefined4 param_8,float *param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float *pfStack_f8;
  float fStack_f4;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_5c [88];
  
  if (param_5 != 0) {
    fStack_f4 = (float)param_6;
    pfStack_f8 = (float *)0x85f9f3;
    iVar6 = FUN_00a12210();
    if (iVar6 != 0) {
      local_d0 = *(float *)(iVar6 + 0x40);
      local_cc = *(float *)(iVar6 + 0x44);
      local_c8 = *(float *)(iVar6 + 0x48);
      local_c4 = *(float *)(iVar6 + 0x4c);
      local_90 = *param_9;
      local_8c = param_9[1];
      local_88 = param_9[2];
      local_84 = param_9[3];
      pfStack_f8 = &local_90;
      fStack_f4 = (float)(iVar6 + 0x10);
      D3DXVec3TransformNormal(pfStack_f8);
      fStack_ac = fStack_9c + fStack_dc;
      fStack_a8 = fStack_98 + fStack_d8;
      fStack_a4 = fStack_94 + fStack_d4;
      fStack_a0 = local_90 + local_d0;
      fStack_bc = 0.0;
      fStack_b8 = 1.0;
      uStack_b4 = 0;
      FUN_00ddc1d0(auStack_5c,param_10,5);
      D3DXVec3TransformNormal(&fStack_bc,&fStack_bc,auStack_5c);
      D3DXVec3TransformNormal(&local_c8,&local_c8,iVar6 + 0x10);
      fStack_7c = local_cc * param_7 * 0.5;
      fStack_78 = local_c8 * param_7 * 0.5;
      fStack_f4 = fStack_d4 * param_7 * 0.5 + local_c4;
      local_90 = local_d0 * param_7 * 0.5 + fStack_c0;
      local_8c = fStack_7c + fStack_bc;
      local_88 = fStack_78 + fStack_b8;
      fStack_a4 = local_c4 - fStack_d4 * param_7 * 0.5;
      fStack_a0 = fStack_c0 - local_d0 * param_7 * 0.5;
      fStack_9c = fStack_bc - local_cc * param_7 * 0.5;
      fStack_98 = fStack_b8 - local_c8 * param_7 * 0.5;
      fVar7 = 100.0;
      pfStack_f8 = (float *)0x0;
      fStack_e4 = 0.0;
      fStack_e0 = 0.0;
      fStack_dc = 0.0;
      fStack_d8 = 1.0;
      fStack_94 = fStack_f4;
      iVar6 = FUN_00c1cb90(param_2,param_3,&fStack_94,&fStack_a4,param_8,&pfStack_f8);
      if (iVar6 != 0) {
        fVar7 = param_3[3];
        fVar1 = param_2[3];
        fVar3 = (*param_3 - *param_2) * (float)pfStack_f8 + *param_2;
        fVar5 = (param_3[1] - param_2[1]) * (float)pfStack_f8 + param_2[1];
        fVar4 = (param_3[2] - param_2[2]) * (float)pfStack_f8 + param_2[2];
        fVar2 = param_2[3];
        *param_4 = fVar3;
        param_4[1] = fVar5;
        param_4[2] = fVar4;
        param_4[3] = (float)pfStack_f8 * (fVar7 - fVar1) + fVar2;
        fVar3 = *param_2 - fVar3;
        fVar5 = param_2[1] - fVar5;
        fVar4 = param_2[2] - fVar4;
        fVar7 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      }
      iVar6 = FUN_00c2e2d0(param_2,param_3,&fStack_94,param_8,&pfStack_f8,&fStack_e4);
      if ((iVar6 != 0) &&
         (fVar1 = SQRT((param_2[2] - fStack_dc) * (param_2[2] - fStack_dc) +
                       (*param_2 - fStack_e4) * (*param_2 - fStack_e4) +
                       (param_2[1] - fStack_e0) * (param_2[1] - fStack_e0)), fVar1 < fVar7)) {
        *param_4 = fStack_e4;
        param_4[1] = fStack_e0;
        param_4[2] = fStack_dc;
        param_4[3] = fStack_d8;
        fVar7 = fVar1;
      }
      iVar6 = FUN_00c2e2d0(param_2,param_3,&fStack_a4,param_8,&pfStack_f8,&fStack_e4);
      if ((iVar6 != 0) &&
         (SQRT((param_2[2] - fStack_dc) * (param_2[2] - fStack_dc) +
               (*param_2 - fStack_e4) * (*param_2 - fStack_e4) +
               (param_2[1] - fStack_e0) * (param_2[1] - fStack_e0)) < fVar7)) {
        *param_4 = fStack_e4;
        param_4[1] = fStack_e0;
        param_4[2] = fStack_dc;
        param_4[3] = fStack_d8;
      }
      if (((*param_4 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) {
        return 1;
      }
    }
  }
  return 0;
}

