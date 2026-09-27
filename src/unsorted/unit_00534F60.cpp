// src/unsorted/unit_00534F60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00534F60..00537040, 13 functions

#include "mgrr.h"

// 00534F60  FUN_00534f60  size=1088  [run]
/* WARNING: Removing unreachable block (ram,0x005350ce) */
/* WARNING: Removing unreachable block (ram,0x0053524d) */

void FUN_00534f60(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
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
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar2);
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  if (local_18 < local_1c) {
    pfVar5 = (float *)(local_20 + local_18 * 0xc);
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = local_4c;
      pfVar5[1] = local_48;
      pfVar5[2] = local_44;
    }
    local_18 = local_18 + 1;
  }
  local_64 = *param_4;
  local_60 = param_4[1];
  local_5c = param_4[2];
  local_30 = local_64 - local_4c;
  local_2c = local_60 - local_48;
  local_28 = local_5c - local_44;
  local_74 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c) * 0.16666667;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_50 = param_3[2];
  local_30 = local_30 * 0.16666667;
  local_2c = local_2c * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_40 = local_58 - local_30;
  local_3c = local_54 - local_2c;
  local_38 = local_50 - local_28;
  local_70 = local_40 - local_4c;
  local_6c = local_3c - local_48;
  local_68 = local_38 - local_44;
  fVar4 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  pfVar5 = &local_70;
  D3DXVec3Normalize(pfVar5);
  iVar3 = local_20;
  if (local_20 < local_24) {
    pfVar1 = (float *)((int)local_28 + local_20 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fStack_78 * unaff_ESI + local_54;
      pfVar1[1] = local_74 * unaff_ESI + local_50;
      pfVar1[2] = local_70 * unaff_ESI + local_4c;
    }
    iVar3 = local_20 + 1;
    if (iVar3 < local_24) {
      pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_48;
        pfVar1[1] = local_44;
        pfVar1[2] = local_40;
      }
      iVar3 = local_20 + 2;
      if (iVar3 < local_24) {
        pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_60;
          pfVar1[1] = local_5c;
          pfVar1[2] = local_58;
        }
        iVar3 = local_20 + 3;
      }
    }
  }
  local_20 = iVar3;
  local_48 = *param_3 + local_38;
  local_44 = param_3[1] + fStack_34;
  local_40 = local_30 + param_3[2];
  fStack_78 = local_6c - local_48;
  local_74 = local_68 - local_44;
  local_70 = local_64 - local_40;
  fVar4 = local_70 * local_70 + local_74 * local_74 + fStack_78 * fStack_78;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_78 = 0.0;
    local_74 = 1.0;
    local_70 = 0.0;
  }
  D3DXVec3Normalize(&fStack_78,&fStack_78);
  fStack_78 = fStack_78 * (float)pfVar5;
  fVar4 = local_28;
  if ((int)local_28 < (int)local_2c) {
    pfVar1 = (float *)((int)local_30 + (int)local_28 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_50;
      pfVar1[1] = local_4c;
      pfVar1[2] = local_48;
    }
    fVar4 = (float)((int)local_28 + 1);
    if ((int)fVar4 < (int)local_2c) {
      pfVar1 = (float *)((int)local_30 + (int)fVar4 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_74 - unaff_EDI * (float)pfVar5;
        pfVar1[1] = local_70 - unaff_ESI * (float)pfVar5;
        pfVar1[2] = local_6c - fStack_78;
      }
      fVar4 = (float)((int)local_28 + 2);
      if ((int)fVar4 < (int)local_2c) {
        pfVar5 = (float *)((int)local_30 + (int)fVar4 * 0xc);
        if (pfVar5 == (float *)0x0) {
          fVar4 = (float)((int)local_28 + 3);
        }
        else {
          *pfVar5 = local_74;
          pfVar5[1] = local_70;
          pfVar5[2] = local_6c;
          fVar4 = (float)((int)local_28 + 3);
        }
      }
    }
  }
  local_28 = fVar4;
  FUN_00a5e090(&fStack_34);
  if ((local_30 != 0.0) && (local_28 = 0.0, local_24 != 0)) {
    FUN_00dd48d0(local_30,0);
  }
  return;
}

// 005353A0  FUN_005353a0  size=74  [run]
void __thiscall FUN_005353a0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00535440  FUN_00535440  size=75  [run]
void __fastcall FUN_00535440(int param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(0,param_1,0);
  if (param_1 + 0xba0 != 0) {
    FUN_00dffb20(param_1 + 0xba0);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00535490  FUN_00535490  size=360  [run]
void __thiscall FUN_00535490(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  float fVar12;
  int local_2c [3];
  float local_20 [7];
  
  fVar4 = *param_2 + param_2[5] + param_2[10];
  if (fVar4 <= 0.0) {
    local_2c[0] = 1;
    local_2c[1] = 2;
    local_2c[2] = 0;
    uVar3 = (uint)(*param_2 < param_2[5]);
    if (param_2[uVar3 * 5] < param_2[10]) {
      uVar3 = 2;
    }
    iVar1 = local_2c[uVar3];
    iVar2 = local_2c[iVar1];
    fVar4 = SQRT((param_2[uVar3 * 5] - (param_2[local_2c[iVar1] * 5] + param_2[iVar1 * 5])) + 1.0);
    fVar5 = 0.5 / fVar4;
    local_20[uVar3] = fVar4 * 0.5;
    local_20[3] = (param_2[iVar2 + iVar1 * 4] - param_2[iVar1 + iVar2 * 4]) * fVar5;
    local_20[iVar1] = (param_2[uVar3 + iVar1 * 4] + param_2[iVar1 + uVar3 * 4]) * fVar5;
    local_20[iVar2] = (param_2[uVar3 + iVar2 * 4] + param_2[iVar2 + uVar3 * 4]) * fVar5;
  }
  else {
    local_20[3] = SQRT(fVar4 + 1.0);
    fVar4 = 0.5 / local_20[3];
    local_20[0] = (param_2[6] - param_2[9]) * fVar4;
    local_20[1] = (param_2[8] - param_2[2]) * fVar4;
    local_20[2] = (param_2[1] - param_2[4]) * fVar4;
    local_20[3] = local_20[3] * 0.5;
  }
  fVar4 = local_20[2] * local_20[2] + local_20[0] * local_20[0];
  fVar5 = local_20[3] * local_20[3] + local_20[1] * local_20[1];
  fVar6 = local_20[0] * local_20[0] + local_20[2] * local_20[2];
  fVar7 = local_20[1] * local_20[1] + local_20[3] * local_20[3];
  fVar8 = fVar5 + fVar4;
  fVar4 = fVar4 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar9._4_4_ = fVar4;
  auVar9._0_4_ = fVar8;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar6;
  auVar9 = rsqrtps(in_XMM3,auVar9);
  fVar7 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar12 = auVar9._12_4_;
  *param_1 = local_20[0] * (3.0 - fVar7 * fVar8 * fVar7) * fVar7 * 0.5;
  param_1[1] = local_20[1] * (3.0 - fVar10 * fVar4 * fVar10) * fVar10 * 0.5;
  param_1[2] = local_20[2] * (3.0 - fVar11 * fVar5 * fVar11) * fVar11 * 0.5;
  param_1[3] = local_20[3] * (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5;
  return;
}

// 00535600  FUN_00535600  size=508  [run]
void __fastcall FUN_00535600(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  param_1[0x4c6] = 0x42f00000;
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 0;
  param_1[0x504] = 1;
  (*pcVar2)();
  iStack_20 = 0x4417e000;
  iStack_1c = -0x3c6c8000;
  uStack_18 = 0xc44ca000;
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x23,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_24);
    param_1[0x249] = 0;
    FUN_0051cc20();
    param_1[0x548] = param_1[0x10];
    param_1[0x549] = param_1[0x11];
    param_1[0x54a] = param_1[0x12];
    param_1[0x54b] = param_1[0x13];
    param_1[0x581] = 0;
    param_1[0x434] = param_1[0x511];
    param_1[0x582] = 0;
    *(undefined1 *)(param_1 + 0x435) = 0;
    param_1[0x403] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_24,0,param_1[0x249]);
  fVar1 = (float)param_1[0x249];
  if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
    param_1[0x249] = 0x40000000;
    FUN_00a581b0(&iStack_24,0,0x40000000);
    FUN_0051d620(0x10011,0,0,0,0);
    param_1[0x25] = -0x4036f025;
    param_1[0x505] = 0;
  }
  param_1[0x14] = iStack_24;
  param_1[0x15] = iStack_20;
  param_1[0x16] = iStack_1c;
  param_1[0x24a] = 0x3d088889;
  param_1[0x249] = (int)((float)param_1[0x244] * 0.033333335 + (float)param_1[0x249]);
  return;
}

// 00535800  FUN_00535800  size=672  [run]
void __fastcall FUN_00535800(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar2)();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x80,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x548] = 0x44138000;
    param_1[0x54a] = -0x3bb50000;
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,param_1 + 0x548);
    param_1[0x249] = 0;
    FUN_00940b10();
    uVar3 = FUN_00e678d0(2,0xc002,0xffffffff);
    FUN_00e80d00(uVar3);
    param_1[0x24b] = 0x41f00000;
    param_1[0x252] = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      *(undefined4 *)(iVar4 + 0x6ec) = 1;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00535a67;
  if (param_1[0x252] == 0) {
    fVar1 = (float)param_1[0x24b];
    param_1[0x24b] = (int)(fVar1 - (float)param_1[0x244]);
    if ((param_1[0x2a1] != 0) && (fVar1 - (float)param_1[0x244] < 0.0)) {
      piVar5 = (int *)FUN_0041c960(param_1[0x2a1]);
      uStack_24 = 0x440d60a4;
      uStack_20 = 0xc3a0d333;
      uStack_1c = 0xc44b228f;
      iStack_34 = 0;
      iStack_30 = 0x3fc90fdb;
      iStack_2c = 0;
      (**(code **)(*piVar5 + 0x7c))(&uStack_24,&iStack_34);
      param_1[0x252] = 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_34,0,param_1[0x249]);
  fVar1 = (float)param_1[0x249];
  if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
    param_1[0x249] = 0x40000000;
    FUN_00a581b0(&iStack_34,0,0x40000000);
    FUN_0051d620(0x10020,0,0,0,0);
  }
  param_1[0x14] = iStack_34;
  param_1[0x15] = iStack_30;
  param_1[0x16] = iStack_2c;
  param_1[0x24a] = 0x3d4ccccd;
  param_1[0x249] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x249]);
LAB_00535a67:
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  return;
}

// 00535AA0  FUN_00535aa0  size=754  [run]
void __fastcall FUN_00535aa0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  param_1[0x4c6] = 0x42f00000;
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 1;
  param_1[0x504] = 1;
  (*pcVar2)();
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x54c] = (int)sVar3;
    iVar4 = sVar3 * 0x10;
    iStack_24 = *(int *)(&DAT_01881350 + iVar4);
    iStack_20 = *(int *)(&DAT_01881354 + iVar4);
    iStack_1c = *(int *)(&DAT_01881358 + iVar4);
    uStack_18 = *(undefined4 *)(&DAT_0188135c + iVar4);
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_24);
    param_1[0x249] = 0;
    FUN_0051cc20();
    param_1[0x548] = param_1[0x10];
    param_1[0x549] = param_1[0x11];
    param_1[0x54a] = param_1[0x12];
    param_1[0x54b] = param_1[0x13];
    param_1[0x581] = 0;
    param_1[0x582] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0x31);
    if (iVar4 != 0) {
      iVar4 = param_1[0x54c] * 0x10;
      iStack_24 = *(int *)(&DAT_01881350 + iVar4);
      iStack_20 = *(int *)(&DAT_01881354 + iVar4);
      iStack_1c = *(int *)(&DAT_01881358 + iVar4);
      uStack_18 = *(undefined4 *)(&DAT_0188135c + iVar4);
      FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_24);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x24a] = 0x3d088889;
    fVar1 = (float)param_1[0x244] * 0.033333335 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    FUN_00a581b0(&iStack_24,0,fVar1);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_24,0,0x40000000);
      param_1[0x187] = 3;
    }
    pcVar2 = *(code **)(*param_1 + 0x308);
    param_1[0x14] = iStack_24;
    param_1[0x15] = iStack_20;
    param_1[0x16] = iStack_1c;
    (*pcVar2)(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
    return;
  case 3:
    FUN_00aa4080(0x82,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_0051d620(0x1001b,0,0,0,0);
      param_1[0x505] = 0;
      FUN_0051cc20();
      return;
    }
  }
  return;
}

// 00535DB0  FUN_00535db0  size=476  [run]
void __fastcall FUN_00535db0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x83,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x54c] = param_1[0x54c] + 1;
    if (3 < (uint)param_1[0x54c]) {
      param_1[0x54c] = 0;
    }
    iVar3 = param_1[0x54c] * 0x10;
    iStack_20 = *(int *)(&DAT_01881350 + iVar3);
    iStack_1c = *(int *)(&DAT_01881354 + iVar3);
    iStack_18 = *(int *)(&DAT_01881358 + iVar3);
    uStack_14 = *(undefined4 *)(&DAT_0188135c + iVar3);
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_20);
    param_1[0x249] = 0;
    param_1[0x505] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00535f55;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a959f0(0);
  if (15.0 <= (float)iVar3) {
    FUN_00a581b0(&iStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
    }
    param_1[0x14] = iStack_20;
    param_1[0x15] = iStack_1c;
    param_1[0x16] = iStack_18;
    param_1[0x24a] = 0x3cfc0fc1;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.03076923 + (float)param_1[0x249]);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_0051d620(0x1001b,0,0,0,0);
  }
LAB_00535f55:
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
  return;
}

// 00535F90  FUN_00535f90  size=593  [run]
void __fastcall FUN_00535f90(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x80,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    param_1[0x548] = (int)(float)(fVar4 + (float10)579.0);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    param_1[0x54a] = (int)(float)(fVar4 - (float10)812.0);
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,param_1 + 0x548);
    param_1[0x249] = 0;
    FUN_0051cc20();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      *(undefined4 *)(iVar3 + 0x6ec) = 0;
    }
    FUN_00940b10();
    iVar3 = FUN_00ac8120();
    if (iVar3 != 0) {
      iVar3 = FUN_00ac8120();
      *(undefined4 *)(iVar3 + 0x3bcc) = 1;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_005361a8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_c,0,param_1[0x249]);
  fVar1 = (float)param_1[0x249];
  if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
    param_1[0x249] = 0x40000000;
    FUN_00a581b0(&iStack_c,0,0x40000000);
    FUN_0051d620(0x10020,0,0,0,0);
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(iVar3 + 0x6ec) = 1;
  }
  param_1[0x14] = iStack_c;
  param_1[0x15] = iStack_8;
  param_1[0x16] = iStack_4;
  param_1[0x24a] = 0x3d4ccccd;
  param_1[0x249] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x249]);
LAB_005361a8:
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  return;
}

// 005363B0  FUN_005363b0  size=1343  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005363b0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  param_1[0x4c6] = 0x42f00000;
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 4;
  (*pcVar2)();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x54c] = 0;
    iStack_34 = _DAT_01881350;
    iStack_30 = _DAT_01881354;
    iStack_2c = _DAT_01881358;
    uStack_28 = _DAT_0188135c;
    FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_34);
    param_1[0x249] = 0;
    FUN_0051cc20();
    param_1[0x548] = param_1[0x10];
    param_1[0x549] = param_1[0x11];
    param_1[0x54a] = param_1[0x12];
    param_1[0x54b] = param_1[0x13];
    param_1[0x581] = 0;
    param_1[0x506] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0x31);
    if ((iVar4 != 0) || (iVar4 = FUN_00a94ce0(0), iVar4 != 0)) {
      iVar4 = param_1[0x54c] * 0x10;
      iStack_34 = *(int *)(&DAT_01881350 + iVar4);
      iStack_30 = *(int *)(&DAT_01881354 + iVar4);
      iStack_2c = *(int *)(&DAT_01881358 + iVar4);
      uStack_28 = *(undefined4 *)(&DAT_0188135c + iVar4);
      FUN_00532400(param_1 + 0x52e,param_1 + 0x10,&iStack_34);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x24a] = 0x3d360b61;
    fVar1 = (float)param_1[0x244] * 0.044444446 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    FUN_00a581b0(&iStack_34,0,fVar1);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_34,0,0x40000000);
    }
    param_1[0x14] = iStack_34;
    param_1[0x15] = iStack_30;
    param_1[0x16] = iStack_2c;
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) &&
       (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0))) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    pcVar2 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = -0x40b6f025;
    (*pcVar2)(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
    return;
  case 3:
    param_1[0x187] = 4;
    FUN_00aa4080(0x82,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar3 = FUN_00e678d0(2,0xc001,0xffffffff);
    FUN_00e80d00(uVar3);
    param_1[0x248] = 0x41f00000;
    param_1[0x250] = 0;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((((int *)param_1[0x2a1] != (int *)0x0) && (param_1[0x250] == 0)) &&
       (fVar1 - (float)param_1[0x244] < 0.0)) {
      uStack_24 = 0x440ff0a4;
      param_1[0x250] = 1;
      uStack_20 = 0xc3a0d852;
      uStack_1c = 0xc44b4852;
      iStack_34 = 0;
      iStack_30 = 0x4025e047;
      iStack_2c = 0;
      (**(code **)(*(int *)param_1[0x2a1] + 0x7c))(&uStack_24,&iStack_34);
      piVar5 = (int *)FUN_0041c960(param_1[0x2a1]);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x388))(0);
        return;
      }
    }
    break;
  case 5:
    param_1[0x187] = 6;
    FUN_00aa4080(4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      iStack_34 = 0x440ff0a4;
      iStack_30 = -0x3c5f27ae;
      iStack_2c = -0x3bb4b7ae;
      uStack_24 = 0;
      uStack_20 = 0x4025e047;
      uStack_1c = 0;
      (**(code **)(*(int *)param_1[0x2a1] + 0x7c))(&iStack_34,&uStack_24);
    }
  case 6:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 7:
    param_1[0x187] = 8;
    param_1[0x403] = 1;
    param_1[0x248] = 0x42f00000;
    param_1[0x438] = 1;
    goto LAB_00536897;
  case 8:
LAB_00536897:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_0051d620(0x1001b,0,0,0,0);
      return;
    }
  }
  return;
}

// 00536920  FUN_00536920  size=1426  [run]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00536920(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined4 local_110 [3];
  int iStack_104;
  float fStack_100;
  float local_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float afStack_b8 [12];
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [84];
  
  if (*(int *)(param_1 + 0xa08) != 0) {
    if (*(int *)(param_1 + 0xa9c) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        D3DXVec3TransformNormal(local_110,param_1 + 0xab0,iVar2 + 0x10);
        fVar16 = *(float *)(iVar2 + 0x44);
        fVar7 = *(float *)(iVar2 + 0x48);
        *(float *)(param_1 + 0x40) = *(float *)(iVar2 + 0x40) + fStack_11c;
        *(float *)(param_1 + 0x44) = fVar16 + local_118;
        *(float *)(param_1 + 0x48) = fVar7 + fStack_114;
        return;
      }
      if (*(int *)(param_1 + 0xa50) == -1) {
        FID_conflict__memcpy
                  ((void *)(param_1 + 0x10),(void *)(*(int *)(param_1 + 0xa08) + 0x10),0x40);
        return;
      }
      iVar2 = FUN_00a12210(*(int *)(param_1 + 0xa50));
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0xa08);
      }
      FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(iVar2 + 0x10),0x40);
      if ((*(int *)(param_1 + 0xa68) != 0) && (iVar2 = FUN_00518d20(), iVar2 != 0)) {
        fStack_130 = *(float *)(param_1 + 0x40);
        fStack_12c = *(float *)(param_1 + 0x44);
        uStack_128 = *(undefined4 *)(param_1 + 0x48);
        if (*(int *)(param_1 + 0xa6c) == 0) {
          FUN_0051ce80(&fStack_130,*(undefined4 *)(param_1 + 0xa70));
        }
        else {
          FUN_0051ce20(&fStack_130,*(undefined4 *)(param_1 + 0xa70));
        }
        *(float *)(param_1 + 0x40) = fStack_130;
        *(float *)(param_1 + 0x44) = fStack_12c;
        *(undefined4 *)(param_1 + 0x48) = uStack_128;
      }
    }
    else if (*(int *)(param_1 + 0xa9c) - 3U < 5) {
      FUN_004066f0();
      local_118 = (float)_DAT_01885d24;
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(local_fc,0xffffffff);
      iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0xa50));
      if ((iStack_104 != 0) && (iVar2 != 0)) {
        local_fc[0] = 1.0 / fStack_120;
        local_118 = *(float *)(iVar2 + 0x40);
        fStack_114 = *(float *)(iVar2 + 0x44);
        local_110[0] = *(undefined4 *)(iVar2 + 0x48);
        fVar16 = *(float *)(iVar2 + 0x10);
        fVar7 = *(float *)(iVar2 + 0x14);
        fVar8 = *(float *)(iVar2 + 0x18);
        fVar9 = *(float *)(iVar2 + 0x20);
        fVar10 = *(float *)(iVar2 + 0x24);
        fVar11 = *(float *)(iVar2 + 0x28);
        fVar13 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                      *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                      *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
        fStack_11c = *(float *)(iVar2 + 0x28) / fVar13;
        fStack_120 = *(float *)(iVar2 + 0x38) / fVar13;
        fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar13));
        fStack_100 = (float)fVar4;
        fVar5 = (float10)fpatan((float10)fStack_11c,(float10)fStack_120);
        fStack_78 = (float)fVar5;
        fVar6 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) /
                                (float10)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11),
                                (float10)*(float *)(iVar2 + 0x10) /
                                (float10)SQRT(fVar7 * fVar7 + fVar16 * fVar16 + fVar8 * fVar8));
        fVar5 = (float10)0;
        fStack_c0 = (float)fVar5;
        fStack_c4 = (float)fVar5;
        fStack_c8 = (float)fVar5;
        fStack_cc = (float)fVar5;
        fStack_d4 = (float)fVar5;
        fStack_d8 = (float)fVar5;
        fStack_dc = (float)fVar5;
        fStack_e0 = (float)fVar5;
        fStack_e8 = (float)fVar5;
        fStack_ec = (float)fVar5;
        fStack_f0 = (float)fVar5;
        local_fc[2] = (float)fVar5;
        uStack_bc = 0x3f800000;
        uStack_d0 = 0x3f800000;
        uStack_e4 = 0x3f800000;
        local_fc[1] = 1.0;
        if (fVar5 != fVar6) {
          D3DXMatrixRotationZ(auStack_58,(float)fVar6);
          D3DXMatrixMultiply(&fStack_100,&fStack_60,&fStack_100);
          fVar4 = (float10)fStack_100;
        }
        if ((float10)0 != fVar4) {
          D3DXMatrixRotationY(auStack_58,(float)fVar4);
          D3DXMatrixMultiply(&fStack_100,&fStack_60,&fStack_100);
        }
        if (fStack_78 != 0.0) {
          D3DXMatrixRotationX(auStack_58,fStack_78);
          D3DXMatrixMultiply(&fStack_100,&fStack_60,&fStack_100);
        }
        fStack_c8 = local_118;
        fStack_c4 = fStack_114;
        fStack_c0 = (float)local_110[0];
        FUN_01005190(local_fc + 1);
        fVar16 = afStack_b8[5] + afStack_b8[0] + afStack_b8[10];
        if (fVar16 <= 0.0) {
          fVar16 = 1.4013e-45;
          fStack_134 = 2.8026e-45;
          fStack_130 = 0.0;
          uVar3 = (uint)(afStack_b8[0] < afStack_b8[5]);
          if (afStack_b8[uVar3 * 5] < afStack_b8[10]) {
            uVar3 = 2;
          }
          iVar2 = *(int *)(&stack0xfffffec8 + uVar3 * 4);
          iVar1 = *(int *)(&stack0xfffffec8 + iVar2 * 4);
          fVar7 = SQRT((afStack_b8[uVar3 * 5] - (afStack_b8[iVar1 * 5] + afStack_b8[iVar2 * 5])) +
                       1.0);
          fVar8 = 0.5 / fVar7;
          *(float *)(&stack0xfffffec8 + uVar3 * 4) = fVar7 * 0.5;
          fStack_12c = (afStack_b8[iVar1 + iVar2 * 4] - afStack_b8[iVar2 + iVar1 * 4]) * fVar8;
          *(float *)(&stack0xfffffec8 + iVar2 * 4) =
               (afStack_b8[uVar3 + iVar2 * 4] + afStack_b8[iVar2 + uVar3 * 4]) * fVar8;
          *(float *)(&stack0xfffffec8 + iVar1 * 4) =
               (afStack_b8[uVar3 + iVar1 * 4] + afStack_b8[iVar1 + uVar3 * 4]) * fVar8;
        }
        else {
          fStack_12c = SQRT(fVar16 + 1.0);
          fStack_130 = 0.5 / fStack_12c;
          fVar16 = (afStack_b8[6] - afStack_b8[9]) * fStack_130;
          fStack_134 = (afStack_b8[8] - afStack_b8[2]) * fStack_130;
          fStack_130 = (afStack_b8[1] - afStack_b8[4]) * fStack_130;
          fStack_12c = fStack_12c * 0.5;
        }
        fVar7 = fStack_130 * fStack_130 + fVar16 * fVar16;
        fVar8 = fStack_12c * fStack_12c + fStack_134 * fStack_134;
        fVar9 = fVar16 * fVar16 + fStack_130 * fStack_130;
        fVar10 = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
        fVar11 = fVar8 + fVar7;
        fVar7 = fVar7 + fVar8;
        fVar8 = fVar10 + fVar9;
        fVar9 = fVar9 + fVar10;
        auVar12._4_4_ = fVar7;
        auVar12._0_4_ = fVar11;
        auVar12._8_4_ = fVar8;
        auVar12._12_4_ = fVar9;
        auVar12 = rsqrtps(in_XMM3,auVar12);
        fVar10 = auVar12._0_4_;
        fVar13 = auVar12._4_4_;
        fVar14 = auVar12._8_4_;
        fVar15 = auVar12._12_4_;
        fStack_68 = (3.0 - fVar10 * fVar11 * fVar10) * fVar10 * 0.5 * fVar16;
        fStack_64 = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * fStack_134;
        fStack_60 = (3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5 * fStack_130;
        fStack_5c = (3.0 - fVar15 * fVar9 * fVar15) * fVar15 * 0.5 * fStack_12c;
        FUN_01268260(auStack_88,&fStack_68,local_fc[0],iStack_104);
      }
      FUN_00406760();
      return;
    }
  }
  return;
}

// 00536F00  FUN_00536f00  size=291  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00536f00(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    fVar2 = (float10)FUN_00dde300(0,0x41a00000);
    param_1[0x248] = (int)(float)(fVar2 + (float10)40.0);
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00533f40(1,param_1 + 0x2b0);
      (**(code **)(*param_1 + 0x20))();
      FUN_00eaa6e0(0x3f800000,0);
      FUN_00e5e0c0("em01a0_se_dmg_exp_death",param_1,0xffffffff,0);
      FUN_004066f0();
      if (param_1[0x1ec] == 0) {
        (**(code **)(_DAT_00000000 + 0xdc))(0);
      }
      FUN_00406760();
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x42f00000;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00537040  FUN_00537040  size=72  [run]
void __thiscall FUN_00537040(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(0x201a0,local_160);
  return;
}

