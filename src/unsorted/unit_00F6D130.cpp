// src/unsorted/unit_00F6D130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6D130..00F6D8A0, 6 functions

#include "types.h"

// 00F6D130  FUN_00f6d130  size=335  [run]
void FUN_00f6d130(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee7a48 = DAT_01ee7a48 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee7a48 = DAT_01ee7a48 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7a48 = DAT_01ee7a48 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee7a48 = DAT_01ee7a48 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee7a40,*(undefined4 *)(param_1 + 0x18));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7a34,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7a28,local_60);
  FUN_00f990e0(&DAT_01ee7a00);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6D280  FUN_00f6d280  size=335  [run]
void FUN_00f6d280(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee7a98 = DAT_01ee7a98 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee7a98 = DAT_01ee7a98 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7a98 = DAT_01ee7a98 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee7a98 = DAT_01ee7a98 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee7a90,*(undefined4 *)(param_1 + 0x18));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7a84,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7a78,local_60);
  FUN_00f990e0(&DAT_01ee7a50);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6D3D0  FUN_00f6d3d0  size=368  [run]
void FUN_00f6d3d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eedc88 = DAT_01eedc88 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eedc88 = DAT_01eedc88 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eedc88 = DAT_01eedc88 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eedc88 = DAT_01eedc88 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eedc80,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eedc8c,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eedc98,param_1 + 0xc0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eedc74,&local_70,4);
  FUN_00f9eec0(&DAT_01eedc68,local_60);
  FUN_00f990e0(&DAT_01eedc40);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6D540  FUN_00f6d540  size=411  [run]
void FUN_00f6d540(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7ae8 = DAT_01ee7ae8 & 0xff333fff | 0x333000;
        DAT_01ee7af4 = DAT_01ee7af4 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7ae8 = DAT_01ee7ae8 & 0xff111fff | 0x111000;
      DAT_01ee7af4 = DAT_01ee7af4 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7ae8 = DAT_01ee7ae8 & 0xff333fff | 0x333000;
    DAT_01ee7af4 = DAT_01ee7af4 & 0xff333fff | 0x333000;
  }
  FUN_00f5ea60(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee7ae0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7aec,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7ad4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7ac8,local_60);
  FUN_00f990e0(&DAT_01ee7aa0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6D6E0  FUN_00f6d6e0  size=444  [run]
void FUN_00f6d6e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7b40 = DAT_01ee7b40 & 0xff333fff | 0x333000;
        DAT_01ee7b4c = DAT_01ee7b4c & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7b40 = DAT_01ee7b40 & 0xff111fff | 0x111000;
      DAT_01ee7b4c = DAT_01ee7b4c & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7b40 = DAT_01ee7b40 & 0xff333fff | 0x333000;
    DAT_01ee7b4c = DAT_01ee7b4c & 0xff333fff | 0x333000;
  }
  FUN_00f5ea60(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee7b38,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7b44,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01ee7b5c,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee7b50,*(undefined4 *)(param_1 + 0x20));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7b2c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7b20,local_60);
  FUN_00f990e0(&DAT_01ee7af8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6D8A0  FUN_00f6d8a0  size=372  [run]
void FUN_00f6d8a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec5ac,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec5a0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec5c4,*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec5b8,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec5a8 = DAT_01eec5a8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec5a8 = DAT_01eec5a8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec5a8 = DAT_01eec5a8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec5a8 = DAT_01eec5a8 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec594,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec588,local_60);
  FUN_00f990e0(&DAT_01eec560);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

