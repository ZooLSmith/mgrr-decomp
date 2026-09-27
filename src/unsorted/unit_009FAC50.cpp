// src/unsorted/unit_009FAC50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009FAC50..009FC610, 15 functions

#include "mgrr.h"

// 009FAC50  FUN_009fac50  size=138  [run]
void __fastcall FUN_009fac50(undefined4 *param_1)

{
  param_1[1] = 0x3f333333;
  *param_1 = 0;
  param_1[2] = 0x3f666666;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)((int)param_1 + 0x12) = 1;
  param_1[3] = 0x3dcccccd;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xbc23d70a;
  param_1[8] = 0;
  param_1[9] = 0xfffffffe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0x3fc00000;
  return;
}

// 009FAD80  FUN_009fad80  size=36  [run]
undefined4 __fastcall FUN_009fad80(int param_1)

{
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_1 + 0xbc8) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_009f79c0(0);
  return extraout_ECX;
}

// 009FADB0  FUN_009fadb0  size=507  [run]
/* WARNING: Removing unreachable block (ram,0x009faef0) */
/* WARNING: Removing unreachable block (ram,0x009faef2) */
/* WARNING: Removing unreachable block (ram,0x009faef4) */

void __thiscall FUN_009fadb0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int local_2c;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_3 = *(float *)(param_1 + 0xb14) * param_3;
  local_24 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_2c = 0;
    do {
      local_18 = 0.0;
      iVar4 = *(int *)(param_1 + 0x28) + local_2c;
      local_20 = *(float *)(param_2 + 0x50) - *(float *)(iVar4 + 0x30);
      local_1c = *(float *)(param_2 + 0x54) - *(float *)(iVar4 + 0x34);
      fVar1 = *(float *)(param_2 + 0x58) - *(float *)(iVar4 + 0x38);
      local_14 = *(float *)(param_2 + 0x5c) - *(float *)(iVar4 + 0x3c);
      fVar3 = fVar1 * fVar1 + local_20 * local_20 + local_1c * local_1c;
      fVar2 = *(float *)(iVar4 + 0xc) + param_3;
      if (fVar3 <= fVar2 * fVar2) {
        if (fVar3 == 0.0) {
          local_20 = *(float *)(param_2 + 0x30);
          local_1c = *(float *)(param_2 + 0x34);
          fVar1 = *(float *)(param_2 + 0x38);
          local_14 = *(float *)(param_2 + 0x3c);
        }
        fVar2 = ((*(float *)(iVar4 + 0xc) + param_3) - SQRT(fVar3)) * param_4 + SQRT(fVar3);
        if (fVar1 * fVar1 + local_20 * local_20 + local_1c * local_1c <= 0.0) {
          local_1c = 1.0;
          local_20 = local_18;
        }
        else {
          local_18 = fVar1;
          FUN_00ddf460(&local_20,&local_20);
        }
        *(float *)(param_2 + 0x50) = *(float *)(iVar4 + 0x30) + local_20 * fVar2;
        *(float *)(param_2 + 0x54) = *(float *)(iVar4 + 0x34) + local_1c * fVar2;
        *(float *)(param_2 + 0x58) = *(float *)(iVar4 + 0x38) + local_18 * fVar2;
        *(float *)(param_2 + 0x5c) = local_14 * fVar2 + *(float *)(iVar4 + 0x3c);
      }
      local_2c = local_2c + 0x40;
      local_24 = local_24 + 1;
    } while (local_24 < *(uint *)(param_1 + 0x24));
  }
  return;
}

// 009FAFB0  FUN_009fafb0  size=597  [run]
/* WARNING: Removing unreachable block (ram,0x009fb11e) */
/* WARNING: Removing unreachable block (ram,0x009fb120) */
/* WARNING: Removing unreachable block (ram,0x009fb122) */

float * __thiscall
FUN_009fafb0(int param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  fVar1 = *param_3;
  uVar6 = 0;
  fVar2 = param_3[1];
  local_18 = param_3[2];
  local_14 = param_3[3];
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_4 = *(float *)(param_1 + 0xb14) * param_4;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_34 = 0;
    do {
      fVar3 = 0.0;
      iVar7 = *(int *)(param_1 + 0x28) + local_34;
      local_30 = fVar1 - *(float *)(iVar7 + 0x30);
      local_2c = fVar2 - *(float *)(iVar7 + 0x34);
      local_28 = local_18 - *(float *)(iVar7 + 0x38);
      local_24 = local_14 - *(float *)(iVar7 + 0x3c);
      fVar4 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      fVar5 = *(float *)(iVar7 + 0xc) + param_4;
      if (fVar4 <= fVar5 * fVar5) {
        if (fVar4 == 0.0) {
          local_30 = 0.0;
          local_2c = 0.0;
          local_28 = 1.0;
          local_24 = local_14;
        }
        fVar4 = ((*(float *)(iVar7 + 0xc) + param_4) - SQRT(fVar4)) * param_5 + SQRT(fVar4);
        if (local_28 * local_28 + local_30 * local_30 + local_2c * local_2c <= 0.0) {
          local_2c = 1.0;
          local_24 = local_14;
          local_30 = fVar3;
        }
        else {
          FUN_00ddf460(&local_30,&local_30);
          fVar3 = local_28;
        }
        fVar1 = *(float *)(iVar7 + 0x30) + local_30 * fVar4;
        fVar2 = local_2c * fVar4 + *(float *)(iVar7 + 0x34);
        local_18 = fVar3 * fVar4 + *(float *)(iVar7 + 0x38);
        local_14 = local_24 * fVar4 + *(float *)(iVar7 + 0x3c);
      }
      local_34 = local_34 + 0x40;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x24));
  }
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *param_2 = fVar1 - *param_3;
  param_2[1] = fVar2 - fVar3;
  param_2[2] = local_18 - fVar4;
  param_2[3] = local_14 - fVar5;
  return param_2;
}

// 009FB210  FUN_009fb210  size=867  [run]
/* WARNING: Removing unreachable block (ram,0x009fb3ba) */
/* WARNING: Removing unreachable block (ram,0x009fb3bc) */
/* WARNING: Removing unreachable block (ram,0x009fb3be) */

void __thiscall
FUN_009fb210(int param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int local_54;
  uint local_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_5 = *(float *)(param_1 + 0xb14) * param_5;
  local_30 = (*param_4 + *param_2 + *param_3) * 0.33333334;
  local_2c = (param_4[1] + param_3[1] + param_2[1]) * 0.33333334;
  local_28 = (param_3[2] + param_2[2] + param_4[2]) * 0.33333334;
  fVar2 = (local_30 - *param_2) * (local_30 - *param_2) +
          (local_2c - param_2[1]) * (local_2c - param_2[1]) +
          (local_28 - param_2[2]) * (local_28 - param_2[2]);
  fVar1 = (local_28 - param_3[2]) * (local_28 - param_3[2]) +
          (local_2c - param_3[1]) * (local_2c - param_3[1]) +
          (local_30 - *param_3) * (local_30 - *param_3);
  if (fVar2 < fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (local_28 - param_4[2]) * (local_28 - param_4[2]) +
          (local_2c - param_4[1]) * (local_2c - param_4[1]) +
          (local_30 - *param_4) * (local_30 - *param_4);
  if (fVar2 < fVar1) {
    fVar2 = fVar1;
  }
  local_40 = (param_4[2] - param_2[2]) * (param_3[1] - param_2[1]) -
             (param_4[1] - param_2[1]) * (param_3[2] - param_2[2]);
  local_3c = (param_3[2] - param_2[2]) * (*param_4 - *param_2) -
             (param_4[2] - param_2[2]) * (*param_3 - *param_2);
  local_38 = (param_4[1] - param_2[1]) * (*param_3 - *param_2) -
             (param_3[1] - param_2[1]) * (*param_4 - *param_2);
  if ((((local_40 == 0.0) && (local_3c == 0.0)) && (local_38 == 0.0)) ||
     (local_38 * local_38 + local_40 * local_40 + local_3c * local_3c <= 0.0)) {
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
    local_34 = local_14;
  }
  else {
    FUN_00ddf460(&local_40,&local_40);
  }
  local_50 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_54 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x28) + local_54;
      fVar3 = local_30 - *(float *)(iVar6 + 0x30);
      fVar4 = local_2c - *(float *)(iVar6 + 0x34);
      fVar5 = local_28 - *(float *)(iVar6 + 0x38);
      fVar1 = SQRT(fVar2) + *(float *)(iVar6 + 0xc) + param_5;
      if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 <= fVar1 * fVar1) {
        FUN_00d90bf0(&local_20,(float *)(iVar6 + 0x30),param_2,param_3,param_4);
        fVar1 = local_20 - *(float *)(iVar6 + 0x30);
        fVar3 = local_1c - *(float *)(iVar6 + 0x34);
        fVar4 = local_18 - *(float *)(iVar6 + 0x38);
        fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
        fVar1 = param_5 + *(float *)(iVar6 + 0xc);
        if (fVar3 <= fVar1 * fVar1) {
          fVar1 = (fVar1 - SQRT(fVar3)) * param_6;
          local_40 = local_40 * fVar1;
          local_3c = fVar1 * local_3c;
          local_38 = fVar1 * local_38;
          local_34 = local_34 * fVar1;
          *param_2 = *param_2 + local_40;
          param_2[1] = param_2[1] + local_3c;
          param_2[2] = local_38 + param_2[2];
          param_2[3] = param_2[3] + local_34;
          *param_3 = *param_3 + local_40;
          param_3[1] = param_3[1] + local_3c;
          param_3[2] = param_3[2] + local_38;
          param_3[3] = param_3[3] + local_34;
          *param_4 = *param_4 + local_40;
          param_4[1] = local_3c + param_4[1];
          param_4[2] = param_4[2] + local_38;
          param_4[3] = local_34 + param_4[3];
        }
      }
      local_54 = local_54 + 0x40;
      local_50 = local_50 + 1;
    } while (local_50 < *(uint *)(param_1 + 0x24));
  }
  return;
}

// 009FB580  FUN_009fb580  size=503  [run]
/* WARNING: Removing unreachable block (ram,0x009fb6dc) */
/* WARNING: Removing unreachable block (ram,0x009fb6de) */
/* WARNING: Removing unreachable block (ram,0x009fb6e0) */

void __thiscall FUN_009fb580(int param_1,int param_2,int *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (0.0 < (float)param_3[0x1d]) {
    if (*param_3 == 1) {
      fVar3 = (float)param_3[0x19];
      fVar1 = (float)param_3[0x1a];
      fVar2 = (float)param_3[0x1b];
      *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + (float)param_3[0x18] * param_4;
      *(float *)(param_2 + 0x54) = fVar3 * param_4 + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) = fVar1 * param_4 + *(float *)(param_2 + 0x58);
      *(float *)(param_2 + 0x5c) = fVar2 * param_4 + *(float *)(param_2 + 0x5c);
      return;
    }
    local_20 = *(float *)(param_2 + 0x50) - (float)param_3[0x14];
    local_1c = *(float *)(param_2 + 0x54) - (float)param_3[0x15];
    local_18 = *(float *)(param_2 + 0x58) - (float)param_3[0x16];
    local_14 = *(float *)(param_2 + 0x5c) - (float)param_3[0x17];
    fVar3 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    if (((float)param_3[0xc] * (float)param_3[0xc] < fVar3) || (fVar3 == 0.0)) {
      return;
    }
    fVar1 = (float)param_3[0xc];
    fVar2 = (float)param_3[0x1d];
    if (fVar3 <= 0.0) {
      local_18 = 0.0;
      local_1c = 1.0;
      local_20 = 0.0;
    }
    else {
      FUN_00ddf460(&local_20,&local_20);
    }
    if (0.0 <= (float)param_3[0x1a] * local_18 +
               (float)param_3[0x18] * local_20 + (float)param_3[0x19] * local_1c) {
      fVar3 = (fVar1 - SQRT(fVar3)) * fVar2 * param_4 * *(float *)(param_1 + 0xb88);
      *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + fVar3 * local_20;
      *(float *)(param_2 + 0x54) = local_1c * fVar3 + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) = local_18 * fVar3 + *(float *)(param_2 + 0x58);
      *(float *)(param_2 + 0x5c) = fVar3 * local_14 + *(float *)(param_2 + 0x5c);
      return;
    }
  }
  return;
}

// 009FB780  FUN_009fb780  size=527  [run]
/* WARNING: Removing unreachable block (ram,0x009fb89f) */
/* WARNING: Removing unreachable block (ram,0x009fb8a1) */

void __thiscall FUN_009fb780(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0xba4) != 0)) {
    pfVar6 = (float *)(param_1 + 0xa28);
    iVar5 = 2;
    do {
      local_18 = 0.0;
      if (0.0 < pfVar6[7]) {
        if (pfVar6[-0x16] == 1.4013e-45) {
          fVar3 = pfVar6[3];
          fVar4 = pfVar6[4];
          fVar1 = pfVar6[5];
          *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + pfVar6[2] * param_3;
          *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) + fVar3 * param_3;
          *(float *)(param_2 + 0x58) = fVar4 * param_3 + *(float *)(param_2 + 0x58);
          *(float *)(param_2 + 0x5c) = fVar1 * param_3 + *(float *)(param_2 + 0x5c);
        }
        else {
          local_20 = *(float *)(param_2 + 0x50) - pfVar6[-2];
          local_1c = *(float *)(param_2 + 0x54) - pfVar6[-1];
          fVar4 = *(float *)(param_2 + 0x58) - *pfVar6;
          local_14 = *(float *)(param_2 + 0x5c) - pfVar6[1];
          fVar3 = local_1c * local_1c + local_20 * local_20 + fVar4 * fVar4;
          if ((fVar3 <= pfVar6[-10] * pfVar6[-10]) && (fVar3 != 0.0)) {
            fVar1 = pfVar6[-10];
            fVar2 = pfVar6[7];
            if (fVar3 <= 0.0) {
              local_1c = 1.0;
              local_20 = local_18;
            }
            else {
              local_18 = fVar4;
              FUN_00ddf460(&local_20,&local_20);
            }
            if (0.0 <= pfVar6[4] * local_18 + pfVar6[3] * local_1c + pfVar6[2] * local_20) {
              fVar3 = (fVar1 - SQRT(fVar3)) * fVar2 * param_3 * *(float *)(param_1 + 0xb88);
              *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + fVar3 * local_20;
              *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) + fVar3 * local_1c;
              *(float *)(param_2 + 0x58) = fVar3 * local_18 + *(float *)(param_2 + 0x58);
              *(float *)(param_2 + 0x5c) = fVar3 * local_14 + *(float *)(param_2 + 0x5c);
            }
          }
        }
      }
      pfVar6 = pfVar6 + 0x24;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

// 009FB990  FUN_009fb990  size=392  [run]
void __fastcall FUN_009fb990(int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int local_30;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if (((*param_1 != 0) && (param_1[6] != 0)) && (param_1[700] != 0)) {
    param_1[0x2c5] = *(int *)(param_1[700] + 0x74);
    iVar3 = FUN_00a12210(param_1[0x2e6]);
    if (iVar3 != 0) {
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
      D3DXVec3TransformNormal(&local_20,&local_20,iVar3 + 0x10);
      param_1[0x2c5] = (int)SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c);
    }
    local_28 = 0;
    if (param_1[6] != 0) {
      local_30 = 0;
      do {
        puVar4 = (undefined2 *)(param_1[7] + local_30);
        iVar3 = FUN_00a12210(*puVar4);
        if (iVar3 == 0) {
          return;
        }
        fStack_14 = (float)param_1[0x2c5];
        local_20 = *(float *)(puVar4 + 0x10) * fStack_14;
        pfVar1 = (float *)(puVar4 + 0x28);
        local_1c = *(float *)(puVar4 + 0x12) * fStack_14;
        local_18 = *(float *)(puVar4 + 0x14) * fStack_14;
        fStack_14 = fStack_14 * *(float *)(puVar4 + 0x16);
        D3DXVec3TransformNormal(pfVar1,&local_20,iVar3 + 0x10);
        *pfVar1 = *pfVar1 + *(float *)(iVar3 + 0x40);
        *(float *)(puVar4 + 0x2a) = *(float *)(iVar3 + 0x44) + *(float *)(puVar4 + 0x2a);
        *(float *)(puVar4 + 0x2c) = *(float *)(iVar3 + 0x48) + *(float *)(puVar4 + 0x2c);
        puVar2 = *(undefined4 **)(puVar4 + 0x58);
        if ((puVar2 != (undefined4 *)0x0) && (puVar4[1] != 0xfff)) {
          *puVar2 = *(undefined4 *)(iVar3 + 0x40);
          puVar2[1] = *(undefined4 *)(iVar3 + 0x44);
          puVar2[2] = *(undefined4 *)(iVar3 + 0x48);
          puVar2[3] = *(undefined4 *)(iVar3 + 0x4c);
        }
        *(undefined4 *)(puVar4 + 0x20) = 0;
        local_30 = local_30 + 0x100;
        *(undefined4 *)(puVar4 + 0x22) = 0;
        *(undefined4 *)(puVar4 + 0x24) = 0;
        local_28 = local_28 + 1;
        *(float *)(puVar4 + 0x26) = fStack_14;
      } while (local_28 < (uint)param_1[6]);
    }
    param_1[0x2f5] = 0;
  }
  return;
}

// 009FBB20  FUN_009fbb20  size=296  [run]
undefined4 __thiscall FUN_009fbb20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 0x2c) = param_4;
    if (param_4 != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x48);
      puVar2 = (undefined4 *)(param_3 + 0x10);
      iVar3 = param_4;
      do {
        puVar1[-6] = puVar2[-4];
        puVar1[-5] = puVar2[-3];
        puVar1[-2] = puVar2[-2];
        iVar3 = iVar3 + -1;
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
        puVar1[1] = 0x3f800000;
        puVar1[2] = puVar2[1];
        puVar1[3] = puVar2[2];
        puVar1[4] = puVar2[3];
        puVar1[5] = 0x3f800000;
        puVar1[6] = puVar2[4];
        puVar1[7] = puVar2[5];
        puVar1[8] = puVar2[6];
        puVar1[9] = puVar2[7];
        puVar1[10] = puVar2[8];
        puVar1[0xb] = puVar2[9];
        puVar1[0x19] = puVar2[10];
        puVar1[0x1a] = puVar2[0xb];
        puVar1[0x1c] = puVar2[0xc];
        puVar1[0x1b] = 0;
        puVar1[0xc] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = local_14;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = local_14;
        puVar1[0x16] = 0;
        puVar1[0x18] = 0;
        puVar1 = puVar1 + 0x24;
        puVar2 = puVar2 + 0x11;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x930) = param_4;
    *(undefined4 *)(param_1 + 0xb00) = param_2;
    *(int *)(param_1 + 0x934) = param_3;
    return 1;
  }
  return 0;
}

// 009FBC50  FUN_009fbc50  size=372  [run]
void __fastcall FUN_009fbc50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iStack_40;
  float local_3c;
  float local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0xafc) != 0)) {
    if ((*(byte *)(*(int *)(param_1 + 0xafc) + 0x4c8) & 3) != 0) {
      *(undefined4 *)(param_1 + 0xafc) = 0;
      return;
    }
    local_38 = 0.0;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_3c = 0.0;
      do {
        puVar5 = (undefined2 *)(*(int *)(param_1 + 0x28) + (int)local_3c);
        iVar3 = FUN_00a12210(*puVar5);
        iVar4 = FUN_00a12210(puVar5[1]);
        if (iVar3 == 0) {
          return;
        }
        if (iVar4 == 0) {
          return;
        }
        D3DXVec3TransformNormal(&local_30,puVar5 + 8,iVar3 + 0x10);
        fVar1 = *(float *)(iVar3 + 0x40);
        fVar2 = *(float *)(iVar3 + 0x44);
        D3DXVec3TransformNormal(&fStack_2c,puVar5 + 0x10,iStack_40 + 0x10);
        fStack_20 = *(float *)(iStack_40 + 0x40) + fStack_20;
        local_3c = (float)((int)(fVar1 + local_3c) + 0x40);
        local_38 = (float)((int)(fVar2 + local_38) + 1);
        fStack_1c = *(float *)(iStack_40 + 0x44) + fStack_1c;
        fStack_18 = *(float *)(iStack_40 + 0x48) + fStack_18;
        fVar1 = *(float *)(puVar5 + 2);
        *(float *)(puVar5 + 0x18) = (local_30 - fStack_20) * fVar1 + fStack_20;
        *(float *)(puVar5 + 0x1a) = (fStack_2c - fStack_1c) * fVar1 + fStack_1c;
        *(float *)(puVar5 + 0x1c) = (fStack_28 - fStack_18) * fVar1 + fStack_18;
        *(float *)(puVar5 + 0x1e) = fStack_14 + (fStack_24 - fStack_14) * fVar1;
        *(float *)(puVar5 + 6) = *(float *)(param_1 + 0xb14) * *(float *)(puVar5 + 4);
      } while ((uint)local_38 < (uint)*(float *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

// 009FBDD0  FUN_009fbdd0  size=917  [run]
/* WARNING: Removing unreachable block (ram,0x009fc0bd) */
/* WARNING: Removing unreachable block (ram,0x009fc0bf) */
/* WARNING: Removing unreachable block (ram,0x009fc0c1) */

void FUN_009fbdd0(int *param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  float fStack_8c;
  undefined1 *puStack_88;
  float local_84;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (0.0 < (float)param_1[0x1e]) {
    param_1[0x1e] = (int)((float)param_1[0x1e] - param_3);
    param_1[0x1d] = 0;
    return;
  }
  local_84 = (float)param_1[0x10] * param_3 + (float)param_1[0x1c];
  param_1[0x1c] = (int)local_84;
  puStack_88 = (undefined1 *)0x9fbe17;
  fVar3 = (float10)FUN_00ddba30();
  param_1[0x1c] = (int)(float)fVar3;
  fVar4 = (float10)fsin(fVar3);
  fVar3 = (float10)1;
  fVar4 = (fVar4 * (float10)(float)param_1[0xf] + fVar3) * (float10)(float)param_1[0xd];
  param_1[0x1d] = (int)(float)fVar4;
  if (fVar4 < (float10)0) {
    param_1[0x1d] = (int)(float)(float10)0;
  }
  if (fVar3 < (float10)(float)param_1[0x1d]) {
    param_1[0x1d] = (int)(float)fVar3;
  }
  fVar3 = (float10)fsin((float10)(float)param_1[0x21]);
  fVar2 = (float)param_1[0x1f];
  if (param_2 == 0) {
    if (param_1[0x22] == 0) {
      local_84 = (float)param_1[0x20] * param_3 + (float)param_1[0x21];
      puStack_88 = (undefined1 *)0x9fbed9;
      fVar4 = (float10)FUN_00ddba30();
      param_1[0x21] = (int)(float)fVar4;
    }
    puStack_88 = local_50;
    fStack_8c = 1.4670345e-38;
    local_84 = (float)(fVar3 * (float10)fVar2);
    D3DXMatrixRotationY();
  }
  else {
    if (param_1[0x22] == 0) {
      local_84 = (float)param_1[0x20] * param_3 + (float)param_1[0x21];
      puStack_88 = (undefined1 *)0x9fbe8a;
      fVar4 = (float10)FUN_00ddba30();
      param_1[0x21] = (int)(float)fVar4;
    }
    puStack_88 = local_50;
    fStack_8c = 1.4670234e-38;
    local_84 = (float)(fVar3 * (float10)fVar2);
    D3DXMatrixRotationY();
    fStack_8c = (float)(param_2 + 0x10);
    puStack_94 = auStack_58;
    puStack_90 = puStack_94;
    D3DXMatrixMultiply();
  }
  pfVar1 = (float *)(param_1 + 0x14);
  D3DXVec3TransformNormal(pfVar1);
  *pfVar1 = fStack_40 + *pfVar1;
  param_1[0x15] = (int)(fStack_3c + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_38 + (float)param_1[0x16]);
  D3DXVec3TransformNormal(&puStack_90,param_1 + 8,auStack_70);
  fVar2 = (float)param_1[0x12];
  param_1[0x12] = (int)(fVar2 + param_3);
  if ((float)param_1[0xe] < fVar2 + param_3) {
    param_1[0x12] = 0;
    param_1[0x1e] = param_1[0x11];
    if (param_1[0x22] == 1) {
      fVar3 = (float10)FUN_00ddba30(param_3 * (float)param_1[0x20] + (float)param_1[0x21]);
      param_1[0x21] = (int)(float)fVar3;
    }
    else if (param_1[0x22] == 2) {
      fVar3 = (float10)FUN_00dde300(0xc0490fdb,0x40490fdb);
      param_1[0x21] = (int)(float)fVar3;
    }
  }
  if (*param_1 == 1) {
    param_1[0x18] = (int)((fStack_4c + (float)(param_1 + 4)) - *pfVar1);
    param_1[0x19] = (int)((fStack_48 + (float)auStack_64) - (float)param_1[0x15]);
    param_1[0x1a] = (int)((fStack_44 + (float)puStack_94) - (float)param_1[0x16]);
    param_1[0x1b] = (int)((float)puStack_90 - (float)param_1[0x17]);
    fVar2 = (float)param_1[0x1d];
    param_1[0x18] = (int)(fVar2 * (float)param_1[0x18]);
    param_1[0x19] = (int)((float)param_1[0x19] * fVar2);
    param_1[0x1a] = (int)((float)param_1[0x1a] * fVar2);
    param_1[0x1b] = (int)(fVar2 * (float)param_1[0x1b]);
    return;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = unaff_EDI;
  if ((float)param_1[0xe] <= 0.0) {
    return;
  }
  fVar2 = (float)param_1[0x12] / (float)param_1[0xe];
  fStack_8c = ((fStack_4c + (float)(param_1 + 4)) - *pfVar1) * fVar2;
  puStack_88 = (undefined1 *)(((fStack_48 + (float)auStack_64) - (float)param_1[0x15]) * fVar2);
  local_84 = ((fStack_44 + (float)puStack_94) - (float)param_1[0x16]) * fVar2;
  fVar2 = ((float)puStack_90 - (float)param_1[0x17]) * fVar2;
  *pfVar1 = fStack_8c + *pfVar1;
  param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_88);
  param_1[0x16] = (int)(local_84 + (float)param_1[0x16]);
  param_1[0x17] = (int)(fVar2 + (float)param_1[0x17]);
  if (local_84 * local_84 + fStack_8c * fStack_8c + (float)puStack_88 * (float)puStack_88 <= 0.0) {
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0x3f800000;
    param_1[0x1b] = (int)fVar2;
    return;
  }
  FUN_00ddf460(param_1 + 0x18,&fStack_8c);
  return;
}

// 009FC170  FUN_009fc170  size=692  [run]
void __thiscall FUN_009fc170(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float local_94;
  int local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (*(int *)(param_1 + 0xb00) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar1 = param_1 + 0x30;
      do {
        if (((param_2 == -1) || (param_2 == iVar2)) && (*(int *)(iVar1 + 4) != 0xfff)) {
          local_94 = param_3;
          FUN_009f7b80(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x90;
      } while (iVar2 < *(int *)(param_1 + 0x2c));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pfVar3 = (float *)(param_1 + 0xa20);
      local_84 = 2;
      do {
        if (pfVar3[-0x14] == 1.4013e-45) {
          local_94 = pfVar3[-0x13];
          iVar2 = *(int *)(param_1 + 0xb00);
          if (-1 < (int)local_94) {
            iVar2 = FUN_00a12210();
          }
          if (iVar2 != 0) {
            fVar4 = (float10)fsin((float10)pfVar3[0xd]);
            local_94 = (float)(fVar4 * (float10)pfVar3[0xb]);
            D3DXMatrixRotationY(local_50);
            D3DXMatrixMultiply(&fStack_58,&fStack_58,iVar2 + 0x10);
            D3DXVec3TransformNormal(&local_94,pfVar3 + -0x10,&fStack_64);
            D3DXVec3TransformNormal(&stack0xffffff70,pfVar3 + -0xc,&fStack_70);
            local_94 = 0.0;
            fStack_70 = fStack_20 + fStack_70;
            fStack_6c = fStack_1c + fStack_6c;
            fStack_68 = fStack_18 + fStack_68;
            FUN_00f95fa0(&fStack_80,&fStack_70,0xffffff00);
            fVar4 = (float10)fsin((float10)pfVar3[8]);
            fVar4 = fVar4 * (float10)pfVar3[-5] + (float10)1.0;
            local_94 = 0.0;
            fStack_60 = (float)(((float10)fStack_70 - (float10)fStack_80) * fVar4 +
                               (float10)fStack_80);
            fStack_5c = (float)(((float10)fStack_6c - (float10)fStack_7c) * fVar4 +
                               (float10)fStack_7c);
            fStack_58 = (float)((float10)(float)(((float10)fStack_68 - (float10)fStack_78) * fVar4)
                               + (float10)fStack_78);
            fStack_54 = (float)((float10)(float)((float10)fStack_64 - (float10)fStack_74) * fVar4 +
                               (float10)fStack_74);
            if (param_3 == 0.0) {
              FUN_00f95fa0(&fStack_80,&fStack_60,0xff000000);
              uVar7 = 0xff000000;
            }
            else {
              FUN_00f95fa0(&fStack_80,&fStack_60,0xff00ffff);
              uVar7 = 0xffff00ff;
            }
            pfVar5 = &fStack_60;
            fVar6 = 0.02;
            goto LAB_009fc403;
          }
        }
        else {
          fVar6 = pfVar3[-8] * *(float *)(param_1 + 0xb14);
          local_94 = 0.0;
          pfVar5 = pfVar3;
          if (param_3 == 0.0) {
            FUN_00f96100(pfVar3,fVar6,0xff000000,0);
            fVar6 = *(float *)(param_1 + 0xb14) * pfVar3[9];
            uVar7 = 0xff000000;
          }
          else {
            FUN_00f96100(pfVar3,fVar6,0xff00ffff,0);
            fVar6 = *(float *)(param_1 + 0xb14) * pfVar3[9];
            uVar7 = 0xffffff00;
          }
LAB_009fc403:
          local_94 = 0.0;
          FUN_00f96100(pfVar5,fVar6,uVar7,0);
        }
        pfVar3 = pfVar3 + 0x24;
        local_84 = local_84 + -1;
      } while (local_84 != 0);
    }
  }
  return;
}

// 009FC430  FUN_009fc430  size=430  [run]
/* WARNING: Removing unreachable block (ram,0x009fc52c) */
/* WARNING: Removing unreachable block (ram,0x009fc52e) */
/* WARNING: Removing unreachable block (ram,0x009fc530) */

void __thiscall FUN_009fc430(int *param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  unkbyte10 Var2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_2c;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((param_1[0x2e9] != 0) && (*param_1 != 0)) && (local_24 = 0, param_1[6] != 0)) {
    local_2c = 0;
    do {
      iVar1 = param_1[7] + local_2c;
      Var2 = FUN_00ddba30(*(float *)(iVar1 + 0x1c) + param_4);
      fVar3 = (float10)fsin(Var2);
      fVar8 = (float10)1;
      fVar4 = (fVar3 + fVar8) * (float10)0.5;
      fVar5 = (float10)*(float *)(iVar1 + 0x50) - (float10)*param_2;
      local_20 = (float)fVar5;
      fVar6 = (float10)*(float *)(iVar1 + 0x54) - (float10)param_2[1];
      local_1c = (float)fVar6;
      fVar7 = (float10)*(float *)(iVar1 + 0x58) - (float10)param_2[2];
      local_18 = (float)fVar7;
      local_14 = *(float *)(iVar1 + 0x5c) - param_2[3];
      fVar3 = (float10)0;
      fVar9 = fVar3;
      if (fVar3 < fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
        FUN_00ddf460(&local_20,&local_20);
        fVar8 = (float10)local_1c;
        fVar3 = (float10)local_20;
        fVar4 = (float10)(float)fVar4;
        fVar9 = (float10)local_18;
      }
      fVar5 = (float10)param_3;
      local_2c = local_2c + 0x100;
      local_24 = local_24 + 1;
      local_20 = (float)(fVar3 * fVar5);
      local_1c = (float)(fVar8 * fVar5);
      local_18 = (float)(fVar9 * fVar5);
      fVar6 = (float10)local_14;
      local_14 = (float)(fVar6 * fVar5);
      *(float *)(iVar1 + 0x40) = (float)((float10)*(float *)(iVar1 + 0x40) + fVar3 * fVar5 * fVar4);
      *(float *)(iVar1 + 0x44) = (float)(fVar8 * fVar5 * fVar4 + (float10)*(float *)(iVar1 + 0x44));
      *(float *)(iVar1 + 0x48) = (float)((float10)*(float *)(iVar1 + 0x48) + fVar9 * fVar5 * fVar4);
      *(float *)(iVar1 + 0x4c) = (float)(fVar6 * fVar5 * fVar4 + (float10)*(float *)(iVar1 + 0x4c));
    } while (local_24 < (uint)param_1[6]);
  }
  return;
}

// 009FC5E0  FUN_009fc5e0  size=43  [run]
void __fastcall FUN_009fc5e0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}

// 009FC610  FUN_009fc610  size=43  [run]
void __fastcall FUN_009fc610(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}

