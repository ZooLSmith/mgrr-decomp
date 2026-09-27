// src/player/pl0010/state/MiddleCatLeapStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81970..00BDF590, 9 functions

#include "mgrr.h"
#include "MiddleCatLeapStatePl0010.h"

// 00B81970  MiddleCatLeapStatePl0010::vf08  size=58  [class]
undefined4 __thiscall MiddleCatLeapStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 1;
}

// 00B819B0  MiddleCatLeapStatePl0010::vf24  size=19  [class]
bool MiddleCatLeapStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B819F0  MiddleCatLeapStatePl0010::vf00  size=6  [class]
undefined * MiddleCatLeapStatePl0010::vf00(void)

{
  return &DAT_01be9e30;
}

// 00B91060  MiddleCatLeapStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall MiddleCatLeapStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAC720  MiddleCatLeapStatePl0010::vf0C  size=333  [class]
void __thiscall MiddleCatLeapStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar3 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar4 + 0x4170) = 1;
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    iVar2 = *(int *)(*(int *)(uVar3 + 0xc0) + 4);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar2 + 0x394);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar2 + 0x38c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar2 + 0x388);
    if (*(int *)(iVar2 + 0x3a8) == 0) {
      FUN_00aa3f60(0xad);
      *(undefined4 *)(param_1 + 0x50) = 0xaf;
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0xb1;
      FUN_00aa3f60(0xb1);
      local_20 = *(undefined4 *)(param_1 + 0x68);
      local_1c = *(undefined4 *)(param_1 + 100);
      local_18 = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x6c) = 1;
      FUN_00a95ff0(&local_20);
    }
    iVar2 = *(int *)(uVar4 + 0x764);
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAC870  MiddleCatLeapStatePl0010::vf20  size=171  [class]
undefined4 MiddleCatLeapStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCAEE0  MiddleCatLeapStatePl0010::vf14  size=335  [class]
void __thiscall MiddleCatLeapStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  if (*(int *)(param_1 + 0x6c) == 0) goto LAB_00bcb021;
  iVar4 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x50));
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
      iVar4 = FUN_008e2740();
      if (iVar4 == 0) {
        iVar4 = FUN_00bb90c0(param_2,param_1);
        if (iVar4 == 0) {
          FUN_008e0c00(uVar3 + 0x560);
        }
        goto LAB_00bcafc0;
      }
    }
    FUN_00bb8ae0(param_2,param_1,100);
    FUN_00bb8d00(param_2,param_1,100,0,1);
  }
LAB_00bcafc0:
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar4 = FUN_00a9f7d0(*(undefined4 *)(param_1 + 0x50));
    if (iVar4 != 0) {
      fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
      *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
      *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
      *(undefined4 *)(uVar3 + 0x4184) = 0;
      FUN_00b8af00();
      FUN_00bb8ae0(param_2,param_1,100);
      FUN_00bb8d00(param_2,param_1,100,1,1);
    }
  }
LAB_00bcb021:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BCB030  MiddleCatLeapStatePl0010::vf18  size=181  [class]
void __thiscall MiddleCatLeapStatePl0010::vf18(int param_1,undefined4 *param_2)

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
  if ((*(int *)(param_1 + 0x70) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
    if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
      iVar3 = FUN_008e2740();
      if (iVar3 == 0) goto LAB_00bcb0d8;
    }
    FUN_00bb8ae0(param_2,param_1,100);
    FUN_00bb8d00(param_2,param_1,100,0,1);
  }
LAB_00bcb0d8:
  StateMachineNode::vf18(param_2);
  return;
}

// 00BDF590  MiddleCatLeapStatePl0010::vf10  size=326  [class]
void __thiscall MiddleCatLeapStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
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
  iVar3 = FUN_00a94db0(0xad);
  if (iVar3 != 0) {
    FUN_00aa3f60(0xae);
    local_20 = *(undefined4 *)(param_1 + 0x68);
    local_1c = *(undefined4 *)(param_1 + 100);
    local_18 = *(undefined4 *)(param_1 + 0x68);
    FUN_00a95ff0(&local_20);
  }
  iVar3 = FUN_00a94db0(0xae);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x50));
  }
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    iVar3 = FUN_00a9f760(0xae);
    if (iVar3 == 0) {
      FUN_00bd3620(param_2,param_1,100);
    }
  }
  if ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe48)) != 0) {
    FUN_00bd3730(param_2,param_1,0xd,0xc);
    FUN_00bd37f0(param_2,param_1,0xd);
    FUN_00bd3910(param_2,param_1,0xb,10);
    FUN_00bd39d0(param_2,param_1,10);
  }
  StateMachineNode::vf10(param_2);
  return;
}

