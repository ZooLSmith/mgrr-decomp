// src/player/pl0010/state/UnevenCliffOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82900..00BE0E30, 9 functions

#include "mgrr.h"
#include "UnevenCliffOverJumpStatePl0010.h"

// 00B82900  UnevenCliffOverJumpStatePl0010::vf08  size=43  [class]
undefined4 __thiscall UnevenCliffOverJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}

// 00B82930  UnevenCliffOverJumpStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall UnevenCliffOverJumpStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B82940  UnevenCliffOverJumpStatePl0010::vf24  size=19  [class]
bool UnevenCliffOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82980  UnevenCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined * UnevenCliffOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e84;
}

// 00B91310  UnevenCliffOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall UnevenCliffOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB21F0  UnevenCliffOverJumpStatePl0010::SafeCheck  size=491  [class]
void __thiscall UnevenCliffOverJumpStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar6 + 0xc);
    if (piVar2 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar2;
    }
    *(undefined4 *)(uVar7 + 0x4170) = 1;
    *(undefined4 *)(uVar7 + 0x418c) = *(undefined4 *)(uVar7 + 0x4180);
    *(undefined4 *)(uVar7 + 0x4188) = *(undefined4 *)(uVar7 + 0x417c);
    *(undefined4 *)(uVar7 + 0x4190) = *(undefined4 *)(uVar7 + 0x4184);
    iVar4 = *(int *)(*(int *)(uVar6 + 0xc0) + 4);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x1d4);
    *(float *)(param_1 + 0x44) =
         *(float *)(iVar4 + 0x1cc) / *(float *)(*(int *)(uVar7 + 0x40d4) + 0x9c);
    fVar1 = *(float *)(iVar4 + 0x1c8) / *(float *)(*(int *)(uVar7 + 0x40d4) + 0x90);
    *(float *)(param_1 + 0x48) = fVar1;
    fVar1 = 1.0 / fVar1;
    *(float *)(param_1 + 0x50) = fVar1;
    if (fVar1 < 0.8) {
      *(undefined4 *)(param_1 + 0x50) = 0x3f4ccccd;
    }
    if (*(float *)(uVar7 + 0x4250) < 0.5) {
      uVar5 = FUN_00aa3f60(0x9f);
      FUN_00a96030(uVar5,*(undefined4 *)(param_1 + 0x50));
      local_20 = 0x3f800000;
      local_1c = *(undefined4 *)(param_1 + 0x44);
      local_18 = *(undefined4 *)(param_1 + 0x48);
      FUN_00a95ff0(&local_20);
      iVar3 = *(int *)(uVar7 + 0x764);
      if (*(int *)(iVar3 + 0x104) != 1) {
        *(undefined4 *)(iVar3 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
      }
    }
    else {
      FUN_00aa3f60(0x9e);
      fVar1 = (*(float *)(iVar4 + 0x1c8) - 0.5) / *(float *)(*(int *)(uVar7 + 0x40d4) + 0x90);
      *(float *)(param_1 + 0x48) = fVar1;
      fVar1 = 1.0 / fVar1;
      *(float *)(param_1 + 0x50) = fVar1;
      if (fVar1 < 0.8) {
        *(undefined4 *)(param_1 + 0x50) = 0x3f4ccccd;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x1d8);
    *(int *)(param_1 + 0x30) = iVar4;
    *(undefined4 *)(param_1 + 0x34) = 0xa0;
    if ((iVar4 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x4c), !NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0))) {
      *(undefined4 *)(param_1 + 0x34) = 0xa1;
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB23E0  UnevenCliffOverJumpStatePl0010::vf18  size=181  [class]
void __thiscall UnevenCliffOverJumpStatePl0010::vf18(int param_1,undefined4 *param_2)

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
  if (*(int *)(param_1 + 0x34) == 0xa0) {
    iVar3 = FUN_00a95270(0xa0,0x14);
    if ((iVar3 != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
      iVar3 = FUN_00b7e530();
      if ((iVar3 != 0) || ((*(int *)(uVar2 + 0x41e0) != 0 && (*(float *)(uVar2 + 0x41e4) <= 0.25))))
      {
        FUN_00d82510(0x13,0x32);
      }
    }
  }
  StateMachineNode::vf18(param_2);
  return;
}

// 00BB24A0  UnevenCliffOverJumpStatePl0010::vf20  size=171  [class]
undefined4 UnevenCliffOverJumpStatePl0010::vf20(undefined4 *param_1)

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

// 00BE0E30  UnevenCliffOverJumpStatePl0010::qteSafeCheck  size=888  [class]
void __thiscall UnevenCliffOverJumpStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar4 = FUN_00a94db0(0x9e);
  if (iVar4 != 0) {
    uVar5 = FUN_00aa3f60(0x9f);
    FUN_00a96030(uVar5,*(undefined4 *)(param_1 + 0x50));
    local_20 = 0x3f800000;
    local_1c = *(undefined4 *)(param_1 + 0x44);
    local_18 = *(undefined4 *)(param_1 + 0x48);
    FUN_00a95ff0(&local_20);
    iVar4 = *(int *)(uVar3 + 0x764);
    if (*(int *)(iVar4 + 0x104) != 1) {
      *(undefined4 *)(iVar4 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
    }
  }
  iVar4 = FUN_00a94db0(0x9f);
  if (iVar4 == 0) {
    iVar4 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x34));
    if ((iVar4 != 0) && (iVar4 = FUN_00bb90c0(param_2,param_1), iVar4 == 0)) {
      FUN_008e0c00(uVar3 + 0x560);
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0xa2;
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x34));
  }
  if (((*(int *)(param_1 + 0x34) == 0xa0) && (iVar4 = FUN_00a95270(0xa0,0x14), iVar4 != 0)) &&
     (((*(int *)(uVar3 + 0x41e0) != 0 && (*(float *)(uVar3 + 0x41e4) <= 0.36)) ||
      ((iVar4 = FUN_008e2740(), iVar4 != 0 ||
       ((*(int *)(uVar3 + 0x41e0) != 0 && (*(float *)(uVar3 + 0x41e4) <= 0.25)))))))) {
    FUN_00d82510(0x13,0x32);
  }
  iVar4 = FUN_00a95030(0xa0,0,5);
  if ((((iVar4 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x4c), !NAN(fVar1) && 0.35 < fVar1 != (fVar1 == 0.35))) &&
      (iVar4 = FUN_00b8b610(), iVar4 != 0)) && (iVar4 != 0xc)) {
    fVar6 = (float10)FUN_00a95980(0xa0);
    *(float *)(param_1 + 0x40) = (float)fVar6;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  iVar4 = FUN_00a9f760(0xa0);
  if ((iVar4 != 0) || (iVar4 = FUN_00a9f760(0xa1), iVar4 != 0)) {
    fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
    *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
    *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
    *(undefined4 *)(uVar3 + 0x4184) = 0;
    FUN_00b8af00();
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0xa2;
      FUN_00aa42d0(0xa2,*(undefined4 *)(param_1 + 0x40));
    }
  }
  iVar4 = FUN_00a9f760(0x9e);
  if (((iVar4 != 0) || (iVar4 = FUN_00a9f760(0x9f), iVar4 != 0)) ||
     ((iVar4 = FUN_00a95030(0xa0,0,5), iVar4 != 0 || (iVar4 = FUN_00a95030(0xa1,0,5), iVar4 != 0))))
  {
    fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
    if ((*(float *)(uVar3 + 0xd28) <= fVar1 * fVar1) || (*(int *)(param_1 + 0x3c) != 0)) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  if ((0x7fffffff < *(uint *)(param_1 + 0x24)) &&
     (((iVar4 = FUN_00a95ce0(0x9f), iVar4 == 0 && (iVar4 = FUN_00a95ce0(0x9e), iVar4 == 0)) ||
      (iVar4 = FUN_00a95120(0,5), iVar4 != 0)))) {
    FUN_00bd3620(param_2,param_1,100);
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

