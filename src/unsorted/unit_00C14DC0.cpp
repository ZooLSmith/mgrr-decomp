// src/unsorted/unit_00C14DC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C14DC0..00C156D0, 21 functions

#include "mgrr.h"

// 00C14DC0  FUN_00c14dc0  size=22  [run]
void __fastcall FUN_00c14dc0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a93060();
  *(float *)(param_1 + 0xd8c) = (float)(fVar1 + (float10)*(float *)(param_1 + 0xd8c));
  return;
}

// 00C14DE0  FUN_00c14de0  size=45  [run]
void __fastcall FUN_00c14de0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a93060();
  fVar1 = (float10)*(float *)(param_1 + 0xd8c) - fVar1;
  *(float *)(param_1 + 0xd8c) = (float)fVar1;
  if (fVar1 <= (float10)0) {
    *(float *)(param_1 + 0xd8c) = (float)(float10)0;
    return;
  }
  return;
}

// 00C14E30  FUN_00c14e30  size=22  [run]
void __fastcall FUN_00c14e30(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a93060();
  *(float *)(param_1 + 0xd90) = (float)(fVar1 + (float10)*(float *)(param_1 + 0xd90));
  return;
}

// 00C14E50  FUN_00c14e50  size=45  [run]
void __fastcall FUN_00c14e50(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a93060();
  fVar1 = (float10)*(float *)(param_1 + 0xd90) - fVar1;
  *(float *)(param_1 + 0xd90) = (float)fVar1;
  if (fVar1 <= (float10)0) {
    *(float *)(param_1 + 0xd90) = (float)(float10)0;
    return;
  }
  return;
}

// 00C14F90  FUN_00c14f90  size=36  [run]
void __fastcall FUN_00c14f90(int param_1)

{
  FUN_00a7c950();
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C14FC0  FUN_00c14fc0  size=66  [run]
void __thiscall FUN_00c14fc0(int param_1,undefined4 param_2)

{
  FUN_00a7c950();
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x60) != -1) {
    RayCastManager::getWork(param_2);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}

// 00C15010  FUN_00c15010  size=113  [run]
undefined4 __thiscall FUN_00c15010(int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if (*(short *)(param_1 + 4) != -1) {
        iVar1 = FUN_00a12210((int)*(short *)(param_1 + 4));
        if (iVar1 == 0) {
          return 0;
        }
      }
      D3DXVec3TransformNormal(param_2,param_1 + 0x20,iVar1 + 0x10);
      *param_2 = *(float *)(iVar1 + 0x40) + *param_2;
      param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
      param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
      return 1;
    }
  }
  return 0;
}

// 00C15090  FUN_00c15090  size=262  [run]
undefined4 __fastcall FUN_00c15090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_30;
  float local_2c;
  float local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = FUN_00f98a90();
    iVar2 = FUN_00f98a90();
    iVar3 = FUN_00f98a90();
    iVar4 = FUN_00f98aa0();
    iVar5 = FUN_00c15010(local_20);
    if ((((iVar5 != 0) && (FUN_00d9fa80(&local_30,local_20), 1.0 < local_24)) &&
        ((float)iVar3 * 0.5 - (float)iVar1 * 0.5 < local_30)) &&
       (((local_30 < (float)iVar1 * 0.5 + (float)iVar3 * 0.5 &&
         ((float)iVar4 * 0.5 - (float)iVar2 * 0.5 < local_2c)) &&
        (local_2c < (float)iVar2 * 0.5 + (float)iVar4 * 0.5)))) {
      return 1;
    }
  }
  return 0;
}

// 00C151A0  FUN_00c151a0  size=73  [run]
undefined4 __thiscall FUN_00c151a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = FUN_00a81330();
    iVar2 = FUN_00a81330();
    if ((iVar1 == iVar2) && (*(short *)(param_1 + 4) == *(short *)(param_2 + 4))) {
      return 1;
    }
  }
  return 0;
}

// 00C151F0  FUN_00c151f0  size=127  [run]
void __thiscall
FUN_00c151f0(int param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined4 *param_5,
            undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined2 *)(param_1 + 4) = param_4;
    *(undefined4 *)(param_1 + 0x20) = *param_5;
    *(undefined4 *)(param_1 + 0x24) = param_5[1];
    *(undefined4 *)(param_1 + 0x28) = param_5[2];
    *(undefined4 *)(param_1 + 0x2c) = param_5[3];
    *(undefined2 *)(param_1 + 0x38) = param_6;
    *(undefined4 *)(param_1 + 0x18) = param_7;
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_8;
    *(undefined4 *)(param_1 + 8) = param_10;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x30) = param_9;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
  }
  return;
}

// 00C15270  FUN_00c15270  size=23  [run]
void __thiscall FUN_00c15270(int param_1,undefined2 param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined2 *)(param_1 + 0x3a) = param_2;
  return;
}

// 00C152B0  FUN_00c152b0  size=11  [run]
byte __fastcall FUN_00c152b0(int param_1)

{
  return *(byte *)(param_1 + 8) >> 4 & 1;
}

// 00C15320  FUN_00c15320  size=68  [run]
void __fastcall FUN_00c15320(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40490fdb;
  return;
}

// 00C15370  FUN_00c15370  size=167  [run]
undefined4 __thiscall FUN_00c15370(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    *param_2 = *(float *)(param_1 + 0x20);
    param_2[1] = *(float *)(param_1 + 0x24);
    param_2[2] = *(float *)(param_1 + 0x28);
    param_2[3] = *(float *)(param_1 + 0x2c);
    return 1;
  }
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == -1) {
    iVar3 = iVar2 + 0x10;
    D3DXVec3TransformNormal(param_2,param_1 + 0x20,iVar3);
    fVar1 = *(float *)(iVar2 + 0x40) + *param_2;
  }
  else {
    iVar2 = FUN_00a12210(*(int *)(param_1 + 8));
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = iVar2 + 0x10;
    D3DXVec3TransformNormal(param_2,param_1 + 0x20,iVar3);
    fVar1 = *param_2 + *(float *)(iVar2 + 0x40);
  }
  *param_2 = fVar1;
  param_2[1] = *(float *)(iVar3 + 0x34) + param_2[1];
  param_2[2] = *(float *)(iVar3 + 0x38) + param_2[2];
  return 1;
}

// 00C15420  FUN_00c15420  size=120  [run]
void __thiscall
FUN_00c15420(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00a7c950();
  }
  else {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = *param_4;
  *(undefined4 *)(param_1 + 0x24) = param_4[1];
  *(undefined4 *)(param_1 + 0x28) = param_4[2];
  *(undefined4 *)(param_1 + 0x2c) = param_4[3];
  *(undefined4 *)(param_1 + 0x58) = param_9;
  *(undefined4 *)(param_1 + 0x5c) = param_10;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_6;
  *(undefined4 *)(param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 0x38) = param_8;
  return;
}

// 00C154A0  FUN_00c154a0  size=127  [run]
void __thiscall
FUN_00c154a0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00a7c950();
  }
  else {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x20) = *param_4;
  *(undefined4 *)(param_1 + 0x24) = param_4[1];
  *(undefined4 *)(param_1 + 0x28) = param_4[2];
  *(undefined4 *)(param_1 + 0x2c) = param_4[3];
  *(undefined4 *)(param_1 + 0x58) = param_10;
  *(undefined4 *)(param_1 + 0x5c) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 0x38) = param_8;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_9;
  return;
}

// 00C15520  FUN_00c15520  size=13  [run]
bool __fastcall FUN_00c15520(int param_1)

{
  return *(int *)(param_1 + 0x58) < 0x1000;
}

// 00C15530  FUN_00c15530  size=26  [run]
bool __fastcall FUN_00c15530(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 0x1000) {
    return false;
  }
  return *(int *)(param_1 + 0x58) < 0x100c;
}

// 00C15570  FUN_00c15570  size=111  [run]
void __thiscall FUN_00c15570(int param_1,undefined4 param_2)

{
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0.0;
  local_28 = 0;
  FUN_00c15370(&local_30);
  local_20 = local_30;
  local_18 = local_28;
  local_14 = local_24;
  local_1c = *(float *)(param_1 + 0x30) + local_2c;
  FUN_00f961d0(&local_30,&local_20,*(undefined4 *)(param_1 + 0x14),param_2,0,0);
  return;
}

// 00C155E0  FUN_00c155e0  size=235  [run]
void __thiscall FUN_00c155e0(int param_1,undefined4 param_2)

{
  float unaff_ESI;
  float fVar1;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [28];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_70 = 0;
  local_6c = 0.0;
  local_68 = 0;
  FUN_00c15370(&local_70);
  fVar1 = *(float *)(param_1 + 0x3c);
  D3DXMatrixRotationY(local_50,fVar1);
  fStack_88 = 0.0;
  fStack_84 = *(float *)(param_1 + 0x30) * 0.5;
  fStack_80 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x38);
  D3DXVec3TransformNormal(&fStack_88,&fStack_88,auStack_58);
  fStack_34 = fVar1 + fStack_84;
  fStack_30 = unaff_ESI + fStack_80;
  fStack_2c = fStack_7c + fStack_8c;
  fStack_88 = fStack_78 + fStack_88;
  fStack_74 = *(float *)(param_1 + 0x34) * 2.0;
  local_70 = *(undefined4 *)(param_1 + 0x30);
  local_6c = *(float *)(param_1 + 0x38) * 2.0;
  FUN_00f962e0(auStack_64,&fStack_74,param_2,0,0);
  return;
}

// 00C156D0  FUN_00c156d0  size=1  [run]
void FUN_00c156d0(void)

{
  return;
}

