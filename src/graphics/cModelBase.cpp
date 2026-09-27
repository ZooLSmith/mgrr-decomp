// src/graphics/cModelBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A11C60..00EFC800, 4 functions

#include "types.h"

// 00A11C60  cModelBase::setRootPartsNo  size=187  [class]
undefined4 __thiscall cModelBase::setRootPartsNo(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar2 = param_1;
  }
  if (*(int *)(iVar2 + 0x330) == 0) {
    iVar3 = 0xfff;
  }
  else {
    iVar3 = FUN_00a06de0(param_2);
  }
  iVar1 = *(int *)(iVar2 + 0x360);
  if (*(int *)(iVar2 + 0x360) == 0) {
    iVar1 = iVar2;
  }
  if ((iVar3 < 0) || (*(short *)(iVar1 + 0x358) <= iVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar3 * 0xb0 + *(int *)(iVar1 + 0x350);
  }
  uVar4 = 1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x334) = iVar2;
    if (param_2 != -1) {
      FUN_00dd5650(&DAT_0165c8a8,param_2);
      uVar4 = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x334) = iVar1;
  }
  FUN_00a07ac0(*(undefined4 *)(param_1 + 0x334),iVar3,*(undefined4 *)(param_1 + 0x330));
  *(int *)(param_1 + 0x368) = param_2;
  return uVar4;
}

// 00A19210  cModelBase::cModelBase  size=419  [class]
undefined4 * __fastcall cModelBase::cModelBase(undefined4 *param_1)

{
  cParts::cParts_2();
  *param_1 = vftable;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xbf800000;
  param_1[0x61] = 0xbf800000;
  param_1[0x62] = 0xbf800000;
  param_1[99] = 0xbf800000;
  param_1[0x68] = 1;
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x65] = 0x3f59999a;
  *(undefined2 *)((int)param_1 + 0x23e) = 1;
  param_1[0x8c] = 0;
  *(undefined4 *)((int)param_1 + 0x23a) = 0;
  param_1[0x8d] = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  param_1[200] = 0;
  param_1[0xd7] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  *(undefined2 *)(param_1 + 0xd6) = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x3b] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  *(undefined2 *)(param_1 + 0xcb) = 0;
  param_1[0xcd] = param_1;
  param_1[0xcc] = 0;
  param_1[0xd3] = 0;
  param_1[0xca] = 0;
  param_1[0xd8] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 2;
  *(undefined2 *)(param_1 + 0xc9) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0xffffffff;
  param_1[0xcf] = 0xffffffff;
  param_1[0xdb] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd9] = param_1[0xd9] | 2;
  return param_1;
}

// 00A196D0  cModelBase::vf00  size=30  [class]
undefined4 __thiscall cModelBase::vf00(undefined4 param_1,byte param_2)

{
  cParts::cParts();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EFC800  cModelBase::getMeshAlphaSystem  size=617  [class]
void __fastcall cModelBase::getMeshAlphaSystem(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  float local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  iVar3 = FUN_00a7c990(&DAT_01ee11f4);
  if ((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    iVar3 = FUN_00a7c7e0();
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 0x3c) & 0x400) == 0) goto LAB_00efc87b;
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_00edc5c0(*(int *)(param_1 + 0x50) + 0x10);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      FUN_00a7c970(0);
      if ((*(uint *)(param_1 + 0x3c) & 0x200) != 0) {
        FUN_00edbe30(0,0);
        __security_check_cookie(local_4 ^ (uint)&local_18);
        return;
      }
    }
    else if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
      iVar3 = FUN_00a7c800();
      if (iVar3 == 0) {
        FUN_009cca90(param_1,&DAT_016d9e14);
        __security_check_cookie(local_4 ^ (uint)&local_18);
        return;
      }
      if (*(short *)(iVar3 + 0x324) < 1) {
        iVar3 = FUN_009f8ea0(local_14,0x10,*(undefined4 *)(iVar3 + 0x4b0),0);
        if (iVar3 == 0) {
          FUN_009cca90(param_1,&DAT_016d9ed0);
        }
        __security_check_cookie(local_4 ^ (uint)&local_18);
        return;
      }
      if ((((*(byte *)(iVar3 + 0x4c0) & 1) == 0) || (*(int *)(iVar3 + 0x198) < 0)) ||
         ((*(uint *)(param_1 + 0x30) & 0x200000) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400000;
      }
      else {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffbfffff;
      }
      sVar1 = *(short *)(iVar3 + 0x324);
      if (0 < sVar1) {
        if (sVar1 < 1) {
          FUN_00dd5650("cModelBase::getMeshAlphaSystem MeshNo >= %d",(int)sVar1);
          local_18 = 0.0;
        }
        else {
          local_18 = *(float *)(*(int *)(iVar3 + 800) + 0x2c);
        }
        *(float *)(param_1 + 0x128) = local_18;
        if (*(short *)(iVar3 + 0x324) < 1) {
          FUN_00dd5650(&DAT_0164524c);
          local_18 = 0.0;
        }
        else {
          local_18 = *(float *)(*(int *)(iVar3 + 800) + 0x1c);
        }
        if (local_18 < *(float *)(param_1 + 0x128)) {
          *(float *)(param_1 + 0x128) = local_18;
        }
        *(float *)(param_1 + 0x128) = *(float *)(iVar3 + 0x45c) * *(float *)(param_1 + 0x128);
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x400) != 0) {
    FUN_009cca90(param_1,&DAT_016d9de0);
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00a7c970(0);
  }
LAB_00efc87b:
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}

