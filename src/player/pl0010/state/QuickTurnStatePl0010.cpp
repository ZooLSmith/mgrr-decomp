// src/player/pl0010/state/QuickTurnStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82380..00BE08F0, 9 functions

#include "types.h"

// 00B82380  QuickTurnStatePl0010::vf08  size=19  [class]
bool QuickTurnStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B823A0  QuickTurnStatePl0010::vf18  size=5  [class]
undefined4 __thiscall QuickTurnStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B823B0  QuickTurnStatePl0010::vf24  size=19  [class]
bool QuickTurnStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B823F0  QuickTurnStatePl0010::vf00  size=6  [class]
undefined * QuickTurnStatePl0010::vf00(void)

{
  return &DAT_01be9e64;
}

// 00B91210  QuickTurnStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall QuickTurnStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB0C10  QuickTurnStatePl0010::vf0C  size=208  [class]
void __thiscall QuickTurnStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x20) == 0) {
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
    iVar3 = FUN_00b8afd0(local_20);
    if (iVar3 == 3) {
      *(undefined4 *)(param_1 + 0x30) = 0x48;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0x49;
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(uVar2 + 0x416c) = 1;
    *(undefined4 *)(uVar2 + 0x5078) = 1;
    if (*(int *)(param_1 + 0x30) == 0x48) {
      uVar5 = 0x11;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0x49) goto LAB_00bb0ccc;
      uVar5 = 0x12;
    }
    FUN_00aa92c0(uVar5);
  }
LAB_00bb0ccc:
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB0CE0  QuickTurnStatePl0010::vf20  size=120  [class]
undefined4 QuickTurnStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x416c) = 0;
  *(undefined4 *)(uVar3 + 0x5078) = 0;
  return 1;
}

// 00BCC570  QuickTurnStatePl0010::vf14  size=126  [class]
void __thiscall QuickTurnStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar2 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    FUN_00bb8d00(param_2,param_1,100,0,1);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE08F0  QuickTurnStatePl0010::vf10  size=169  [class]
void __thiscall QuickTurnStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

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

