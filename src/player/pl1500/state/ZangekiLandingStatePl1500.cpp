// src/player/pl1500/state/ZangekiLandingStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4810..008B41A0, 9 functions

#include "mgrr.h"
#include "ZangekiLandingStatePl1500.h"

// 008A4810  ZangekiLandingStatePl1500::vf0C  size=5  [class]
void __thiscall ZangekiLandingStatePl1500::vf0C(int param_1,undefined4 param_2)

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

// 008A4820  ZangekiLandingStatePl1500::thunk_vf10  size=5  [class]
undefined4 __thiscall ZangekiLandingStatePl1500::thunk_vf10(int param_1,int param_2)

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

// 008A4830  ZangekiLandingStatePl1500::thunk_vf18  size=5  [class]
undefined4 __thiscall ZangekiLandingStatePl1500::thunk_vf18(int param_1,undefined4 param_2)

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

// 008A4840  ZangekiLandingStatePl1500::vf24  size=19  [class]
bool ZangekiLandingStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4880  ZangekiLandingStatePl1500::vf00  size=6  [class]
undefined * ZangekiLandingStatePl1500::vf00(void)

{
  return &DAT_01b35bc4;
}

// 008AA220  ZangekiLandingStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiLandingStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B4030  ZangekiLandingStatePl1500::vf08  size=221  [class]
undefined4 __thiscall ZangekiLandingStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar2 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00aa4080(0x13a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  piVar3[0x224] = 0;
  piVar3[0x225] = 0;
  piVar3[0x226] = 0;
  piVar3[0x227] = 0x3f800000;
  (**(code **)(*piVar3 + 0x314))();
  FUN_008e0af0(1);
  return 1;
}

// 008B4110  ZangekiLandingStatePl1500::vf14  size=129  [class]
void __thiscall ZangekiLandingStatePl1500::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_1 + 0x30) != -1) &&
     (iVar2 = FUN_00a94ce0(*(int *)(param_1 + 0x30)), iVar2 != 0)) {
    FUN_00d82510(9,0x19);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 008B41A0  ZangekiLandingStatePl1500::vf20  size=209  [class]
undefined4 __thiscall ZangekiLandingStatePl1500::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b90;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b90);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x30),0x3f800000);
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(uVar3 + 0x188) = 0;
    *(undefined4 *)(uVar3 + 0x3ec) = 0;
    return 1;
  }
  return 0;
}

