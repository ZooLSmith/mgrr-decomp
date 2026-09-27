// src/player/pl0010/state/TwoStageJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82870..00BE0D50, 9 functions

#include "mgrr.h"
#include "TwoStageJumpStatePl0010.h"

// 00B82870  TwoStageJumpStatePl0010::vf08  size=19  [class]
bool TwoStageJumpStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B82890  TwoStageJumpStatePl0010::vf18  size=5  [class]
undefined4 __thiscall TwoStageJumpStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B828A0  TwoStageJumpStatePl0010::vf24  size=19  [class]
bool TwoStageJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B828E0  TwoStageJumpStatePl0010::vf00  size=6  [class]
undefined * TwoStageJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e80;
}

// 00B912F0  TwoStageJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall TwoStageJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB2030  TwoStageJumpStatePl0010::SafeCheck  size=258  [class]
void __thiscall TwoStageJumpStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  float local_20 [7];
  
  if (*(int *)(param_1 + 0x20) == 0) {
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
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    FUN_00aa3f60(0xba);
    iVar2 = *(int *)(uVar3 + 0x764);
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar3 + 0x418c) = *(undefined4 *)(uVar3 + 0x4180);
    *(undefined4 *)(uVar3 + 0x4188) = *(undefined4 *)(uVar3 + 0x417c);
    *(undefined4 *)(uVar3 + 0x4190) = *(undefined4 *)(uVar3 + 0x4184);
    local_20[0] = *(float *)(*(int *)(*(int *)(uVar4 + 0xc0) + 4) + 0x4d8) * 0.5;
    local_20[1] = 1.0;
    local_20[2] = local_20[0];
    FUN_00a95ff0(local_20);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB2140  TwoStageJumpStatePl0010::vf20  size=161  [class]
undefined4 TwoStageJumpStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCCB70  TwoStageJumpStatePl0010::vf14  size=200  [class]
void __thiscall TwoStageJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar3 = FUN_00a94db0(0xba);
  if (iVar3 != 0) {
    FUN_00aa3f60(0xbb);
    StateMachineNode::vf14(param_2);
    return;
  }
  iVar3 = FUN_00a94db0(0xbb);
  if (iVar3 != 0) {
    FUN_00bb8ae0(param_2,param_1,100);
    if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
      iVar3 = FUN_00bb90c0(param_2,param_1);
      if (iVar3 != 0) {
        FUN_008e0c00(uVar2 + 0x560);
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE0D50  TwoStageJumpStatePl0010::qteSafeCheck  size=220  [class]
void __thiscall TwoStageJumpStatePl0010::qteSafeCheck(undefined4 param_1,undefined4 *param_2)

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
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
  *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar3 + 0x4184) = 0;
  FUN_00b8af00();
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

