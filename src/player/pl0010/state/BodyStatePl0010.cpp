// src/player/pl0010/state/BodyStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B80FE0..00BA95E0, 9 functions

#include "mgrr.h"
#include "BodyStatePl0010.h"

// 00B80FE0  BodyStatePl0010::vf0C  size=5  [class]
void __thiscall BodyStatePl0010::vf0C(int param_1,undefined4 param_2)

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

// 00B80FF0  BodyStatePl0010::thunk_vf10  size=5  [class]
undefined4 __thiscall BodyStatePl0010::thunk_vf10(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  return 1;
}

// 00B81000  BodyStatePl0010::vf14  size=5  [class]
undefined4 __thiscall BodyStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B81010  BodyStatePl0010::vf18  size=5  [class]
undefined4 __thiscall BodyStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81020  BodyStatePl0010::vf20  size=19  [class]
bool BodyStatePl0010::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 00B81040  BodyStatePl0010::vf24  size=19  [class]
bool BodyStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81080  BodyStatePl0010::vf00  size=6  [class]
undefined * BodyStatePl0010::vf00(void)

{
  return &DAT_01be9df8;
}

// 00B90CA0  BodyStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall BodyStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA95E0  BodyStatePl0010::vf08  size=175  [class]
undefined4 BodyStatePl0010::vf08(undefined4 *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar3 = StateMachineNode::vf08(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar4 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  fVar1 = *(float *)(*(int *)(uVar4 + 0x40d4) + 0x14c);
  if ((*(float *)(uVar4 + 0xd28) <= fVar1 * fVar1) ||
     ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe48)) == 0)) {
    uVar7 = 0x11;
  }
  else {
    uVar7 = 10;
  }
  uVar5 = (*(code *)**(undefined4 **)param_1[1])(uVar7,param_1);
  FUN_00d82bf0(uVar5,uVar7);
  return 1;
}

