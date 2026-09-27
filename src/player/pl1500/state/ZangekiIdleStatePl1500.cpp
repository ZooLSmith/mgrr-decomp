// src/player/pl1500/state/ZangekiIdleStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4710..008CBB00, 9 functions

#include "mgrr.h"
#include "ZangekiIdleStatePl1500.h"

// 008A4710  ZangekiIdleStatePl1500::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiIdleStatePl1500::thunk_vf14(int param_1,undefined4 param_2)

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

// 008A4720  ZangekiIdleStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiIdleStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4730  ZangekiIdleStatePl1500::vf24  size=19  [class]
bool ZangekiIdleStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4770  ZangekiIdleStatePl1500::vf00  size=6  [class]
undefined * ZangekiIdleStatePl1500::vf00(void)

{
  return &DAT_01b35bbc;
}

// 008AA150  ZangekiIdleStatePl1500::SafeCheck  size=139  [class]
void __thiscall ZangekiIdleStatePl1500::SafeCheck(int param_1,undefined4 *param_2)

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
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
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
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008AA1E0  ZangekiIdleStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIdleStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B3E60  ZangekiIdleStatePl1500::vf20  size=167  [class]
undefined4 __thiscall ZangekiIdleStatePl1500::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a92f90();
  if ((iVar2 != 0) && (*(int *)(uVar3 + 0x40c8) == 8)) {
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar6 = 0x41200000;
    FUN_00a92f90(uVar5,0x41200000);
    FUN_00808650(uVar5,uVar6);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  return 1;
}

// 008CBA50  ZangekiIdleStatePl1500::vf08  size=175  [class]
void __thiscall ZangekiIdleStatePl1500::vf08(int param_1,undefined4 *param_2)

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
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  uVar3 = FUN_008b8980(param_2);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = 0x134;
  *(undefined4 *)(uVar5 + 0x564) = 0;
  *(undefined4 *)(uVar5 + 0x570) = 0;
  FUN_008c3010(param_2,param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(uVar4 + 0x40bc) = 1;
  return;
}

// 008CBB00  ZangekiIdleStatePl1500::qteSafeCheck  size=261  [class]
void __thiscall ZangekiIdleStatePl1500::qteSafeCheck(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar2 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b90);
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
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar2 + 0x56c) != 0) {
    FUN_00d82510(7,100);
  }
  FUN_008c2e50(param_2);
  FUN_008c3990(param_2,param_1,0x19);
  FUN_008c3ad0(param_2,param_1,0x19);
  FUN_008c3b70(param_2,param_1,0x32,0);
  FUN_008b6fb0(param_2,param_1,0x32);
  FUN_008b7700(param_2,param_1,100);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

