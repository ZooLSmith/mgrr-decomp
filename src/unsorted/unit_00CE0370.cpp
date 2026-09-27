// src/unsorted/unit_00CE0370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE0370..00CE13C0, 9 functions

#include "mgrr.h"

// 00CE0370  FUN_00ce0370  size=3773  [run]
undefined4 __thiscall FUN_00ce0370(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  iVar3 = FUN_00df7c00(8);
  if (iVar3 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x674) == DAT_01dc2cdc) {
    if (*(int *)(param_1 + 0x670) == DAT_01dc2cd8 && *(int *)(param_1 + 0x66c) == param_2) {
      return 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x678) = 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0xc);
  iVar3 = 0xe;
  do {
    puVar4[6] = 0xffffffff;
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 0x1d;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(int *)(param_1 + 0x20) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(undefined4 *)(param_1 + 0x90) = 0x17;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(int *)(param_1 + 0x94) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x80) = 0;
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    goto LAB_00ce048f;
  default:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 2;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xd;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    uVar2 = DAT_01bea090 & 0x80000000;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d4) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d4) = 4;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(int *)(param_1 + 0x2d8) = iVar3;
LAB_00ce112f:
    *(undefined4 *)(param_1 + 0x348) = 0xb;
    *(undefined4 *)(param_1 + 0x33c) = param_3;
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    *(int *)(param_1 + 0x34c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
    goto LAB_00ce1175;
  case 4:
  case 0xf:
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf8) = 1;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 9;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 10;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = 1;
    *(undefined4 *)(param_1 + 0x260) = 0x1a;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 1;
    *(undefined4 *)(param_1 + 0x2d4) = 0x1b;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    *(int *)(param_1 + 0x2d8) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x33c) = 1;
    *(undefined4 *)(param_1 + 0x348) = 7;
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    *(int *)(param_1 + 0x34c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 8;
    *(undefined4 *)(param_1 + 0x3c4) = 0x1d;
    *(int *)(param_1 + 0x3c0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x424) = param_3;
    *(undefined4 *)(param_1 + 0x430) = 0xc;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x498) = param_3;
    *(undefined4 *)(param_1 + 0x4a4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4ac) = 0xffffffff;
    *(int *)(param_1 + 0x4a8) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x494) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50c) = param_3;
    *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
    if (param_2 == 0xf) {
      *(undefined4 *)(param_1 + 0x518) = 0x11;
      goto LAB_00ce0dec;
    }
    *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
    goto LAB_00ce11ed;
  case 5:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 0xf;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x178) = 10;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 0x10;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0xf;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 0xf;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 7;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    goto LAB_00ce04b3;
  case 8:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0x14;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 9;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
    goto LAB_00ce0923;
  case 10:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 9;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 2;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
LAB_00ce0923:
    *(int *)(param_1 + 0x264) = iVar3;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    *(int *)(param_1 + 0x2d8) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x33c) = param_3;
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    *(int *)(param_1 + 0x34c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 10;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    *(int *)(param_1 + 0x3c0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x424) = param_3;
    *(undefined4 *)(param_1 + 0x430) = 0x11;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x420) = 0;
    goto LAB_00ce0567;
  case 0xb:
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf8) = 1;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 2;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xd;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    uVar2 = DAT_01bea090 & 0x80000000;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d4) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d4) = 4;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(int *)(param_1 + 0x2d8) = iVar3;
    bVar5 = DAT_018b9148 == 0xf01;
    *(undefined4 *)(param_1 + 0x348) = 7;
    *(undefined4 *)(param_1 + 0x350) = 0x1c;
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x33c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x33c) = param_3;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(int *)(param_1 + 0x34c) = iVar3;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 0x10;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    *(int *)(param_1 + 0x3c0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x424) = param_3;
    *(undefined4 *)(param_1 + 0x430) = 6;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x498) = param_3;
    *(undefined4 *)(param_1 + 0x4a4) = 0xc;
    *(undefined4 *)(param_1 + 0x4ac) = 0xffffffff;
    *(int *)(param_1 + 0x4a8) = DAT_01dc2cd8;
    goto LAB_00ce11c5;
  case 0xc:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 2;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xd;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    uVar2 = DAT_01bea090 & 0x80000000;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d4) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d4) = 4;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(int *)(param_1 + 0x2d8) = iVar3;
    if (((byte)DAT_01bea060 & 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x33c) = param_3;
      goto LAB_00ce0d40;
    }
    bVar5 = DAT_018b9148 == 0xf01;
    *(undefined4 *)(param_1 + 0x348) = 7;
    *(undefined4 *)(param_1 + 0x350) = 0x1c;
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x33c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x33c) = param_3;
    }
LAB_00ce0d04:
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(int *)(param_1 + 0x34c) = iVar3;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 0x10;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    goto LAB_00ce0d80;
  case 0xd:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 2;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xd;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    uVar2 = DAT_01bea090 & 0x80000000;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d4) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d4) = 4;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(int *)(param_1 + 0x2d8) = iVar3;
    if (((byte)DAT_01bea060 & 0x40) == 0) goto LAB_00ce112f;
    bVar5 = DAT_018b9148 == 0xf01;
    *(undefined4 *)(param_1 + 0x348) = 7;
    *(undefined4 *)(param_1 + 0x350) = 0x1c;
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x33c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x33c) = param_3;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(int *)(param_1 + 0x34c) = iVar3;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 0x10;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
LAB_00ce1175:
    *(int *)(param_1 + 0x3c0) = iVar3;
    *(undefined4 *)(param_1 + 0x424) = param_3;
    *(undefined4 *)(param_1 + 0x430) = 6;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x498) = param_3;
    *(undefined4 *)(param_1 + 0x4a4) = 0xc;
    *(undefined4 *)(param_1 + 0x4ac) = 0xffffffff;
    *(int *)(param_1 + 0x4a8) = DAT_01dc2cd8;
LAB_00ce11c5:
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x50c) = param_3;
    *(undefined4 *)(param_1 + 0x518) = 8;
    *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x508) = 0;
    goto LAB_00ce11ed;
  case 0xe:
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0x104) = 5;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(int *)(param_1 + 0x108) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x16c) = param_3;
    *(undefined4 *)(param_1 + 0x178) = 2;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined4 *)(param_1 + 0x1ec) = 0xd;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
    *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x254) = param_3;
    *(undefined4 *)(param_1 + 0x260) = 0xe;
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
    *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x250) = 0;
    uVar2 = DAT_01bea090 & 0x80000000;
    *(undefined4 *)(param_1 + 0x2c8) = param_3;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d4) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d4) = 4;
    }
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(int *)(param_1 + 0x2d8) = iVar3;
    bVar1 = (byte)DAT_01bea060 & 0x40;
    *(undefined4 *)(param_1 + 0x33c) = param_3;
    if (bVar1 != 0) {
      *(undefined4 *)(param_1 + 0x348) = 7;
      *(undefined4 *)(param_1 + 0x350) = 0x1c;
      goto LAB_00ce0d04;
    }
LAB_00ce0d40:
    *(undefined4 *)(param_1 + 0x348) = 0xb;
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    *(int *)(param_1 + 0x34c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = param_3;
    *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
    iVar3 = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
LAB_00ce0d80:
    *(int *)(param_1 + 0x3c0) = iVar3;
    *(undefined4 *)(param_1 + 0x424) = param_3;
    *(undefined4 *)(param_1 + 0x430) = 6;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x498) = param_3;
    *(undefined4 *)(param_1 + 0x4a4) = 0xc;
    *(undefined4 *)(param_1 + 0x4ac) = 0xffffffff;
    *(int *)(param_1 + 0x4a8) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x50c) = param_3;
    *(undefined4 *)(param_1 + 0x518) = 8;
    *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
LAB_00ce0dec:
    *(int *)(param_1 + 0x51c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x508) = 0;
    goto LAB_00ce11f3;
  }
  *(undefined4 *)(param_1 + 0x16c) = param_3;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(int *)(param_1 + 0x17c) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x168) = 0;
LAB_00ce048f:
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 500) = 0xffffffff;
  *(int *)(param_1 + 0x1f0) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
LAB_00ce04b3:
  *(undefined4 *)(param_1 + 0x254) = param_3;
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  *(int *)(param_1 + 0x264) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = param_3;
  *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  *(int *)(param_1 + 0x2d8) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33c) = param_3;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(int *)(param_1 + 0x34c) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b0) = param_3;
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(int *)(param_1 + 0x3c0) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x424) = param_3;
  *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(int *)(param_1 + 0x434) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x420) = 0xffffffff;
LAB_00ce0567:
  *(undefined4 *)(param_1 + 0x498) = param_3;
  *(undefined4 *)(param_1 + 0x4a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4ac) = 0xffffffff;
  *(int *)(param_1 + 0x4a8) = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x494) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50c) = param_3;
  *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
  iVar3 = DAT_01dc2cd8;
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
LAB_00ce11ed:
  *(int *)(param_1 + 0x51c) = iVar3;
LAB_00ce11f3:
  *(int *)(param_1 + 0x66c) = param_2;
  *(int *)(param_1 + 0x670) = DAT_01dc2cd8;
  *(int *)(param_1 + 0x674) = DAT_01dc2cdc;
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0xd;
  return 1;
}

// 00CE1270  FUN_00ce1270  size=38  [run]
void __thiscall FUN_00ce1270(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x67c) = param_2;
  uVar1 = FUN_00caca30(param_2);
  FUN_00ce0370(uVar1,*(undefined4 *)(param_1 + 8));
  return;
}

// 00CE12A0  FUN_00ce12a0  size=32  [run]
void __fastcall FUN_00ce12a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00caca30(*(undefined4 *)(param_1 + 0x67c));
  FUN_00ce0370(uVar1,*(undefined4 *)(param_1 + 8));
  return;
}

// 00CE12C0  FUN_00ce12c0  size=10  [run]
void FUN_00ce12c0(void)

{
  FUN_00ce0370(0xc,0);
  return;
}

// 00CE12D0  FUN_00ce12d0  size=10  [run]
void FUN_00ce12d0(void)

{
  FUN_00ce0370(0xd,0);
  return;
}

// 00CE12E0  FUN_00ce12e0  size=10  [run]
void FUN_00ce12e0(void)

{
  FUN_00ce0370(0xe,0);
  return;
}

// 00CE12F0  FUN_00ce12f0  size=101  [run]
bool FUN_00ce12f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00c20a30();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00dd9400(10);
  if (iVar1 == 0) {
    iVar1 = FUN_00dd9400(0xb5);
    if (iVar1 == 0) {
      uVar2 = 0x10;
      if ((DAT_01dc2cd0 == 0) && (DAT_01dc2cd4 == 1)) {
        uVar2 = 0x20;
      }
      return ((&DAT_01b7b914)[param_1 * 0xc] & uVar2) != 0;
    }
  }
  return true;
}

// 00CE1360  FUN_00ce1360  size=88  [run]
bool FUN_00ce1360(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00c20a30();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00dd9400(0x91);
  if (iVar1 != 0) {
    return true;
  }
  uVar2 = 0x20;
  if ((DAT_01dc2cd0 == 0) && (DAT_01dc2cd4 == 1)) {
    uVar2 = 0x10;
  }
  return ((&DAT_01b7b914)[param_1 * 0xc] & uVar2) != 0;
}

// 00CE13C0  FUN_00ce13c0  size=140  [run]
undefined4 __thiscall FUN_00ce13c0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + param_1;
  }
  if (((-1 < param_3) && (param_3 < *(int *)(param_1 + 4))) &&
     (iVar2 = param_3 * 0x60 + iVar2, iVar2 != 0)) {
    uVar1 = *(undefined4 *)(iVar2 + 0x4c);
    *param_2 = *(undefined4 *)(iVar2 + 0x48);
    param_2[1] = uVar1;
    uVar1 = *(undefined4 *)(iVar2 + 0x54);
    param_2[2] = *(undefined4 *)(iVar2 + 0x50);
    param_2[3] = uVar1;
    uVar1 = *(undefined4 *)(iVar2 + 0x5c);
    param_2[4] = *(undefined4 *)(iVar2 + 0x58);
    param_2[5] = uVar1;
    return 1;
  }
  return 0;
}

