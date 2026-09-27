// src/unsorted/unit_00DFFB90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DFFB90..00E00260, 12 functions

#include "mgrr.h"

// 00DFFB90  FUN_00dffb90  size=13  [run]
void __thiscall FUN_00dffb90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}

// 00DFFBA0  FUN_00dffba0  size=13  [run]
void __thiscall FUN_00dffba0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}

// 00DFFBC0  FUN_00dffbc0  size=15  [run]
void __thiscall FUN_00dffbc0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xf0) = param_2;
  return;
}

// 00DFFBD0  FUN_00dffbd0  size=33  [run]
void __thiscall FUN_00dffbd0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = *param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_2[1];
  *(undefined4 *)(param_1 + 0xe8) = param_2[2];
  return;
}

// 00DFFCD0  FUN_00dffcd0  size=38  [run]
void FUN_00dffcd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  FUN_009cf0e0(param_1,0,param_2,0,0);
  FUN_00f430b0(param_1,uVar1,param_2,uVar2,uVar3);
  return;
}

// 00DFFD60  FUN_00dffd60  size=40  [run]
void FUN_00dffd60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  FUN_009cf0e0(param_2,param_1,param_3,0,0);
  FUN_00f430b0(param_2,param_1,param_3,uVar1,uVar2);
  return;
}

// 00DFFFD0  FUN_00dfffd0  size=347  [run]
void __thiscall FUN_00dfffd0(int param_1,float *param_2)

{
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b8;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  local_8c = 0x3f800000;
  local_a0 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_60,param_2[2]);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_60,param_2[1]);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_60,*param_2);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  uStack_b0 = *(undefined4 *)(param_1 + 0xe0);
  uStack_ac = *(undefined4 *)(param_1 + 0xe4);
  auStack_a8[0] = *(undefined4 *)(param_1 + 0xe8);
  FID_conflict__memcpy((void *)(param_1 + 0xb0),&local_a0,0x40);
  *(undefined4 *)(param_1 + 0xe0) = uStack_b0;
  *(undefined4 *)(param_1 + 0xe4) = uStack_ac;
  *(undefined4 *)(param_1 + 0xe8) = auStack_a8[0];
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

// 00E00130  FUN_00e00130  size=25  [run]
void __thiscall FUN_00e00130(int param_1,void *param_2)

{
  FID_conflict__memcpy((void *)(param_1 + 0xb0),param_2,0x40);
  return;
}

// 00E001B0  FUN_00e001b0  size=35  [run]
int FUN_00e001b0(uint param_1)

{
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,param_1);
  }
  return param_1 + 0x1000;
}

// 00E001E0  FUN_00e001e0  size=35  [run]
int FUN_00e001e0(uint param_1)

{
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5d0,param_1);
  }
  return param_1 + 0x2000;
}

// 00E00210  FUN_00e00210  size=69  [run]
int FUN_00e00210(int param_1,uint param_2)

{
  if ((param_1 * 0x10000 & 0xfff0ffffU) != 0) {
    FUN_00dd5650(&DAT_016ca600,param_1);
  }
  if ((param_2 & 0xffff0000) != 0) {
    FUN_00dd5650(&DAT_016ca5e4,param_2);
  }
  return param_1 * 0x10000 + 0x20000000U + param_2;
}

// 00E00260  FUN_00e00260  size=122  [run]
uint FUN_00e00260(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = DAT_01885fa8;
  do {
    if (uVar1 == 0xffffffff) {
joined_r0x00e00288:
      if (param_1 != 0x7c0000) {
        if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
          FUN_00dd5650(&DAT_0163e20c,param_1);
        }
        return param_1;
      }
      return 0;
    }
    if (uVar1 == param_1) {
      param_1 = *(uint *)(iVar2 * 8 + 0x1885fac);
      goto joined_r0x00e00288;
    }
    uVar1 = (&DAT_01885fb0)[iVar2 * 2];
    iVar2 = iVar2 + 1;
  } while( true );
}

