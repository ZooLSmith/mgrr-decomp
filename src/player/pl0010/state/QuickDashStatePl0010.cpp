// src/player/pl0010/state/QuickDashStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B822F0..00BCC490, 9 functions

#include "mgrr.h"
#include "QuickDashStatePl0010.h"

// 00B822F0  QuickDashStatePl0010::vf08  size=19  [class]
bool QuickDashStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B82310  QuickDashStatePl0010::vf18  size=5  [class]
undefined4 __thiscall QuickDashStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82320  QuickDashStatePl0010::vf24  size=19  [class]
bool QuickDashStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82360  QuickDashStatePl0010::vf00  size=6  [class]
undefined * QuickDashStatePl0010::vf00(void)

{
  return &DAT_01be9e60;
}

// 00B911F0  QuickDashStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall QuickDashStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB0AD0  QuickDashStatePl0010::SafeCheck  size=169  [class]
void __thiscall QuickDashStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar4 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar4 + 0x70) = 0;
    *(undefined4 *)(uVar2 + 0x5074) = 0;
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
    FUN_00aa9280(0x39);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB0B80  QuickDashStatePl0010::vf20  size=136  [class]
undefined4 QuickDashStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCC3A0  QuickDashStatePl0010::qteSafeCheck  size=235  [class]
void __thiscall QuickDashStatePl0010::qteSafeCheck(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
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
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  *(undefined4 *)(uVar2 + 0x4180) = 0x3e99999a;
  *(undefined4 *)(uVar2 + 0x417c) = 0x3f060a92;
  *(undefined4 *)(uVar2 + 0x4184) = 0;
  FUN_00b8af00();
  iVar3 = FUN_008e2740();
  if ((iVar3 == 0) &&
     ((*(int *)(uVar2 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar2 + 0x40d4) + 0x160) <= *(float *)(uVar2 + 0x41e4))))) {
    FUN_00d82510(0xe,100);
  }
  FUN_00bb8ae0(param_2,param_1,100);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

// 00BCC490  QuickDashStatePl0010::vf14  size=221  [class]
void __thiscall QuickDashStatePl0010::vf14(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
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
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
  if ((fVar1 * fVar1 < *(float *)(uVar3 + 0xd28)) &&
     ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) != 0)) {
    iVar4 = FUN_00a95630(0x39,0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_00a94db0(0x39);
      if (iVar4 == 0) goto LAB_00bcc55f;
    }
    FUN_00bb8d00(param_2,param_1,100,0,1);
    StateMachineNode::vf14(param_2);
    return;
  }
  iVar4 = FUN_00a94db0(0x39);
  if (iVar4 != 0) {
    *(undefined4 *)(uVar3 + 0x5080) = 1;
  }
LAB_00bcc55f:
  StateMachineNode::vf14(param_2);
  return;
}

