// src/player/pl0010/state/MiddleWallPopStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81AB0..00BDF960, 9 functions

#include "mgrr.h"
#include "MiddleWallPopStatePl0010.h"

// 00B81AB0  MiddleWallPopStatePl0010::vf08  size=19  [class]
bool MiddleWallPopStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B81AD0  MiddleWallPopStatePl0010::vf18  size=5  [class]
undefined4 __thiscall MiddleWallPopStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B81AE0  MiddleWallPopStatePl0010::vf24  size=19  [class]
bool MiddleWallPopStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81B20  MiddleWallPopStatePl0010::vf00  size=6  [class]
undefined * MiddleWallPopStatePl0010::vf00(void)

{
  return &DAT_01be9e38;
}

// 00B910A0  MiddleWallPopStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall MiddleWallPopStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BACBB0  MiddleWallPopStatePl0010::vf0C  size=269  [class]
void __thiscall MiddleWallPopStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar6 + 0xc);
    if (piVar2 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar4 != 0) & (uint)piVar2;
    }
    iVar4 = *(int *)(*(int *)(uVar6 + 0xc0) + 4);
    fVar3 = *(float *)(iVar4 + 0x31c) / *(float *)(*(int *)(uVar5 + 0x40d4) + 0xd4);
    fVar1 = *(float *)(iVar4 + 0x318);
    *(float *)(param_1 + 0x30) = fVar3;
    FUN_00aa3f60(0xa9);
    local_20 = 0x3f800000;
    local_1c = fVar3;
    local_18 = 1.0 - (fVar1 + fVar1);
    FUN_00a95ff0(&local_20);
    iVar4 = *(int *)(uVar5 + 0x764);
    if (*(int *)(iVar4 + 0x104) != 1) {
      *(undefined4 *)(iVar4 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar5 + 0x4170) = 1;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BACCC0  MiddleWallPopStatePl0010::vf14  size=343  [class]
void __thiscall MiddleWallPopStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
      *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
    }
    iVar4 = FUN_008e2740();
    if ((iVar4 == 0) &&
       ((*(int *)(uVar3 + 0x41e0) == 0 ||
        (*(float *)(*(int *)(uVar3 + 0x40d4) + 0x160) <= *(float *)(uVar3 + 0x41e4))))) {
      FUN_00d82510(0xe,0x32);
    }
    if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
      iVar4 = FUN_008e2740();
      if (iVar4 == 0) goto LAB_00bacdba;
    }
    FUN_00d82510(0x13,0x32);
  }
LAB_00bacdba:
  iVar4 = FUN_00a95540(0,5);
  if (iVar4 != 0) {
    iVar4 = FUN_00a92f90();
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      iVar4 = FUN_00a92f90();
      FUN_00e26e90();
      *(undefined4 *)(iVar4 + 0xe4) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0xe8) = uVar1;
      *(undefined4 *)(iVar4 + 0xec) = 0x3f800000;
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BACE20  MiddleWallPopStatePl0010::vf20  size=186  [class]
undefined4 MiddleWallPopStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0xec) = 0x3f800000;
  }
  return 1;
}

// 00BDF960  MiddleWallPopStatePl0010::vf10  size=169  [class]
void __thiscall MiddleWallPopStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

