// src/unsorted/unit_00BD3620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BD3620..00BD39D0, 5 functions

#include "mgrr.h"

// 00BD3620  FUN_00bd3620  size=268  [run]
undefined4 FUN_00bd3620(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe48)) == 0) {
    cVar4 = '\0';
  }
  else {
    iVar3 = FUN_00b8b920();
    if (iVar3 == 0) {
      iVar3 = FUN_00b8b9c0();
      if (iVar3 == 0) {
        iVar3 = FUN_00b8b840();
        cVar4 = iVar3 != 0;
      }
      else {
        cVar4 = '\x04';
      }
    }
    else {
      cVar4 = '\x03';
    }
  }
  if (cVar4 == '\x01') {
    uVar6 = 0x2f;
  }
  else if (cVar4 == '\x03') {
    uVar6 = 0x2e;
  }
  else {
    if (cVar4 != '\x04') goto LAB_00bd36e4;
    uVar6 = 0x2d;
  }
  FUN_00d82510(uVar6,param_3);
LAB_00bd36e4:
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 == 0x2f) {
    FUN_00bb92f0(param_1,param_2);
    return 1;
  }
  if (iVar3 == 0x2e) {
    FUN_00bb93e0(param_1,param_2);
    return 1;
  }
  if (iVar3 == 0x2d) {
    FUN_00bb94d0(param_1,param_2);
  }
  return 1;
}

// 00BD3730  FUN_00bd3730  size=180  [run]
void FUN_00bd3730(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe48)) != 0) {
    if (*(int *)(uVar2 + 0x59c) == 1) {
      uVar4 = FUN_004039a0(param_4,uVar2,0);
      FUN_00a963e0(uVar4);
    }
    if (*(int *)(uVar2 + 0x5a0) == 1) {
      uVar4 = FUN_004039a0(param_3,uVar2,0);
      FUN_00a963e0(uVar4);
    }
  }
  return;
}

// 00BD37F0  FUN_00bd37f0  size=276  [run]
void FUN_00bd37f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar2 + 0x59c) == 1) {
    FUN_004039a0(param_3,uVar2,0);
    local_40 = *(undefined4 *)(uVar2 + 0x5d0);
    local_3c = *(undefined4 *)(uVar2 + 0x5d4);
    local_38 = *(undefined4 *)(uVar2 + 0x5d8);
    local_34 = *(undefined4 *)(uVar2 + 0x5dc);
    FUN_00a8c930(0,local_160);
  }
  if (*(int *)(uVar2 + 0x5a0) == 1) {
    FUN_004039a0(param_3,uVar2,0);
    local_40 = *(undefined4 *)(uVar2 + 0x5e0);
    local_3c = *(undefined4 *)(uVar2 + 0x5e4);
    local_38 = *(undefined4 *)(uVar2 + 0x5e8);
    local_34 = *(undefined4 *)(uVar2 + 0x5ec);
    FUN_00a8c930(0,local_160);
  }
  return;
}

// 00BD3910  FUN_00bd3910  size=180  [run]
void FUN_00bd3910(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe48)) != 0) {
    if (*(int *)(uVar2 + 0x594) == 1) {
      uVar4 = FUN_004039a0(param_4,uVar2,0);
      FUN_00a963e0(uVar4);
    }
    if (*(int *)(uVar2 + 0x598) == 1) {
      uVar4 = FUN_004039a0(param_3,uVar2,0);
      FUN_00a963e0(uVar4);
    }
  }
  return;
}

// 00BD39D0  FUN_00bd39d0  size=276  [run]
void FUN_00bd39d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar2 + 0x594) == 1) {
    FUN_004039a0(param_3,uVar2,0);
    local_40 = *(undefined4 *)(uVar2 + 0x5b0);
    local_3c = *(undefined4 *)(uVar2 + 0x5b4);
    local_38 = *(undefined4 *)(uVar2 + 0x5b8);
    local_34 = *(undefined4 *)(uVar2 + 0x5bc);
    FUN_00a8c930(0,local_160);
  }
  if (*(int *)(uVar2 + 0x598) == 1) {
    FUN_004039a0(param_3,uVar2,0);
    local_40 = *(undefined4 *)(uVar2 + 0x5c0);
    local_3c = *(undefined4 *)(uVar2 + 0x5c4);
    local_38 = *(undefined4 *)(uVar2 + 0x5c8);
    local_34 = *(undefined4 *)(uVar2 + 0x5cc);
    FUN_00a8c930(0,local_160);
  }
  return;
}

