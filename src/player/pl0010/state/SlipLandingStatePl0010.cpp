// src/player/pl0010/state/SlipLandingStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82740..00BB1E20, 9 functions

#include "types.h"

// 00B82740  SlipLandingStatePl0010::vf08  size=19  [class]
bool SlipLandingStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B82760  SlipLandingStatePl0010::vf18  size=5  [class]
undefined4 __thiscall SlipLandingStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82770  SlipLandingStatePl0010::vf24  size=19  [class]
bool SlipLandingStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B827B0  SlipLandingStatePl0010::vf00  size=6  [class]
undefined * SlipLandingStatePl0010::vf00(void)

{
  return &DAT_01be9e78;
}

// 00B912B0  SlipLandingStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall SlipLandingStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB1BE0  SlipLandingStatePl0010::vf0C  size=163  [class]
void __thiscall SlipLandingStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
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
    FUN_00aa3f60(0x2c);
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
    FUN_00aa92c0(4);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB1C90  SlipLandingStatePl0010::vf10  size=170  [class]
void SlipLandingStatePl0010::vf10(undefined4 *param_1)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
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
  FUN_00b8af00();
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x20);
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x24);
  *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar3 + 0x4184) = 0;
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  StateMachineNode::vf10(param_1);
  return;
}

// 00BB1D40  SlipLandingStatePl0010::vf14  size=216  [class]
void SlipLandingStatePl0010::vf14(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
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
  iVar3 = FUN_008e2740();
  if ((iVar3 == 0) &&
     ((*(int *)(uVar2 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar2 + 0x40d4) + 0x160) <= *(float *)(uVar2 + 0x41e4))))) {
    FUN_00d82510(0xe,100);
  }
  if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
    iVar3 = FUN_008e2740();
    if (iVar3 == 0) goto LAB_00bb1e0a;
  }
  FUN_00d82510(0x13,100);
LAB_00bb1e0a:
  StateMachineNode::vf14(param_1);
  return;
}

// 00BB1E20  SlipLandingStatePl0010::vf20  size=136  [class]
undefined4 SlipLandingStatePl0010::vf20(undefined4 *param_1)

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

