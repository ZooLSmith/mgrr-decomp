// src/unsorted/unit_00F788F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F788F0..00F7FCB0, 71 functions

#include "types.h"

// 00F788F0  FUN_00f788f0  size=496  [run]
void FUN_00f788f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
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
        DAT_01eed8f0 = DAT_01eed8f0 & 0xff333fff | 0x333000;
        DAT_01eed8fc = DAT_01eed8fc & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eed8f0 = DAT_01eed8f0 & 0xff111fff | 0x111000;
      DAT_01eed8fc = DAT_01eed8fc & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eed8f0 = DAT_01eed8f0 & 0xff333fff | 0x333000;
    DAT_01eed8fc = DAT_01eed8fc & 0xff333fff | 0x333000;
  }
  FUN_00f5ea60(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed8e8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed8f4,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed8dc,&local_70,4);
  FUN_00f9eec0(&DAT_01eed8d0,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0x90) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0x94) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0x98) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0x9c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eed900,&local_80,4);
  FUN_00f990e0(&DAT_01eed8a8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F78AE0  FUN_00f78ae0  size=496  [run]
void FUN_00f78ae0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
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
        DAT_01eed958 = DAT_01eed958 & 0xff333fff | 0x333000;
        DAT_01eed964 = DAT_01eed964 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eed958 = DAT_01eed958 & 0xff111fff | 0x111000;
      DAT_01eed964 = DAT_01eed964 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eed958 = DAT_01eed958 & 0xff333fff | 0x333000;
    DAT_01eed964 = DAT_01eed964 & 0xff333fff | 0x333000;
  }
  FUN_00f5ea60(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed950,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed95c,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed944,&local_70,4);
  FUN_00f9eec0(&DAT_01eed938,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0x90) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0x94) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0x98) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0x9c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eed968,&local_80,4);
  FUN_00f990e0(&DAT_01eed910);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F78CD0  FUN_00f78cd0  size=392  [run]
void FUN_00f78cd0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9ec8 = DAT_01ee9ec8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9ec8 = DAT_01ee9ec8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9ec8 = DAT_01ee9ec8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9ec8 = DAT_01ee9ec8 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee9ec0,*(undefined4 *)(param_1 + 0x18));
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  local_64 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00f9ec50(&DAT_01ee9ecc,&local_70,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_7c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9eb4,&local_80,4);
  FUN_00f9eec0(&DAT_01ee9ea8,local_60);
  FUN_00f990e0(&DAT_01ee9e80);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F78E60  FUN_00f78e60  size=363  [run]
void FUN_00f78e60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01ee9f44 = DAT_01ee9f44 & 0xff333fff | 0x333000;
      goto LAB_00f78f04;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01ee9f44 = DAT_01ee9f44 & 0xff111fff | 0x111000;
      goto LAB_00f78f04;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f78f04:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee9f18,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9f3c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee9f48,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01ee9f54,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee9f0c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01ee9f00,local_60);
  FUN_00f9ec50(&DAT_01ee9f24,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9f30,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01ee9ed8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F78FD0  FUN_00f78fd0  size=363  [run]
void FUN_00f78fd0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01ee9fd4 = DAT_01ee9fd4 & 0xff333fff | 0x333000;
      goto LAB_00f79074;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01ee9fd4 = DAT_01ee9fd4 & 0xff111fff | 0x111000;
      goto LAB_00f79074;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79074:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01ee9fa8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9fcc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee9fd8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01ee9fe4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee9f9c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01ee9f90,local_60);
  FUN_00f9ec50(&DAT_01ee9fb4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9fc0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01ee9f68);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79140  FUN_00f79140  size=363  [run]
void FUN_00f79140(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea064 = DAT_01eea064 & 0xff333fff | 0x333000;
      goto LAB_00f791e4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea064 = DAT_01eea064 & 0xff111fff | 0x111000;
      goto LAB_00f791e4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f791e4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea038,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea05c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea068,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea074,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea02c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea020,local_60);
  FUN_00f9ec50(&DAT_01eea044,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea050,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01ee9ff8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F792B0  FUN_00f792b0  size=363  [run]
void FUN_00f792b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea0f4 = DAT_01eea0f4 & 0xff333fff | 0x333000;
      goto LAB_00f79354;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea0f4 = DAT_01eea0f4 & 0xff111fff | 0x111000;
      goto LAB_00f79354;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79354:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea0c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea0ec,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea0f8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea104,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea0bc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea0b0,local_60);
  FUN_00f9ec50(&DAT_01eea0d4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea0e0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea088);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79420  FUN_00f79420  size=363  [run]
void FUN_00f79420(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea184 = DAT_01eea184 & 0xff333fff | 0x333000;
      goto LAB_00f794c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea184 = DAT_01eea184 & 0xff111fff | 0x111000;
      goto LAB_00f794c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f794c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea158,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea17c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea188,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea194,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea14c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea140,local_60);
  FUN_00f9ec50(&DAT_01eea164,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea170,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea118);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79590  FUN_00f79590  size=363  [run]
void FUN_00f79590(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea214 = DAT_01eea214 & 0xff333fff | 0x333000;
      goto LAB_00f79634;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea214 = DAT_01eea214 & 0xff111fff | 0x111000;
      goto LAB_00f79634;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79634:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea1e8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea20c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea218,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea224,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea1dc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea1d0,local_60);
  FUN_00f9ec50(&DAT_01eea1f4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea200,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea1a8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79700  FUN_00f79700  size=363  [run]
void FUN_00f79700(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea2a4 = DAT_01eea2a4 & 0xff333fff | 0x333000;
      goto LAB_00f797a4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea2a4 = DAT_01eea2a4 & 0xff111fff | 0x111000;
      goto LAB_00f797a4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f797a4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea278,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea29c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea2a8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea2b4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea26c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea260,local_60);
  FUN_00f9ec50(&DAT_01eea284,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea290,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea238);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79870  FUN_00f79870  size=363  [run]
void FUN_00f79870(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea334 = DAT_01eea334 & 0xff333fff | 0x333000;
      goto LAB_00f79914;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea334 = DAT_01eea334 & 0xff111fff | 0x111000;
      goto LAB_00f79914;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79914:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea308,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea32c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea338,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea344,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea2fc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea2f0,local_60);
  FUN_00f9ec50(&DAT_01eea314,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea320,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea2c8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F799E0  FUN_00f799e0  size=363  [run]
void FUN_00f799e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea3c4 = DAT_01eea3c4 & 0xff333fff | 0x333000;
      goto LAB_00f79a84;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea3c4 = DAT_01eea3c4 & 0xff111fff | 0x111000;
      goto LAB_00f79a84;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79a84:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea398,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea3bc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea3c8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea3d4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea38c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea380,local_60);
  FUN_00f9ec50(&DAT_01eea3a4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea3b0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea358);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79B50  FUN_00f79b50  size=363  [run]
void FUN_00f79b50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea454 = DAT_01eea454 & 0xff333fff | 0x333000;
      goto LAB_00f79bf4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea454 = DAT_01eea454 & 0xff111fff | 0x111000;
      goto LAB_00f79bf4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79bf4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea428,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea44c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea458,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea464,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea41c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea410,local_60);
  FUN_00f9ec50(&DAT_01eea434,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea440,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea3e8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79CC0  FUN_00f79cc0  size=363  [run]
void FUN_00f79cc0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea4e4 = DAT_01eea4e4 & 0xff333fff | 0x333000;
      goto LAB_00f79d64;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea4e4 = DAT_01eea4e4 & 0xff111fff | 0x111000;
      goto LAB_00f79d64;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79d64:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea4b8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea4dc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea4e8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea4f4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea4ac,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea4a0,local_60);
  FUN_00f9ec50(&DAT_01eea4c4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea4d0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea478);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79E30  FUN_00f79e30  size=363  [run]
void FUN_00f79e30(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea574 = DAT_01eea574 & 0xff333fff | 0x333000;
      goto LAB_00f79ed4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea574 = DAT_01eea574 & 0xff111fff | 0x111000;
      goto LAB_00f79ed4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f79ed4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea548,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea56c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea578,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea584,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea53c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea530,local_60);
  FUN_00f9ec50(&DAT_01eea554,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea560,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea508);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F79FA0  FUN_00f79fa0  size=363  [run]
void FUN_00f79fa0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea604 = DAT_01eea604 & 0xff333fff | 0x333000;
      goto LAB_00f7a044;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea604 = DAT_01eea604 & 0xff111fff | 0x111000;
      goto LAB_00f7a044;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a044:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea5d8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea5fc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea608,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea614,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea5cc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea5c0,local_60);
  FUN_00f9ec50(&DAT_01eea5e4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea5f0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea598);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A110  FUN_00f7a110  size=363  [run]
void FUN_00f7a110(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea694 = DAT_01eea694 & 0xff333fff | 0x333000;
      goto LAB_00f7a1b4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea694 = DAT_01eea694 & 0xff111fff | 0x111000;
      goto LAB_00f7a1b4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a1b4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea668,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea68c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea698,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea6a4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea65c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea650,local_60);
  FUN_00f9ec50(&DAT_01eea674,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea680,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea628);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A280  FUN_00f7a280  size=363  [run]
void FUN_00f7a280(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea724 = DAT_01eea724 & 0xff333fff | 0x333000;
      goto LAB_00f7a324;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea724 = DAT_01eea724 & 0xff111fff | 0x111000;
      goto LAB_00f7a324;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a324:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea6f8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea71c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea728,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea734,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea6ec,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea6e0,local_60);
  FUN_00f9ec50(&DAT_01eea704,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea710,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea6b8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A3F0  FUN_00f7a3f0  size=363  [run]
void FUN_00f7a3f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea7b4 = DAT_01eea7b4 & 0xff333fff | 0x333000;
      goto LAB_00f7a494;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea7b4 = DAT_01eea7b4 & 0xff111fff | 0x111000;
      goto LAB_00f7a494;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a494:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea788,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea7ac,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea7b8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea7c4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea77c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea770,local_60);
  FUN_00f9ec50(&DAT_01eea794,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea7a0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea748);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A560  FUN_00f7a560  size=363  [run]
void FUN_00f7a560(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea844 = DAT_01eea844 & 0xff333fff | 0x333000;
      goto LAB_00f7a604;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea844 = DAT_01eea844 & 0xff111fff | 0x111000;
      goto LAB_00f7a604;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a604:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea818,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea83c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea848,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea854,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea80c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea800,local_60);
  FUN_00f9ec50(&DAT_01eea824,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea830,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea7d8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A6D0  FUN_00f7a6d0  size=363  [run]
void FUN_00f7a6d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea8d4 = DAT_01eea8d4 & 0xff333fff | 0x333000;
      goto LAB_00f7a774;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea8d4 = DAT_01eea8d4 & 0xff111fff | 0x111000;
      goto LAB_00f7a774;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a774:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea8a8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea8cc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea8d8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea8e4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea89c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea890,local_60);
  FUN_00f9ec50(&DAT_01eea8b4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea8c0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea868);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A840  FUN_00f7a840  size=363  [run]
void FUN_00f7a840(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea964 = DAT_01eea964 & 0xff333fff | 0x333000;
      goto LAB_00f7a8e4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea964 = DAT_01eea964 & 0xff111fff | 0x111000;
      goto LAB_00f7a8e4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7a8e4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea938,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea95c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea968,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eea974,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea92c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea920,local_60);
  FUN_00f9ec50(&DAT_01eea944,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea950,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea8f8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7A9B0  FUN_00f7a9b0  size=363  [run]
void FUN_00f7a9b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f644e0(1);
      DAT_01eea9f4 = DAT_01eea9f4 & 0xff333fff | 0x333000;
      goto LAB_00f7aa54;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f644e0(3);
      DAT_01eea9f4 = DAT_01eea9f4 & 0xff111fff | 0x111000;
      goto LAB_00f7aa54;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f64460(uVar2);
LAB_00f7aa54:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eea9c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eea9ec,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eea9f8,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeaa04,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eea9bc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eea9b0,local_60);
  FUN_00f9ec50(&DAT_01eea9d4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eea9e0,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eea988);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7AB20  FUN_00f7ab20  size=505  [run]
void FUN_00f7ab20(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_9c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeaa90 = DAT_01eeaa90 & 0xff333fff | 0x333000;
      goto LAB_00f7abca;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeaa90 = DAT_01eeaa90 & 0xff111fff | 0x111000;
      goto LAB_00f7abca;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  FUN_00f65e90(uVar3);
LAB_00f7abca:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeaa58,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeaa88,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeaa94,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeaaa0,*(undefined4 *)(param_1 + 0x20));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eeaa4c,&local_70,4);
  FUN_00f9eec0(&DAT_01eeaa40,local_60);
  local_90 = *(undefined4 *)(param_1 + 0x90);
  local_8c = *(undefined4 *)(param_1 + 0x94);
  local_88 = *(undefined4 *)(param_1 + 0xa0);
  local_84 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeaa64,&local_90,4);
  FUN_00f9ec50(&DAT_01eeaa70,&local_80,4);
  FUN_00f9ec50(&DAT_01eeaa7c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeaa18);
  __security_check_cookie(local_14 ^ (uint)auStack_9c);
  return;
}

// 00F7AD20  FUN_00f7ad20  size=445  [run]
void FUN_00f7ad20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeab28 = DAT_01eeab28 & 0xff333fff | 0x333000;
      goto LAB_00f7adc4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeab28 = DAT_01eeab28 & 0xff111fff | 0x111000;
      goto LAB_00f7adc4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7adc4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeaaf0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeab20,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeab2c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeab38,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeaae4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeaad8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeaafc,&local_70,4);
  FUN_00f9ec50(&DAT_01eeab08,&local_80,4);
  FUN_00f9ec50(&DAT_01eeab14,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeaab0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7AEE0  FUN_00f7aee0  size=445  [run]
void FUN_00f7aee0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeabc0 = DAT_01eeabc0 & 0xff333fff | 0x333000;
      goto LAB_00f7af84;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeabc0 = DAT_01eeabc0 & 0xff111fff | 0x111000;
      goto LAB_00f7af84;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7af84:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeab88,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeabb8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeabc4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeabd0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeab7c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeab70,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeab94,&local_70,4);
  FUN_00f9ec50(&DAT_01eeaba0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeabac,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeab48);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B0A0  FUN_00f7b0a0  size=445  [run]
void FUN_00f7b0a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeac58 = DAT_01eeac58 & 0xff333fff | 0x333000;
      goto LAB_00f7b144;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeac58 = DAT_01eeac58 & 0xff111fff | 0x111000;
      goto LAB_00f7b144;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7b144:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeac20,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeac50,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeac5c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeac68,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeac14,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeac08,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeac2c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeac38,&local_80,4);
  FUN_00f9ec50(&DAT_01eeac44,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeabe0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B260  FUN_00f7b260  size=445  [run]
void FUN_00f7b260(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeacf0 = DAT_01eeacf0 & 0xff333fff | 0x333000;
      goto LAB_00f7b304;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeacf0 = DAT_01eeacf0 & 0xff111fff | 0x111000;
      goto LAB_00f7b304;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7b304:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeacb8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeace8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeacf4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eead00,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeacac,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeaca0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeacc4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeacd0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeacdc,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeac78);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B420  FUN_00f7b420  size=445  [run]
void FUN_00f7b420(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eead88 = DAT_01eead88 & 0xff333fff | 0x333000;
      goto LAB_00f7b4c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eead88 = DAT_01eead88 & 0xff111fff | 0x111000;
      goto LAB_00f7b4c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7b4c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eead50,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eead80,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eead8c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eead98,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eead44,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eead38,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eead5c,&local_70,4);
  FUN_00f9ec50(&DAT_01eead68,&local_80,4);
  FUN_00f9ec50(&DAT_01eead74,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eead10);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B5E0  FUN_00f7b5e0  size=445  [run]
void FUN_00f7b5e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeae20 = DAT_01eeae20 & 0xff333fff | 0x333000;
      goto LAB_00f7b684;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeae20 = DAT_01eeae20 & 0xff111fff | 0x111000;
      goto LAB_00f7b684;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7b684:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeade8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeae18,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeae24,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeae30,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeaddc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeadd0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeadf4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeae00,&local_80,4);
  FUN_00f9ec50(&DAT_01eeae0c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeada8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B7A0  FUN_00f7b7a0  size=445  [run]
void FUN_00f7b7a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeaeb8 = DAT_01eeaeb8 & 0xff333fff | 0x333000;
      goto LAB_00f7b844;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeaeb8 = DAT_01eeaeb8 & 0xff111fff | 0x111000;
      goto LAB_00f7b844;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7b844:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeae80,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeaeb0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeaebc,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeaec8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeae74,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeae68,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeae8c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeae98,&local_80,4);
  FUN_00f9ec50(&DAT_01eeaea4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeae40);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7B960  FUN_00f7b960  size=445  [run]
void FUN_00f7b960(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeaf50 = DAT_01eeaf50 & 0xff333fff | 0x333000;
      goto LAB_00f7ba04;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeaf50 = DAT_01eeaf50 & 0xff111fff | 0x111000;
      goto LAB_00f7ba04;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7ba04:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeaf18,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeaf48,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeaf54,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeaf60,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeaf0c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeaf00,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeaf24,&local_70,4);
  FUN_00f9ec50(&DAT_01eeaf30,&local_80,4);
  FUN_00f9ec50(&DAT_01eeaf3c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeaed8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7BB20  FUN_00f7bb20  size=445  [run]
void FUN_00f7bb20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeafe8 = DAT_01eeafe8 & 0xff333fff | 0x333000;
      goto LAB_00f7bbc4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeafe8 = DAT_01eeafe8 & 0xff111fff | 0x111000;
      goto LAB_00f7bbc4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7bbc4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeafb0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeafe0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeafec,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeaff8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeafa4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeaf98,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeafbc,&local_70,4);
  FUN_00f9ec50(&DAT_01eeafc8,&local_80,4);
  FUN_00f9ec50(&DAT_01eeafd4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeaf70);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7BCE0  FUN_00f7bce0  size=445  [run]
void FUN_00f7bce0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb080 = DAT_01eeb080 & 0xff333fff | 0x333000;
      goto LAB_00f7bd84;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb080 = DAT_01eeb080 & 0xff111fff | 0x111000;
      goto LAB_00f7bd84;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7bd84:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb048,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb078,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb084,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb090,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb03c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb030,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb054,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb060,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb06c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb008);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7BEA0  FUN_00f7bea0  size=445  [run]
void FUN_00f7bea0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb118 = DAT_01eeb118 & 0xff333fff | 0x333000;
      goto LAB_00f7bf44;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb118 = DAT_01eeb118 & 0xff111fff | 0x111000;
      goto LAB_00f7bf44;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7bf44:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb0e0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb110,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb11c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb128,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb0d4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb0c8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb0ec,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb0f8,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb104,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb0a0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C060  FUN_00f7c060  size=445  [run]
void FUN_00f7c060(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb1b0 = DAT_01eeb1b0 & 0xff333fff | 0x333000;
      goto LAB_00f7c104;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb1b0 = DAT_01eeb1b0 & 0xff111fff | 0x111000;
      goto LAB_00f7c104;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c104:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb178,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb1a8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb1b4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb1c0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb16c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb160,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb184,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb190,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb19c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb138);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C220  FUN_00f7c220  size=445  [run]
void FUN_00f7c220(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb248 = DAT_01eeb248 & 0xff333fff | 0x333000;
      goto LAB_00f7c2c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb248 = DAT_01eeb248 & 0xff111fff | 0x111000;
      goto LAB_00f7c2c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c2c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb210,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb240,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb24c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb258,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb204,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb1f8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb21c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb228,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb234,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb1d0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C3E0  FUN_00f7c3e0  size=445  [run]
void FUN_00f7c3e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb2e0 = DAT_01eeb2e0 & 0xff333fff | 0x333000;
      goto LAB_00f7c484;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb2e0 = DAT_01eeb2e0 & 0xff111fff | 0x111000;
      goto LAB_00f7c484;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c484:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb2a8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb2d8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb2e4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb2f0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb29c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb290,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb2b4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb2c0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb2cc,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb268);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C5A0  FUN_00f7c5a0  size=445  [run]
void FUN_00f7c5a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb378 = DAT_01eeb378 & 0xff333fff | 0x333000;
      goto LAB_00f7c644;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb378 = DAT_01eeb378 & 0xff111fff | 0x111000;
      goto LAB_00f7c644;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c644:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb340,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb370,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb37c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb388,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb334,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb328,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb34c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb358,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb364,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb300);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C760  FUN_00f7c760  size=445  [run]
void FUN_00f7c760(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb410 = DAT_01eeb410 & 0xff333fff | 0x333000;
      goto LAB_00f7c804;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb410 = DAT_01eeb410 & 0xff111fff | 0x111000;
      goto LAB_00f7c804;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c804:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb3d8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb408,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb414,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb420,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb3cc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb3c0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb3e4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb3f0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb3fc,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb398);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7C920  FUN_00f7c920  size=445  [run]
void FUN_00f7c920(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb4a8 = DAT_01eeb4a8 & 0xff333fff | 0x333000;
      goto LAB_00f7c9c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb4a8 = DAT_01eeb4a8 & 0xff111fff | 0x111000;
      goto LAB_00f7c9c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7c9c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb470,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb4a0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb4ac,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb4b8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb464,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb458,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb47c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb488,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb494,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb430);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7CAE0  FUN_00f7cae0  size=445  [run]
void FUN_00f7cae0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb540 = DAT_01eeb540 & 0xff333fff | 0x333000;
      goto LAB_00f7cb84;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb540 = DAT_01eeb540 & 0xff111fff | 0x111000;
      goto LAB_00f7cb84;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7cb84:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb508,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb538,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb544,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb550,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb4fc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb4f0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb514,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb520,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb52c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb4c8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7CCA0  FUN_00f7cca0  size=445  [run]
void FUN_00f7cca0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb5d8 = DAT_01eeb5d8 & 0xff333fff | 0x333000;
      goto LAB_00f7cd44;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb5d8 = DAT_01eeb5d8 & 0xff111fff | 0x111000;
      goto LAB_00f7cd44;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7cd44:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb5a0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb5d0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb5dc,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb5e8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb594,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb588,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb5ac,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb5b8,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb5c4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb560);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7CE60  FUN_00f7ce60  size=445  [run]
void FUN_00f7ce60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb670 = DAT_01eeb670 & 0xff333fff | 0x333000;
      goto LAB_00f7cf04;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb670 = DAT_01eeb670 & 0xff111fff | 0x111000;
      goto LAB_00f7cf04;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7cf04:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb638,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb668,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb674,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb680,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb62c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb620,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb644,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb650,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb65c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb5f8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D020  FUN_00f7d020  size=445  [run]
void FUN_00f7d020(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb708 = DAT_01eeb708 & 0xff333fff | 0x333000;
      goto LAB_00f7d0c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb708 = DAT_01eeb708 & 0xff111fff | 0x111000;
      goto LAB_00f7d0c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d0c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb6d0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb700,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb70c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb718,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb6c4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb6b8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb6dc,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb6e8,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb6f4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb690);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D1E0  FUN_00f7d1e0  size=445  [run]
void FUN_00f7d1e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb7a0 = DAT_01eeb7a0 & 0xff333fff | 0x333000;
      goto LAB_00f7d284;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb7a0 = DAT_01eeb7a0 & 0xff111fff | 0x111000;
      goto LAB_00f7d284;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d284:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb768,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb798,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb7a4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb7b0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb75c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb750,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb774,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb780,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb78c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb728);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D3A0  FUN_00f7d3a0  size=445  [run]
void FUN_00f7d3a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb838 = DAT_01eeb838 & 0xff333fff | 0x333000;
      goto LAB_00f7d444;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb838 = DAT_01eeb838 & 0xff111fff | 0x111000;
      goto LAB_00f7d444;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d444:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb800,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb830,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb83c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb848,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb7f4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb7e8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb80c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb818,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb824,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb7c0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D560  FUN_00f7d560  size=445  [run]
void FUN_00f7d560(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb8d0 = DAT_01eeb8d0 & 0xff333fff | 0x333000;
      goto LAB_00f7d604;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb8d0 = DAT_01eeb8d0 & 0xff111fff | 0x111000;
      goto LAB_00f7d604;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d604:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb898,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb8c8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb8d4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb8e0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb88c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb880,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb8a4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb8b0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb8bc,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb858);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D720  FUN_00f7d720  size=445  [run]
void FUN_00f7d720(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeb968 = DAT_01eeb968 & 0xff333fff | 0x333000;
      goto LAB_00f7d7c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeb968 = DAT_01eeb968 & 0xff111fff | 0x111000;
      goto LAB_00f7d7c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d7c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb930,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb960,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeb96c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeb978,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb924,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb918,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb93c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb948,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb954,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb8f0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7D8E0  FUN_00f7d8e0  size=445  [run]
void FUN_00f7d8e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeba00 = DAT_01eeba00 & 0xff333fff | 0x333000;
      goto LAB_00f7d984;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeba00 = DAT_01eeba00 & 0xff111fff | 0x111000;
      goto LAB_00f7d984;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7d984:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeb9c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeb9f8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeba04,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eeba10,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeb9bc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeb9b0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeb9d4,&local_70,4);
  FUN_00f9ec50(&DAT_01eeb9e0,&local_80,4);
  FUN_00f9ec50(&DAT_01eeb9ec,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeb988);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7DAA0  FUN_00f7daa0  size=445  [run]
void FUN_00f7daa0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eeba98 = DAT_01eeba98 & 0xff333fff | 0x333000;
      goto LAB_00f7db44;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eeba98 = DAT_01eeba98 & 0xff111fff | 0x111000;
      goto LAB_00f7db44;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7db44:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eeba60,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeba90,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eeba9c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebaa8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eeba54,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eeba48,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eeba6c,&local_70,4);
  FUN_00f9ec50(&DAT_01eeba78,&local_80,4);
  FUN_00f9ec50(&DAT_01eeba84,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eeba20);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7DC60  FUN_00f7dc60  size=445  [run]
void FUN_00f7dc60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebb30 = DAT_01eebb30 & 0xff333fff | 0x333000;
      goto LAB_00f7dd04;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebb30 = DAT_01eebb30 & 0xff111fff | 0x111000;
      goto LAB_00f7dd04;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7dd04:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebaf8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebb28,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebb34,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebb40,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebaec,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebae0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebb04,&local_70,4);
  FUN_00f9ec50(&DAT_01eebb10,&local_80,4);
  FUN_00f9ec50(&DAT_01eebb1c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebab8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7DE20  FUN_00f7de20  size=445  [run]
void FUN_00f7de20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebbc8 = DAT_01eebbc8 & 0xff333fff | 0x333000;
      goto LAB_00f7dec4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebbc8 = DAT_01eebbc8 & 0xff111fff | 0x111000;
      goto LAB_00f7dec4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7dec4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebb90,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebbc0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebbcc,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebbd8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebb84,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebb78,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebb9c,&local_70,4);
  FUN_00f9ec50(&DAT_01eebba8,&local_80,4);
  FUN_00f9ec50(&DAT_01eebbb4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebb50);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7DFE0  FUN_00f7dfe0  size=445  [run]
void FUN_00f7dfe0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebc60 = DAT_01eebc60 & 0xff333fff | 0x333000;
      goto LAB_00f7e084;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebc60 = DAT_01eebc60 & 0xff111fff | 0x111000;
      goto LAB_00f7e084;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e084:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebc28,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebc58,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebc64,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebc70,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebc1c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebc10,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebc34,&local_70,4);
  FUN_00f9ec50(&DAT_01eebc40,&local_80,4);
  FUN_00f9ec50(&DAT_01eebc4c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebbe8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7E1A0  FUN_00f7e1a0  size=445  [run]
void FUN_00f7e1a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebcf8 = DAT_01eebcf8 & 0xff333fff | 0x333000;
      goto LAB_00f7e244;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebcf8 = DAT_01eebcf8 & 0xff111fff | 0x111000;
      goto LAB_00f7e244;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e244:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebcc0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebcf0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebcfc,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebd08,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebcb4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebca8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebccc,&local_70,4);
  FUN_00f9ec50(&DAT_01eebcd8,&local_80,4);
  FUN_00f9ec50(&DAT_01eebce4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebc80);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7E360  FUN_00f7e360  size=445  [run]
void FUN_00f7e360(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebd90 = DAT_01eebd90 & 0xff333fff | 0x333000;
      goto LAB_00f7e404;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebd90 = DAT_01eebd90 & 0xff111fff | 0x111000;
      goto LAB_00f7e404;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e404:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebd58,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebd88,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebd94,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebda0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebd4c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebd40,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebd64,&local_70,4);
  FUN_00f9ec50(&DAT_01eebd70,&local_80,4);
  FUN_00f9ec50(&DAT_01eebd7c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebd18);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7E520  FUN_00f7e520  size=445  [run]
void FUN_00f7e520(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebe28 = DAT_01eebe28 & 0xff333fff | 0x333000;
      goto LAB_00f7e5c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebe28 = DAT_01eebe28 & 0xff111fff | 0x111000;
      goto LAB_00f7e5c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e5c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebdf0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebe20,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebe2c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebe38,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebde4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebdd8,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebdfc,&local_70,4);
  FUN_00f9ec50(&DAT_01eebe08,&local_80,4);
  FUN_00f9ec50(&DAT_01eebe14,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebdb0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7E6E0  FUN_00f7e6e0  size=445  [run]
void FUN_00f7e6e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebec0 = DAT_01eebec0 & 0xff333fff | 0x333000;
      goto LAB_00f7e784;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebec0 = DAT_01eebec0 & 0xff111fff | 0x111000;
      goto LAB_00f7e784;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e784:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebe88,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebeb8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebec4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebed0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebe7c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebe70,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebe94,&local_70,4);
  FUN_00f9ec50(&DAT_01eebea0,&local_80,4);
  FUN_00f9ec50(&DAT_01eebeac,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebe48);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7E8A0  FUN_00f7e8a0  size=445  [run]
void FUN_00f7e8a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebf58 = DAT_01eebf58 & 0xff333fff | 0x333000;
      goto LAB_00f7e944;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebf58 = DAT_01eebf58 & 0xff111fff | 0x111000;
      goto LAB_00f7e944;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7e944:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebf20,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebf50,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebf5c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eebf68,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebf14,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebf08,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebf2c,&local_70,4);
  FUN_00f9ec50(&DAT_01eebf38,&local_80,4);
  FUN_00f9ec50(&DAT_01eebf44,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebee0);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7EA60  FUN_00f7ea60  size=445  [run]
void FUN_00f7ea60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eebff0 = DAT_01eebff0 & 0xff333fff | 0x333000;
      goto LAB_00f7eb04;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eebff0 = DAT_01eebff0 & 0xff111fff | 0x111000;
      goto LAB_00f7eb04;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7eb04:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eebfb8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eebfe8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eebff4,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec000,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eebfac,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eebfa0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eebfc4,&local_70,4);
  FUN_00f9ec50(&DAT_01eebfd0,&local_80,4);
  FUN_00f9ec50(&DAT_01eebfdc,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eebf78);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7EC20  FUN_00f7ec20  size=445  [run]
void FUN_00f7ec20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eec088 = DAT_01eec088 & 0xff333fff | 0x333000;
      goto LAB_00f7ecc4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eec088 = DAT_01eec088 & 0xff111fff | 0x111000;
      goto LAB_00f7ecc4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7ecc4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec050,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec080,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eec08c,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec098,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eec044,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec038,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eec05c,&local_70,4);
  FUN_00f9ec50(&DAT_01eec068,&local_80,4);
  FUN_00f9ec50(&DAT_01eec074,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eec010);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7EDE0  FUN_00f7ede0  size=445  [run]
void FUN_00f7ede0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eec120 = DAT_01eec120 & 0xff333fff | 0x333000;
      goto LAB_00f7ee84;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eec120 = DAT_01eec120 & 0xff111fff | 0x111000;
      goto LAB_00f7ee84;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7ee84:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec0e8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec118,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eec124,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec130,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eec0dc,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec0d0,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eec0f4,&local_70,4);
  FUN_00f9ec50(&DAT_01eec100,&local_80,4);
  FUN_00f9ec50(&DAT_01eec10c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eec0a8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7EFA0  FUN_00f7efa0  size=445  [run]
void FUN_00f7efa0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eec1b8 = DAT_01eec1b8 & 0xff333fff | 0x333000;
      goto LAB_00f7f044;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eec1b8 = DAT_01eec1b8 & 0xff111fff | 0x111000;
      goto LAB_00f7f044;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7f044:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec180,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec1b0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eec1bc,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec1c8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eec174,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec168,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eec18c,&local_70,4);
  FUN_00f9ec50(&DAT_01eec198,&local_80,4);
  FUN_00f9ec50(&DAT_01eec1a4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eec140);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7F160  FUN_00f7f160  size=445  [run]
void FUN_00f7f160(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eec250 = DAT_01eec250 & 0xff333fff | 0x333000;
      goto LAB_00f7f204;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eec250 = DAT_01eec250 & 0xff111fff | 0x111000;
      goto LAB_00f7f204;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7f204:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec218,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec248,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eec254,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec260,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eec20c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec200,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eec224,&local_70,4);
  FUN_00f9ec50(&DAT_01eec230,&local_80,4);
  FUN_00f9ec50(&DAT_01eec23c,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eec1d8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7F320  FUN_00f7f320  size=445  [run]
void FUN_00f7f320(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_8c [12];
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f65f10(1);
      DAT_01eec2e8 = DAT_01eec2e8 & 0xff333fff | 0x333000;
      goto LAB_00f7f3c4;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f65f10(3);
      DAT_01eec2e8 = DAT_01eec2e8 & 0xff111fff | 0x111000;
      goto LAB_00f7f3c4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f65e90(uVar2);
LAB_00f7f3c4:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec2b0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec2e0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eec2ec,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eec2f8,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01eec2a4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec298,local_60);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0xa0);
  local_64 = *(undefined4 *)(param_1 + 0xa4);
  local_80 = *(undefined4 *)(param_1 + 0x98);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00f9ec50(&DAT_01eec2bc,&local_70,4);
  FUN_00f9ec50(&DAT_01eec2c8,&local_80,4);
  FUN_00f9ec50(&DAT_01eec2d4,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01eec270);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F7F4E0  FUN_00f7f4e0  size=395  [run]
void FUN_00f7f4e0(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        DAT_01eec350 = DAT_01eec350 & 0xff333fff | 0x333000;
        DAT_01eec374 = DAT_01eec374 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec350 = DAT_01eec350 & 0xff111fff | 0x111000;
      DAT_01eec374 = DAT_01eec374 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec350 = DAT_01eec350 & 0xff333fff | 0x333000;
    DAT_01eec374 = DAT_01eec374 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec348,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec36c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec33c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec330,local_60);
  FUN_00f9ec50(&DAT_01eec354,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec360,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eec308);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7F670  FUN_00f7f670  size=395  [run]
void FUN_00f7f670(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        DAT_01eec3c8 = DAT_01eec3c8 & 0xff333fff | 0x333000;
        DAT_01eec3ec = DAT_01eec3ec & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec3c8 = DAT_01eec3c8 & 0xff111fff | 0x111000;
      DAT_01eec3ec = DAT_01eec3ec & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec3c8 = DAT_01eec3c8 & 0xff333fff | 0x333000;
    DAT_01eec3ec = DAT_01eec3ec & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec3c0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec3e4,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec3b4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec3a8,local_60);
  FUN_00f9ec50(&DAT_01eec3cc,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec3d8,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eec380);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7F800  FUN_00f7f800  size=395  [run]
void FUN_00f7f800(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        DAT_01eec440 = DAT_01eec440 & 0xff333fff | 0x333000;
        DAT_01eec464 = DAT_01eec464 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec440 = DAT_01eec440 & 0xff111fff | 0x111000;
      DAT_01eec464 = DAT_01eec464 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec440 = DAT_01eec440 & 0xff333fff | 0x333000;
    DAT_01eec464 = DAT_01eec464 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec438,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec45c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec42c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec420,local_60);
  FUN_00f9ec50(&DAT_01eec444,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec450,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eec3f8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7F990  FUN_00f7f990  size=395  [run]
void FUN_00f7f990(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        DAT_01eec4b8 = DAT_01eec4b8 & 0xff333fff | 0x333000;
        DAT_01eec4dc = DAT_01eec4dc & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec4b8 = DAT_01eec4b8 & 0xff111fff | 0x111000;
      DAT_01eec4dc = DAT_01eec4dc & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec4b8 = DAT_01eec4b8 & 0xff333fff | 0x333000;
    DAT_01eec4dc = DAT_01eec4dc & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec4b0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec4d4,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec4a4,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec498,local_60);
  FUN_00f9ec50(&DAT_01eec4bc,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec4c8,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eec470);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7FB20  FUN_00f7fb20  size=395  [run]
void FUN_00f7fb20(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f690c0(1);
      }
      else {
        DAT_01eec530 = DAT_01eec530 & 0xff333fff | 0x333000;
        DAT_01eec554 = DAT_01eec554 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec530 = DAT_01eec530 & 0xff111fff | 0x111000;
      DAT_01eec554 = DAT_01eec554 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec530 = DAT_01eec530 & 0xff333fff | 0x333000;
    DAT_01eec554 = DAT_01eec554 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eec528,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec54c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec51c,&DAT_018d7130 + (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10,4);
  FUN_00f9eec0(&DAT_01eec510,local_60);
  FUN_00f9ec50(&DAT_01eec534,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec540,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eec4e8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F7FCB0  FUN_00f7fcb0  size=35  [run]
void __fastcall FUN_00f7fcb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  return;
}

