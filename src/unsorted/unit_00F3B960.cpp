// src/unsorted/unit_00F3B960.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3B960..00F3E910, 19 functions

#include "mgrr.h"

// 00F3B960  FUN_00f3b960  size=209  [run]
void __fastcall FUN_00f3b960(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x28);
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x4028) = 0;
  *(undefined4 *)(param_1 + 0x402c) = 0;
  *(undefined4 *)(param_1 + 0x4030) = 0;
  *(undefined4 *)(param_1 + 0x4034) = 0;
  *(undefined4 *)(param_1 + 0x4038) = 0;
  *(undefined4 *)(param_1 + 0x403c) = 0;
  *(undefined4 *)(param_1 + 0x4040) = 0;
  *(undefined4 *)(param_1 + 0x4044) = 0;
  *(undefined4 *)(param_1 + 0x4048) = 0;
  *(undefined4 *)(param_1 + 0x404c) = 0;
  *(undefined4 *)(param_1 + 0x4050) = 0;
  *(undefined4 *)(param_1 + 0x4054) = 0;
  *(undefined4 *)(param_1 + 0x4058) = 0;
  *(undefined4 *)(param_1 + 0x405c) = 0;
  *(undefined4 *)(param_1 + 0x4060) = 0;
  *(undefined4 *)(param_1 + 0x4064) = 0;
  *(undefined4 *)(param_1 + 0x4068) = 0;
  *(undefined4 *)(param_1 + 0x406c) = 0;
  *(undefined4 *)(param_1 + 0x4070) = 0;
  *(undefined4 *)(param_1 + 0x4074) = 0;
  *(undefined4 *)(param_1 + 0x4078) = 0;
  *(undefined4 *)(param_1 + 0x407c) = 0;
  *(undefined4 *)(param_1 + 0x4080) = 0;
  *(undefined4 *)(param_1 + 0x4084) = 0;
  *(undefined4 *)(param_1 + 0x4088) = 0;
  *(undefined4 *)(param_1 + 0x408c) = 0;
  *(undefined4 *)(param_1 + 0x4090) = 0;
  *(undefined4 *)(param_1 + 0x4094) = 0;
  *(undefined4 *)(param_1 + 0x4098) = 0;
  *(undefined4 *)(param_1 + 0x409c) = 0;
  *(undefined4 *)(param_1 + 0x40a0) = 0;
  *(undefined4 *)(param_1 + 0x40a4) = 0;
  return;
}

// 00F3BE60  FUN_00f3be60  size=53  [run]
uint __fastcall FUN_00f3be60(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x20), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(2);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3BEE0  FUN_00f3bee0  size=53  [run]
uint __fastcall FUN_00f3bee0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x50), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(5);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3BF20  FUN_00f3bf20  size=53  [run]
uint __fastcall FUN_00f3bf20(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x60), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(6);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3BF60  FUN_00f3bf60  size=53  [run]
uint __fastcall FUN_00f3bf60(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x40), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(4);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3BFA0  FUN_00f3bfa0  size=55  [run]
uint __fastcall FUN_00f3bfa0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0xb0), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(0xb);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3BFE0  FUN_00f3bfe0  size=55  [run]
uint __fastcall FUN_00f3bfe0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0xc0), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(0xc);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3C020  FUN_00f3c020  size=55  [run]
uint __fastcall FUN_00f3c020(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0xa0), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(10);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

// 00F3C060  FUN_00f3c060  size=178  [run]
/* WARNING: Removing unreachable block (ram,0x00f3c0b1) */

void __thiscall FUN_00f3c060(float *param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if (ABS(param_2[2]) < 0.01 == (ABS(param_2[2]) == 0.01)) {
    fVar1 = 6.2831855 / param_2[2];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[2] = fVar1;
  uVar4 = *param_3 * 0x19660d + 0x3c6ef35f;
  *param_3 = uVar4;
  fVar3 = (float)(uVar4 >> 8) * 5.960465e-08;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  param_1[1] = *param_1;
  *param_1 = *param_1 + ((1.0 - (fVar3 + fVar3)) * fVar1 + fVar2) * param_1[2];
  param_1[3] = param_2[4] * 0.01;
  param_1[4] = param_2[3];
  param_1[5] = param_2[5] * 0.01;
  param_1[6] = param_2[6];
  return;
}

// 00F3C120  FUN_00f3c120  size=109  [run]
void __thiscall FUN_00f3c120(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  if (ABS(param_2[2]) < 0.01 == (ABS(param_2[2]) == 0.01)) {
    fVar1 = 6.2831855 / param_2[2];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[2] = fVar1;
  fVar1 = *param_2;
  param_1[1] = *param_1;
  *param_1 = *param_1 + (fVar1 + param_3) * param_1[2];
  param_1[3] = param_2[4] * 0.01;
  param_1[4] = param_2[3];
  param_1[5] = param_2[5] * 0.01;
  param_1[6] = param_2[6];
  return;
}

// 00F3C1B0  FUN_00f3c1b0  size=129  [run]
void __thiscall FUN_00f3c1b0(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  FUN_00f3c060(param_2 + 1,param_3);
  FUN_00f3c060(param_2 + 8,param_3);
  FUN_00f3c060(param_2 + 0xf,param_3);
  if ((*param_2 & 0x80000000) != 0) {
    param_1[2] = param_1[1];
    param_1[1] = (float)param_1[1] + 1.5707964;
  }
  if ((*param_2 & 0x40000000) != 0) {
    param_1[9] = param_1[8];
    param_1[8] = (float)param_1[8] + 1.5707964;
    *param_1 = 1;
    return;
  }
  *param_1 = 1;
  return;
}

// 00F3C2A0  FUN_00f3c2a0  size=434  [run]
/* WARNING: Removing unreachable block (ram,0x00f3c38d) */
/* WARNING: Removing unreachable block (ram,0x00f3c2dd) */

void __thiscall FUN_00f3c2a0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    return;
  }
  if ((int)*param_2 < 0) {
    uVar2 = *param_3 * 0x19660d + 0x3c6ef35f;
    *param_3 = uVar2;
    fVar1 = (float)(uVar2 >> 8) * 5.960465e-08;
    fVar1 = (1.0 - (fVar1 + fVar1)) * (float)param_2[2];
    FUN_00f3c120(param_2 + 1,fVar1);
    FUN_00f3c120(param_2 + 8,fVar1);
    FUN_00f3c120(param_2 + 0xf,fVar1);
    param_1[2] = param_1[1];
    param_1[1] = (float)param_1[1] + 1.5707964;
    *param_1 = 1;
    return;
  }
  if ((*param_2 & 0x40000000) != 0) {
    uVar2 = *param_3 * 0x19660d + 0x3c6ef35f;
    *param_3 = uVar2;
    fVar1 = (float)(uVar2 >> 8) * 5.960465e-08;
    fVar1 = (1.0 - (fVar1 + fVar1)) * (float)param_2[9];
    FUN_00f3c120(param_2 + 1,fVar1);
    FUN_00f3c120(param_2 + 8,fVar1);
    FUN_00f3c120(param_2 + 0xf,fVar1);
    param_1[9] = param_1[8];
    param_1[8] = (float)param_1[8] + 1.5707964;
    *param_1 = 1;
    return;
  }
  FUN_00f3c060(param_2 + 1,param_3);
  FUN_00f3c060(param_2 + 8,param_3);
  FUN_00f3c060(param_2 + 0xf,param_3);
  *param_1 = 1;
  return;
}

// 00F3C4C0  FUN_00f3c4c0  size=434  [run]
/* WARNING: Removing unreachable block (ram,0x00f3c5ad) */
/* WARNING: Removing unreachable block (ram,0x00f3c4fd) */

void __thiscall FUN_00f3c4c0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    return;
  }
  if ((int)*param_2 < 0) {
    uVar2 = *param_3 * 0x19660d + 0x3c6ef35f;
    *param_3 = uVar2;
    fVar1 = (float)(uVar2 >> 8) * 5.960465e-08;
    fVar1 = (1.0 - (fVar1 + fVar1)) * (float)param_2[2];
    FUN_00f3c120(param_2 + 1,fVar1);
    FUN_00f3c120(param_2 + 8,fVar1);
    FUN_00f3c120(param_2 + 0xf,fVar1);
    param_1[2] = param_1[1];
    param_1[1] = (float)param_1[1] + 1.5707964;
    *param_1 = 1;
    return;
  }
  if ((*param_2 & 0x40000000) != 0) {
    uVar2 = *param_3 * 0x19660d + 0x3c6ef35f;
    *param_3 = uVar2;
    fVar1 = (float)(uVar2 >> 8) * 5.960465e-08;
    fVar1 = (1.0 - (fVar1 + fVar1)) * (float)param_2[9];
    FUN_00f3c120(param_2 + 1,fVar1);
    FUN_00f3c120(param_2 + 8,fVar1);
    FUN_00f3c120(param_2 + 0xf,fVar1);
    param_1[9] = param_1[8];
    param_1[8] = (float)param_1[8] + 1.5707964;
    *param_1 = 1;
    return;
  }
  FUN_00f3c060(param_2 + 1,param_3);
  FUN_00f3c060(param_2 + 8,param_3);
  FUN_00f3c060(param_2 + 0xf,param_3);
  *param_1 = 1;
  return;
}

// 00F3C6E0  FUN_00f3c6e0  size=536  [run]
void FUN_00f3c6e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_3 - 0.0;
  if (0.0 < fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar4 = (fVar2 - fVar1) * fVar3 + fVar1;
  fVar5 = ((1.0 - fVar1) - fVar2) * fVar3 + fVar2;
  fVar3 = param_3 - 1.0;
  if (0.0 < fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar4 = fVar4 + fVar3 * ((1.0 - fVar1) - fVar4);
  fVar5 = fVar5 + ((1.0 - fVar2) - fVar5) * fVar3;
  fVar3 = param_3 - 2.0;
  if (0.0 < fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar4 = fVar4 + fVar3 * ((1.0 - fVar2) - fVar4);
  fVar5 = fVar5 + (fVar1 - fVar5) * fVar3;
  param_3 = param_3 - 3.0;
  if (0.0 < param_3) {
    if (1.0 < param_3) {
      param_3 = 1.0;
    }
  }
  else {
    param_3 = 0.0;
  }
  *param_1 = fVar4 + param_3 * (fVar1 - fVar4);
  param_1[1] = fVar5 + (fVar2 - fVar5) * param_3;
  return;
}

// 00F3C970  FUN_00f3c970  size=60  [run]
void __thiscall FUN_00f3c970(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00ecb4f0(param_2);
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return;
}

// 00F3CC60  FUN_00f3cc60  size=145  [run]
void __thiscall FUN_00f3cc60(int param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 auStack_64 [4];
  undefined1 local_60 [24];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_64;
  iStack_74 = *(int *)(param_1 + 0x334) + 0x10;
  uStack_78 = 0;
  puStack_7c = local_60;
  D3DXMatrixInverse();
  pfVar1 = (float *)(param_1 + 0x150);
  D3DXVec3TransformNormal(pfVar1,param_3,&stack0xffffff94);
  *pfVar1 = *pfVar1 + fStack_48;
  *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) + fStack_44;
  *(float *)(param_1 + 0x158) = fStack_40 + *(float *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x164) = param_2;
  *(undefined4 *)(param_1 + 0x168) = param_2;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  __security_check_cookie(uStack_2c ^ (uint)&puStack_7c);
  return;
}

// 00F3CD40  FUN_00f3cd40  size=3465  [run]
void __thiscall FUN_00f3cd40(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  float *pfVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  float *pfVar27;
  
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_016df4c0,param_3);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    FUN_00dd5650(&DAT_016df478,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00dd5650(&DAT_016df438);
    return;
  }
  uVar16 = 0;
  if (3 < (int)param_3) {
    iVar24 = (param_3 - 4 >> 2) + 1;
    uVar16 = iVar24 * 4;
    puVar20 = (undefined4 *)(param_2 + 0x14);
    iVar25 = 0;
    do {
      iVar21 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar21 + iVar25) = puVar20[-5];
      iVar21 = iVar21 + iVar25;
      *(undefined4 *)(iVar21 + 4) = puVar20[-4];
      *(undefined4 *)(iVar21 + 8) = puVar20[-3];
      *(undefined4 *)(iVar21 + 0xc) = 0x3f800000;
      puVar22 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10 + iVar25);
      *puVar22 = puVar20[-2];
      puVar22[1] = puVar20[-1];
      puVar22[2] = *puVar20;
      puVar22[3] = 0x3f800000;
      puVar22 = (undefined4 *)(iVar25 + 0x20 + *(int *)(param_1 + 0x1c));
      *puVar22 = puVar20[1];
      puVar22[1] = puVar20[2];
      puVar22[2] = puVar20[3];
      puVar22[3] = 0x3f800000;
      puVar22 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar25 + 0x30);
      iVar24 = iVar24 + -1;
      *puVar22 = puVar20[4];
      puVar22[1] = puVar20[5];
      puVar22[2] = puVar20[6];
      puVar22[3] = 0x3f800000;
      puVar20 = puVar20 + 0xc;
      iVar25 = iVar25 + 0x40;
    } while (iVar24 != 0);
  }
  if (uVar16 < param_3) {
    iVar25 = uVar16 << 4;
    iVar24 = param_3 - uVar16;
    puVar20 = (undefined4 *)(param_2 + 8 + uVar16 * 0xc);
    do {
      puVar22 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar25);
      *puVar22 = puVar20[-2];
      iVar25 = iVar25 + 0x10;
      iVar24 = iVar24 + -1;
      puVar22[1] = puVar20[-1];
      puVar22[2] = *puVar20;
      puVar22[3] = 0x3f800000;
      puVar20 = puVar20 + 3;
    } while (iVar24 != 0);
  }
  if (param_3 <= *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    *puVar20 = 0;
    puVar20[1] = 0;
    uVar26 = param_3 - 1;
    puVar20[2] = 0;
    puVar20[3] = 0;
    iVar24 = uVar26 * 0x10;
    iVar25 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar25 + iVar24) = 0;
    iVar25 = iVar25 + iVar24;
    *(undefined4 *)(iVar25 + 4) = 0;
    *(undefined4 *)(iVar25 + 8) = 0;
    *(undefined4 *)(iVar25 + 0xc) = 0;
    uVar16 = 1;
    if (1 < uVar26) {
      if (3 < (int)(param_3 - 2)) {
        iVar21 = (param_3 - 6 >> 2) + 1;
        uVar16 = iVar21 * 4 + 1;
        iVar25 = 0x10;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 4) + iVar25);
          fVar3 = pfVar17[-3];
          fVar4 = pfVar17[5];
          fVar5 = pfVar17[-2];
          fVar6 = pfVar17[6];
          fVar7 = pfVar17[-1];
          fVar8 = pfVar17[7];
          fVar9 = pfVar17[1];
          fVar10 = pfVar17[2];
          fVar11 = pfVar17[3];
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          *pfVar18 = ((*(float *)(*(int *)(param_1 + 4) + -0x10 + iVar25) + pfVar17[4]) -
                     *pfVar17 * 2.0) * 3.0;
          pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          iVar1 = iVar25 + 0x20;
          fVar3 = *(float *)(iVar25 + 4 + iVar15);
          fVar4 = *(float *)(iVar25 + 0x24 + iVar15);
          fVar5 = *(float *)(iVar25 + 8 + iVar15);
          fVar6 = *(float *)(iVar25 + 0x28 + iVar15);
          fVar7 = *(float *)(iVar25 + 0xc + iVar15);
          fVar8 = *(float *)(iVar25 + 0x2c + iVar15);
          fVar9 = *(float *)(iVar25 + 0x14 + iVar15);
          fVar10 = *(float *)(iVar25 + 0x18 + iVar15);
          fVar11 = *(float *)(iVar25 + 0x1c + iVar15);
          pfVar17 = (float *)(iVar25 + 0x10 + *(int *)(param_1 + 0xc));
          iVar2 = iVar25 + 0x30;
          *pfVar17 = ((*(float *)(iVar25 + iVar15) + *(float *)(iVar1 + iVar15)) -
                     *(float *)(iVar25 + 0x10 + iVar15) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar25 + 0x14 + iVar15);
          fVar4 = *(float *)(iVar25 + 0x34 + iVar15);
          fVar5 = *(float *)(iVar25 + 0x18 + iVar15);
          fVar6 = *(float *)(iVar25 + 0x38 + iVar15);
          fVar7 = *(float *)(iVar25 + 0x1c + iVar15);
          fVar8 = *(float *)(iVar25 + 0x3c + iVar15);
          fVar9 = *(float *)(iVar25 + 0x24 + iVar15);
          fVar10 = *(float *)(iVar25 + 0x28 + iVar15);
          fVar11 = *(float *)(iVar25 + 0x2c + iVar15);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
          *pfVar17 = ((*(float *)(iVar25 + 0x10 + iVar15) + *(float *)(iVar2 + iVar15)) -
                     *(float *)(iVar1 + iVar15) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar25 + 0x24 + iVar15);
          fVar4 = *(float *)(iVar25 + 0x44 + iVar15);
          fVar5 = *(float *)(iVar25 + 0x28 + iVar15);
          fVar6 = *(float *)(iVar25 + 0x48 + iVar15);
          fVar7 = *(float *)(iVar25 + 0x2c + iVar15);
          fVar8 = *(float *)(iVar25 + 0x4c + iVar15);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar2);
          iVar21 = iVar21 + -1;
          fVar9 = *(float *)(iVar25 + 0x34 + iVar15);
          fVar10 = *(float *)(iVar25 + 0x38 + iVar15);
          fVar11 = *(float *)(iVar25 + 0x3c + iVar15);
          *pfVar17 = ((*(float *)(iVar1 + iVar15) + *(float *)(iVar25 + 0x40 + iVar15)) -
                     *(float *)(iVar2 + iVar15) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar25 = iVar25 + 0x40;
        } while (iVar21 != 0);
      }
      if (uVar16 < uVar26) {
        iVar25 = uVar16 << 4;
        iVar21 = uVar26 - uVar16;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 4) + -0x10 + iVar25);
          pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar25);
          fVar3 = pfVar18[-3];
          fVar4 = pfVar18[5];
          fVar5 = pfVar18[-2];
          fVar6 = pfVar18[6];
          fVar7 = pfVar18[-1];
          fVar8 = pfVar18[7];
          fVar9 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          iVar25 = iVar25 + 0x10;
          iVar21 = iVar21 + -1;
          *pfVar19 = ((*pfVar17 + pfVar18[4]) - *pfVar18 * 2.0) * 3.0;
          pfVar19[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar19[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar19[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
        } while (iVar21 != 0);
      }
    }
    uVar16 = 1;
    if (1 < uVar26) {
      if (3 < (int)(param_3 - 2)) {
        iVar25 = 0x10;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          fVar3 = (float)(&DAT_01dd8f60)[uVar16];
          *pfVar17 = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + iVar25) - pfVar17[-4]);
          pfVar17[1] = (pfVar17[1] - pfVar17[-3]) * fVar3;
          pfVar17[2] = (pfVar17[2] - pfVar17[-2]) * fVar3;
          pfVar17[3] = fVar3 * (pfVar17[3] - pfVar17[-1]);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          fVar3 = (float)(&DAT_01dd8f64)[uVar16];
          pfVar17[4] = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar25) - *pfVar17);
          pfVar17[5] = (pfVar17[5] - pfVar17[1]) * fVar3;
          pfVar17[6] = (pfVar17[6] - pfVar17[2]) * fVar3;
          pfVar17[7] = fVar3 * (pfVar17[7] - pfVar17[3]);
          iVar21 = *(int *)(param_1 + 0xc);
          fVar3 = (float)(&DAT_01dd8f68)[uVar16];
          *(float *)(iVar25 + 0x20 + iVar21) =
               fVar3 * (*(float *)(iVar25 + 0x20 + iVar21) - *(float *)(iVar25 + 0x10 + iVar21));
          *(float *)(iVar25 + 0x24 + iVar21) =
               (*(float *)(iVar25 + 0x24 + iVar21) - *(float *)(iVar25 + 0x14 + iVar21)) * fVar3;
          *(float *)(iVar25 + 0x28 + iVar21) =
               (*(float *)(iVar25 + 0x28 + iVar21) - *(float *)(iVar25 + 0x18 + iVar21)) * fVar3;
          uVar16 = uVar16 + 4;
          *(float *)(iVar25 + 0x2c + iVar21) =
               fVar3 * (*(float *)(iVar25 + 0x2c + iVar21) - *(float *)(iVar25 + 0x1c + iVar21));
          iVar21 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(uVar16 * 4 + 0x1dd8f5c);
          *(float *)(iVar25 + 0x30 + iVar21) =
               fVar3 * (*(float *)(iVar25 + 0x30 + iVar21) - *(float *)(iVar25 + 0x20 + iVar21));
          *(float *)(iVar25 + 0x34 + iVar21) =
               (*(float *)(iVar25 + 0x34 + iVar21) - *(float *)(iVar25 + 0x24 + iVar21)) * fVar3;
          *(float *)(iVar25 + 0x38 + iVar21) =
               (*(float *)(iVar25 + 0x38 + iVar21) - *(float *)(iVar25 + 0x28 + iVar21)) * fVar3;
          *(float *)(iVar25 + 0x3c + iVar21) =
               fVar3 * (*(float *)(iVar25 + 0x3c + iVar21) - *(float *)(iVar25 + 0x2c + iVar21));
          iVar25 = iVar25 + 0x40;
        } while (uVar16 < param_3 - 4);
      }
      if (uVar16 < uVar26) {
        iVar25 = uVar16 << 4;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
          uVar16 = uVar16 + 1;
          iVar25 = iVar25 + 0x10;
          fVar3 = *(float *)(uVar16 * 4 + 0x1dd8f5c);
          *pfVar18 = fVar3 * (*pfVar17 - pfVar18[-4]);
          pfVar18[1] = (pfVar18[1] - pfVar18[-3]) * fVar3;
          pfVar18[2] = (pfVar18[2] - pfVar18[-2]) * fVar3;
          pfVar18[3] = fVar3 * (pfVar18[3] - pfVar18[-1]);
        } while (uVar16 < uVar26);
      }
    }
    iVar25 = param_3 - 2;
    if (iVar25 != 0) {
      iVar21 = iVar25 * 0x10;
      do {
        fVar3 = (float)(&DAT_01dd8f60)[iVar25] * -1.0;
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
        iVar21 = iVar21 + -0x10;
        iVar25 = iVar25 + -1;
        *pfVar17 = *pfVar17 + fVar3 * pfVar17[4];
        pfVar17[1] = pfVar17[1] + pfVar17[5] * fVar3;
        pfVar17[2] = pfVar17[2] + pfVar17[6] * fVar3;
        pfVar17[3] = pfVar17[3] + fVar3 * pfVar17[7];
      } while (iVar25 != 0);
    }
    iVar25 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar25 + iVar24) = 0;
    iVar25 = iVar25 + iVar24;
    *(undefined4 *)(iVar25 + 4) = 0;
    *(undefined4 *)(iVar25 + 8) = 0;
    *(undefined4 *)(iVar25 + 0xc) = 0;
    uVar16 = 0;
    if (3 < (int)uVar26) {
      iVar21 = (param_3 - 5 >> 2) + 1;
      uVar16 = iVar21 * 4;
      iVar25 = 0x20;
      do {
        iVar1 = iVar25 + -0x20;
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
        fVar3 = pfVar17[5];
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[6];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[7];
        fVar8 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
        *pfVar18 = (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar1) - *pfVar17) * 0.33333334;
        pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar2 + 4 + iVar25);
        fVar4 = *(float *)(iVar2 + 0x14 + iVar1);
        fVar5 = *(float *)(iVar2 + 8 + iVar25);
        fVar6 = *(float *)(iVar2 + 0x18 + iVar1);
        fVar7 = *(float *)(iVar2 + 0xc + iVar25);
        fVar8 = *(float *)(iVar2 + 0x1c + iVar1);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + 0x10 + iVar1);
        *pfVar17 = (*(float *)(iVar2 + iVar25) - *(float *)(iVar2 + 0x10 + iVar1)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        iVar1 = iVar25 + 0x10;
        fVar3 = *(float *)(iVar2 + 4 + iVar1);
        fVar4 = *(float *)(iVar2 + 4 + iVar25);
        fVar5 = *(float *)(iVar2 + 8 + iVar1);
        fVar6 = *(float *)(iVar2 + 8 + iVar25);
        fVar7 = *(float *)(iVar2 + 0xc + iVar1);
        fVar8 = *(float *)(iVar2 + 0xc + iVar25);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar25);
        *pfVar17 = (*(float *)(iVar2 + 0x10 + iVar25) - *(float *)(iVar2 + iVar25)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        iVar25 = iVar25 + 0x40;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar2 + -0x1c + iVar25);
        fVar4 = *(float *)(iVar2 + 4 + iVar1);
        fVar5 = *(float *)(iVar2 + -0x18 + iVar25);
        fVar6 = *(float *)(iVar2 + 8 + iVar1);
        fVar7 = *(float *)(iVar2 + -0x14 + iVar25);
        fVar8 = *(float *)(iVar2 + 0xc + iVar1);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
        iVar21 = iVar21 + -1;
        *pfVar17 = (*(float *)(iVar2 + -0x20 + iVar25) - *(float *)(iVar2 + iVar1)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
      } while (iVar21 != 0);
    }
    if (uVar16 < uVar26) {
      iVar25 = uVar16 << 4;
      iVar21 = uVar26 - uVar16;
      do {
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar25);
        pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar25);
        iVar25 = iVar25 + 0x10;
        iVar21 = iVar21 + -1;
        *pfVar19 = (*pfVar17 - *pfVar18) * 0.33333334;
        pfVar19[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar19[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar19[3] = (fVar7 - fVar8) * 0.33333334;
      } while (iVar21 != 0);
    }
    puVar20 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar24);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    uVar16 = 0;
    if (3 < (int)uVar26) {
      iVar24 = (param_3 - 5 >> 2) + 1;
      uVar16 = iVar24 * 4;
      iVar25 = 0x20;
      do {
        iVar21 = iVar25 + -0x20;
        pfVar17 = (float *)(*(int *)(param_1 + 4) + iVar21);
        pfVar27 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
        fVar3 = pfVar17[5];
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[6];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[7];
        fVar8 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar21);
        fVar9 = pfVar27[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar27[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar27[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar21);
        *pfVar19 = (*(float *)(*(int *)(param_1 + 4) + 0x10 + iVar21) - *pfVar17) -
                   (*pfVar27 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        pfVar17 = (float *)(iVar25 + -0x10 + *(int *)(param_1 + 0xc));
        fVar3 = *(float *)(iVar1 + 4 + iVar25);
        fVar4 = *(float *)(iVar1 + 0x14 + iVar21);
        fVar5 = *(float *)(iVar1 + 8 + iVar25);
        fVar6 = *(float *)(iVar1 + 0x18 + iVar21);
        fVar7 = *(float *)(iVar1 + 0xc + iVar25);
        fVar8 = *(float *)(iVar1 + 0x1c + iVar21);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + 0x10 + iVar21);
        fVar9 = pfVar17[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar17[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar17[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(iVar25 + -0x10 + *(int *)(param_1 + 8));
        *pfVar19 = (*(float *)(iVar1 + iVar25) - *(float *)(iVar1 + 0x10 + iVar21)) -
                   (*pfVar17 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        iVar21 = iVar25 + 0x10;
        pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
        fVar3 = *(float *)(iVar1 + 4 + iVar21);
        fVar4 = *(float *)(iVar1 + 4 + iVar25);
        fVar5 = *(float *)(iVar1 + 8 + iVar21);
        fVar6 = *(float *)(iVar1 + 8 + iVar25);
        fVar7 = *(float *)(iVar1 + 0xc + iVar21);
        fVar8 = *(float *)(iVar1 + 0xc + iVar25);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar25);
        fVar9 = pfVar19[1];
        fVar10 = pfVar17[1];
        fVar11 = pfVar19[2];
        fVar12 = pfVar17[2];
        fVar13 = pfVar19[3];
        fVar14 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 8) + iVar25);
        *pfVar18 = (*(float *)(iVar1 + 0x10 + iVar25) - *(float *)(iVar1 + iVar25)) -
                   (*pfVar19 + *pfVar17);
        pfVar18[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar18[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar18[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        pfVar17 = (float *)(iVar1 + 0x20 + iVar25);
        fVar3 = *(float *)(iVar1 + 0x24 + iVar25);
        fVar4 = *(float *)(iVar1 + 4 + iVar21);
        fVar5 = *(float *)(iVar1 + 0x28 + iVar25);
        fVar6 = *(float *)(iVar1 + 8 + iVar21);
        fVar7 = *(float *)(iVar1 + 0x2c + iVar25);
        fVar8 = *(float *)(iVar1 + 0xc + iVar21);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar21);
        pfVar27 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
        fVar9 = pfVar27[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar27[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar27[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar21);
        iVar25 = iVar25 + 0x40;
        iVar24 = iVar24 + -1;
        *pfVar19 = (*pfVar17 - *(float *)(iVar1 + iVar21)) - (*pfVar27 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar24 != 0);
    }
    if (uVar16 < uVar26) {
      iVar25 = uVar16 << 4;
      iVar24 = uVar26 - uVar16;
      do {
        pfVar17 = (float *)(*(int *)(param_1 + 4) + 0x10 + iVar25);
        pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar25);
        pfVar23 = (float *)(*(int *)(param_1 + 0xc) + iVar25);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar25);
        fVar9 = pfVar23[1];
        fVar10 = pfVar19[1];
        fVar11 = pfVar23[2];
        fVar12 = pfVar19[2];
        fVar13 = pfVar23[3];
        fVar14 = pfVar19[3];
        pfVar27 = (float *)(*(int *)(param_1 + 8) + iVar25);
        iVar25 = iVar25 + 0x10;
        iVar24 = iVar24 + -1;
        *pfVar27 = (*pfVar17 - *pfVar18) - (*pfVar23 + *pfVar19);
        pfVar27[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar27[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar27[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar24 != 0);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    return;
  }
  FUN_00dd5650(&DAT_016d98c0,param_3,*(uint *)(param_1 + 0x18));
  return;
}

// 00F3DAD0  FUN_00f3dad0  size=3638  [run]
void __thiscall FUN_00f3dad0(int param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  float *pfVar26;
  uint local_4c;
  int local_44;
  
  if (param_5 < 3) {
    FUN_00dd5650(&DAT_016df4c0,param_5);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_5) {
    FUN_00dd5650(&DAT_016df478,param_5,*(uint *)(param_1 + 0x18));
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00dd5650(&DAT_016df438);
    return;
  }
  local_4c = 0;
  if (3 < (int)param_5) {
    local_44 = (param_5 - 4 >> 2) + 1;
    iVar24 = 0;
    local_4c = local_44 * 4;
    pfVar17 = (float *)(param_2 + 0x10);
    pfVar18 = (float *)(param_3 + 0x1c);
    do {
      iVar22 = *(int *)(param_1 + 0x1c);
      *(float *)(iVar22 + iVar24) = (pfVar18[-7] - pfVar17[-4]) * param_4 + pfVar17[-4];
      *(float *)(iVar22 + 4 + iVar24) = (pfVar18[-6] - pfVar17[-3]) * param_4 + pfVar17[-3];
      *(float *)(iVar22 + 8 + iVar24) = (pfVar18[-5] - pfVar17[-2]) * param_4 + pfVar17[-2];
      pfVar19 = (float *)(iVar24 + 0x10 + *(int *)(param_1 + 0x1c));
      *pfVar19 = (pfVar18[-4] - pfVar17[-1]) * param_4 + pfVar17[-1];
      pfVar19[1] = (*(float *)((param_3 - param_2) + -0x30 + (int)(pfVar17 + 0xc)) - *pfVar17) *
                   param_4 + *pfVar17;
      pfVar19[2] = (pfVar18[-2] - pfVar17[1]) * param_4 + pfVar17[1];
      pfVar19 = (float *)(iVar24 + 0x20 + *(int *)(param_1 + 0x1c));
      iVar24 = iVar24 + 0x40;
      local_44 = local_44 + -1;
      *pfVar19 = (pfVar18[-1] - pfVar17[2]) * param_4 + pfVar17[2];
      pfVar19[1] = (*pfVar18 - pfVar17[3]) * param_4 + pfVar17[3];
      pfVar19[2] = (pfVar18[1] - pfVar17[4]) * param_4 + pfVar17[4];
      iVar22 = *(int *)(param_1 + 0x1c);
      *(float *)(iVar22 + -0x10 + iVar24) = (pfVar18[2] - pfVar17[5]) * param_4 + pfVar17[5];
      *(float *)(iVar22 + -0xc + iVar24) = (pfVar18[3] - pfVar17[6]) * param_4 + pfVar17[6];
      *(float *)(iVar22 + -8 + iVar24) = (pfVar18[4] - pfVar17[7]) * param_4 + pfVar17[7];
      pfVar17 = pfVar17 + 0xc;
      pfVar18 = pfVar18 + 0xc;
    } while (local_44 != 0);
  }
  if (local_4c < param_5) {
    iVar24 = local_4c << 4;
    local_44 = param_5 - local_4c;
    pfVar17 = (float *)(local_4c * 0xc + 4 + param_2);
    pfVar18 = (float *)(local_4c * 0xc + param_3);
    do {
      iVar22 = *(int *)(param_1 + 0x1c);
      iVar24 = iVar24 + 0x10;
      local_44 = local_44 + -1;
      *(float *)(iVar22 + -0x10 + iVar24) = (*pfVar18 - pfVar17[-1]) * param_4 + pfVar17[-1];
      *(float *)(iVar22 + -0xc + iVar24) =
           (*(float *)((int)pfVar17 + (param_3 - param_2)) - *pfVar17) * param_4 + *pfVar17;
      *(float *)(iVar22 + -8 + iVar24) = (pfVar18[2] - pfVar17[1]) * param_4 + pfVar17[1];
      pfVar17 = pfVar17 + 3;
      pfVar18 = pfVar18 + 3;
    } while (local_44 != 0);
  }
  if (param_5 <= *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    *puVar20 = 0;
    puVar20[1] = 0;
    uVar25 = param_5 - 1;
    puVar20[2] = 0;
    puVar20[3] = 0;
    iVar22 = uVar25 * 0x10;
    iVar24 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar24 + iVar22) = 0;
    iVar24 = iVar24 + iVar22;
    *(undefined4 *)(iVar24 + 4) = 0;
    *(undefined4 *)(iVar24 + 8) = 0;
    *(undefined4 *)(iVar24 + 0xc) = 0;
    uVar16 = 1;
    if (1 < uVar25) {
      if (3 < (int)(param_5 - 2)) {
        iVar23 = (param_5 - 6 >> 2) + 1;
        iVar24 = 0x10;
        uVar16 = iVar23 * 4 + 1;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 4) + iVar24);
          fVar3 = pfVar17[-3];
          fVar4 = pfVar17[5];
          fVar5 = pfVar17[-2];
          fVar6 = pfVar17[6];
          fVar7 = pfVar17[-1];
          fVar8 = pfVar17[7];
          fVar9 = pfVar17[1];
          fVar10 = pfVar17[2];
          fVar11 = pfVar17[3];
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          *pfVar18 = ((*(float *)(*(int *)(param_1 + 4) + -0x10 + iVar24) + pfVar17[4]) -
                     *pfVar17 * 2.0) * 3.0;
          pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          iVar1 = iVar24 + 0x20;
          fVar3 = *(float *)(iVar24 + 4 + iVar15);
          fVar4 = *(float *)(iVar15 + 4 + iVar1);
          fVar5 = *(float *)(iVar24 + 8 + iVar15);
          fVar6 = *(float *)(iVar15 + 8 + iVar1);
          fVar7 = *(float *)(iVar24 + 0xc + iVar15);
          fVar8 = *(float *)(iVar15 + 0xc + iVar1);
          fVar9 = *(float *)(iVar24 + 0x14 + iVar15);
          fVar10 = *(float *)(iVar24 + 0x18 + iVar15);
          fVar11 = *(float *)(iVar24 + 0x1c + iVar15);
          pfVar17 = (float *)(iVar24 + 0x10 + *(int *)(param_1 + 0xc));
          iVar2 = iVar24 + 0x30;
          *pfVar17 = ((*(float *)(iVar24 + iVar15) + *(float *)(iVar15 + iVar1)) -
                     *(float *)(iVar24 + 0x10 + iVar15) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar24 + 0x14 + iVar15);
          fVar4 = *(float *)(iVar15 + 4 + iVar2);
          fVar5 = *(float *)(iVar24 + 0x18 + iVar15);
          fVar6 = *(float *)(iVar15 + 8 + iVar2);
          fVar7 = *(float *)(iVar24 + 0x1c + iVar15);
          fVar8 = *(float *)(iVar15 + 0xc + iVar2);
          fVar9 = *(float *)(iVar15 + 4 + iVar1);
          fVar10 = *(float *)(iVar15 + 8 + iVar1);
          fVar11 = *(float *)(iVar15 + 0xc + iVar1);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
          *pfVar17 = ((*(float *)(iVar24 + 0x10 + iVar15) + *(float *)(iVar15 + iVar2)) -
                     *(float *)(iVar15 + iVar1) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar15 + 4 + iVar1);
          fVar4 = *(float *)(iVar15 + 0x24 + iVar1);
          iVar24 = iVar24 + 0x40;
          fVar5 = *(float *)(iVar15 + 8 + iVar1);
          fVar6 = *(float *)(iVar15 + 0x28 + iVar1);
          fVar7 = *(float *)(iVar15 + 0xc + iVar1);
          fVar8 = *(float *)(iVar15 + 0x2c + iVar1);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar2);
          iVar23 = iVar23 + -1;
          fVar9 = *(float *)(iVar15 + 4 + iVar2);
          fVar10 = *(float *)(iVar15 + 8 + iVar2);
          fVar11 = *(float *)(iVar15 + 0xc + iVar2);
          *pfVar17 = ((*(float *)(iVar15 + iVar1) + *(float *)(iVar15 + 0x20 + iVar1)) -
                     *(float *)(iVar15 + iVar2) * 2.0) * 3.0;
          pfVar17[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar17[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar17[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
        } while (iVar23 != 0);
      }
      if (uVar16 < uVar25) {
        iVar24 = uVar16 << 4;
        iVar23 = uVar25 - uVar16;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 4) + -0x10 + iVar24);
          pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar24);
          fVar3 = pfVar18[-3];
          fVar4 = pfVar18[5];
          fVar5 = pfVar18[-2];
          fVar6 = pfVar18[6];
          fVar7 = pfVar18[-1];
          fVar8 = pfVar18[7];
          fVar9 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          iVar24 = iVar24 + 0x10;
          iVar23 = iVar23 + -1;
          *pfVar19 = ((*pfVar17 + pfVar18[4]) - *pfVar18 * 2.0) * 3.0;
          pfVar19[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar19[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar19[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
        } while (iVar23 != 0);
      }
    }
    uVar16 = 1;
    if (1 < uVar25) {
      if (3 < (int)(param_5 - 2)) {
        iVar24 = 0x10;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          fVar3 = (float)(&DAT_01dd8f60)[uVar16];
          *pfVar17 = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + iVar24) - pfVar17[-4]);
          pfVar17[1] = (pfVar17[1] - pfVar17[-3]) * fVar3;
          pfVar17[2] = (pfVar17[2] - pfVar17[-2]) * fVar3;
          pfVar17[3] = fVar3 * (pfVar17[3] - pfVar17[-1]);
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          fVar3 = (float)(&DAT_01dd8f64)[uVar16];
          pfVar17[4] = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar24) - *pfVar17);
          pfVar17[5] = (pfVar17[5] - pfVar17[1]) * fVar3;
          pfVar17[6] = (pfVar17[6] - pfVar17[2]) * fVar3;
          pfVar17[7] = fVar3 * (pfVar17[7] - pfVar17[3]);
          iVar23 = *(int *)(param_1 + 0xc);
          pfVar17 = (float *)(iVar23 + 0x2c + iVar24);
          pfVar18 = (float *)(iVar23 + 0x1c + iVar24);
          fVar3 = (float)(&DAT_01dd8f68)[uVar16];
          *(float *)(iVar23 + 0x20 + iVar24) =
               fVar3 * (*(float *)(iVar23 + 0x20 + iVar24) - *(float *)(iVar23 + 0x10 + iVar24));
          *(float *)(iVar23 + 0x24 + iVar24) =
               (*(float *)(iVar23 + 0x24 + iVar24) - *(float *)(iVar23 + 0x14 + iVar24)) * fVar3;
          *(float *)(iVar23 + 0x28 + iVar24) =
               (*(float *)(iVar23 + 0x28 + iVar24) - *(float *)(iVar23 + 0x18 + iVar24)) * fVar3;
          uVar16 = uVar16 + 4;
          iVar24 = iVar24 + 0x40;
          *(float *)(iVar23 + -0x14 + iVar24) = fVar3 * (*pfVar17 - *pfVar18);
          iVar23 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(uVar16 * 4 + 0x1dd8f5c);
          *(float *)(iVar23 + -0x10 + iVar24) =
               fVar3 * (*(float *)(iVar23 + -0x10 + iVar24) - *(float *)(iVar23 + -0x20 + iVar24));
          *(float *)(iVar23 + -0xc + iVar24) =
               (*(float *)(iVar23 + -0xc + iVar24) - *(float *)(iVar23 + -0x1c + iVar24)) * fVar3;
          *(float *)(iVar23 + -8 + iVar24) =
               (*(float *)(iVar23 + -8 + iVar24) - *(float *)(iVar23 + -0x18 + iVar24)) * fVar3;
          *(float *)(iVar23 + -4 + iVar24) =
               fVar3 * (*(float *)(iVar23 + -4 + iVar24) - *(float *)(iVar23 + -0x14 + iVar24));
        } while (uVar16 < param_5 - 4);
      }
      if (uVar16 < uVar25) {
        iVar24 = uVar16 << 4;
        do {
          pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          uVar16 = uVar16 + 1;
          iVar24 = iVar24 + 0x10;
          fVar3 = *(float *)(uVar16 * 4 + 0x1dd8f5c);
          *pfVar18 = fVar3 * (*pfVar17 - pfVar18[-4]);
          pfVar18[1] = (pfVar18[1] - pfVar18[-3]) * fVar3;
          pfVar18[2] = (pfVar18[2] - pfVar18[-2]) * fVar3;
          pfVar18[3] = fVar3 * (pfVar18[3] - pfVar18[-1]);
        } while (uVar16 < uVar25);
      }
    }
    iVar24 = param_5 - 2;
    if (iVar24 != 0) {
      iVar23 = iVar24 * 0x10;
      do {
        fVar3 = (float)(&DAT_01dd8f60)[iVar24] * -1.0;
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar23);
        iVar23 = iVar23 + -0x10;
        iVar24 = iVar24 + -1;
        *pfVar17 = fVar3 * pfVar17[4] + *pfVar17;
        pfVar17[1] = pfVar17[1] + pfVar17[5] * fVar3;
        pfVar17[2] = pfVar17[2] + pfVar17[6] * fVar3;
        pfVar17[3] = pfVar17[3] + fVar3 * pfVar17[7];
      } while (iVar24 != 0);
    }
    iVar24 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar24 + iVar22) = 0;
    iVar24 = iVar24 + iVar22;
    *(undefined4 *)(iVar24 + 4) = 0;
    *(undefined4 *)(iVar24 + 8) = 0;
    *(undefined4 *)(iVar24 + 0xc) = 0;
    uVar16 = 0;
    if (3 < (int)uVar25) {
      iVar23 = (param_5 - 5 >> 2) + 1;
      uVar16 = iVar23 * 4;
      iVar24 = 0x20;
      do {
        iVar1 = iVar24 + -0x20;
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
        fVar3 = pfVar17[5];
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[6];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[7];
        fVar8 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
        *pfVar18 = (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar1) - *pfVar17) * 0.33333334;
        pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar2 + 4 + iVar24);
        fVar4 = *(float *)(iVar2 + 0x14 + iVar1);
        fVar5 = *(float *)(iVar2 + 8 + iVar24);
        fVar6 = *(float *)(iVar2 + 0x18 + iVar1);
        fVar7 = *(float *)(iVar2 + 0xc + iVar24);
        fVar8 = *(float *)(iVar2 + 0x1c + iVar1);
        pfVar17 = (float *)(iVar24 + -0x10 + *(int *)(param_1 + 0x10));
        *pfVar17 = (*(float *)(iVar2 + iVar24) - *(float *)(iVar2 + 0x10 + iVar1)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        iVar1 = iVar24 + 0x10;
        fVar3 = *(float *)(iVar2 + 4 + iVar1);
        fVar4 = *(float *)(iVar2 + 4 + iVar24);
        fVar5 = *(float *)(iVar2 + 8 + iVar1);
        fVar6 = *(float *)(iVar2 + 8 + iVar24);
        fVar7 = *(float *)(iVar2 + 0xc + iVar1);
        fVar8 = *(float *)(iVar2 + 0xc + iVar24);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        *pfVar17 = (*(float *)(iVar2 + 0x10 + iVar24) - *(float *)(iVar2 + iVar24)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        iVar24 = iVar24 + 0x40;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
        iVar2 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar2 + -0x1c + iVar24);
        fVar4 = *(float *)(iVar2 + 4 + iVar1);
        fVar5 = *(float *)(iVar2 + -0x18 + iVar24);
        fVar6 = *(float *)(iVar2 + 8 + iVar1);
        fVar7 = *(float *)(iVar2 + -0x14 + iVar24);
        fVar8 = *(float *)(iVar2 + 0xc + iVar1);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
        iVar23 = iVar23 + -1;
        *pfVar17 = (*(float *)(iVar2 + -0x20 + iVar24) - *(float *)(iVar2 + iVar1)) * 0.33333334;
        pfVar17[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar17[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar17[3] = (fVar7 - fVar8) * 0.33333334;
      } while (iVar23 != 0);
    }
    if (uVar16 < uVar25) {
      iVar24 = uVar16 << 4;
      iVar23 = uVar25 - uVar16;
      do {
        pfVar17 = (float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar24);
        pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        iVar24 = iVar24 + 0x10;
        iVar23 = iVar23 + -1;
        *pfVar19 = (*pfVar17 - *pfVar18) * 0.33333334;
        pfVar19[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar19[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar19[3] = (fVar7 - fVar8) * 0.33333334;
      } while (iVar23 != 0);
    }
    puVar20 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar22);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    uVar16 = 0;
    if (3 < (int)uVar25) {
      iVar22 = (param_5 - 5 >> 2) + 1;
      uVar16 = iVar22 * 4;
      iVar24 = 0x20;
      do {
        iVar23 = iVar24 + -0x20;
        pfVar17 = (float *)(*(int *)(param_1 + 4) + iVar23);
        pfVar26 = (float *)(*(int *)(param_1 + 0xc) + iVar23);
        fVar3 = pfVar17[5];
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[6];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[7];
        fVar8 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar23);
        fVar9 = pfVar26[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar26[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar26[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar23);
        *pfVar19 = (*(float *)(*(int *)(param_1 + 4) + 0x10 + iVar23) - *pfVar17) -
                   (*pfVar26 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        pfVar17 = (float *)(iVar24 + -0x10 + *(int *)(param_1 + 0xc));
        fVar3 = *(float *)(iVar1 + 4 + iVar24);
        fVar4 = *(float *)(iVar1 + 0x14 + iVar23);
        fVar5 = *(float *)(iVar1 + 8 + iVar24);
        fVar6 = *(float *)(iVar1 + 0x18 + iVar23);
        fVar7 = *(float *)(iVar1 + 0xc + iVar24);
        fVar8 = *(float *)(iVar1 + 0x1c + iVar23);
        pfVar18 = (float *)(iVar24 + -0x10 + *(int *)(param_1 + 0x10));
        fVar9 = pfVar17[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar17[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar17[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(iVar24 + -0x10 + *(int *)(param_1 + 8));
        *pfVar19 = (*(float *)(iVar1 + iVar24) - *(float *)(iVar1 + 0x10 + iVar23)) -
                   (*pfVar17 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        iVar23 = iVar24 + 0x10;
        pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        fVar3 = *(float *)(iVar1 + 4 + iVar23);
        fVar4 = *(float *)(iVar1 + 4 + iVar24);
        fVar5 = *(float *)(iVar1 + 8 + iVar23);
        fVar6 = *(float *)(iVar1 + 8 + iVar24);
        fVar7 = *(float *)(iVar1 + 0xc + iVar23);
        fVar8 = *(float *)(iVar1 + 0xc + iVar24);
        pfVar17 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        fVar9 = pfVar19[1];
        fVar10 = pfVar17[1];
        fVar11 = pfVar19[2];
        fVar12 = pfVar17[2];
        fVar13 = pfVar19[3];
        fVar14 = pfVar17[3];
        pfVar18 = (float *)(*(int *)(param_1 + 8) + iVar24);
        *pfVar18 = (*(float *)(iVar1 + 0x10 + iVar24) - *(float *)(iVar1 + iVar24)) -
                   (*pfVar19 + *pfVar17);
        pfVar18[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar18[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar18[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        pfVar17 = (float *)(iVar1 + 0x20 + iVar24);
        fVar3 = *(float *)(iVar1 + 0x24 + iVar24);
        fVar4 = *(float *)(iVar1 + 4 + iVar23);
        fVar5 = *(float *)(iVar1 + 0x28 + iVar24);
        fVar6 = *(float *)(iVar1 + 8 + iVar23);
        fVar7 = *(float *)(iVar1 + 0x2c + iVar24);
        fVar8 = *(float *)(iVar1 + 0xc + iVar23);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar23);
        pfVar26 = (float *)(*(int *)(param_1 + 0xc) + iVar23);
        fVar9 = pfVar26[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar26[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar26[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar23);
        iVar24 = iVar24 + 0x40;
        iVar22 = iVar22 + -1;
        *pfVar19 = (*pfVar17 - *(float *)(iVar1 + iVar23)) - (*pfVar26 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar22 != 0);
    }
    if (uVar16 < uVar25) {
      iVar24 = uVar16 << 4;
      iVar22 = uVar25 - uVar16;
      do {
        pfVar17 = (float *)(*(int *)(param_1 + 4) + 0x10 + iVar24);
        pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar24);
        pfVar21 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        fVar9 = pfVar21[1];
        fVar10 = pfVar19[1];
        fVar11 = pfVar21[2];
        fVar12 = pfVar19[2];
        fVar13 = pfVar21[3];
        fVar14 = pfVar19[3];
        pfVar26 = (float *)(*(int *)(param_1 + 8) + iVar24);
        iVar24 = iVar24 + 0x10;
        iVar22 = iVar22 + -1;
        *pfVar26 = (*pfVar17 - *pfVar18) - (*pfVar21 + *pfVar19);
        pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar22 != 0);
    }
    *(uint *)(param_1 + 0x14) = param_5;
    return;
  }
  FUN_00dd5650(&DAT_016d98c0,param_5,*(uint *)(param_1 + 0x18));
  return;
}

// 00F3E910  FUN_00f3e910  size=72  [run]
undefined4 __fastcall FUN_00f3e910(int *param_1)

{
  int iVar1;
  
  if (((*(byte *)(*param_1 + 0x3c) & 8) != 0) && (*(int *)(*param_1 + 0x120) == 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c800();
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x470) != '\0')) {
        *(uint *)(*param_1 + 0x30) = *(uint *)(*param_1 + 0x30) | 0x80000000;
        return 0;
      }
    }
  }
  return 1;
}

