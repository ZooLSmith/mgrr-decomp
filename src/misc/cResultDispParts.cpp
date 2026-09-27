// src/misc/cResultDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF11A0..00D32E60, 3 functions

#include "mgrr.h"
#include "cResultDispParts.h"

// 00CF11A0  cResultDispParts::vf00  size=30  [class]
undefined4 __thiscall cResultDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_25();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF11C0  cResultDispParts::vf08  size=3077  [class]
void __fastcall cResultDispParts::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x106);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x8c);
  }
  *(uint *)(param_1 + 0x9c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x8e);
  }
  *(uint *)(param_1 + 0xa0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x90);
  }
  *(uint *)(param_1 + 0xa4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x92);
  }
  *(uint *)(param_1 + 0xac) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x94);
  }
  *(uint *)(param_1 + 0xb0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x96);
  }
  *(uint *)(param_1 + 0xb4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x9c);
  }
  *(uint *)(param_1 + 0xb8) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb0);
  }
  *(uint *)(param_1 + 0xbc) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xc4);
  }
  *(uint *)(param_1 + 0xc0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xd8);
  }
  *(uint *)(param_1 + 0xc4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xec);
  }
  *(uint *)(param_1 + 200) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0xd0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb2);
  }
  *(uint *)(param_1 + 0xd4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xc6);
  }
  *(uint *)(param_1 + 0xd8) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xda);
  }
  *(uint *)(param_1 + 0xdc) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xee);
  }
  *(uint *)(param_1 + 0xe0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0xe8) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb4);
  }
  *(uint *)(param_1 + 0xec) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 200);
  }
  *(uint *)(param_1 + 0xf0) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xdc);
  }
  *(uint *)(param_1 + 0xf4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xf0);
  }
  *(uint *)(param_1 + 0xf8) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0x100) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  }
  *(uint *)(param_1 + 0x104) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xca);
  }
  *(uint *)(param_1 + 0x108) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xde);
  }
  *(uint *)(param_1 + 0x10c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xf2);
  }
  *(uint *)(param_1 + 0x110) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xa4);
  }
  *(uint *)(param_1 + 0x118) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb8);
  }
  *(uint *)(param_1 + 0x11c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xcc);
  }
  *(uint *)(param_1 + 0x120) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xe0);
  }
  *(uint *)(param_1 + 0x124) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xf4);
  }
  *(uint *)(param_1 + 0x128) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x98);
  }
  *(uint *)(param_1 + 0x130) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x142);
  }
  *(uint *)(param_1 + 0x134) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x13c);
  }
  *(uint *)(param_1 + 0x138) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x13e);
  }
  *(uint *)(param_1 + 0x13c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x140);
  }
  *(uint *)(param_1 + 0x140) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x144) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x148) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x144);
  }
  *(uint *)(param_1 + 0x14c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x130);
  }
  *(uint *)(param_1 + 0x150) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x132);
  }
  *(uint *)(param_1 + 0x154) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x146);
  }
  *(uint *)(param_1 + 0x158) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x148);
  }
  *(uint *)(param_1 + 0x15c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xac);
  }
  local_8 = (uint *)(param_1 + 0x160);
  *local_8 = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xc0);
  }
  *(uint *)(param_1 + 0x164) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xd4);
  }
  *(uint *)(param_1 + 0x168) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xe8);
  }
  *(uint *)(param_1 + 0x16c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xfc);
  }
  *(uint *)(param_1 + 0x170) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x110);
  }
  *(uint *)(param_1 + 0x178) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x124);
  }
  *(uint *)(param_1 + 0x17c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x138);
  }
  *(uint *)(param_1 + 0x180) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xa6);
  }
  *(uint *)(param_1 + 0x184) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xa8);
  }
  *(uint *)(param_1 + 0x18c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x120);
  }
  *(uint *)(param_1 + 0x188) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x10a);
  }
  *(uint *)(param_1 + 400) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x108);
  }
  *(uint *)(param_1 + 0x194) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x198) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x148) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x114);
  }
  *(uint *)(param_1 + 0xcc) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x116);
  }
  *(uint *)(param_1 + 0xe4) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x118);
  }
  *(uint *)(param_1 + 0xfc) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x11a);
  }
  *(uint *)(param_1 + 0x114) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x11c);
  }
  *(uint *)(param_1 + 300) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x11e);
  }
  *(uint *)(param_1 + 0xa8) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x10e);
  }
  *(uint *)(param_1 + 0x174) = uVar3;
  puVar4 = (uint *)(param_1 + 0x1a0);
  piVar5 = (int *)(param_1 + 0x220);
  local_4 = 9;
  do {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
    }
    else if (((*local_8 < *(uint *)(iVar2 + 0x80)) &&
             (piVar1 = *(int **)(*local_8 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
             piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 0)) {
      piVar1 = piVar1 + 4;
    }
    else {
      piVar1 = (int *)0x0;
    }
    *piVar5 = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(piVar1 + 0x22);
    }
    puVar4[-1] = uVar3;
    if (*piVar5 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(*piVar5 + 0x8a);
    }
    *puVar4 = uVar3;
    if (*piVar5 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(*piVar5 + 0x8c);
    }
    local_8 = local_8 + 1;
    puVar4[1] = uVar3;
    puVar4 = puVar4 + 3;
    piVar5 = piVar5 + 7;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xac) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xb0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x130) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x144) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x144) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x168) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x16c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x16c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x170) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x170) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x178) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x178) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x17c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x17c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x180) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x180) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xd0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xe8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xd4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xec) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xe0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x194) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x194) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x198) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x198) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x174) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x174) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x184) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3d8) = 0xbf800000;
    *(undefined2 *)(iVar2 + 0x3ec) = 0;
    *(undefined4 *)(iVar2 + 0x3dc) = 0xbf800000;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x18c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x18c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3d8) = 0xbf800000;
    *(undefined2 *)(iVar2 + 0x3ec) = 0;
    *(undefined4 *)(iVar2 + 0x3dc) = 0xbf800000;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x188) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x188) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3d8) = 0xbf800000;
    *(undefined2 *)(iVar2 + 0x3ec) = 0;
    *(undefined4 *)(iVar2 + 0x3dc) = 0xbf800000;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00D32E60  cResultDispParts::create  size=1583  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cResultDispParts::create(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar9;
  int extraout_EDX_01;
  bool bVar10;
  bool bVar11;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  switch(*(undefined4 *)(param_1 + 0x46c)) {
  case 0:
    piVar4 = (int *)FUN_00c1b9a0();
    puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xac))();
    *(undefined4 *)(param_1 + 800) = *puVar7;
    *(undefined4 *)(param_1 + 0x324) = puVar7[1];
    *(undefined4 *)(param_1 + 0x328) = puVar7[2];
    *(undefined4 *)(param_1 + 0x32c) = puVar7[3];
    *(undefined4 *)(param_1 + 0x330) = puVar7[4];
    *(undefined4 *)(param_1 + 0x334) = puVar7[5];
    *(undefined4 *)(param_1 + 0x338) = puVar7[6];
    *(undefined4 *)(param_1 + 0x33c) = puVar7[7];
    *(undefined4 *)(param_1 + 0x340) = puVar7[8];
    piVar4 = (int *)FUN_00c1b9a0();
    uVar5 = (**(code **)(*piVar4 + 0xa4))();
    *(undefined4 *)(param_1 + 0x348) = uVar5;
    piVar4 = (int *)FUN_00c1b9a0();
    iVar9 = (**(code **)(*piVar4 + 0xa8))();
    *(uint *)(param_1 + 0x344) = (uint)(iVar9 == 0);
    if (9999999 < *(int *)(param_1 + 0x328)) {
      *(undefined **)(param_1 + 0x328) = &DAT_0098967f;
    }
    if (9999 < *(int *)(param_1 + 0x32c)) {
      *(undefined4 *)(param_1 + 0x32c) = 9999;
    }
    if (9999 < *(int *)(param_1 + 0x330)) {
      *(undefined4 *)(param_1 + 0x330) = 9999;
    }
    if (9999 < *(int *)(param_1 + 0x334)) {
      *(undefined4 *)(param_1 + 0x334) = 9999;
    }
    if (9999 < *(int *)(param_1 + 0x348)) {
      *(undefined4 *)(param_1 + 0x348) = 9999;
    }
    cXmlBinary::cXmlBinary_52();
    iVar9 = FUN_00d29960(4);
    *(int *)(param_1 + 0x478) = iVar9;
    *(undefined4 *)(iVar9 + 0x214) = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 0x478) + 0x28);
    *puVar1 = *puVar1 | 0x20000;
    iVar9 = FUN_00932720();
    if (iVar9 == 0xa15) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x478) + 0x28);
      *puVar1 = *puVar1 | 0x40000000;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x478) + 4) = 0;
    piVar4 = (int *)(param_1 + 0x47c);
    iVar9 = 2;
    do {
      iVar6 = FUN_00d29960(5);
      *piVar4 = iVar6;
      *(undefined4 *)(iVar6 + 0x1e8) = 0;
      *(uint *)(*piVar4 + 0x28) = *(uint *)(*piVar4 + 0x28) | 0x20000;
      iVar6 = FUN_00932720();
      if (iVar6 == 0xa15) {
        *(uint *)(*piVar4 + 0x28) = *(uint *)(*piVar4 + 0x28) | 0x40000000;
      }
      iVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar9 = iVar9 + -1;
      *(undefined4 *)(iVar6 + 4) = 0;
    } while (iVar9 != 0);
    *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
    goto LAB_00d33029;
  case 1:
LAB_00d33029:
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x47c) + 4) = (uint)((int)uVar8 < 2);
    goto LAB_00d3304d;
  case 2:
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x478) + 4) = (uint)((int)uVar8 < 2);
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x480) + 4) = (uint)((int)uVar8 < 2);
    fVar2 = *(float *)(param_1 + 0x474) + _DAT_018b8c64;
    *(float *)(param_1 + 0x474) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
    }
    goto LAB_00d3304d;
  case 3:
    fVar2 = *(float *)(param_1 + 0x474) + _DAT_018b8c64;
    *(float *)(param_1 + 0x474) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x474) == 1.0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x198),1);
      *(undefined4 *)(*(int *)(param_1 + 0x480) + 4) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(int *)(*(int *)(param_1 + 0x14) + 4) = extraout_EDX;
      }
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + extraout_EDX;
    }
    break;
  case 4:
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x194),(int)uVar8 < 1);
    *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + extraout_EDX_00;
    if (4 < *(int *)(param_1 + 0x470)) {
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + extraout_EDX_00;
    }
    break;
  case 5:
    *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + 1;
    bVar11 = SBORROW4(*(int *)(param_1 + 0x470),0x1e);
    iVar9 = *(int *)(param_1 + 0x470) + -0x1e;
    bVar10 = iVar9 == 0;
    goto LAB_00d3305a;
  case 6:
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x198),2 < (int)uVar8);
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x478) + 4) = (uint)(2 < (int)uVar8);
    uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x47c) + 4) = (uint)(2 < (int)uVar8);
    *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + 1;
    if (0xc < *(int *)(param_1 + 0x470)) {
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0x470) = 0;
      if (*(int *)(param_1 + 0x478) != 0) {
        FUN_00cae160();
        *(int *)(param_1 + 0x478) = extraout_EDX_01;
        iVar9 = extraout_EDX_01;
      }
      iVar6 = *(int *)(param_1 + 0x47c);
      if (iVar6 != iVar9) {
        if ((*(uint *)(iVar6 + 0x24) & 1) == 0) {
          *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) | 1;
          *(int *)(iVar6 + 4) = iVar9;
        }
        *(int *)(param_1 + 0x47c) = iVar9;
      }
      iVar6 = *(int *)(param_1 + 0x480);
      if (iVar6 != iVar9) {
        if ((*(uint *)(iVar6 + 0x24) & 1) == 0) {
          *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) | 1;
          *(int *)(iVar6 + 4) = iVar9;
        }
        *(int *)(param_1 + 0x480) = iVar9;
      }
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x3bc) == 0) {
      *(undefined4 *)(param_1 + 0x46c) = 8;
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar8 = *(uint *)(param_1 + 0x470) & 0x80000003;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(2 < (int)uVar8);
    }
LAB_00d3304d:
    *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + 1;
    iVar6 = *(int *)(param_1 + 0x470);
    bVar11 = SBORROW4(iVar6,0xc);
    iVar9 = iVar6 + -0xc;
    bVar10 = iVar6 == 0xc;
LAB_00d3305a:
    if (!bVar10 && bVar11 == iVar9 < 0) {
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
    }
  }
  if ((0 < *(int *)(param_1 + 0x46c)) && (*(int *)(param_1 + 0x46c) < 7)) {
    puVar7 = (undefined4 *)FUN_00caac30(2);
    local_50 = *puVar7;
    local_4c = puVar7[1];
    local_48 = puVar7[2];
    local_44 = puVar7[3];
    FUN_00d9fa80(&local_30,&local_50);
    iVar9 = *(int *)(param_1 + 0x47c);
    if (*(int *)(iVar9 + 0x18) != 0) {
      *(undefined4 *)(iVar9 + 0x80) = local_30;
      *(undefined4 *)(iVar9 + 0x84) = local_2c;
    }
    FUN_00cbeec0(&local_5c);
    local_40 = local_5c;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = 0x3f800000;
    FUN_00caccc0(local_20,&local_40);
    FUN_00cb5540(&local_30,local_20,*(undefined4 *)(param_1 + 0x474));
    iVar9 = *(int *)(param_1 + 0x480);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x478) + 0x204);
    if (*(int *)(iVar9 + 0x18) != 0) {
      *(undefined4 *)(iVar9 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x478) + 0x200);
      *(undefined4 *)(iVar9 + 0x84) = uVar5;
    }
  }
  if (3 < *(int *)(param_1 + 0x46c)) {
    FUN_00d15cf0();
  }
  fVar2 = *(float *)(param_1 + 0x490);
  fVar3 = *(float *)(param_1 + 0x314);
  uVar5 = *(undefined4 *)(param_1 + 0x318);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) =
         *(float *)(param_1 + 0x48c) + *(float *)(param_1 + 0x310);
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = fVar2 + fVar3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x3dcccccd;
  FUN_00cb33d0(*(undefined4 *)(param_1 + 400),0x40000000,0x40000000,0x43c80000,0x43960000);
  return;
}

