// src/unsorted/unit_00CC3590.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC3590..00CC43A0, 4 functions

#include "mgrr.h"

// 00CC3590  FUN_00cc3590  size=38  [run]
void __thiscall FUN_00cc3590(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1c) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    if ((uVar1 & *(uint *)(param_1 + 0x38)) == 0) {
      *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + '\x01';
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | uVar1;
    }
  }
  return;
}

// 00CC35C0  FUN_00cc35c0  size=3012  [run]
void __fastcall FUN_00cc35c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x88);
  }
  *(uint *)(param_1 + 0x118) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8a);
  }
  *(uint *)(param_1 + 0x11c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8c);
  }
  *(uint *)(param_1 + 0x120) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8e);
  }
  *(uint *)(param_1 + 0x124) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x90);
  }
  *(uint *)(param_1 + 0x128) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x11e);
  }
  *(uint *)(param_1 + 300) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x92);
  }
  *(uint *)(param_1 + 0x130) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x94);
  }
  *(uint *)(param_1 + 0x134) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x96);
  }
  *(uint *)(param_1 + 0x138) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x98);
  }
  *(uint *)(param_1 + 0x13c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x9a);
  }
  *(uint *)(param_1 + 0x140) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x9c);
  }
  *(uint *)(param_1 + 0x144) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x9e);
  }
  *(uint *)(param_1 + 0x15c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa0);
  }
  *(uint *)(param_1 + 0x174) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa2);
  }
  *(uint *)(param_1 + 0x18c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa4);
  }
  *(uint *)(param_1 + 0x1a4) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb0);
  }
  *(uint *)(param_1 + 0x148) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb2);
  }
  *(uint *)(param_1 + 0x160) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb4);
  }
  *(uint *)(param_1 + 0x178) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  }
  *(uint *)(param_1 + 400) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb8);
  }
  *(uint *)(param_1 + 0x1a8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xc4);
  }
  *(uint *)(param_1 + 0x14c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xc6);
  }
  *(uint *)(param_1 + 0x164) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 200);
  }
  *(uint *)(param_1 + 0x17c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xca);
  }
  *(uint *)(param_1 + 0x194) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xcc);
  }
  *(uint *)(param_1 + 0x1ac) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xd8);
  }
  *(uint *)(param_1 + 0x150) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xda);
  }
  *(uint *)(param_1 + 0x168) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xdc);
  }
  *(uint *)(param_1 + 0x180) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xde);
  }
  *(uint *)(param_1 + 0x198) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xe0);
  }
  *(uint *)(param_1 + 0x1b0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xec);
  }
  *(uint *)(param_1 + 0x154) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xee);
  }
  *(uint *)(param_1 + 0x16c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xf0);
  }
  *(uint *)(param_1 + 0x184) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xf2);
  }
  *(uint *)(param_1 + 0x19c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xf4);
  }
  *(uint *)(param_1 + 0x1b4) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x114);
  }
  *(uint *)(param_1 + 0x158) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x116);
  }
  *(uint *)(param_1 + 0x170) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x118);
  }
  *(uint *)(param_1 + 0x188) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x11a);
  }
  *(uint *)(param_1 + 0x1a0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x11c);
  }
  *(uint *)(param_1 + 0x1b8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x100);
  }
  *(uint *)(param_1 + 0x1bc) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x102);
  }
  *(uint *)(param_1 + 0x1c0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x104);
  }
  *(uint *)(param_1 + 0x1c4) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x128);
  }
  *(uint *)(param_1 + 0x1c8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x12a);
  }
  *(uint *)(param_1 + 0x1cc) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 300);
  }
  *(uint *)(param_1 + 0x1d0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x13c);
  }
  *(uint *)(param_1 + 0x1e0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x13e);
  }
  *(uint *)(param_1 + 0x1e4) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x140);
  }
  *(uint *)(param_1 + 0x1e8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x142);
  }
  *(uint *)(param_1 + 0x1ec) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x144);
  }
  *(uint *)(param_1 + 0x1f0) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x146);
  }
  *(uint *)(param_1 + 500) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0x1f8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x14c);
  }
  *(uint *)(param_1 + 0x1fc) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xac);
  }
  puVar7 = (uint *)(param_1 + 0x200);
  *puVar7 = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xc0);
  }
  *(uint *)(param_1 + 0x204) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xd4);
  }
  *(uint *)(param_1 + 0x208) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xe8);
  }
  *(uint *)(param_1 + 0x20c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xfc);
  }
  *(uint *)(param_1 + 0x210) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x10e);
  }
  *(uint *)(param_1 + 0x214) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x110);
  }
  *(uint *)(param_1 + 0x218) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x124);
  }
  *(uint *)(param_1 + 0x21c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x138);
  }
  *(uint *)(param_1 + 0x220) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x10a);
  }
  *(uint *)(param_1 + 0x224) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x106);
  }
  *(uint *)(param_1 + 0x228) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x12e);
  }
  *(uint *)(param_1 + 0x1d4) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x130);
  }
  *(uint *)(param_1 + 0x1d8) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x132);
  }
  *(uint *)(param_1 + 0x1dc) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa6);
  }
  *(uint *)(param_1 + 0x22c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa8);
  }
  *(uint *)(param_1 + 0x230) = uVar5;
  piVar6 = (int *)(param_1 + 0x30);
  local_4 = 9;
  do {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else if (((*puVar7 < *(uint *)(iVar3 + 0x80)) &&
             (piVar2 = *(int **)(*puVar7 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
             piVar2 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar2 + 8))(), iVar3 == 0)) {
      piVar2 = piVar2 + 4;
    }
    else {
      piVar2 = (int *)0x0;
    }
    piVar6[1] = (int)piVar2;
    if (*piVar6 != 0) {
      *(undefined4 *)(*piVar6 + 4) = 1;
    }
    puVar7 = puVar7 + 1;
    piVar6 = piVar6 + 7;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x88);
  }
  *(uint *)(param_1 + 0x234) = uVar5;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x8a);
  }
  *(uint *)(param_1 + 0x238) = uVar5;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x8c);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x23c) = uVar5;
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x118) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x118) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x11c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x11c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x120) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x120) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x124) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x124) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x128) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x128) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 300) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 300) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x130) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x134) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x13c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x13c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x200) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x200) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x204) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x204) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x208) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x208) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x20c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x20c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x210) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x210) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x214) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x214) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x218) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x218) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x21c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x21c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x220) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x220) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x174) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x174) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x178) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x178) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x17c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x17c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x168) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x180) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x180) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x16c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x16c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x184) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x228) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x228) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar8 = 0x10;
  puVar4 = (undefined4 *)(param_1 + 0x294);
  iVar3 = 6;
  do {
    *puVar4 = 0x3e000000;
    puVar4[-0x13] = iVar8;
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && ((uint)puVar4[-0x54] < *(uint *)(iVar1 + 0x80))) &&
       (iVar1 = puVar4[-0x54] * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd0) = 0;
    }
    iVar8 = iVar8 + 8;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00CC4300  FUN_00cc4300  size=71  [run]
void __fastcall FUN_00cc4300(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00f98aa0();
  iVar2 = FUN_00f98aa0();
  *(float *)(param_1 + 0x54) =
       (float)iVar2 * 0.0013888889 * 20.0 +
       (float)iVar1 * 0.0013888889 * 40.0 * (float)*(int *)(param_1 + 0x50);
  return;
}

// 00CC43A0  FUN_00cc43a0  size=16  [run]
float10 __fastcall FUN_00cc43a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e03960();
  return (float10)*(float *)(iVar1 + 0x7c) * (float10)*(float *)(param_1 + 0x70);
}

