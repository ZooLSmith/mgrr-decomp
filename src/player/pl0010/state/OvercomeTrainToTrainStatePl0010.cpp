// src/player/pl0010/state/OvercomeTrainToTrainStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82250..00BE0670, 9 functions

#include "mgrr.h"
#include "OvercomeTrainToTrainStatePl0010.h"

// 00B82250  OvercomeTrainToTrainStatePl0010::vf08  size=42  [class]
undefined4 __thiscall OvercomeTrainToTrainStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}

// 00B82280  OvercomeTrainToTrainStatePl0010::thunk_vf18  size=5  [class]
undefined4 __thiscall OvercomeTrainToTrainStatePl0010::thunk_vf18(int param_1,undefined4 param_2)

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

// 00B82290  OvercomeTrainToTrainStatePl0010::vf24  size=19  [class]
bool OvercomeTrainToTrainStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B822D0  OvercomeTrainToTrainStatePl0010::vf00  size=6  [class]
undefined * OvercomeTrainToTrainStatePl0010::vf00(void)

{
  return &DAT_01be9e5c;
}

// 00B911D0  OvercomeTrainToTrainStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall OvercomeTrainToTrainStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB07F0  OvercomeTrainToTrainStatePl0010::SafeCheck  size=333  [class]
void __thiscall OvercomeTrainToTrainStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar6 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar5 + 0xc);
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
    iVar3 = *(int *)(uVar4 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    FUN_008e6c60(0);
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    *(undefined4 *)(param_1 + 0x34) = 0;
    fVar1 = *(float *)(*(int *)(uVar5 + 0xc4) + 0x54);
    FUN_00aa3f60(0xb5);
    FUN_00a96030(0,0x3e800000);
    FUN_00a95fb0(0);
    if (*(float *)(uVar4 + 0x44) < fVar1) {
      *(float *)(param_1 + 0x30) = fVar1 - *(float *)(uVar4 + 0x44);
    }
    FUN_00a937e0();
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB0940  OvercomeTrainToTrainStatePl0010::vf14  size=185  [class]
void __thiscall OvercomeTrainToTrainStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar2 = FUN_00a94db0(0xb7);
  if (((iVar2 != 0) || (iVar2 = FUN_00a94db0(0xb8), iVar2 != 0)) ||
     (iVar2 = FUN_00a94db0(0xb5), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    FUN_008e6c60(1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00d82510(10,100);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BB0A00  OvercomeTrainToTrainStatePl0010::vf20  size=196  [class]
undefined4 __thiscall OvercomeTrainToTrainStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
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
  FUN_008e6c60(1);
  if (*(int *)(param_1 + 0x24) != 0x1e) {
    FUN_00a93820();
  }
  return 1;
}

// 00BE0670  OvercomeTrainToTrainStatePl0010::qteSafeCheck  size=636  [class]
void __thiscall OvercomeTrainToTrainStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  float local_58;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  piVar7 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_58 = 0.0;
  }
  else {
    puVar11 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar11);
    local_58 = (float)(-(uint)(iVar6 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)local_58 + 0xc);
  if (piVar1 != (int *)0x0) {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar11);
    piVar7 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar1);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar6 = *(int *)((int)local_58 + 0xc4);
  fStack_40 = *(float *)(iVar6 + 0x50);
  fStack_3c = *(float *)(iVar6 + 0x54);
  fStack_38 = *(float *)(iVar6 + 0x58);
  fStack_34 = *(float *)(iVar6 + 0x5c);
  fVar8 = (float10)FUN_00a8ed10(&fStack_40,piVar7 + 0x10);
  FUN_00a8e960((float)fVar8);
  fVar2 = fStack_40 - (float)piVar7[0x10];
  fVar5 = fStack_3c - (float)piVar7[0x11];
  fVar4 = fStack_38 - (float)piVar7[0x12];
  fStack_24 = fStack_34 - (float)piVar7[0x13];
  fStack_30 = fVar2;
  fStack_2c = fVar5;
  fStack_28 = fVar4;
  if (((fVar2 != 0.0) || (fVar5 != 0.0)) || (fVar4 != 0.0)) {
    fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_30 = 0.0;
      fStack_2c = 1.0;
      fStack_28 = 0.0;
    }
  }
  fVar8 = (float10)FUN_00a958c0(0);
  fVar9 = (float10)FUN_00a95680(0);
  fVar10 = (float10)fcos((float10)(float)fVar8 / fVar9);
  (**(code **)(*piVar7 + 0x74))
            ((float)(fVar10 * (float10)*(float *)(param_1 + 0x30) * (float10)0.1));
  fStack_24 = (float)((float10)(float)fVar8 / fVar9) * local_58;
  fStack_20 = fVar2 * local_58;
  fStack_1c = fVar5 * local_58;
  fStack_18 = local_58 * fVar4;
  (**(code **)(*piVar7 + 0x70))(&fStack_24);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

