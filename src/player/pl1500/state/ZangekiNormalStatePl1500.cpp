// src/player/pl1500/state/ZangekiNormalStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4940..008CFD90, 9 functions

#include "mgrr.h"
#include "ZangekiNormalStatePl1500.h"

// 008A4940  ZangekiNormalStatePl1500::vf0C  size=5  [class]
void __thiscall ZangekiNormalStatePl1500::vf0C(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

// 008A4950  ZangekiNormalStatePl1500::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiNormalStatePl1500::thunk_vf14(int param_1,undefined4 param_2)

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

// 008A4960  ZangekiNormalStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiNormalStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4970  ZangekiNormalStatePl1500::vf24  size=19  [class]
bool ZangekiNormalStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A49B0  ZangekiNormalStatePl1500::vf00  size=6  [class]
undefined * ZangekiNormalStatePl1500::vf00(void)

{
  return &DAT_01b35bcc;
}

// 008AA260  ZangekiNormalStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiNormalStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B45C0  ZangekiNormalStatePl1500::vf08  size=162  [class]
undefined4 __thiscall ZangekiNormalStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x40c8) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0xb4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  uVar5 = 0xf;
  uVar4 = (*(code *)**(undefined4 **)param_2[1])(0xf,param_2);
  FUN_00d82bf0(uVar4,uVar5);
  return 1;
}

// 008BD720  ZangekiNormalStatePl1500::vf20  size=154  [class]
undefined4 __thiscall ZangekiNormalStatePl1500::vf20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x40c8) = 0;
  FUN_008b8b40(param_2,param_1);
  iVar2 = FUN_008b7810(param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(uVar4 + 0x3ec) = 0xe0001;
  }
  return 1;
}

// 008CFD90  ZangekiNormalStatePl1500::vf10  size=151  [class]
void __thiscall ZangekiNormalStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  iVar2 = FUN_008b7810(param_2);
  if (iVar2 == 0) {
    uVar4 = 0xc2700000;
    uVar1 = 0x42520000;
  }
  else {
    uVar4 = 0xc2200000;
    uVar1 = 0x420c0000;
  }
  FUN_008c2610(param_2,uVar1,uVar4,0,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0x2f4) == 0) {
    FUN_008b7300(param_2);
  }
  FUN_008b82e0(param_2);
  StateMachineNode::vf10(param_2);
  return;
}

