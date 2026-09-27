// src/player/pl0010/state/MiddleOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81A10..00BDF6E0, 9 functions

#include "mgrr.h"
#include "MiddleOverJumpStatePl0010.h"

// 00B81A10  MiddleOverJumpStatePl0010::vf08  size=49  [class]
undefined4 __thiscall MiddleOverJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 1;
}

// 00B81A50  MiddleOverJumpStatePl0010::vf24  size=19  [class]
bool MiddleOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81A90  MiddleOverJumpStatePl0010::vf00  size=6  [class]
undefined * MiddleOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e34;
}

// 00B91080  MiddleOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall MiddleOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAC920  MiddleOverJumpStatePl0010::SafeCheck  size=294  [class]
void __thiscall MiddleOverJumpStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    iVar3 = *(int *)(*(int *)(uVar5 + 0xc0) + 4);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x2b4);
    *(float *)(param_1 + 0x44) =
         *(float *)(iVar3 + 0x2ac) / *(float *)(*(int *)(uVar4 + 0x40d4) + 0xd4);
    FUN_00aa3f60(0xa8);
    if ((*(int *)(*(int *)(*(int *)(uVar5 + 0xc0) + 4) + 0x2b8) == 0) ||
       (fVar1 = *(float *)(param_1 + 0x40), NAN(fVar1) || 2.0 < fVar1 == (fVar1 == 2.0))) {
      *(undefined4 *)(param_1 + 0x30) = 0xab;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0xac;
    }
    iVar3 = *(int *)(uVar4 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar4 + 0x4170) = 1;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BACA50  MiddleOverJumpStatePl0010::vf18  size=167  [class]
void __thiscall MiddleOverJumpStatePl0010::vf18(int param_1,undefined4 *param_2)

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
  if ((*(int *)(param_1 + 0x4c) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
    if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
      iVar3 = FUN_008e2740();
      if (iVar3 == 0) goto LAB_00bacaea;
    }
    FUN_00d82510(0x13,100);
  }
LAB_00bacaea:
  StateMachineNode::vf18(param_2);
  return;
}

// 00BACB00  MiddleOverJumpStatePl0010::vf20  size=171  [class]
undefined4 MiddleOverJumpStatePl0010::vf20(undefined4 *param_1)

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

// 00BCB0F0  MiddleOverJumpStatePl0010::vf14  size=160  [class]
void __thiscall MiddleOverJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      iVar3 = FUN_00bb90c0(param_2,param_1);
      if (iVar3 == 0) {
        FUN_008e0c00(uVar2 + 0x560);
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDF6E0  MiddleOverJumpStatePl0010::qteSafeCheck  size=640  [class]
void __thiscall MiddleOverJumpStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar4 = FUN_00a94db0(0xa8);
  if (iVar4 != 0) {
    FUN_00aa3f60(0xaa);
    local_20 = 0x3f800000;
    local_1c = *(undefined4 *)(param_1 + 0x44);
    local_18 = 0x3f800000;
    FUN_00a95ff0(&local_20);
  }
  iVar4 = FUN_00a94db0(0xaa);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xb0;
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
  }
  iVar4 = FUN_00a95030(0xab,0,5);
  if ((iVar4 != 0) &&
     (fVar1 = *(float *)(param_1 + 0x40), !NAN(fVar1) && 0.35 < fVar1 != (fVar1 == 0.35))) {
    iVar4 = FUN_00b8b610();
    if ((iVar4 != 0) && (iVar4 != 0xc)) {
      fVar5 = (float10)FUN_00a95980(0xab);
      *(float *)(param_1 + 0x3c) = (float)fVar5;
      *(undefined4 *)(param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
  }
  iVar4 = FUN_00a9f760(0xab);
  if (iVar4 == 0) {
    iVar4 = FUN_00a9f760(0xac);
    if (iVar4 != 0) goto LAB_00bdf827;
  }
  else {
LAB_00bdf827:
    fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
    *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
    *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
    *(undefined4 *)(uVar3 + 0x4184) = 0;
    FUN_00b8af00();
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xb0;
      FUN_00aa42d0(0xb0,*(undefined4 *)(param_1 + 0x3c));
    }
  }
  iVar4 = FUN_00a95270(0xab,0x14);
  if (iVar4 != 0) {
    FUN_00bd3620(param_2,param_1,100);
  }
  iVar4 = FUN_00a9f760(0xa8);
  if (iVar4 == 0) {
    iVar4 = FUN_00a9f760(0xaa);
    if (iVar4 == 0) {
      iVar4 = FUN_00a95030(0xab,0,5);
      if (iVar4 == 0) {
        iVar4 = FUN_00a95030(0xac,0,5);
        if (iVar4 == 0) goto LAB_00bdf912;
      }
    }
  }
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
  if ((*(float *)(uVar3 + 0xd28) <= fVar1 * fVar1) || (*(int *)(param_1 + 0x38) != 0)) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_00bdf912:
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    FUN_00bd3620(param_2,param_1,100);
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

