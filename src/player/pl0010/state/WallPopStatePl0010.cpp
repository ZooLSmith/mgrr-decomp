// src/player/pl0010/state/WallPopStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82B70..00BE1450, 9 functions

#include "types.h"

// 00B82B70  WallPopStatePl0010::vf08  size=19  [class]
bool WallPopStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B82B90  WallPopStatePl0010::vf18  size=5  [class]
undefined4 __thiscall WallPopStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82BA0  WallPopStatePl0010::vf24  size=19  [class]
bool WallPopStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82BE0  WallPopStatePl0010::vf00  size=6  [class]
undefined * WallPopStatePl0010::vf00(void)

{
  return &DAT_01be9e94;
}

// 00B91390  WallPopStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall WallPopStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB29C0  WallPopStatePl0010::vf0C  size=239  [class]
void __thiscall WallPopStatePl0010::vf0C(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(param_1 + 0x30) = 0xc0;
    fVar1 = *(float *)(*(int *)(*(int *)(uVar5 + 0xc0) + 4) + 0x54c);
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      *(undefined4 *)(param_1 + 0x30) = 0xc1;
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
    iVar3 = *(int *)(uVar4 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar4 + 0x507c) = 1;
    *(undefined4 *)(uVar4 + 0x4170) = 1;
    if ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe48)) != 0) {
      FUN_00aa92c0(0x22);
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB2AB0  WallPopStatePl0010::vf20  size=135  [class]
undefined4 WallPopStatePl0010::vf20(undefined4 *param_1)

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
  return 1;
}

// 00BCD000  WallPopStatePl0010::vf14  size=281  [class]
void __thiscall WallPopStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
  if (iVar3 != 0) {
    iVar3 = FUN_00bb90c0(param_2,param_1);
    if (iVar3 == 0) {
      FUN_008e0c00(uVar2 + 0x560);
    }
    else {
      FUN_00d82510(0xe,0x46);
    }
  }
  iVar3 = FUN_00a95270(0xc0,0x23);
  if (iVar3 == 0) {
    iVar3 = FUN_00a95270(0xc1,0x23);
    if (iVar3 == 0) goto LAB_00bcd10b;
  }
  if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
    iVar3 = FUN_008e2740();
    if ((iVar3 == 0) && ((*(int *)(uVar2 + 0x41e0) == 0 || (0.36 < *(float *)(uVar2 + 0x41e4)))))
    goto LAB_00bcd10b;
  }
  FUN_00d82510(0x13,100);
LAB_00bcd10b:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE1450  WallPopStatePl0010::vf10  size=176  [class]
void __thiscall WallPopStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

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
  FUN_00b8af00();
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

