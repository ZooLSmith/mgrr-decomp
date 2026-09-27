// src/player/pl0010/state/LongCliffOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81850..00BDF390, 9 functions

#include "types.h"

// 00B81850  LongCliffOverJumpStatePl0010::vf08  size=19  [class]
bool LongCliffOverJumpStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B81870  LongCliffOverJumpStatePl0010::vf18  size=5  [class]
undefined4 __thiscall LongCliffOverJumpStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81880  LongCliffOverJumpStatePl0010::vf24  size=19  [class]
bool LongCliffOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B818C0  LongCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined * LongCliffOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e28;
}

// 00B91020  LongCliffOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall LongCliffOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAC320  LongCliffOverJumpStatePl0010::vf0C  size=305  [class]
void __thiscall LongCliffOverJumpStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar6 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar5 + 0x4170) = 1;
    *(undefined4 *)(uVar5 + 0x418c) = *(undefined4 *)(uVar5 + 0x4180);
    *(undefined4 *)(uVar5 + 0x4188) = *(undefined4 *)(uVar5 + 0x417c);
    *(undefined4 *)(uVar5 + 0x4190) = *(undefined4 *)(uVar5 + 0x4184);
    if (*(int *)(uVar6 + 0x110) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0x99;
      *(undefined4 *)(param_1 + 0x3c) = 0x9a;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0x9b;
      *(undefined4 *)(param_1 + 0x3c) = 0x9c;
    }
    uVar4 = FUN_00aa3f60(*(undefined4 *)(param_1 + 0x38));
    if (*(float *)(uVar5 + 0x4250) <= 0.0) {
      FUN_00a96070(uVar4,0x80,1);
    }
    fVar2 = *(float *)(*(int *)(*(int *)(uVar6 + 0xc0) + 4) + 8) * 0.25;
    *(float *)(param_1 + 0x30) = fVar2;
    fVar2 = 1.0 / fVar2;
    *(float *)(param_1 + 0x34) = fVar2;
    if (fVar2 < 1.0 != (fVar2 == 1.0)) {
      *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
      StateMachineNode::vf0C(param_2);
      return;
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAC460  LongCliffOverJumpStatePl0010::vf20  size=181  [class]
void LongCliffOverJumpStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  *(uint *)(uVar4 + 0x110) = *(uint *)(uVar4 + 0x110) ^ 1;
  return;
}

// 00BCAC70  LongCliffOverJumpStatePl0010::vf14  size=358  [class]
void __thiscall LongCliffOverJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
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
  iVar3 = FUN_00a9f760(*(undefined4 *)(param_1 + 0x38));
  if ((iVar3 != 0) && (*(float *)(uVar2 + 0x4250) <= 0.0)) {
    FUN_00a96090(*(undefined4 *)(param_1 + 0x38),0x80,1);
  }
  iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x38));
  if (iVar3 != 0) {
    uVar4 = FUN_00aa3f60(*(undefined4 *)(param_1 + 0x3c));
    FUN_00a96030(uVar4,*(undefined4 *)(param_1 + 0x34));
    local_20 = *(undefined4 *)(param_1 + 0x30);
    local_1c = 0x3f800000;
    local_18 = *(undefined4 *)(param_1 + 0x30);
    FUN_00a95ff0(&local_20);
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
  }
  iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x3c));
  if (iVar3 != 0) {
    if ((DAT_018b9174 == 0x448) && (*(float *)(uVar2 + 0x41e4) <= 0.6)) {
      FUN_00d82510(0x13,100);
    }
    iVar3 = FUN_00bb90c0(param_2,param_1);
    if (iVar3 == 0) {
      FUN_008e0c00(uVar2 + 0x560);
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDF390  LongCliffOverJumpStatePl0010::vf10  size=220  [class]
void __thiscall LongCliffOverJumpStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

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
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
  *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar3 + 0x4184) = 0;
  FUN_00b8af00();
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

