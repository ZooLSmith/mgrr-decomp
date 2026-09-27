// src/unsorted/unit_00CB5B10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5B10..00CB5C60, 5 functions

#include "types.h"

// 00CB5B10  FUN_00cb5b10  size=15  [run]
void __fastcall FUN_00cb5b10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cb59f0();
    return;
  }
  return;
}

// 00CB5B20  FUN_00cb5b20  size=15  [run]
void __fastcall FUN_00cb5b20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cb5840();
    return;
  }
  return;
}

// 00CB5B30  FUN_00cb5b30  size=90  [run]
void __thiscall FUN_00cb5b30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x10c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x10c) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CB5B90  FUN_00cb5b90  size=196  [run]
float10 __thiscall FUN_00cb5b90(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float local_10;
  
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      local_10 = (float)piVar2[1];
      goto LAB_00cb5be7;
    }
  }
  local_10 = 0.0;
LAB_00cb5be7:
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      return ((float10)(float)piVar2[3] + (float10)(float)piVar2[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CB5C60  FUN_00cb5c60  size=167  [run]
bool __fastcall FUN_00cb5c60(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x168) = 1;
    return false;
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x170) = 1;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  if (*(int *)(param_1 + 0x170) == 1) {
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
    bVar1 = false;
    if (0x3c < *(int *)(param_1 + 0x174)) {
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x170) == 2) {
    uVar2 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    bVar1 = (int)uVar2 < 2;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
    if (0xc < *(int *)(param_1 + 0x174)) {
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
      return bVar1;
    }
  }
  return bVar1;
}

