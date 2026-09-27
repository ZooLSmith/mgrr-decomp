// src/player/pl0010/state/ZangekiIdleStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B834A0..00BE3F10, 9 functions

#include "types.h"

// 00B834A0  ZangekiIdleStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiIdleStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B834B0  ZangekiIdleStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiIdleStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B834C0  ZangekiIdleStatePl0010::vf24  size=19  [class]
bool ZangekiIdleStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83500  ZangekiIdleStatePl0010::vf00  size=6  [class]
undefined * ZangekiIdleStatePl0010::vf00(void)

{
  return &DAT_01be9ecc;
}

// 00B91780  ZangekiIdleStatePl0010::vf0C  size=139  [class]
void __thiscall ZangekiIdleStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar4 = &DAT_01b35260;
      (**(code **)(*piVar2 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        FUN_005ca1a0(*(int *)(uVar3 + 0x528) == 0);
      }
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00B91810  ZangekiIdleStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIdleStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB6A70  ZangekiIdleStatePl0010::vf20  size=184  [class]
undefined4 __thiscall ZangekiIdleStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar3 = StateMachineNode::vf20(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = FUN_00a92f90();
  if ((iVar3 != 0) && (*(int *)(uVar4 + 0x40c8) == 8)) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    iVar3 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar3 + 0x98,uVar2,0x41200000);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  return 1;
}

// 00BE3E60  ZangekiIdleStatePl0010::vf08  size=172  [class]
void __thiscall ZangekiIdleStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  uVar3 = FUN_00bbc5f0(param_2);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = 0xeb;
  *(undefined4 *)(uVar5 + 0x564) = 0;
  *(undefined4 *)(uVar5 + 0x570) = 0;
  FUN_00bd6370(param_2,param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(uVar4 + 0x40bc) = 1;
  return;
}

// 00BE3F10  ZangekiIdleStatePl0010::vf10  size=285  [class]
void __thiscall ZangekiIdleStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar2 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar2 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  if (*(int *)(uVar2 + 0x330) == 1) {
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      FUN_00e36ac0(0,0x3f800000);
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar2 + 0x56c) != 0) {
    FUN_00d82510(0x35,100);
  }
  FUN_00bd61b0(param_2);
  FUN_00bd6ca0(param_2,param_1,0x19);
  FUN_00bd6dd0(param_2,param_1,0x19);
  FUN_00bd6eb0(param_2,param_1,0x32,0);
  FUN_00bbad20(param_2,param_1,0x32);
  FUN_00bbb430(param_2,param_1,100);
  iVar1 = *(int *)(param_1 + 0x24);
  if (((iVar1 == 0x31) || (iVar1 == 0x45)) || (iVar1 == 0x46)) {
    FUN_00b8c400();
  }
  StateMachineNode::vf10(param_2);
  return;
}

