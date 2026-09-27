// src/unsorted/unit_00CB70F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB70F0..00CB72A0, 3 functions

#include "mgrr.h"

// 00CB70F0  FUN_00cb70f0  size=144  [run]
void __thiscall
FUN_00cb70f0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  if (param_4 + 1U < 8) {
    *(int *)(param_1 + 0x7c) = param_4;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0x50) = *param_2;
    *(undefined4 *)(param_1 + 0x54) = param_2[1];
    *(undefined4 *)(param_1 + 0x58) = param_2[2];
    *(undefined4 *)(param_1 + 0x5c) = param_2[3];
    *(undefined4 *)(param_1 + 200) = 0;
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x80) = param_5;
      return;
    }
    *(undefined4 *)(param_1 + 0x8c) = 1;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x60) = *param_3;
    *(undefined4 *)(param_1 + 100) = param_3[1];
    *(undefined4 *)(param_1 + 0x68) = param_3[2];
    *(undefined4 *)(param_1 + 0x6c) = param_3[3];
  }
  *(undefined4 *)(param_1 + 0x80) = param_5;
  return;
}

// 00CB71A0  FUN_00cb71a0  size=250  [run]
void __fastcall FUN_00cb71a0(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(0,0);
    *(float *)(iVar2 + 0xc0) = (float)fVar3;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x24);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(0,0);
    *(float *)(iVar2 + 0xc0) = (float)fVar3;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(0,0);
    *(float *)(iVar2 + 0xc0) = (float)fVar3;
  }
  return;
}

// 00CB72A0  FUN_00cb72a0  size=167  [run]
bool __fastcall FUN_00cb72a0(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return false;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 1;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == 1) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    bVar1 = false;
    if (0x3c < *(int *)(param_1 + 0xd8)) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  else if (*(int *)(param_1 + 0xd4) == 2) {
    uVar2 = *(uint *)(param_1 + 0xd8) & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    bVar1 = (int)uVar2 < 2;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    if (0xc < *(int *)(param_1 + 0xd8)) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      return bVar1;
    }
  }
  return bVar1;
}

