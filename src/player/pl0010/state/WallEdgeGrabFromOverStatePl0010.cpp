// src/player/pl0010/state/WallEdgeGrabFromOverStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82AD0..00BE1300, 9 functions

#include "mgrr.h"
#include "WallEdgeGrabFromOverStatePl0010.h"

// 00B82AD0  WallEdgeGrabFromOverStatePl0010::vf08  size=41  [class]
undefined4 __thiscall WallEdgeGrabFromOverStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}

// 00B82B00  WallEdgeGrabFromOverStatePl0010::vf18  size=5  [class]
undefined4 __thiscall WallEdgeGrabFromOverStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82B10  WallEdgeGrabFromOverStatePl0010::vf24  size=19  [class]
bool WallEdgeGrabFromOverStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82B50  WallEdgeGrabFromOverStatePl0010::vf00  size=6  [class]
undefined * WallEdgeGrabFromOverStatePl0010::vf00(void)

{
  return &DAT_01be9e90;
}

// 00B91370  WallEdgeGrabFromOverStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall WallEdgeGrabFromOverStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB2870  WallEdgeGrabFromOverStatePl0010::SafeCheck  size=178  [class]
void __thiscall WallEdgeGrabFromOverStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xc4;
    FUN_00aa3f60(0xc4);
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar2 + 0x4170) = 1;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB2930  WallEdgeGrabFromOverStatePl0010::vf20  size=135  [class]
undefined4 WallEdgeGrabFromOverStatePl0010::vf20(undefined4 *param_1)

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

// 00BCCEE0  WallEdgeGrabFromOverStatePl0010::vf14  size=275  [class]
void __thiscall WallEdgeGrabFromOverStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar3 = FUN_00a94db0(0xc4);
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 0xc6;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 199;
    }
    FUN_00aa9280(*(undefined4 *)(param_1 + 0x30));
  }
  iVar3 = FUN_00a9f760(0xc6);
  if (((iVar3 != 0) && (*(int *)(param_1 + 0x34) != 0)) && (*(int *)(param_1 + 0x38) != 0)) {
    iVar3 = FUN_00a95270(0xc6,0x15);
    if (iVar3 != 0) {
      FUN_00bb90c0(param_2,param_1);
    }
  }
  iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
  if ((iVar3 != 0) && ((*(int *)(param_1 + 0x30) == 0xc6 || (*(int *)(param_1 + 0x30) == 199)))) {
    iVar3 = FUN_00bb90c0(param_2,param_1);
    if (iVar3 == 0) {
      FUN_008e0c00(uVar2 + 0x560);
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE1300  WallEdgeGrabFromOverStatePl0010::qteSafeCheck  size=331  [class]
void __thiscall WallEdgeGrabFromOverStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

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
  if (*(int *)(*(int *)(uVar3 + 17000) + 0x94) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if (*(int *)(*(int *)(uVar3 + 17000) + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  iVar4 = FUN_00a9f760(0xc4);
  if (iVar4 == 0) {
    iVar4 = FUN_00a95030(0xc6,0,0x15);
    if (iVar4 != 0) goto LAB_00be13b8;
  }
  else {
LAB_00be13b8:
    fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
    if ((*(float *)(uVar3 + 0xd28) <= fVar1 * fVar1) || (*(int *)(param_1 + 0x3c) != 0)) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  iVar4 = FUN_00a94db0(0xc6);
  if (iVar4 == 0) {
    iVar4 = FUN_00a94db0(199);
    if (iVar4 == 0) goto LAB_00be1412;
  }
  FUN_00bd3620(param_2,param_1,100);
LAB_00be1412:
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

