// src/player/pl0010/state/RunStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82410..00BE09A0, 9 functions

#include "mgrr.h"
#include "RunStatePl0010.h"

// 00B82410  RunStatePl0010::vf08  size=45  [class]
undefined4 __thiscall RunStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 00B82440  RunStatePl0010::vf18  size=5  [class]
undefined4 __thiscall RunStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82450  RunStatePl0010::vf24  size=19  [class]
bool RunStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82490  RunStatePl0010::vf00  size=6  [class]
undefined * RunStatePl0010::vf00(void)

{
  return &DAT_01be9e68;
}

// 00B91230  RunStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall RunStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB0D60  RunStatePl0010::vf0C  size=448  [class]
void __thiscall RunStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar7 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar3 != 0) & (uint)piVar1;
    }
    iVar3 = *(int *)(uVar7 + 0x40);
    *(undefined4 *)(uVar7 + 0x38) = 0;
    *(undefined4 *)(uVar7 + 0x3c) = 0;
    *(undefined4 *)(uVar7 + 0x70) = 0;
    *(undefined4 *)(uVar7 + 0x40) = 2;
    FUN_00a8c9b0(0,8,0x3f000000,0);
    *(undefined4 *)(uVar6 + 0x418c) = *(undefined4 *)(uVar6 + 0x4180);
    *(undefined4 *)(uVar6 + 0x5074) = 0;
    *(undefined4 *)(uVar6 + 0x4188) = *(undefined4 *)(uVar6 + 0x417c);
    *(undefined4 *)(uVar6 + 0x4190) = *(undefined4 *)(uVar6 + 0x4184);
    if (*(int *)(param_1 + 0x2c) != 10) {
      iVar2 = FUN_00a95ce0(100);
      if (iVar2 == 0) {
        iVar3 = FUN_00a95ce0(0x6e);
        if (iVar3 == 0) {
          iVar3 = FUN_00a95ce0(0x66);
          if (((iVar3 == 0) && (*(int *)(param_1 + 0x2c) != 0x15)) &&
             (*(int *)(param_1 + 0x2c) != 0x16)) {
            FUN_00aa9280(0x11);
            goto LAB_00bb0f0a;
          }
        }
        FUN_00aa9280(0x13);
        goto LAB_00bb0f0a;
      }
    }
    iVar4 = FUN_00b8afd0(local_20);
    iVar2 = 0x41 - (uint)(iVar4 == 3);
    if (iVar3 == 2) {
      iVar2 = 0x3c - (uint)(iVar4 == 3);
    }
    uVar5 = FUN_00a9f4c0("RunFromDash",0x3daaaaab,0,0);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    FUN_00a9f600(0xffffffff,0,0,0,0,iVar2,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x13,0x3daaaaab,0);
  }
LAB_00bb0f0a:
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB0F20  RunStatePl0010::vf14  size=149  [class]
void RunStatePl0010::vf14(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar2 = FUN_00a94db0(0x11);
  if ((iVar2 != 0) || (iVar2 = FUN_00a94db0(0x12), iVar2 != 0)) {
    uVar3 = FUN_00aa9280(0x15);
    FUN_00a96070(uVar3,0x4000,1);
  }
  StateMachineNode::vf14(param_1);
  return;
}

// 00BB0FC0  RunStatePl0010::vf20  size=136  [class]
undefined4 RunStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BE09A0  RunStatePl0010::vf10  size=693  [class]
void __thiscall RunStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  undefined *puVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar5 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar3 = FUN_008e2740();
  if ((iVar3 == 0) &&
     ((*(int *)(uVar4 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar4 + 0x40d4) + 0x160) <= *(float *)(uVar4 + 0x41e4))))) {
    FUN_00d82510(0xe,100);
  }
  fVar1 = *(float *)(*(int *)(uVar4 + 0x40d4) + 0x14c);
  if ((fVar1 * fVar1 < *(float *)(uVar4 + 0xd28)) &&
     ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe48)) != 0)) {
    *(undefined4 *)(uVar4 + 0x4180) = 0x3e99999a;
    *(undefined4 *)(uVar4 + 0x417c) = 0x3f060a92;
    *(undefined4 *)(uVar4 + 0x4184) = 0;
    FUN_00b8af00();
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    fVar1 = *(float *)(param_1 + 8);
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      fVar1 = 1.0;
    }
    FUN_00a947e0(0,0,0,fVar1);
  }
  fVar1 = *(float *)(*(int *)(uVar4 + 0x40d4) + 0x14c);
  if (*(float *)(uVar4 + 0xd28) <= fVar1 * fVar1) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    fVar1 = *(float *)(*(int *)(uVar4 + 0x764) + 0xfc);
    fVar7 = (float10)hkBaseObject::hkBaseObject_209();
    iVar3 = *(int *)(*(int *)(uVar5 + 0xc0) + 4);
    fVar7 = fVar7 + fVar7 + (float10)fVar1;
    if (((*(int *)(iVar3 + 900) != 0) && ((float10)*(float *)(iVar3 + 0x388) <= fVar7)) &&
       (fVar1 = *(float *)(uVar5 + 8) + *(float *)(param_1 + 0x34),
       *(float *)(param_1 + 0x34) = fVar1, 0.16666667 <= fVar1)) {
      FUN_00d82510(0x16,100);
      fVar7 = (float10)(float)fVar7;
    }
    iVar3 = *(int *)(*(int *)(uVar5 + 0xc0) + 4);
    if ((*(int *)(iVar3 + 0x234) != 0) && ((float10)*(float *)(iVar3 + 0x238) <= fVar7)) {
      *(float *)(param_1 + 0x38) = *(float *)(uVar5 + 8) + *(float *)(param_1 + 0x38);
      FUN_00d82510(0x15,100);
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar5 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  fVar1 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x14c);
  if (fVar1 * fVar1 < *(float *)(uVar5 + 0xd28)) {
    bVar6 = (*(uint *)(uVar5 + 0xe48) & *(uint *)(uVar5 + 0xcf8)) != 0;
  }
  else {
    bVar6 = false;
  }
  iVar3 = -1;
  if (bVar6) {
    if (bVar6) {
      iVar3 = 10;
    }
  }
  else {
    iVar3 = 0x11;
  }
  if (iVar3 != *(int *)(param_1 + 4)) {
    FUN_00d82510(iVar3,0x19);
  }
  FUN_00bd39d0(param_2,param_1,0xc);
  StateMachineNode::vf10(param_2);
  return;
}

