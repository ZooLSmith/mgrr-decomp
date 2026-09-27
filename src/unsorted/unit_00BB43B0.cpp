// src/unsorted/unit_00BB43B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BB43B0..00BB4630, 4 functions

#include "mgrr.h"

// 00BB43B0  FUN_00bb43b0  size=184  [run]
void __thiscall FUN_00bb43b0(int param_1,undefined4 *param_2)

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

// 00BB4470  FUN_00bb4470  size=228  [run]
void __thiscall FUN_00bb4470(int param_1,undefined4 *param_2)

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
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  FUN_00b8bb40(0xbeb2b8c2);
  FUN_00db3e80(0x41f00000,1,&DAT_01bea1d0);
  return;
}

// 00BB4560  FUN_00bb4560  size=205  [run]
void __thiscall FUN_00bb4560(int param_1,undefined4 *param_2)

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
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  return;
}

// 00BB4630  FUN_00bb4630  size=205  [run]
void __thiscall FUN_00bb4630(int param_1,undefined4 *param_2)

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
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  return;
}

