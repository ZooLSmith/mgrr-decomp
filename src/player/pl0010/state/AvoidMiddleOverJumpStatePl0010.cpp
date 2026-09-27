// src/player/pl0010/state/AvoidMiddleOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B80EC0..00BDD120, 9 functions

#include "mgrr.h"
#include "AvoidMiddleOverJumpStatePl0010.h"

// 00B80EC0  AvoidMiddleOverJumpStatePl0010::vf08  size=38  [class]
undefined4 __thiscall AvoidMiddleOverJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 00B80EF0  AvoidMiddleOverJumpStatePl0010::vf24  size=19  [class]
bool AvoidMiddleOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B80F30  AvoidMiddleOverJumpStatePl0010::vf00  size=6  [class]
undefined * AvoidMiddleOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9df0;
}

// 00B90C60  AvoidMiddleOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall AvoidMiddleOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA9180  AvoidMiddleOverJumpStatePl0010::SafeCheck  size=259  [class]
void __thiscall AvoidMiddleOverJumpStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
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
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    FUN_00aa3f60(0xa8);
    *(undefined4 *)(param_1 + 0x30) = 0xab;
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00a7c950();
    }
    else {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    iVar2 = *(int *)(uVar4 + 0x764);
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar4 + 0x4170) = 1;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BA9290  AvoidMiddleOverJumpStatePl0010::vf18  size=167  [class]
void __thiscall AvoidMiddleOverJumpStatePl0010::vf18(int param_1,undefined4 *param_2)

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
  if ((*(int *)(param_1 + 0x38) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
    if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
      iVar3 = FUN_008e2740();
      if (iVar3 == 0) goto LAB_00ba932a;
    }
    FUN_00d82510(0x13,100);
  }
LAB_00ba932a:
  StateMachineNode::vf18(param_2);
  return;
}

// 00BA9340  AvoidMiddleOverJumpStatePl0010::vf20  size=182  [class]
undefined4 AvoidMiddleOverJumpStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  FUN_00a7c950();
  return 1;
}

// 00BC97C0  AvoidMiddleOverJumpStatePl0010::vf14  size=160  [class]
void __thiscall AvoidMiddleOverJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      iVar3 = FUN_00bb90c0(param_2,param_1);
      if (iVar3 == 0) {
        FUN_008e0c00(uVar2 + 0x560);
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDD120  AvoidMiddleOverJumpStatePl0010::qteSafeCheck  size=451  [class]
void __thiscall AvoidMiddleOverJumpStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar5 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar2 = FUN_00a94db0(0xa8);
  if (iVar2 != 0) {
    FUN_00aa3f60(0xaa);
    local_20 = 0x3f800000;
    local_1c = 0x40000000;
    local_18 = 0x3f800000;
    FUN_00a95ff0(&local_20);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      iVar4 = (**(code **)(*piVar3 + 0x14c))(0x24,*(undefined4 *)(uVar5 + 0x4f0));
      if (iVar4 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x150))(0x24,*(undefined4 *)(uVar5 + 0x4f0));
        iVar4 = FUN_00a7c8a0();
        FUN_00b7b380(iVar2,iVar4 + 0x40,1);
      }
    }
  }
  iVar2 = FUN_00a94db0(0xaa);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
  }
  iVar2 = FUN_00a9f760(0xab);
  if (iVar2 == 0) {
    iVar2 = FUN_00a9f760(0xac);
    if (iVar2 == 0) goto LAB_00bdd2b8;
  }
  fVar1 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x174);
  *(undefined4 *)(uVar5 + 0x4180) = *(undefined4 *)(*(int *)(uVar5 + 0x40d4) + 0x170);
  *(float *)(uVar5 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar5 + 0x4184) = 0;
  FUN_00b8af00();
LAB_00bdd2b8:
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

