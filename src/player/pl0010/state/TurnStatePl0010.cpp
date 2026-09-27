// src/player/pl0010/state/TurnStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B827D0..00BCCAD0, 9 functions

#include "mgrr.h"
#include "TurnStatePl0010.h"

// 00B827D0  TurnStatePl0010::vf08  size=37  [class]
undefined4 __thiscall TurnStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}

// 00B82800  TurnStatePl0010::vf18  size=5  [class]
undefined4 __thiscall TurnStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82810  TurnStatePl0010::vf24  size=19  [class]
bool TurnStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82850  TurnStatePl0010::vf00  size=6  [class]
undefined * TurnStatePl0010::vf00(void)

{
  return &DAT_01be9e7c;
}

// 00B912D0  TurnStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall TurnStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB1EB0  TurnStatePl0010::SafeCheck  size=118  [class]
void __thiscall TurnStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(uVar2 + 0x416c) = 1;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB1F30  TurnStatePl0010::qteSafeCheck  size=125  [class]
void TurnStatePl0010::qteSafeCheck(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  StateMachineNode::qteSafeCheck(param_1);
  return;
}

// 00BB1FB0  TurnStatePl0010::vf20  size=121  [class]
undefined4 TurnStatePl0010::vf20(undefined4 *param_1)

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
    uRam0000416c = 0;
    return 1;
  }
  puVar4 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar4);
  *(undefined4 *)((-(uint)(iVar2 != 0) & (uint)piVar1) + 0x416c) = 0;
  return 1;
}

// 00BCCAD0  TurnStatePl0010::vf14  size=160  [class]
void __thiscall TurnStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
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
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00bb8ae0(param_2,param_1,0x32);
    FUN_00bb8d00(param_2,param_1,0x19,0,1);
  }
  *(undefined4 *)(uVar4 + 0x94) = *(undefined4 *)(uVar3 + 0x74);
  switchD_0080dbae::default();
  *(undefined4 *)(param_1 + 0x34) = 1;
  StateMachineNode::vf14(param_2);
  return;
}

