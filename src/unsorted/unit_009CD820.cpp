// src/unsorted/unit_009CD820.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CD820..009CE580, 26 functions

#include "types.h"

// 009CD820  FUN_009cd820  size=59  [run]
void FUN_009cd820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00f0db60(&local_20,param_2,param_3,param_4);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

// 009CD860  FUN_009cd860  size=89  [run]
void FUN_009cd860(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00f0db60(&local_20,&local_30,param_3,param_4);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

// 009CDCE0  FUN_009cdce0  size=33  [run]
undefined4 FUN_009cdce0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 8:
  case 0xc:
  case 0xe:
  case 0x11:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x2b:
  case 0x54:
  case 0x5a:
    return 0;
  default:
    return 1;
  }
}

// 009CDD70  FUN_009cdd70  size=28  [run]
bool FUN_009cdd70(int param_1)

{
  if ((param_1 != 0xb) && (param_1 != 0xc)) {
    return param_1 != 0x12;
  }
  return false;
}

// 009CDD90  FUN_009cdd90  size=3  [run]
undefined4 FUN_009cdd90(void)

{
  return 0;
}

// 009CDDB0  FUN_009cddb0  size=66  [run]
void FUN_009cddb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x40) & 0x8000000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0x28))(0xffffffff);
    FUN_00a7c8a0();
    iVar2 = FUN_00b953a0();
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
      return;
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffdfff;
  }
  return;
}

// 009CDE00  FUN_009cde00  size=33  [run]
void FUN_009cde00(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x404) - *(float *)(param_1 + 0x408)) {
    return;
  }
  return;
}

// 009CDE30  FUN_009cde30  size=12  [run]
bool FUN_009cde30(short param_1)

{
  return param_1 != 0x7a;
}

// 009CDE80  FUN_009cde80  size=6  [run]
undefined4 FUN_009cde80(void)

{
  return 1;
}

// 009CDEA0  FUN_009cdea0  size=6  [run]
undefined4 FUN_009cdea0(void)

{
  return 1;
}

// 009CDEB0  FUN_009cdeb0  size=96  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cdeb0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined *puVar5;
  
  pfVar4 = (float *)FUN_00a1ffe0();
  fVar3 = _DAT_0188f570;
  puVar5 = DAT_01beb8c0;
  if (DAT_01beb8c0 == (undefined *)0x0) {
    puVar5 = &DAT_01bea1d0;
  }
  fVar1 = _DAT_0188f570 * pfVar4[1];
  fVar2 = _DAT_0188f570 * pfVar4[2];
  *param_1 = _DAT_0188f570 * *pfVar4 + *(float *)(puVar5 + 0x1b0);
  param_1[1] = *(float *)(puVar5 + 0x1b4) + fVar1;
  param_1[2] = fVar2 + *(float *)(puVar5 + 0x1b8);
  param_1[3] = fVar3 + *(float *)(puVar5 + 0x1bc);
  return;
}

// 009CDF10  FUN_009cdf10  size=54  [run]
void FUN_009cdf10(undefined4 param_1)

{
  undefined1 local_20 [28];
  
  FUN_009cdeb0(local_20);
  FUN_00d9fa80(param_1,local_20);
  return;
}

// 009CDF70  FUN_009cdf70  size=66  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cdf70(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fb2080();
  D3DXMatrixMultiply(param_1,param_2 + 0x40,uVar1);
  *(undefined4 *)(param_1 + 0x30) = _DAT_0188f600;
  *(undefined4 *)(param_1 + 0x34) = _DAT_0188f604;
  *(undefined4 *)(param_1 + 0x38) = _DAT_0188f608;
  D3DXMatrixTranspose(param_1,param_1);
  return;
}

// 009CDFC0  FUN_009cdfc0  size=84  [run]
void FUN_009cdfc0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  float *unaff_ESI;
  
  uVar1 = FUN_00fb2080();
  D3DXMatrixMultiply(param_1,param_3 + 0x40,uVar1);
  D3DXVec3TransformNormal(unaff_ESI,&DAT_0188f600,param_1);
  *unaff_ESI = *(float *)(param_1 + 0x30) + *unaff_ESI;
  unaff_ESI[1] = *(float *)(param_1 + 0x34) + unaff_ESI[1];
  unaff_ESI[2] = *(float *)(param_1 + 0x38) + unaff_ESI[2];
  D3DXMatrixInverse(param_1,0,param_1);
  return;
}

// 009CE020  FUN_009ce020  size=21  [run]
undefined4 FUN_009ce020(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01b83bd0;
  if (*(char *)(param_1 + 0x10) != 'c') {
    uVar1 = DAT_01b83bbc;
  }
  return uVar1;
}

// 009CE040  FUN_009ce040  size=33  [run]
void FUN_009ce040(undefined4 param_1)

{
  if ((DAT_01bea088 & 0x800000) != 0) {
    FUN_00a297b0();
    return;
  }
  FUN_00eb9070(param_1,1);
  return;
}

// 009CE070  FUN_009ce070  size=110  [run]
void FUN_009ce070(undefined4 param_1,undefined4 param_2)

{
  if ((DAT_01bea088 & 0x800000) != 0) {
    FUN_00f9db30(1);
    FUN_00f9d930(1);
    FUN_00f9da00();
    return;
  }
  FUN_00f9db30(param_1);
  FUN_00f9d930(param_2);
  FUN_00f9da00();
  return;
}

// 009CE110  FUN_009ce110  size=109  [run]
void __thiscall
FUN_009ce110(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x90) = *param_2;
  *(undefined4 *)(param_1 + 0x94) = param_2[1];
  *(undefined4 *)(param_1 + 0x98) = param_2[2];
  *(undefined4 *)(param_1 + 0x9c) = param_2[3];
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = *param_3;
  *(undefined4 *)(param_1 + 0xa4) = param_3[1];
  *(undefined4 *)(param_1 + 0xa8) = param_3[2];
  *(undefined4 *)(param_1 + 0xac) = param_3[3];
  *(undefined4 *)(param_1 + 0xb4) = param_4;
  *(undefined4 *)(param_1 + 0xb0) = param_5;
  return;
}

// 009CE370  FUN_009ce370  size=6  [run]
undefined4 FUN_009ce370(void)

{
  return 1;
}

// 009CE380  FUN_009ce380  size=1  [run]
void FUN_009ce380(void)

{
  return;
}

// 009CE390  FUN_009ce390  size=1  [run]
void FUN_009ce390(void)

{
  return;
}

// 009CE3A0  FUN_009ce3a0  size=60  [run]
void FUN_009ce3a0(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00f9dcf0();
    return;
  }
  FUN_00f9dcf0(1);
  FUN_00f9de50(3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x28));
  FUN_00f9dd70(1,1,1);
  return;
}

// 009CE3E0  FUN_009ce3e0  size=24  [run]
void FUN_009ce3e0(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00f9dcf0();
    return;
  }
  return;
}

// 009CE400  FUN_009ce400  size=32  [run]
bool FUN_009ce400(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x4c);
  if ((sVar1 != 0x12) && (sVar1 != 0x13)) {
    return sVar1 != 0x75;
  }
  return false;
}

// 009CE4A0  FUN_009ce4a0  size=211  [run]
void FUN_009ce4a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_01eddb74;
  iVar2 = DAT_01be5564;
  iVar3 = DAT_01be5564 * 0x50;
  *(undefined4 *)(DAT_01eddb74 + 4) = *(undefined4 *)(&DAT_01be1b54 + iVar3);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(&DAT_01be1b58 + iVar3);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(&DAT_01be1b5c + iVar3);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(&DAT_01be1b60 + iVar3);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(&DAT_01be1b64 + iVar3);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(&DAT_01be1b68 + iVar3);
  iVar1 = DAT_01eddb74;
  iVar3 = iVar2 * 0x140;
  *(undefined4 *)(DAT_01eddb74 + 0x20) = *(undefined4 *)(&DAT_01be19c4 + iVar3);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(&DAT_01be19c8 + iVar3);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(&DAT_01be19cc + iVar3);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(&DAT_01be19d0 + iVar3);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(&DAT_01be19d4 + iVar3);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(&DAT_01be19d8 + iVar3);
  iVar3 = DAT_01eddb74;
  iVar1 = DAT_01b83c10;
  *(undefined4 *)(DAT_01eddb74 + 0x3c) = *(undefined4 *)(DAT_01b83c10 + 4);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar1 + 0x18);
  iVar3 = DAT_01eddb74;
  iVar1 = *(int *)(&DAT_01b83bcc + iVar2 * 4);
  *(undefined4 *)(DAT_01eddb74 + 0x58) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar3 + 0x6c) = *(undefined4 *)(iVar1 + 0x18);
  return;
}

// 009CE580  FUN_009ce580  size=2456  [run]
void FUN_009ce580(void)

{
  int iVar1;
  
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x74) = DAT_01be0b14;
  *(undefined4 *)(iVar1 + 0x78) = DAT_01be0b18;
  *(undefined4 *)(iVar1 + 0x7c) = DAT_01be0b1c;
  *(undefined4 *)(iVar1 + 0x80) = DAT_01be0b20;
  *(undefined4 *)(iVar1 + 0x84) = DAT_01be0b24;
  *(undefined4 *)(iVar1 + 0x88) = DAT_01be0b28;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x90) = DAT_01be0b64;
  *(undefined4 *)(iVar1 + 0x94) = DAT_01be0b68;
  *(undefined4 *)(iVar1 + 0x98) = DAT_01be0b6c;
  *(undefined4 *)(iVar1 + 0x9c) = DAT_01be0b70;
  *(undefined4 *)(iVar1 + 0xa0) = DAT_01be0b74;
  *(undefined4 *)(iVar1 + 0xa4) = DAT_01be0b78;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0xac) = DAT_01be0bb4;
  *(undefined4 *)(iVar1 + 0xb0) = DAT_01be0bb8;
  *(undefined4 *)(iVar1 + 0xb4) = DAT_01be0bbc;
  *(undefined4 *)(iVar1 + 0xb8) = DAT_01be0bc0;
  *(undefined4 *)(iVar1 + 0xbc) = DAT_01be0bc4;
  *(undefined4 *)(iVar1 + 0xc0) = DAT_01be0bc8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 200) = DAT_01be0c04;
  *(undefined4 *)(iVar1 + 0xcc) = DAT_01be0c08;
  *(undefined4 *)(iVar1 + 0xd0) = DAT_01be0c0c;
  *(undefined4 *)(iVar1 + 0xd4) = DAT_01be0c10;
  *(undefined4 *)(iVar1 + 0xd8) = DAT_01be0c14;
  *(undefined4 *)(iVar1 + 0xdc) = DAT_01be0c18;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0xe4) = DAT_01be0c54;
  *(undefined4 *)(iVar1 + 0xe8) = DAT_01be0c58;
  *(undefined4 *)(iVar1 + 0xec) = DAT_01be0c5c;
  *(undefined4 *)(iVar1 + 0xf0) = DAT_01be0c60;
  *(undefined4 *)(iVar1 + 0xf4) = DAT_01be0c64;
  *(undefined4 *)(iVar1 + 0xf8) = DAT_01be0c68;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x100) = DAT_01be0ca4;
  *(undefined4 *)(iVar1 + 0x104) = DAT_01be0ca8;
  *(undefined4 *)(iVar1 + 0x108) = DAT_01be0cac;
  *(undefined4 *)(iVar1 + 0x10c) = DAT_01be0cb0;
  *(undefined4 *)(iVar1 + 0x110) = DAT_01be0cb4;
  *(undefined4 *)(iVar1 + 0x114) = DAT_01be0cb8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x11c) = DAT_01be0cf4;
  *(undefined4 *)(iVar1 + 0x120) = DAT_01be0cf8;
  *(undefined4 *)(iVar1 + 0x124) = DAT_01be0cfc;
  *(undefined4 *)(iVar1 + 0x128) = DAT_01be0d00;
  *(undefined4 *)(iVar1 + 300) = DAT_01be0d04;
  *(undefined4 *)(iVar1 + 0x130) = DAT_01be0d08;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x138) = DAT_01be0d44;
  *(undefined4 *)(iVar1 + 0x13c) = DAT_01be0d48;
  *(undefined4 *)(iVar1 + 0x140) = DAT_01be0d4c;
  *(undefined4 *)(iVar1 + 0x144) = DAT_01be0d50;
  *(undefined4 *)(iVar1 + 0x148) = DAT_01be0d54;
  *(undefined4 *)(iVar1 + 0x14c) = DAT_01be0d58;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x154) = DAT_01be0d94;
  *(undefined4 *)(iVar1 + 0x158) = DAT_01be0d98;
  *(undefined4 *)(iVar1 + 0x15c) = DAT_01be0d9c;
  *(undefined4 *)(iVar1 + 0x160) = DAT_01be0da0;
  *(undefined4 *)(iVar1 + 0x164) = DAT_01be0da4;
  *(undefined4 *)(iVar1 + 0x168) = DAT_01be0da8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x170) = DAT_01be0de4;
  *(undefined4 *)(iVar1 + 0x174) = DAT_01be0de8;
  *(undefined4 *)(iVar1 + 0x178) = DAT_01be0dec;
  *(undefined4 *)(iVar1 + 0x17c) = DAT_01be0df0;
  *(undefined4 *)(iVar1 + 0x180) = DAT_01be0df4;
  *(undefined4 *)(iVar1 + 0x184) = DAT_01be0df8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x18c) = DAT_01be0e34;
  *(undefined4 *)(iVar1 + 400) = DAT_01be0e38;
  *(undefined4 *)(iVar1 + 0x194) = DAT_01be0e3c;
  *(undefined4 *)(iVar1 + 0x198) = DAT_01be0e40;
  *(undefined4 *)(iVar1 + 0x19c) = DAT_01be0e44;
  *(undefined4 *)(iVar1 + 0x1a0) = DAT_01be0e48;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x1a8) = DAT_01be0e84;
  *(undefined4 *)(iVar1 + 0x1ac) = DAT_01be0e88;
  *(undefined4 *)(iVar1 + 0x1b0) = DAT_01be0e8c;
  *(undefined4 *)(iVar1 + 0x1b4) = DAT_01be0e90;
  *(undefined4 *)(iVar1 + 0x1b8) = DAT_01be0e94;
  *(undefined4 *)(iVar1 + 0x1bc) = DAT_01be0e98;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x1c4) = DAT_01be0ed4;
  *(undefined4 *)(iVar1 + 0x1c8) = DAT_01be0ed8;
  *(undefined4 *)(iVar1 + 0x1cc) = DAT_01be0edc;
  *(undefined4 *)(iVar1 + 0x1d0) = DAT_01be0ee0;
  *(undefined4 *)(iVar1 + 0x1d4) = DAT_01be0ee4;
  *(undefined4 *)(iVar1 + 0x1d8) = DAT_01be0ee8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x1e0) = DAT_01be0f24;
  *(undefined4 *)(iVar1 + 0x1e4) = DAT_01be0f28;
  *(undefined4 *)(iVar1 + 0x1e8) = DAT_01be0f2c;
  *(undefined4 *)(iVar1 + 0x1ec) = DAT_01be0f30;
  *(undefined4 *)(iVar1 + 0x1f0) = DAT_01be0f34;
  *(undefined4 *)(iVar1 + 500) = DAT_01be0f38;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x1fc) = DAT_01be0f74;
  *(undefined4 *)(iVar1 + 0x200) = DAT_01be0f78;
  *(undefined4 *)(iVar1 + 0x204) = DAT_01be0f7c;
  *(undefined4 *)(iVar1 + 0x208) = DAT_01be0f80;
  *(undefined4 *)(iVar1 + 0x20c) = DAT_01be0f84;
  *(undefined4 *)(iVar1 + 0x210) = DAT_01be0f88;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x218) = DAT_01be0fc4;
  *(undefined4 *)(iVar1 + 0x21c) = DAT_01be0fc8;
  *(undefined4 *)(iVar1 + 0x220) = DAT_01be0fcc;
  *(undefined4 *)(iVar1 + 0x224) = DAT_01be0fd0;
  *(undefined4 *)(iVar1 + 0x228) = DAT_01be0fd4;
  *(undefined4 *)(iVar1 + 0x22c) = DAT_01be0fd8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x234) = DAT_01be1014;
  *(undefined4 *)(iVar1 + 0x238) = DAT_01be1018;
  *(undefined4 *)(iVar1 + 0x23c) = DAT_01be101c;
  *(undefined4 *)(iVar1 + 0x240) = DAT_01be1020;
  *(undefined4 *)(iVar1 + 0x244) = DAT_01be1024;
  *(undefined4 *)(iVar1 + 0x248) = DAT_01be1028;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x250) = DAT_01be1064;
  *(undefined4 *)(iVar1 + 0x254) = DAT_01be1068;
  *(undefined4 *)(iVar1 + 600) = DAT_01be106c;
  *(undefined4 *)(iVar1 + 0x25c) = DAT_01be1070;
  *(undefined4 *)(iVar1 + 0x260) = DAT_01be1074;
  *(undefined4 *)(iVar1 + 0x264) = DAT_01be1078;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x26c) = DAT_01be10b4;
  *(undefined4 *)(iVar1 + 0x270) = DAT_01be10b8;
  *(undefined4 *)(iVar1 + 0x274) = DAT_01be10bc;
  *(undefined4 *)(iVar1 + 0x278) = DAT_01be10c0;
  *(undefined4 *)(iVar1 + 0x27c) = DAT_01be10c4;
  *(undefined4 *)(iVar1 + 0x280) = DAT_01be10c8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x288) = DAT_01be1104;
  *(undefined4 *)(iVar1 + 0x28c) = DAT_01be1108;
  *(undefined4 *)(iVar1 + 0x290) = DAT_01be110c;
  *(undefined4 *)(iVar1 + 0x294) = DAT_01be1110;
  *(undefined4 *)(iVar1 + 0x298) = DAT_01be1114;
  *(undefined4 *)(iVar1 + 0x29c) = DAT_01be1118;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x2a4) = DAT_01be1154;
  *(undefined4 *)(iVar1 + 0x2a8) = DAT_01be1158;
  *(undefined4 *)(iVar1 + 0x2ac) = DAT_01be115c;
  *(undefined4 *)(iVar1 + 0x2b0) = DAT_01be1160;
  *(undefined4 *)(iVar1 + 0x2b4) = DAT_01be1164;
  *(undefined4 *)(iVar1 + 0x2b8) = DAT_01be1168;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x2c0) = DAT_01be11a4;
  *(undefined4 *)(iVar1 + 0x2c4) = DAT_01be11a8;
  *(undefined4 *)(iVar1 + 0x2c8) = DAT_01be11ac;
  *(undefined4 *)(iVar1 + 0x2cc) = DAT_01be11b0;
  *(undefined4 *)(iVar1 + 0x2d0) = DAT_01be11b4;
  *(undefined4 *)(iVar1 + 0x2d4) = DAT_01be11b8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x2dc) = DAT_01be11f4;
  *(undefined4 *)(iVar1 + 0x2e0) = DAT_01be11f8;
  *(undefined4 *)(iVar1 + 0x2e4) = DAT_01be11fc;
  *(undefined4 *)(iVar1 + 0x2e8) = DAT_01be1200;
  *(undefined4 *)(iVar1 + 0x2ec) = DAT_01be1204;
  *(undefined4 *)(iVar1 + 0x2f0) = DAT_01be1208;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x2f8) = DAT_01be1244;
  *(undefined4 *)(iVar1 + 0x2fc) = DAT_01be1248;
  *(undefined4 *)(iVar1 + 0x300) = DAT_01be124c;
  *(undefined4 *)(iVar1 + 0x304) = DAT_01be1250;
  *(undefined4 *)(iVar1 + 0x308) = DAT_01be1254;
  *(undefined4 *)(iVar1 + 0x30c) = DAT_01be1258;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x314) = DAT_01be1294;
  *(undefined4 *)(iVar1 + 0x318) = DAT_01be1298;
  *(undefined4 *)(iVar1 + 0x31c) = DAT_01be129c;
  *(undefined4 *)(iVar1 + 800) = DAT_01be12a0;
  *(undefined4 *)(iVar1 + 0x324) = DAT_01be12a4;
  *(undefined4 *)(iVar1 + 0x328) = DAT_01be12a8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x330) = DAT_01be12e4;
  *(undefined4 *)(iVar1 + 0x334) = DAT_01be12e8;
  *(undefined4 *)(iVar1 + 0x338) = DAT_01be12ec;
  *(undefined4 *)(iVar1 + 0x33c) = DAT_01be12f0;
  *(undefined4 *)(iVar1 + 0x340) = DAT_01be12f4;
  *(undefined4 *)(iVar1 + 0x344) = DAT_01be12f8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x34c) = DAT_01be1334;
  *(undefined4 *)(iVar1 + 0x350) = DAT_01be1338;
  *(undefined4 *)(iVar1 + 0x354) = DAT_01be133c;
  *(undefined4 *)(iVar1 + 0x358) = DAT_01be1340;
  *(undefined4 *)(iVar1 + 0x35c) = DAT_01be1344;
  *(undefined4 *)(iVar1 + 0x360) = DAT_01be1348;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x368) = DAT_01be1384;
  *(undefined4 *)(iVar1 + 0x36c) = DAT_01be1388;
  *(undefined4 *)(iVar1 + 0x370) = DAT_01be138c;
  *(undefined4 *)(iVar1 + 0x374) = DAT_01be1390;
  *(undefined4 *)(iVar1 + 0x378) = DAT_01be1394;
  *(undefined4 *)(iVar1 + 0x37c) = DAT_01be1398;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 900) = DAT_01be13d4;
  *(undefined4 *)(iVar1 + 0x388) = DAT_01be13d8;
  *(undefined4 *)(iVar1 + 0x38c) = DAT_01be13dc;
  *(undefined4 *)(iVar1 + 0x390) = DAT_01be13e0;
  *(undefined4 *)(iVar1 + 0x394) = DAT_01be13e4;
  *(undefined4 *)(iVar1 + 0x398) = DAT_01be13e8;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x3a0) = DAT_01be1424;
  *(undefined4 *)(iVar1 + 0x3a4) = DAT_01be1428;
  *(undefined4 *)(iVar1 + 0x3a8) = DAT_01be142c;
  *(undefined4 *)(iVar1 + 0x3ac) = DAT_01be1430;
  *(undefined4 *)(iVar1 + 0x3b0) = DAT_01be1434;
  *(undefined4 *)(iVar1 + 0x3b4) = DAT_01be1438;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x3bc) = DAT_01be1474;
  *(undefined4 *)(iVar1 + 0x3c0) = DAT_01be1478;
  *(undefined4 *)(iVar1 + 0x3c4) = DAT_01be147c;
  *(undefined4 *)(iVar1 + 0x3c8) = DAT_01be1480;
  *(undefined4 *)(iVar1 + 0x3cc) = DAT_01be1484;
  *(undefined4 *)(iVar1 + 0x3d0) = DAT_01be1488;
  iVar1 = DAT_01eddb74;
  *(undefined4 *)(DAT_01eddb74 + 0x3d8) = DAT_01be14c4;
  *(undefined4 *)(iVar1 + 0x3dc) = DAT_01be14c8;
  *(undefined4 *)(iVar1 + 0x3e0) = DAT_01be14cc;
  *(undefined4 *)(iVar1 + 0x3e4) = DAT_01be14d0;
  *(undefined4 *)(iVar1 + 1000) = DAT_01be14d4;
  *(undefined4 *)(iVar1 + 0x3ec) = DAT_01be14d8;
  return;
}

