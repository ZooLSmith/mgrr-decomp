// src/unsorted/unit_00BC6E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BC6E00..00BC73B0, 2 functions

#include "types.h"

// 00BC6E00  FUN_00bc6e00  size=1448  [run]
/* WARNING: Removing unreachable block (ram,0x00bc7065) */
/* WARNING: Removing unreachable block (ram,0x00bc7237) */

void FUN_00bc6e00(undefined4 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar4 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar4);
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_20;
      pfVar1[1] = local_1c;
      pfVar1[2] = local_18;
    }
    local_8 = local_8 + 1;
  }
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_44 = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_24 = local_48 - local_18;
  fVar3 = SQRT(local_24 * local_24 + local_44 * local_44 + local_28 * local_28);
  param_2 = (float *)(fVar3 * 0.33333334);
  if (2.0 < (float)param_2) {
    param_2 = (float *)0x40000000;
  }
  fVar3 = fVar3 * 0.16666667;
  local_5c = (local_20 + local_50) * 0.5;
  local_54 = (local_48 + local_18) * 0.5;
  if (local_4c <= local_1c) {
    local_58 = local_1c + (float)param_2;
  }
  else {
    if (local_4c + 5.0 < local_1c) {
      param_2 = (float *)((float)param_2 * 0.5);
    }
    local_58 = (float)param_2 + local_4c;
  }
  local_2c = local_44 * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_24 = local_24 * 0.16666667;
  local_38 = local_5c - local_2c;
  local_34 = local_58 - local_28;
  local_30 = local_54 - local_24;
  local_68 = local_38 - local_20;
  local_64 = local_34 - local_1c;
  local_60 = local_30 - local_18;
  local_40 = local_64;
  local_3c = local_60;
  if (((local_68 != 0.0) || (local_64 != 0.0)) || (local_60 != 0.0)) {
    fVar2 = local_60 * local_60 + local_68 * local_68 + local_64 * local_64;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
  }
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_68 * fVar3 + local_20;
      pfVar1[1] = local_64 * fVar3 + local_1c;
      pfVar1[2] = local_60 * fVar3 + local_18;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_38;
        pfVar1[1] = local_34;
        pfVar1[2] = local_30;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_5c;
          pfVar1[1] = local_58;
          pfVar1[2] = local_54;
        }
        iVar5 = local_8 + 3;
      }
    }
  }
  local_8 = iVar5;
  local_20 = local_2c + local_5c;
  local_1c = local_28 + local_58;
  local_18 = local_24 + local_54;
  local_68 = local_50 - local_20;
  local_64 = local_4c - local_1c;
  local_60 = local_48 - local_18;
  if (((local_68 != 0.0) || (local_64 != 0.0)) || (local_60 != 0.0)) {
    fVar2 = local_60 * local_60 + local_68 * local_68 + local_64 * local_64;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
  }
  local_68 = local_68 * fVar3;
  local_64 = local_64 * fVar3;
  local_60 = local_60 * fVar3;
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_20;
      pfVar1[1] = local_1c;
      pfVar1[2] = local_18;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_50 - local_68;
        pfVar1[1] = local_4c - local_64;
        pfVar1[2] = local_48 - local_60;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 == (float *)0x0) {
          iVar5 = local_8 + 3;
        }
        else {
          *pfVar1 = local_50;
          pfVar1[1] = local_4c;
          pfVar1[2] = local_48;
          iVar5 = local_8 + 3;
        }
      }
    }
  }
  local_8 = iVar5;
  FUN_00a5e090(&local_14);
  if ((local_10 != 0) && (local_8 = 0, local_4 != 0)) {
    FUN_00dd48d0(local_10,0);
  }
  return;
}

// 00BC73B0  FUN_00bc73b0  size=906  [run]
void __fastcall FUN_00bc73b0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_284 [16];
  undefined1 auStack_274 [32];
  undefined1 auStack_254 [156];
  undefined4 uStack_1b8;
  undefined4 uStack_a8;
  
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x998] = 1;
  (*pcVar2)();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_0099a460(auStack_284,&DAT_016a265c,(param_1[0xfe4] + 0xd00) * 0x10);
    FUN_0099a390(auStack_274,"pl0010_%s.mot",auStack_284);
    FUN_0099a390(auStack_254,"pl0010_%s_0_seq.bxm",auStack_284);
    uVar4 = FUN_00de4500(auStack_274);
    uVar5 = FUN_00de4500(auStack_254);
    FUN_00a9f180(uVar4,uVar5,auStack_284,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar5 = 0;
      uVar4 = 0x80001;
      FUN_00a7c8a0(0x80001,0,0,0);
      FUN_00a8caf0(uVar4,uVar5,uVar7,uVar8);
    }
    if (param_1[0xfe5] == 1) {
      piVar6 = (int *)FUN_00c18350();
      (**(code **)(*piVar6 + 100))(0x405);
      piVar6 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar6 + 0x3c))(0x405);
    }
    param_1[0xfe5] = param_1[0xfe5] + 1;
    param_1[0x248] = 0;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
    fVar1 = 14.0 - ((float)param_1[0xfe5] + (float)param_1[0xfe5]);
    param_1[0x249] = (int)fVar1;
    if (fVar1 <= 7.0) {
      param_1[0x249] = 0x40e00000;
    }
    param_1[0x187] = param_1[0x187] + 1;
LAB_00bc75d5:
    FUN_00b94790(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    iVar3 = FUN_00a959f0(0);
    param_1[0x248] = (int)(float)iVar3;
    param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa9280(0x4c1);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
      param_1[0x24a] = 0;
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && ((float)param_1[0x24a] != 0.0)) {
      iVar3 = FUN_00a7c8a0();
      param_1[0x14] = *(int *)(iVar3 + 0x40);
      param_1[0x15] = *(int *)(iVar3 + 0x44);
      param_1[0x16] = *(int *)(iVar3 + 0x48);
      param_1[0x17] = *(int *)(iVar3 + 0x4c);
      iVar3 = FUN_00a7c8a0();
      param_1[0x24] = *(int *)(iVar3 + 0x90);
      param_1[0x25] = *(int *)(iVar3 + 0x94);
      param_1[0x26] = *(int *)(iVar3 + 0x98);
      param_1[0x27] = *(int *)(iVar3 + 0x9c);
      param_1[0x25] = (int)((float)param_1[0x25] + 3.1415927);
    }
    fVar1 = (float)param_1[0x24b];
    if (NAN(fVar1) || 60.0 < fVar1 == (fVar1 == 60.0)) goto LAB_00bc7721;
    uVar4 = FUN_00e01ca0();
    FUN_00e013e0(0x20120,8,param_1 + 0x10,uVar4);
    uStack_a8 = 0;
  }
  else {
    if (iVar3 == 1) goto LAB_00bc75d5;
    if (iVar3 != 2) {
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if (NAN(fVar1) || 20.0 < fVar1 == (fVar1 == 20.0)) goto LAB_00bc7721;
    uVar4 = FUN_00e01ca0();
    FUN_00e013e0(0x20120,8,param_1 + 0x10,uVar4);
    uStack_1b8 = 0;
  }
  FUN_00a8caf0(0x42,0,0,0);
LAB_00bc7721:
  param_1[0x24a] = (int)((float)param_1[0x24a] + (float)param_1[0x244]);
  return;
}

