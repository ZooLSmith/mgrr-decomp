// src/unsorted/unit_00D046C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D046C0..00D06950, 6 functions

#include "mgrr.h"

// 00D046C0  FUN_00d046c0  size=214  [run]
int __thiscall FUN_00d046c0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D047A0  FUN_00d047a0  size=216  [run]
int FUN_00d047a0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D04880  FUN_00d04880  size=276  [run]
void __thiscall FUN_00d04880(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_10 [16];
  
  FUN_00ca84a0(param_2,local_10,0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar3 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x184) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 == 4) {
      FUN_00cb3cc0(piVar1,local_10);
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x188) < *(uint *)(iVar3 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x188) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 == 4) {
      FUN_00cb3cc0(piVar1,local_10);
    }
  }
  fVar4 = (float10)FUN_00d047a0(param_1,*(undefined4 *)(param_1 + 0x184));
  uVar2 = *(uint *)(param_1 + 0x18c);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar4 = (float10)FUN_00ddb510((float)-fVar4,0);
    *(float *)(iVar3 + 0xc0) = (float)fVar4;
    return;
  }
  return;
}

// 00D049A0  FUN_00d049a0  size=5799  [run]
void __fastcall FUN_00d049a0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  float10 fVar9;
  float local_14;
  undefined1 auStack_10 [16];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x88);
  }
  *(uint *)(param_1 + 0x208) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x8a);
  }
  *(uint *)(param_1 + 0x20c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x8c);
  }
  *(uint *)(param_1 + 0x210) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x8e);
  }
  *(uint *)(param_1 + 0x214) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x90);
  }
  *(uint *)(param_1 + 0x218) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x92);
  }
  *(uint *)(param_1 + 0x21c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x94);
  }
  *(uint *)(param_1 + 0x220) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x96);
  }
  *(uint *)(param_1 + 0x224) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x98);
  }
  *(uint *)(param_1 + 0x228) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x9a);
  }
  *(uint *)(param_1 + 0x22c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x9c);
  }
  *(uint *)(param_1 + 0x230) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x9e);
  }
  *(uint *)(param_1 + 0x244) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xa0);
  }
  *(uint *)(param_1 + 600) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xa2);
  }
  *(uint *)(param_1 + 0x26c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xa4);
  }
  *(uint *)(param_1 + 0x280) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xb0);
  }
  *(uint *)(param_1 + 0x234) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xb2);
  }
  *(uint *)(param_1 + 0x248) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xb4);
  }
  *(uint *)(param_1 + 0x25c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xb6);
  }
  *(uint *)(param_1 + 0x270) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xb8);
  }
  *(uint *)(param_1 + 0x284) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xc4);
  }
  *(uint *)(param_1 + 0x238) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xc6);
  }
  *(uint *)(param_1 + 0x24c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 200);
  }
  *(uint *)(param_1 + 0x260) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xca);
  }
  *(uint *)(param_1 + 0x274) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xcc);
  }
  *(uint *)(param_1 + 0x288) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xd8);
  }
  *(uint *)(param_1 + 0x23c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xda);
  }
  *(uint *)(param_1 + 0x250) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xdc);
  }
  *(uint *)(param_1 + 0x264) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xde);
  }
  *(uint *)(param_1 + 0x278) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xe0);
  }
  *(uint *)(param_1 + 0x28c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xec);
  }
  *(uint *)(param_1 + 0x240) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xee);
  }
  *(uint *)(param_1 + 0x254) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xf0);
  }
  *(uint *)(param_1 + 0x268) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xf2);
  }
  *(uint *)(param_1 + 0x27c) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xf4);
  }
  *(uint *)(param_1 + 0x290) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x106);
  }
  *(uint *)(param_1 + 0x294) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x10a);
  }
  *(uint *)(param_1 + 0x298) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xac);
  }
  puVar8 = (uint *)(param_1 + 0x29c);
  *puVar8 = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xc0);
  }
  *(uint *)(param_1 + 0x2a0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xd4);
  }
  *(uint *)(param_1 + 0x2a4) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xe8);
  }
  *(uint *)(param_1 + 0x2a8) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xfc);
  }
  *(uint *)(param_1 + 0x2ac) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x110);
  }
  *(uint *)(param_1 + 0x2b0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x124);
  }
  *(uint *)(param_1 + 0x2b4) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x138);
  }
  *(uint *)(param_1 + 0x2b8) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xa6);
  }
  *(uint *)(param_1 + 700) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0xa8);
  }
  *(uint *)(param_1 + 0x2c0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x13c);
  }
  *(uint *)(param_1 + 0x2c4) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x13e);
  }
  *(uint *)(param_1 + 0x2c8) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x140);
  }
  *(uint *)(param_1 + 0x2cc) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x142);
  }
  *(uint *)(param_1 + 0x2d0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x144);
  }
  *(uint *)(param_1 + 0x2d4) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x146);
  }
  *(uint *)(param_1 + 0x2d8) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x148);
  }
  *(uint *)(param_1 + 0x2dc) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x14c);
  }
  *(uint *)(param_1 + 0x2e0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x10e);
  }
  *(uint *)(param_1 + 0x2f0) = uVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x11e);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2f4) = uVar2;
  if ((((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x1ac))) ||
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x1ac) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 == (int *)0x0)) || (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 != 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar7 + 4;
  }
  *(int **)(param_1 + 0x34) = piVar7;
  piVar7 = (int *)(param_1 + 0x6c);
  local_14 = 1.12104e-44;
  do {
    iVar3 = *(int *)(param_1 + 0x34);
    if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *puVar8)) ||
       ((piVar4 = *(int **)(*puVar8 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar4 == (int *)0x0
        || (iVar3 = (**(code **)(*piVar4 + 8))(), iVar3 != 0)))) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar4 + 4;
    }
    *piVar7 = (int)piVar4;
    puVar8 = puVar8 + 1;
    piVar7 = piVar7 + 7;
    local_14 = (float)((int)local_14 + -1);
  } while (local_14 != 0.0);
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x6c) + 0x88);
  }
  *(uint *)(param_1 + 0x2e4) = uVar2;
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x6c) + 0x8a);
  }
  *(uint *)(param_1 + 0x2e8) = uVar2;
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x6c) + 0x8c);
  }
  *(uint *)(param_1 + 0x2ec) = uVar2;
  iVar5 = FUN_00fdbc60();
  iVar3 = iVar5 / 0x3c;
  iVar5 = iVar5 % 0x3c;
  uVar6 = FUN_00fdbc60();
  if (99 < iVar3) {
    iVar3 = 99;
    iVar5 = 0x3b;
    uVar6 = 99;
  }
  FUN_0099a460(auStack_10,"%02d:%02d.%02d",iVar3,iVar5,uVar6);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x26c) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x26c) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x280) < *(uint *)(iVar3 + 0x80))) &&
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x280) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x300),auStack_10,0x10);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x270) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x270) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x284) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x284) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x304),auStack_10,0x10);
  iVar3 = *(int *)(param_1 + 0x34);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x274) < *(uint *)(iVar3 + 0x80))) &&
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x274) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x288) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x288) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x308),auStack_10,0x10);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x278) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x278) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x28c) < *(uint *)(iVar3 + 0x80))) &&
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x28c) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x30c),auStack_10,0x10);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x27c) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x27c) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x290) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(int *)(iVar3 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x290) * 0x400),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x2e0) < *(uint *)(iVar3 + 0x80))) &&
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x2e0) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)) {
    uVar6 = FUN_00e03ea0("HUD_COMB_RES_18");
    piVar7[0x2a] = -1;
    piVar7[0x2b] = 0;
    if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
       (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
      piVar7[0x2a] = iVar3;
      piVar7[0x2b] = 0;
      piVar7[0x2e] = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1d4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2d8) < *(uint *)(iVar3 + 0x80))) &&
       ((piVar7 = *(int **)(*(uint *)(param_1 + 0x2d8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)))) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_19");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2dc) < *(uint *)(iVar3 + 0x80))) &&
       ((piVar7 = *(int **)(*(uint *)(param_1 + 0x2dc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)))) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_19");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_00d05707;
    uVar6 = 6;
  }
  else if (iVar3 == 1) {
    iVar3 = *(int *)(param_1 + 0x34);
    if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x2d8) < *(uint *)(iVar3 + 0x80))) &&
        (piVar7 = *(int **)(*(uint *)(param_1 + 0x2d8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_20");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2dc) < *(uint *)(iVar3 + 0x80))) &&
       ((piVar7 = *(int **)(*(uint *)(param_1 + 0x2dc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)))) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_20");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_00d05707;
    uVar6 = 5;
  }
  else {
    if (iVar3 != 2) goto LAB_00d05707;
    iVar3 = *(int *)(param_1 + 0x34);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2d8) < *(uint *)(iVar3 + 0x80))) &&
       ((piVar7 = *(int **)(*(uint *)(param_1 + 0x2d8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)))) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_21");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x2dc) < *(uint *)(iVar3 + 0x80))) &&
        (piVar7 = *(int **)(*(uint *)(param_1 + 0x2dc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 3)) {
      uVar6 = FUN_00e03ea0("HUD_COMB_RES_21");
      piVar7[0x2a] = -1;
      piVar7[0x2b] = 0;
      if (((piVar7[5] != 0) && (*(int *)(piVar7[5] + 4) != 0)) &&
         (iVar3 = FUN_00cb1cd0(uVar6), -1 < iVar3)) {
        piVar7[0x2a] = iVar3;
        piVar7[0x2b] = 0;
        piVar7[0x2e] = 0;
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_00d05707;
    uVar6 = 4;
  }
  FUN_00cdeec0(uVar6);
LAB_00d05707:
  FUN_0099a460(auStack_10,&DAT_016b964c);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2c8) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar7 = *(int **)(*(uint *)(param_1 + 0x2c8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x2cc) < *(uint *)(iVar3 + 0x80))) &&
      (piVar7 = *(int **)(*(uint *)(param_1 + 0x2cc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar7 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar7 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar7,auStack_10);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x230);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x234);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x238);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x23c);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x240);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x2c4);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + 0xd0) = 0;
  }
  piVar7 = (int *)(param_1 + 0x6c);
  iVar3 = 8;
  do {
    iVar5 = *piVar7;
    uVar2 = *(uint *)(param_1 + 0x2e4);
    if (((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x80))) &&
       (*(int *)(iVar5 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
      if (uVar2 < *(uint *)(iVar5 + 0x80)) {
        iVar5 = *(int *)(iVar5 + 0x7c) + 0x2a0 + uVar2 * 0x400;
      }
      else {
        iVar5 = 0;
      }
      *(undefined4 *)(iVar5 + 0xd0) = 0;
    }
    iVar5 = *piVar7;
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x2e4) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x2e4) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
    iVar5 = *piVar7;
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x2e8) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x2e8) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
    iVar5 = *piVar7;
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x2ec) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x2ec) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
    piVar7 = piVar7 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x21c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x21c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x220) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x220) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x224) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x224) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x26c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x26c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x270) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x270) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x274) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x274) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x278) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x278) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x27c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x27c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x280) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x280) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x284) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x284) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x288) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x288) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x28c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x28c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x290) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x290) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x294) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x294) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2b4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2b4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2c4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2c4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2c8) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2c8) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2cc) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2cc) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2d0) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2d0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2d4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2d4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2d8) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2d8) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2dc) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2dc) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2e0) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2e0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x298) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x298) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2f4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2f4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2f0) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x2f0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  cXmlBinary::cXmlBinary_12();
  iVar3 = *(int *)(param_1 + 0x34);
  local_14 = -68.0;
  uVar2 = *(uint *)(param_1 + 0x21c);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(0xc2080000,0);
    *(float *)(iVar3 + 0xc4) = (float)fVar9;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x2b0);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(0xc2080000,0);
    *(float *)(iVar3 + 0xc4) = (float)fVar9;
  }
  if (*(int *)(param_1 + 0x340) == 0) {
    fVar1 = -102.0;
    local_14 = -102.0;
  }
  else {
    fVar1 = -68.0;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    local_14 = fVar1 - 34.0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 0x224);
    if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
       (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
      if (uVar2 < *(uint *)(iVar3 + 0x80)) {
        iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
      }
      else {
        iVar3 = 0;
      }
      fVar9 = (float10)FUN_00ddb510(fVar1,0);
      *(float *)(iVar3 + 0xc4) = (float)fVar9;
    }
    iVar3 = *(int *)(param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 0x2b8);
    if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
       (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
      if (uVar2 < *(uint *)(iVar3 + 0x80)) {
        iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
      }
      else {
        iVar3 = 0;
      }
      fVar9 = (float10)FUN_00ddb510(local_14,0);
      *(float *)(iVar3 + 0xc4) = (float)fVar9;
    }
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x228);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(local_14,0);
    *(float *)(iVar3 + 0xc4) = (float)fVar9;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x22c);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(local_14,0);
    *(float *)(iVar3 + 0xc4) = (float)fVar9;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1f8) = 1;
  }
  piVar7 = (int *)FUN_00c13920();
  (**(code **)(*piVar7 + 0xa4))(*(undefined4 *)(param_1 + 0x330));
  return;
}

// 00D06050  FUN_00d06050  size=2263  [run]
undefined4 __fastcall FUN_00d06050(int param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int extraout_EDX;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined1 local_8 [8];
  
  local_14 = 0;
  uVar3 = uRam000000d0;
  switch(*(undefined4 *)(param_1 + 0x2f8)) {
  case 0:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x298),1);
    if (*(int *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1f8) = 0;
    }
    puVar12 = (undefined4 *)(param_1 + 600);
    iVar7 = 5;
    do {
      FUN_00ccdf90(puVar12[-5],1,3);
      FUN_00ccdf90(*puVar12,1,3);
      puVar12 = puVar12 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    uVar3 = uRam000000d0;
    break;
  case 1:
    fVar1 = *(float *)(param_1 + 0x348) + 0.05;
    *(float *)(param_1 + 0x348) = fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
      puVar9 = (uint *)(param_1 + 0x280);
      iVar7 = 5;
      do {
        iVar11 = *(int *)(param_1 + 0x34);
        if (((iVar11 != 0) && (puVar9[-5] < *(uint *)(iVar11 + 0x80))) &&
           (iVar11 = puVar9[-5] * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
          *(undefined4 *)(iVar11 + 0x3b0) = 1;
        }
        iVar11 = *(int *)(param_1 + 0x34);
        if (((iVar11 != 0) && (*puVar9 < *(uint *)(iVar11 + 0x80))) &&
           (iVar11 = *puVar9 * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
          *(undefined4 *)(iVar11 + 0x3b0) = 1;
        }
        FUN_00cce0e0(puVar9[-5],1,3);
        FUN_00cce0e0(*puVar9,1,3);
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (*(int *)(param_1 + 0x340) != 0) {
        FUN_00cb2380(*(undefined4 *)(param_1 + 700),0xbf800000,0xbf800000,0);
        *(undefined4 *)(param_1 + 0x34c) = 1;
        *(undefined4 *)(param_1 + 0x350) = 0;
      }
      if (*(int *)(param_1 + 0x344) == 0) {
        *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
      }
      else {
        FUN_00cb2380(*(undefined4 *)(param_1 + 0x2c0),0xbf800000,0xbf800000,0);
        *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + extraout_EDX;
        *(int *)(param_1 + 0x34c) = extraout_EDX;
        *(undefined4 *)(param_1 + 0x350) = 0;
      }
    }
    iVar7 = *(int *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x230);
    uVar3 = uRam000000d0;
    if ((((iVar7 != 0) && (uVar6 < *(uint *)(iVar7 + 0x80))) &&
        (*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) &&
       (uVar3 = *(undefined4 *)(param_1 + 0x348), uVar6 < *(uint *)(iVar7 + 0x80))) {
      *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar6 * 0x400) =
           *(undefined4 *)(param_1 + 0x348);
      uVar3 = uRam000000d0;
    }
    uRam000000d0 = uVar3;
    iVar7 = *(int *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x234);
    uVar3 = uRam000000d0;
    if (((iVar7 != 0) && (uVar6 < *(uint *)(iVar7 + 0x80))) &&
       ((*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0 &&
        (uVar3 = *(undefined4 *)(param_1 + 0x348), uVar6 < *(uint *)(iVar7 + 0x80))))) {
      *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar6 * 0x400) =
           *(undefined4 *)(param_1 + 0x348);
      uVar3 = uRam000000d0;
    }
    uRam000000d0 = uVar3;
    iVar7 = *(int *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x238);
    uVar3 = uRam000000d0;
    if (((iVar7 != 0) && (uVar6 < *(uint *)(iVar7 + 0x80))) &&
       ((*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0 &&
        (uVar3 = *(undefined4 *)(param_1 + 0x348), uVar6 < *(uint *)(iVar7 + 0x80))))) {
      *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar6 * 0x400) =
           *(undefined4 *)(param_1 + 0x348);
      uVar3 = uRam000000d0;
    }
    uRam000000d0 = uVar3;
    iVar7 = *(int *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x23c);
    uVar3 = uRam000000d0;
    if ((((iVar7 != 0) && (uVar6 < *(uint *)(iVar7 + 0x80))) &&
        (*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) &&
       (uVar3 = *(undefined4 *)(param_1 + 0x348), uVar6 < *(uint *)(iVar7 + 0x80))) {
      *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar6 * 0x400) =
           *(undefined4 *)(param_1 + 0x348);
      uVar3 = uRam000000d0;
    }
    uRam000000d0 = uVar3;
    iVar7 = *(int *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x240);
    uVar3 = uRam000000d0;
    if (((iVar7 != 0) && (uVar6 < *(uint *)(iVar7 + 0x80))) &&
       ((*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0 &&
        (uVar3 = *(undefined4 *)(param_1 + 0x348), uVar6 < *(uint *)(iVar7 + 0x80))))) {
      *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar6 * 0x400) =
           *(undefined4 *)(param_1 + 0x348);
      uVar3 = uRam000000d0;
    }
    break;
  case 2:
    iVar7 = 0;
    puVar9 = (uint *)(param_1 + 0x26c);
    do {
      iVar11 = *(int *)(param_1 + 0x34);
      if (((iVar11 != 0) && (*puVar9 < *(uint *)(iVar11 + 0x80))) &&
         ((piVar8 = *(int **)(*puVar9 * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
          piVar8 != (int *)0x0 &&
          ((iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 == 4 &&
           (uVar3 = uRam000000d0, piVar8[0x3e6] != 0)))))) goto switchD_00d06070_default;
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar7 < 5);
    iVar7 = 0;
    piVar8 = (int *)(param_1 + 0x310);
    do {
      if (*piVar8 != 0) {
        piVar10 = (int *)(param_1 + 0x310);
        piVar8 = (int *)(param_1 + 0x6c);
        local_10 = 8;
        do {
          if (*piVar10 != 0) {
            iVar7 = *piVar8;
            if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2e4) < *(uint *)(iVar7 + 0x80))) &&
               (iVar7 = *(uint *)(param_1 + 0x2e4) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
              *(undefined4 *)(iVar7 + 0x3b0) = 1;
            }
            iVar7 = *piVar8;
            if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2e8) < *(uint *)(iVar7 + 0x80))) &&
               (iVar7 = *(uint *)(param_1 + 0x2e8) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
              *(undefined4 *)(iVar7 + 0x3b0) = 1;
            }
            iVar7 = *piVar8;
            if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2ec) < *(uint *)(iVar7 + 0x80))) &&
               (iVar7 = *(uint *)(param_1 + 0x2ec) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
              *(undefined4 *)(iVar7 + 0x3b0) = 1;
            }
            FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2e8),1,3);
            FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2ec),1,3);
          }
          piVar10 = piVar10 + 1;
          piVar8 = piVar8 + 7;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
        uVar3 = uRam000000d0;
        goto switchD_00d06070_default;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar7 < 8);
    iVar7 = *(int *)(param_1 + 0x34);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2c4) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x2c4) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0x3b0) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x34);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2c8) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x2c8) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0x3b0) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x34);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2cc) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x2cc) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0x3b0) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x34);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2d0) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x2d0) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0x3b0) = 1;
    }
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2c8),1,3);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2cc),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2d0),1,3);
    *(undefined4 *)(param_1 + 0x2f8) = 4;
    uVar3 = uRam000000d0;
    break;
  case 3:
    bVar2 = true;
    iVar7 = param_1 + 0x54;
    piVar8 = (int *)(param_1 + 0x310);
    iVar11 = 8;
    do {
      if (*piVar8 != 0) {
        fVar13 = (float10)FUN_00d047a0(iVar7,*(undefined4 *)(param_1 + 0x2e8));
        local_10 = (uint)((float10)0 != fVar13);
        iVar4 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x2e8));
        if (iVar4 != 0) {
          bVar2 = false;
        }
        fVar13 = (float10)FUN_00cc13f0(iVar7,*(undefined4 *)(param_1 + 0x2e4),
                                       (float)(fVar13 - (float10)local_10 * (float10)6.0));
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x2e4),(float)fVar13);
      }
      piVar8 = piVar8 + 1;
      iVar7 = iVar7 + 0x1c;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    uVar3 = uRam000000d0;
    if (bVar2) {
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2c4) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x2c4) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0x3b0) = 1;
      }
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2c8) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x2c8) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0x3b0) = 1;
      }
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2cc) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x2cc) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0x3b0) = 1;
      }
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x2d0) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x2d0) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0x3b0) = 1;
      }
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2c8),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x2cc),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2d0),1,3);
      *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
      uVar3 = uRam000000d0;
    }
    break;
  case 4:
    pfVar5 = (float *)FUN_00cb32a0(local_8,*(undefined4 *)(param_1 + 0x2c4));
    fVar1 = *pfVar5;
    fVar13 = (float10)FUN_00d047a0(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x2c8));
    local_c = (uint)((float10)0 != fVar13);
    fVar13 = fVar13 - (float10)local_c * (float10)12.0;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x2d0),(float)-(fVar13 + (float10)(fVar1 + fVar1)));
    iVar7 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x2d0));
    if (iVar7 == 0) {
      *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    }
    fVar13 = (float10)FUN_00cc13f0(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x2c4),(float)fVar13);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x2c4),(float)fVar13);
    uVar3 = uRam000000d0;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2f8) = 7;
    uVar3 = uRam000000d0;
    break;
  case 6:
    iVar7 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x2e0));
    uVar3 = uRam000000d0;
    if (iVar7 == 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2d4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2d8),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2dc),1);
      *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
      uVar3 = uRam000000d0;
    }
    break;
  case 7:
    local_14 = 1;
  }
switchD_00d06070_default:
  uRam000000d0 = uVar3;
  if (*(int *)(param_1 + 0x34c) != 0) {
    uVar6 = *(uint *)(param_1 + 0x350) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    if (*(int *)(param_1 + 0x340) != 0) {
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x21c) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x21c) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(uint *)(iVar7 + 0x3b0) = (uint)(1 < (int)uVar6);
      }
    }
    if (*(int *)(param_1 + 0x344) != 0) {
      iVar7 = *(int *)(param_1 + 0x34);
      if (((iVar7 != 0) && (*(uint *)(param_1 + 0x224) < *(uint *)(iVar7 + 0x80))) &&
         (iVar7 = *(uint *)(param_1 + 0x224) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
        *(uint *)(iVar7 + 0x3b0) = (uint)(1 < (int)uVar6);
      }
    }
    *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
    if (0xb < *(int *)(param_1 + 0x350)) {
      *(undefined4 *)(param_1 + 0x350) = 0;
      *(undefined4 *)(param_1 + 0x34c) = 0;
      return local_14;
    }
  }
  return local_14;
}

// 00D06950  FUN_00d06950  size=481  [run]
int __thiscall FUN_00d06950(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 local_10 [16];
  
  iVar4 = *(int *)(param_1 + 0x34);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c4) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x2c4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 8) {
      fVar2 = (float)piVar1[3];
      goto LAB_00d069a5;
    }
  }
  fVar2 = 0.0;
LAB_00d069a5:
  FUN_00ca84a0(param_2,local_10,0x10);
  iVar4 = *(int *)(param_1 + 0x34);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c8) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x2c8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 4) {
      FUN_00cb3cc0(piVar1,local_10);
    }
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2cc) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x2cc) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 4) {
      FUN_00cb3cc0(piVar1,local_10);
    }
  }
  fVar6 = (float10)FUN_00d047a0(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x2c8));
  fVar6 = fVar6 - (float10)12.0;
  iVar4 = *(int *)(param_1 + 0x34);
  uVar3 = *(uint *)(param_1 + 0x2d0);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    fVar7 = (float10)FUN_00ddb510((float)-(fVar6 + (float10)(fVar2 + fVar2)),0);
    *(float *)(iVar4 + 0xc0) = (float)fVar7;
    fVar6 = (float10)(float)fVar6;
  }
  fVar6 = (float10)FUN_00cc13f0(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x2c4),(float)fVar6);
  iVar4 = *(int *)(param_1 + 0x34);
  uVar3 = *(uint *)(param_1 + 0x2c4);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (iVar5 = uVar3 * 0x400, *(int *)(iVar4 + 0x7c) + 0x2a0 + iVar5 != 0)) {
    if (uVar3 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c);
      *(float *)(iVar4 + 0x370 + iVar5) = (float)fVar6;
      return iVar4 + 0x2a0 + iVar5;
    }
    fRam000000d0 = (float)fVar6;
    return 0;
  }
  return iVar4;
}

