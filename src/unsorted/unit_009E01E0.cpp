// src/unsorted/unit_009E01E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E01E0..009E0F60, 13 functions

#include "types.h"

// 009E01E0  FUN_009e01e0  size=190  [run]
undefined4 FUN_009e01e0(int param_1,undefined *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < param_3) {
    param_2 = (&PTR_s_g_Sampler0_0188ff1c)[param_3];
  }
  iVar1 = FUN_00fa39a0(param_1,param_2);
  if (iVar1 != 0) {
    if (param_4 != 3) {
      if (param_4 == 1) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xe1ffffff | 0x1000000;
      }
      uVar2 = param_4;
      if ((*(byte *)(param_1 + 0xb) & 0x1f) != 1) {
        uVar2 = 3;
      }
      *(uint *)(param_1 + 8) =
           ((uVar2 & 0xf) << 4 | param_4 & 0xf) << 4 | *(uint *)(param_1 + 8) & 0xfffff000 |
           uVar2 & 0xf;
    }
    param_5 = param_5 & 0xf;
    *(uint *)(param_1 + 8) =
         (param_5 | param_5 << 4) << 0xc | *(uint *)(param_1 + 8) & 0xff000fff | param_5 << 0x14;
    return 1;
  }
  return 0;
}

// 009E02A0  FUN_009e02a0  size=25  [run]
void FUN_009e02a0(undefined4 param_1)

{
  if ((DAT_01b7a738 & 1) != 0) {
    FUN_00f42f70(param_1);
  }
  return;
}

// 009E02C0  FUN_009e02c0  size=380  [run]
undefined4 FUN_009e02c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar3 = DAT_01b83bd0;
    if (*(char *)(param_1 + 0x10) != 'c') {
      uVar3 = DAT_01b83bbc;
    }
    FUN_00eb9070(uVar3,1);
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f5e710(1);
      FUN_00f5c180(3);
      goto LAB_009e035d;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f5e710(3);
      FUN_00f5c180(1);
      goto LAB_009e035d;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  FUN_00f5e6d0(uVar3);
LAB_009e035d:
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00f5c160(*(undefined4 *)(param_1 + 0x18));
  local_98 = *(undefined4 *)(param_1 + 0x98);
  local_94 = *(undefined4 *)(param_1 + 0x9c);
  local_a0 = *(float *)(param_1 + 0x80);
  local_9c = 1.0 / local_a0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  FUN_00f9ec50(&DAT_01b7afbc,&local_a0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f5c140(&local_b0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7af70);
  return 1;
}

// 009E0440  FUN_009e0440  size=350  [run]
undefined4 FUN_009e0440(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = DAT_01b83bd0;
    if (*(char *)(param_1 + 0x10) != 'c') {
      uVar1 = DAT_01b83bbc;
    }
    FUN_00eb9070(uVar1,1);
  }
  FUN_00f9ec50(&DAT_01b7b02c,param_1 + 0xa0,4);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(&DAT_01b7b014,uVar1);
  FUN_00f9ec50(&DAT_01b7b020,param_1 + 0x90,4);
  iVar2 = FUN_00a283a0();
  local_a0 = (float)iVar2;
  if (iVar2 < 0) {
    local_a0 = local_a0 + 4.2949673e+09;
  }
  local_a0 = 2.0 / local_a0;
  iVar2 = FUN_00a283d0();
  local_9c = (float)iVar2;
  if (iVar2 < 0) {
    local_9c = local_9c + 4.2949673e+09;
  }
  local_9c = 2.0 / local_9c;
  local_98 = 0;
  local_94 = 0;
  FUN_00f9ec50(&DAT_01b7b038,&local_a0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_ac = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f5c140(&local_b0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7afc8);
  return 1;
}

// 009E05A0  FUN_009e05a0  size=364  [run]
undefined4 FUN_009e05a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = DAT_01b83bd0;
    if (*(char *)(param_1 + 0x10) != 'c') {
      uVar1 = DAT_01b83bbc;
    }
    FUN_00eb9070(uVar1,1);
  }
  FUN_00f9ec50(&DAT_01b7b0ac,param_1 + 0xa0,4);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(&DAT_01b7b094,uVar1);
  FUN_00fa1d50(&DAT_01b7b0c4,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01b7b0a0,param_1 + 0x90,4);
  iVar2 = FUN_00a283a0();
  local_a0 = (float)iVar2;
  if (iVar2 < 0) {
    local_a0 = local_a0 + 4.2949673e+09;
  }
  local_a0 = 2.0 / local_a0;
  iVar2 = FUN_00a283d0();
  local_9c = (float)iVar2;
  if (iVar2 < 0) {
    local_9c = local_9c + 4.2949673e+09;
  }
  local_9c = 2.0 / local_9c;
  local_98 = 0;
  local_94 = 0;
  FUN_00f9ec50(&DAT_01b7b038,&local_a0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f5c140(&local_b0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7b048);
  return 1;
}

// 009E0710  FUN_009e0710  size=325  [run]
undefined4 FUN_009e0710(int param_1)

{
  int iVar1;
  float10 fVar2;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  FUN_00f5c160(*(undefined4 *)(param_1 + 0x18));
  FUN_00f5d860(local_90);
  FUN_00f5d8a0(*(undefined4 *)(param_1 + 0x90));
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_a0 = *(float *)(&DAT_018d7130 + iVar1) * *(float *)(param_1 + 0x80);
  local_9c = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  local_98 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  local_94 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f5c140(&local_a0);
  FUN_00f5d880(*(undefined4 *)(param_1 + 0x1c));
  fVar2 = (float10)FUN_00dde300(0,0x43800000);
  local_b0 = (float)(fVar2 * (float10)0.00390625);
  fVar2 = (float10)FUN_00dde300(0,0x43800000);
  local_ac = (float)(fVar2 * (float10)0.00390625);
  local_a4 = 0;
  local_a8 = 0;
  FUN_00f5d8b0(&local_b0);
  FUN_00f5d8c0(*(undefined4 *)(param_1 + 0x94));
  FUN_00f990e0(&DAT_01eed118);
  return 1;
}

// 009E0860  FUN_009e0860  size=489  [run]
undefined4 FUN_009e0860(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  FUN_00f5d9f0(param_1 + 0x90);
  FUN_00f5c160(DAT_01ee5418);
  FUN_00f5d990(*(undefined4 *)(param_1 + 0x1c));
  local_b0 = *(undefined4 *)(param_1 + 0xa0);
  local_ac = *(undefined4 *)(param_1 + 0xa4);
  local_a8 = *(undefined4 *)(param_1 + 0xa8);
  local_a4 = *(undefined4 *)(param_1 + 0xac);
  FUN_00f5d950(&local_b0);
  local_a0 = *(undefined4 *)(param_1 + 0x70);
  local_9c = *(undefined4 *)(param_1 + 0x74);
  local_98 = *(undefined4 *)(param_1 + 0x78);
  local_94 = *(undefined4 *)(param_1 + 0x7c);
  iVar2 = FUN_00a33440(&local_a0);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xc) < 1) {
      uVar3 = 0xffffffff;
    }
    else if (*(int *)(iVar2 + 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x2c);
    }
    uVar3 = FUN_00fa0740(uVar3);
    FUN_00f5d9b0(uVar3);
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f5e710(1);
      FUN_00f5c180(3);
      goto LAB_009e09a2;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f5e710(3);
      FUN_00f5c180(1);
      goto LAB_009e09a2;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  FUN_00f5e6d0(uVar3);
LAB_009e09a2:
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_c0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_bc = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_b8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_b4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f5c140(&local_c0);
  FUN_00f5c120(local_90);
  FUN_00f5d910(param_1 + 0x40);
  FUN_00f5d930(param_1 + 0x40);
  uVar3 = FUN_00fb2060();
  FUN_00f5d970(uVar3);
  FUN_00f990e0(&DAT_01eed1c8);
  return 1;
}

// 009E0A50  FUN_009e0a50  size=229  [run]
undefined4 FUN_009e0a50(int param_1)

{
  int iVar1;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  FUN_00f5c120(local_90);
  FUN_00f5c160(DAT_01ee5420);
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_a0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar1);
  local_9c = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  local_98 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  local_94 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f5c140(&local_a0);
  FUN_00f9ec50(&DAT_01b7b128,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01b7b11c,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01b7b134,param_1 + 0xb0,4);
  FUN_00f990e0(&DAT_01b7b0d0);
  return 1;
}

// 009E0B40  FUN_009e0b40  size=326  [run]
undefined4 FUN_009e0b40(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f5d090(param_1 + 0x90);
  FUN_00f5c160(*(undefined4 *)(param_1 + 0x18));
  FUN_00f5d0d0(*(undefined4 *)(param_1 + 0x1c));
  uVar2 = FUN_00fa0740(0);
  FUN_00f5d0b0(uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f5e710(1);
      FUN_00f5c180(3);
      goto LAB_009e0c0d;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f5e710(3);
      FUN_00f5c180(1);
      goto LAB_009e0c0d;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f5e6d0(uVar2);
LAB_009e0c0d:
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_a0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  local_9c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  local_98 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  local_94 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f5c140(&local_a0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7b140);
  return 1;
}

// 009E0C90  FUN_009e0c90  size=326  [run]
undefined4 FUN_009e0c90(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f5d090(param_1 + 0x90);
  FUN_00f5c160(*(undefined4 *)(param_1 + 0x18));
  FUN_00f5d0d0(*(undefined4 *)(param_1 + 0x1c));
  uVar2 = FUN_00fa0740(0);
  FUN_00f5d0b0(uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f5e710(1);
      FUN_00f5c180(3);
      goto LAB_009e0d5d;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f5e710(3);
      FUN_00f5c180(1);
      goto LAB_009e0d5d;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f5e6d0(uVar2);
LAB_009e0d5d:
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_a0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  local_9c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  local_98 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  local_94 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f5c140(&local_a0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7b1b0);
  return 1;
}

// 009E0DE0  FUN_009e0de0  size=327  [run]
undefined4 FUN_009e0de0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_009d5e00(local_90,local_50,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f5d090(param_1 + 0x90);
  FUN_00f5c160(*(undefined4 *)(param_1 + 0x18));
  FUN_00f5d0d0(*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00f5d0b0(uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_00f5e710(1);
      FUN_00f5c180(3);
      goto LAB_009e0eae;
    }
    if ((uVar1 & 0x400) != 0) {
      FUN_00f5e710(3);
      FUN_00f5c180(1);
      goto LAB_009e0eae;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  FUN_00f5e6d0(uVar2);
LAB_009e0eae:
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_a0 = *(float *)(&DAT_018d7130 + iVar3) * *(float *)(param_1 + 0x80);
  fStack_9c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_98 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_94 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f5c140(&fStack_a0);
  FUN_00f5c120(local_90);
  FUN_00f990e0(&DAT_01b7a898);
  return 1;
}

// 009E0F30  FUN_009e0f30  size=39  [run]
void FUN_009e0f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (param_1,0,0,0,param_2,param_3,0x15,"EffectHitSystemProxy");
  return;
}

// 009E0F60  FUN_009e0f60  size=29  [run]
undefined4 __fastcall FUN_009e0f60(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x30) + 0xc), uVar1 != 0)) {
    return *(undefined4 *)((-(uint)(uVar1 != 0) & uVar1) + 0x2c);
  }
  return 0;
}

