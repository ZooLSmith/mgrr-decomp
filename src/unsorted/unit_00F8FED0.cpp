// src/unsorted/unit_00F8FED0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FED0..00F90100, 5 functions

#include "mgrr.h"

// 00F8FED0  FUN_00f8fed0  size=132  [run]
void __thiscall FUN_00f8fed0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  piVar1 = (int *)(param_2 + 8);
  do {
    if (piVar1[-2] == -1) {
LAB_00f8ff42:
      *(int *)(param_1 + 0xec) = iVar3;
      *(int *)(param_1 + 0xe8) = param_2;
      return;
    }
    if (piVar1[-1] == -1) {
      *(int *)(param_1 + 0xec) = iVar3 + 1;
      *(int *)(param_1 + 0xe8) = param_2;
      return;
    }
    if (*piVar1 == -1) {
      *(int *)(param_1 + 0xec) = iVar3 + 2;
      *(int *)(param_1 + 0xe8) = param_2;
      return;
    }
    if (piVar1[1] == -1) {
      iVar3 = iVar3 + 3;
      goto LAB_00f8ff42;
    }
    uVar2 = uVar2 + 4;
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 4;
    if (0xff < uVar2) {
      *(int *)(param_1 + 0xec) = iVar3;
      *(int *)(param_1 + 0xe8) = param_2;
      return;
    }
  } while( true );
}

// 00F8FF60  FUN_00f8ff60  size=106  [run]
void __thiscall FUN_00f8ff60(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  piVar1 = (int *)(param_2 + 8);
  do {
    if (piVar1[-2] == -1) break;
    if (piVar1[-1] == -1) {
      iVar3 = iVar3 + 1;
      break;
    }
    if (*piVar1 == -1) {
      iVar3 = iVar3 + 2;
      break;
    }
    if (piVar1[1] == -1) {
      iVar3 = iVar3 + 3;
      break;
    }
    uVar2 = uVar2 + 4;
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 4;
  } while (uVar2 < 0x100);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0xf4) = iVar3;
    *(int *)(param_1 + 0xf0) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

// 00F8FFD0  FUN_00f8ffd0  size=106  [run]
void __thiscall FUN_00f8ffd0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  piVar1 = (int *)(param_2 + 8);
  do {
    if (piVar1[-2] == -1) break;
    if (piVar1[-1] == -1) {
      iVar3 = iVar3 + 1;
      break;
    }
    if (*piVar1 == -1) {
      iVar3 = iVar3 + 2;
      break;
    }
    if (piVar1[1] == -1) {
      iVar3 = iVar3 + 3;
      break;
    }
    uVar2 = uVar2 + 4;
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 4;
  } while (uVar2 < 0x100);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0xfc) = iVar3;
    *(int *)(param_1 + 0xf8) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}

// 00F90060  FUN_00f90060  size=20  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f90060(undefined4 param_1,undefined4 param_2)

{
  _DAT_01eee948 = param_1;
  _DAT_01eee94c = param_2;
  return;
}

// 00F90100  FUN_00f90100  size=24  [run]
bool FUN_00f90100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

