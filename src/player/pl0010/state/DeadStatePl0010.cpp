// src/player/pl0010/state/DeadStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81280..00B90EF0, 10 functions

#include "mgrr.h"
#include "DeadStatePl0010.h"

// 00B81280  DeadStatePl0010::vf0C  size=5  [class]
void __thiscall DeadStatePl0010::vf0C(int param_1,undefined4 param_2)

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

// 00B81290  DeadStatePl0010::vf14  size=5  [class]
undefined4 __thiscall DeadStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B812A0  DeadStatePl0010::thunk_vf18  size=5  [class]
undefined4 __thiscall DeadStatePl0010::thunk_vf18(int param_1,undefined4 param_2)

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

// 00B812B0  DeadStatePl0010::vf20  size=19  [class]
bool DeadStatePl0010::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 00B812D0  DeadStatePl0010::vf24  size=19  [class]
bool DeadStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B812F0  DeadStatePl0010::DeadStatePl0010  size=33  [class]
undefined4 * __thiscall DeadStatePl0010::DeadStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00B81320  DeadStatePl0010::vf00  size=6  [class]
undefined * DeadStatePl0010::vf00(void)

{
  return &DAT_01be9e04;
}

// 00B90E10  DeadStatePl0010::vf08  size=133  [class]
void DeadStatePl0010::vf08(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = StateMachineNode::vf08(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  if (0.0 < *(float *)(uVar2 + 0x324)) {
    *(undefined4 *)(uVar2 + 0x324) = *(undefined4 *)(uVar2 + 0x328);
  }
  *(undefined4 *)(uVar2 + 0x32c) = 1;
  *(undefined4 *)(uVar2 + 0x2f4) = 0;
  *(undefined4 *)(uVar2 + 0x2f8) = 0;
  *(undefined4 *)(uVar2 + 0x304) = 0;
  *(undefined4 *)(uVar2 + 0x2f0) = 1;
  return;
}

// 00B90EA0  DeadStatePl0010::vf10  size=65  [class]
void DeadStatePl0010::vf10(undefined4 *param_1)

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
  *(undefined4 *)(uVar1 + 0x2f0) = 1;
  StateMachineNode::vf10(param_1);
  return;
}

// 00B90EF0  DeadStatePl0010::vf04  size=39  [class]
undefined4 * __thiscall DeadStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

