// src/unsorted/unit_00BB35C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BB35C0..00BB3A90, 7 functions

#include "mgrr.h"

// 00BB35C0  FUN_00bb35c0  size=120  [run]
void FUN_00bb35c0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 != 0) {
    FUN_00e36ac0(0,0);
  }
  return;
}

// 00BB3640  FUN_00bb3640  size=190  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bb3640(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  FUN_00a7c960(uVar4 + 0x91c);
  *(undefined4 *)(param_1 + 0x3c) = 0x720;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  _DAT_01bea9a0 = 1;
  FUN_008e3c10();
  return;
}

// 00BB3700  FUN_00bb3700  size=184  [run]
void __thiscall FUN_00bb3700(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  return;
}

// 00BB37C0  FUN_00bb37c0  size=258  [run]
void __thiscall FUN_00bb37c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(4);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  FUN_00b8bb40(0xbeb2b8c2);
  *(int *)(uVar4 + 0x360) = piVar3[0x10];
  *(int *)(uVar4 + 0x364) = piVar3[0x11];
  *(int *)(uVar4 + 0x368) = piVar3[0x12];
  *(int *)(uVar4 + 0x36c) = piVar3[0x13];
  return;
}

// 00BB38D0  FUN_00bb38d0  size=254  [run]
void __thiscall FUN_00bb38d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(4);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_009f8b40();
      *(undefined4 *)(param_1 + 0x1dc) = uVar2;
    }
  }
  return;
}

// 00BB39D0  FUN_00bb39d0  size=184  [run]
void __thiscall FUN_00bb39d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  return;
}

// 00BB3A90  FUN_00bb3a90  size=184  [run]
void __thiscall FUN_00bb3a90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  return;
}

