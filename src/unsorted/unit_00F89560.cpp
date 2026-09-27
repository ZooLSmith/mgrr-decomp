// src/unsorted/unit_00F89560.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F89560..00F8A0D0, 8 functions

#include "types.h"

// 00F89560  FUN_00f89560  size=319  [run]
void FUN_00f89560(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  FUN_009e0150(local_60,param_2);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(*param_1 + 0x10))(1);
      }
      else {
        param_1[0x12] = param_1[0x12] & 0xff333fffU | 0x333000;
      }
    }
    else {
      param_1[0x12] = param_1[0x12] & 0xff111fffU | 0x111000;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(3);
  }
  FUN_00f9ec50(param_1 + 0x13,param_2 + 0x90,4);
  FUN_00fa1d50(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 0x16,DAT_01ee5420);
  iVar2 = (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_2 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_2 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_2 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_2 + 0x8c);
  FUN_00f9ec50(param_1 + 0xd,&fStack_70,4);
  FUN_00f9eec0(param_1 + 10,local_60);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_78);
  return;
}

// 00F896A0  FUN_00f896a0  size=315  [run]
void FUN_00f896a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_78 [8];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  FUN_009e0150(local_60,param_2);
  FUN_00f9ec50(param_1 + 0x4c,param_2 + 0x90,4);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 0x58,DAT_01ee5420);
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x200) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
      goto LAB_00f89757;
    }
    if ((uVar2 & 0x400) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
      goto LAB_00f89757;
    }
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
LAB_00f89757:
  iVar1 = (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_2 + 0x80) * *(float *)(&DAT_018d7130 + iVar1);
  local_6c = *(float *)(param_2 + 0x84) * *(float *)(&DAT_018d7134 + iVar1);
  local_68 = *(float *)(param_2 + 0x88) * *(float *)(&DAT_018d7138 + iVar1);
  local_64 = *(float *)(param_2 + 0x8c) * *(float *)(&DAT_018d713c + iVar1);
  FUN_00f9ec50(param_1 + 0x34,&local_70,4);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_78);
  return;
}

// 00F897E0  FUN_00f897e0  size=529  [run]
void FUN_00f897e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_b8 [8];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  FUN_009e0150(local_60,param_2);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00f9ec50(param_1 + 0x4c,param_2 + 0x90,4);
  FUN_00f9ec50(param_1 + 100,param_2 + 0x110,4);
  FUN_00f9ec50(param_1 + 0x58,param_2 + 0x100,4);
  FUN_00f9ec50(param_1 + 0x94,param_2 + 0xf0,4);
  FUN_00f9ec50(param_1 + 0x70,param_2 + 0xd0,4);
  FUN_00f9ec50(param_1 + 0x7c,param_2 + 0xe0,4);
  FUN_00f9ec50(param_1 + 0xa0,param_2 + 0x120,4);
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x200) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
      goto LAB_00f89902;
    }
    if ((uVar2 & 0x400) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
      goto LAB_00f89902;
    }
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
LAB_00f89902:
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    FUN_009cdf70(&local_a0,param_2);
  }
  else {
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
  }
  FUN_00f9eec0(param_1 + 0x88,&local_a0);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  iVar1 = (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar1) * *(float *)(param_2 + 0x80);
  local_ac = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_2 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_2 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_2 + 0x8c);
  FUN_00f9ec50(param_1 + 0x34,&local_b0,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

// 00F89A00  FUN_00f89a00  size=471  [run]
void FUN_00f89a00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_b8 [8];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b8;
  FUN_009e0150(local_60,param_2);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00f9ec50(param_1 + 0x4c,param_2 + 0x90,4);
  FUN_00f9ec50(param_1 + 0x58,param_2 + 0xa0,4);
  FUN_00f9ec50(param_1 + 100,param_2 + 0xd0,4);
  FUN_00f9ec50(param_1 + 0x70,param_2 + 0xe0,4);
  FUN_00f9ec50(param_1 + 0x7c,param_2 + 0x100,4);
  FUN_00f9ec50(param_1 + 0x88,param_2 + 0xf0,4);
  FUN_00f9ec50(param_1 + 0x94,param_2 + 0x110,4);
  FUN_00f9ec50(param_1 + 0xa0,param_2 + 0x120,4);
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x200) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
      goto LAB_00f89b37;
    }
    if ((uVar2 & 0x400) != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
      goto LAB_00f89b37;
    }
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
LAB_00f89b37:
  FUN_009cdf70(local_a0,param_2);
  FUN_00f9eec0(param_1 + 0xac,local_a0);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  iVar1 = (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_2 + 0x80) * *(float *)(&DAT_018d7130 + iVar1);
  local_ac = *(float *)(param_2 + 0x84) * *(float *)(&DAT_018d7134 + iVar1);
  local_a8 = *(float *)(param_2 + 0x88) * *(float *)(&DAT_018d7138 + iVar1);
  local_a4 = *(float *)(param_2 + 0x8c) * *(float *)(&DAT_018d713c + iVar1);
  FUN_00f9ec50(param_1 + 0x34,&local_b0,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

// 00F89BE0  FUN_00f89be0  size=506  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f89be0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [12];
  undefined1 local_a0 [52];
  undefined1 auStack_6c [76];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_e4;
  FUN_009e0150(local_a0,param_2);
  uVar1 = FUN_00fb2080();
  D3DXVec3TransformNormal(&local_c0,param_2 + 0x90,uVar1);
  local_c0 = *(undefined4 *)(param_2 + 0x9c);
  FUN_00f9ec50(param_1 + 0x4c,auStack_cc,4);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff444fff | 0x444000;
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 100,DAT_01ee5420);
  iVar2 = (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10;
  fStack_e4 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_2 + 0x88);
  fStack_e0 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_2 + 0x8c);
  FUN_00f9ec50(param_1 + 0x34,&stack0xffffff14,4);
  FUN_00f9eec0(param_1 + 0x28,auStack_ac);
  FUN_009cdfc0(auStack_6c,auStack_bc,param_2);
  FUN_00f9ec50(param_1 + 0x58,auStack_bc,4);
  FUN_00f9eec0(param_1 + 0x70,auStack_6c);
  FUN_00f9eec0(param_1 + 0x28,auStack_ac);
  uVar3 = (uint)*(byte *)(param_2 + 0x14);
  fStack_dc = _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar3 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar3 * 0xc];
  fStack_d8 = (float)(&DAT_01f8e6f4)[uVar3 * 0xc] * _DAT_018d5df4 *
              (float)(&DAT_01f8e6f4)[uVar3 * 0xc] * _DAT_018d5df4;
  fStack_d4 = _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar3 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar3 * 0xc];
  uStack_d0 = (&DAT_01f8e6fc)[uVar3 * 0xc];
  FUN_00f9ec50(param_1 + 0x7c,&fStack_dc,4);
  fStack_e4 = 0.0;
  fStack_e0 = 0.0;
  FUN_00f9ec50(param_1 + 0x88,&stack0xffffff14,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(uStack_20 ^ (uint)&stack0xffffff10);
  return;
}

// 00F89DE0  FUN_00f89de0  size=332  [run]
void FUN_00f89de0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [8];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  FUN_009e0150(local_60,param_2);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
      goto LAB_00f89e73;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff111fff | 0x111000;
      goto LAB_00f89e73;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f89e73:
  FUN_00f5e750(*(uint *)(param_2 + 8) >> 7 & 1);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 100,*(undefined4 *)(param_2 + 0x1c));
  FUN_00fa1d50(param_1 + 0x70,DAT_01ee5420);
  FUN_00fa1d50(param_1 + 0x7c,*(undefined4 *)(param_2 + 0x20));
  FUN_00f9ec50(param_1 + 0x34,&DAT_018d7130 + (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  FUN_00f9ec50(param_1 + 0x4c,param_2 + 0x90,4);
  FUN_00f9ec50(param_1 + 0x58,param_2 + 0xc0,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_68);
  return;
}

// 00F89F30  FUN_00f89f30  size=416  [run]
void FUN_00f89f30(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [8];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_88;
  FUN_009e0150(local_60,param_2);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
      goto LAB_00f89fc3;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff111fff | 0x111000;
      goto LAB_00f89fc3;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f89fc3:
  FUN_00f5e750(*(uint *)(param_2 + 8) >> 7 & 1);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 0x70,*(undefined4 *)(param_2 + 0x1c));
  FUN_00fa1d50(param_1 + 0x7c,DAT_01ee5420);
  FUN_00fa1d50(param_1 + 0x88,*(undefined4 *)(param_2 + 0x20));
  FUN_00f9ec50(param_1 + 0x34,&DAT_018d7130 + (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  local_70 = *(undefined4 *)(param_2 + 0x90);
  local_6c = *(undefined4 *)(param_2 + 0x94);
  local_68 = *(undefined4 *)(param_2 + 0xa0);
  local_64 = *(undefined4 *)(param_2 + 0xa4);
  local_80 = *(undefined4 *)(param_2 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(param_1 + 0x4c,&local_70,4);
  FUN_00f9ec50(param_1 + 0x58,&local_80,4);
  FUN_00f9ec50(param_1 + 100,param_2 + 0xc0,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_88);
  return;
}

// 00F8A0D0  FUN_00f8a0d0  size=351  [run]
void FUN_00f8a0d0(int param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_68 [8];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  FUN_009e0150(local_60,param_2);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff111fff | 0x111000;
      }
    }
    else {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    }
  }
  else {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_2 + 8) >> 7 & 1);
  FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)(param_2 + 0x18));
  FUN_00fa1d50(param_1 + 100,*(undefined4 *)(param_2 + 0x1c));
  FUN_00f9ec50(param_1 + 0x34,&DAT_018d7130 + (*(uint *)(param_2 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(param_1 + 0x28,local_60);
  FUN_00f9ec50(param_1 + 0x4c,param_2 + 0x90,4);
  FUN_00f9ec50(param_1 + 0x58,param_2 + 0xa0,4);
  FUN_00f990e0(param_1);
  __security_check_cookie(local_14 ^ (uint)auStack_68);
  return;
}

