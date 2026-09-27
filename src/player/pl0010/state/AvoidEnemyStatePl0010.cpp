// src/player/pl0010/state/AvoidEnemyStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B80E20..00BDCEA0, 9 functions

#include "mgrr.h"
#include "AvoidEnemyStatePl0010.h"

// 00B80E20  AvoidEnemyStatePl0010::vf08  size=42  [class]
undefined4 __thiscall AvoidEnemyStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}

// 00B80E50  AvoidEnemyStatePl0010::vf18  size=5  [class]
undefined4 __thiscall AvoidEnemyStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B80E60  AvoidEnemyStatePl0010::vf24  size=19  [class]
bool AvoidEnemyStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B80EA0  AvoidEnemyStatePl0010::vf00  size=6  [class]
undefined * AvoidEnemyStatePl0010::vf00(void)

{
  return &DAT_01be9dec;
}

// 00B90C40  AvoidEnemyStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall AvoidEnemyStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA8EF0  AvoidEnemyStatePl0010::SafeCheck  size=251  [class]
void __thiscall AvoidEnemyStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x5088) = 1;
    *(undefined4 *)(uVar2 + 0x508c) = 0;
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x4170) = 1;
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
    *(undefined4 *)(param_1 + 0x30) = 0x52;
    FUN_00aa3f60(0x52);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
      StateMachineNode::SafeCheck(param_2);
      return;
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BA8FF0  AvoidEnemyStatePl0010::vf14  size=179  [class]
void __thiscall AvoidEnemyStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
  if (iVar3 != 0) {
    iVar3 = FUN_008e2740();
    if ((iVar3 != 0) ||
       ((*(int *)(uVar2 + 0x41e0) != 0 &&
        (*(float *)(uVar2 + 0x41e4) < *(float *)(*(int *)(uVar2 + 0x40d4) + 0x160))))) {
      uVar5 = 0x11;
    }
    else {
      uVar5 = 0xe;
    }
    FUN_00d82510(uVar5,100);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BA90B0  AvoidEnemyStatePl0010::vf20  size=207  [class]
undefined4 AvoidEnemyStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar2 = param_1;
  iVar3 = StateMachineNode::vf20(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)puVar2;
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
  if (*(int *)(*(int *)(uVar4 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar4 + 0x4180) = *(undefined4 *)(uVar4 + 0x418c);
  *(undefined4 *)(uVar4 + 0x5088) = 0;
  *(undefined4 *)(uVar4 + 0x508c) = 0;
  *(undefined4 *)(uVar4 + 0x417c) = *(undefined4 *)(uVar4 + 0x4188);
  *(undefined4 *)(uVar4 + 0x4170) = 0;
  *(undefined4 *)(uVar4 + 0x4184) = *(undefined4 *)(uVar4 + 0x4190);
  FUN_00a7c930();
  FUN_00a7c960(&param_1);
  return 1;
}

// 00BDCEA0  AvoidEnemyStatePl0010::qteSafeCheck  size=635  [class]
void __thiscall AvoidEnemyStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  float10 fVar5;
  undefined *puVar6;
  int *local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_38 = *(int **)(uVar3 + 0xc);
  if (local_38 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*local_38 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar6);
    piVar4 = (int *)(-(uint)(iVar1 != 0) & (uint)local_38);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar1 = FUN_00a94db0(0x52);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x30) == 0x53)) {
    FUN_00aa3f60(0x53);
  }
  local_34 = uVar3 + 0x90;
  iVar1 = FUN_00a81330();
  if (((iVar1 == 0) || (iVar1 = FUN_00a7c7e0(), iVar1 == 0)) || (*(int *)(param_1 + 0x30) != 0x52))
  {
    FUN_00a7c930();
    FUN_00a7c960(&local_38);
  }
  else if ((*(float *)(param_1 + 0x3c) <= 0.0) ||
          ((0.0 < *(float *)(param_1 + 0x3c) &&
           (iVar1 = FUN_00a95200(0x52,*(undefined4 *)(param_1 + 0x3c)), iVar1 == 0)))) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x84))();
    uStack_30 = *puVar2;
    uStack_2c = puVar2[1];
    uStack_28 = puVar2[2];
    uStack_24 = puVar2[3];
    iVar1 = FUN_00a7c8a0();
    iVar1 = FUN_00a8eb50(auStack_20,iVar1 + 0x40);
    uStack_2c = *(undefined4 *)(iVar1 + 4);
    (**(code **)(*piVar4 + 0x88))(&uStack_30);
  }
  if (*(int *)(param_1 + 0x30) == 0x52) {
    iVar1 = FUN_00a95630(0x52,0x14);
    if (iVar1 != 0) {
      fVar5 = (float10)FUN_00a95980(0x52);
      fVar5 = (float10)30.0 - fVar5 * (float10)60.0;
      piVar4[0x2ed] = (int)(float)fVar5;
      if ((float)piVar4[0xd15] <= 0.0) {
        piVar4[0xd0f] = (int)(float)fVar5;
        piVar4[0xd10] = 0x3d4ccccd;
      }
      *(float *)(param_1 + 0x3c) = (float)(fVar5 + (float10)20.0);
    }
    iVar1 = FUN_00a95030(0x52,0x14,0x1e);
    if ((iVar1 != 0) && (((byte)DAT_01b7b914 & 0x80) != 0)) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    if ((*(int *)(param_1 + 0x40) != 0) && (iVar1 = FUN_00a95270(0x52,0x1e), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 0x53;
      fVar5 = (float10)FUN_00a95980(0x52);
      FUN_00aa42d0(*(undefined4 *)(param_1 + 0x30),(float)(fVar5 - (float10)0.5));
    }
  }
  else if (((*(int *)(param_1 + 0x30) == 0x53) && (iVar1 = FUN_00a95270(0x53,0x1e), iVar1 != 0)) &&
          (iVar1 = FUN_00b8b5d0(), iVar1 == 1)) {
    FUN_00d82510(10,100);
  }
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

