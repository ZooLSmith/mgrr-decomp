// src/player/pl0010/state/SlidingStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B825E0..00BCC900, 9 functions

#include "mgrr.h"
#include "SlidingStatePl0010.h"

// 00B825E0  SlidingStatePl0010::vf08  size=42  [class]
undefined4 __thiscall SlidingStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  return 1;
}

// 00B82610  SlidingStatePl0010::vf18  size=5  [class]
undefined4 __thiscall SlidingStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82620  SlidingStatePl0010::vf24  size=19  [class]
bool SlidingStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82660  SlidingStatePl0010::vf00  size=6  [class]
undefined * SlidingStatePl0010::vf00(void)

{
  return &DAT_01be9e70;
}

// 00B91270  SlidingStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall SlidingStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB17C0  SlidingStatePl0010::vf0C  size=173  [class]
void __thiscall SlidingStatePl0010::vf0C(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(uVar2 + 0x4170) = 1;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB1870  SlidingStatePl0010::vf10  size=144  [class]
void SlidingStatePl0010::vf10(undefined4 *param_1)

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
  StateMachineNode::vf10(param_1);
  return;
}

// 00BB1900  SlidingStatePl0010::vf20  size=146  [class]
undefined4 SlidingStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCC900  SlidingStatePl0010::vf14  size=381  [class]
void __thiscall SlidingStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
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
  iVar3 = FUN_00a94db0(0x2c);
  if (iVar3 != 0) {
    FUN_00aa3f60(0x2d);
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  iVar3 = FUN_00a94db0(0x2f);
  if ((iVar3 != 0) || (iVar3 = FUN_00a94db0(0x2e), iVar3 != 0)) {
    iVar3 = FUN_008e2740();
    if ((iVar3 != 0) ||
       ((*(int *)(uVar2 + 0x41e0) != 0 &&
        (*(float *)(uVar2 + 0x41e4) < *(float *)(*(int *)(uVar2 + 0x40d4) + 0x160))))) {
      FUN_00bb8d00(param_2,param_1,0x19,0,1);
    }
    else {
      FUN_00d82510(0xe,100);
    }
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(uVar2 + 0x4260) != 0) {
      iVar3 = FUN_00b7e4f0();
      if (iVar3 == 0) {
        uVar5 = 0x2e;
      }
      else {
        uVar5 = 0x2f;
      }
      FUN_00aa9280(uVar5);
    }
    if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(uVar2 + 0x4260) != 0)) {
      uVar5 = FUN_00b8b610();
      switch(uVar5) {
      case 1:
        uVar5 = 0x15;
        break;
      case 2:
        uVar5 = 0x17;
        break;
      case 3:
        uVar5 = 0x18;
        break;
      case 4:
        uVar5 = 0x16;
        break;
      case 5:
        uVar5 = 0x10;
        break;
      default:
        goto switchD_00bcca21_caseD_6;
      case 8:
        uVar5 = 0x14;
        break;
      case 9:
        uVar5 = 0x25;
        break;
      case 0xb:
        uVar5 = 0x2b;
        break;
      case 0xc:
        uVar5 = 0xd;
        break;
      case 0xd:
        uVar5 = 9;
        break;
      case 0x11:
        uVar5 = 0xc;
      }
      FUN_00d82510(uVar5,100);
    }
  }
switchD_00bcca21_caseD_6:
  StateMachineNode::vf14(param_2);
  return;
}

