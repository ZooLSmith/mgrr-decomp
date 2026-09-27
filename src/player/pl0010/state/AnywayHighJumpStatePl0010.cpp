// src/player/pl0010/state/AnywayHighJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B80D70..00BDCC40, 9 functions

#include "mgrr.h"
#include "AnywayHighJumpStatePl0010.h"

// 00B80D70  AnywayHighJumpStatePl0010::vf08  size=55  [class]
undefined4 __thiscall AnywayHighJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f4ccccd;
  return 1;
}

// 00B80DB0  AnywayHighJumpStatePl0010::vf18  size=5  [class]
undefined4 __thiscall AnywayHighJumpStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B80DC0  AnywayHighJumpStatePl0010::vf24  size=19  [class]
bool AnywayHighJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B80E00  AnywayHighJumpStatePl0010::vf00  size=6  [class]
undefined * AnywayHighJumpStatePl0010::vf00(void)

{
  return &DAT_01be9de8;
}

// 00B90C20  AnywayHighJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall AnywayHighJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA8CD0  AnywayHighJumpStatePl0010::vf0C  size=330  [class]
void __thiscall AnywayHighJumpStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar3 = *(int **)(uVar6 + 0xc);
    if (piVar3 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar4 != 0) & (uint)piVar3;
    }
    FUN_00aa3f60(0xb3);
    iVar4 = *(int *)(uVar5 + 0x764);
    if (*(int *)(iVar4 + 0x104) != 1) {
      *(undefined4 *)(iVar4 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar5 + 0x418c) = *(undefined4 *)(uVar5 + 0x4180);
    *(undefined4 *)(uVar5 + 0x4188) = *(undefined4 *)(uVar5 + 0x417c);
    *(undefined4 *)(uVar5 + 0x4190) = *(undefined4 *)(uVar5 + 0x4184);
    iVar4 = *(int *)(*(int *)(uVar6 + 0xc0) + 4);
    if (*(int *)(iVar4 + 0x490) == 0) {
      fVar1 = 3.0;
    }
    else {
      fVar1 = *(float *)(iVar4 + 0x46c);
    }
    fVar2 = *(float *)(*(int *)(uVar5 + 0x764) + 0xfc);
    if (*(float *)(iVar4 + 0x548) < 1.0) {
      *(undefined4 *)(param_1 + 0x58) = 0x3f000000;
    }
    FUN_00d83250(param_1 + 0x30,param_1 + 0x34,0x40400000,fVar1 + fVar2,
                 ABS(*(float *)(*(int *)(uVar5 + 0x764) + 0xf4)));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar5 + 0x44);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BA8E20  AnywayHighJumpStatePl0010::vf20  size=200  [class]
undefined4 __thiscall AnywayHighJumpStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
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
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  FUN_008e0b70(*(undefined4 *)(param_1 + 0x5c));
  FUN_008e0ba0(*(undefined4 *)(param_1 + 0x60));
  return 1;
}

// 00BC9690  AnywayHighJumpStatePl0010::vf14  size=294  [class]
void __thiscall AnywayHighJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a94db0(0xb3);
  if ((iVar2 != 0) || (iVar2 = FUN_00a94db0(0xb4), iVar2 != 0)) {
    uVar3 = FUN_00aa3f60(0xb5);
    FUN_00a96070(uVar3,0x80,1);
  }
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (((*(undefined4 *)(uVar4 + 0x30) = 1, *(int *)(uVar5 + 0x41e0) != 0 &&
       (*(float *)(uVar5 + 0x41e4) <= 0.36)) || (iVar2 = FUN_008e2740(), iVar2 != 0)))) {
    FUN_00d82510(0x13,100);
  }
  iVar2 = FUN_00a94db0(0xb5);
  if (((iVar2 != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) &&
     (iVar2 = FUN_00bb90c0(param_2,param_1), iVar2 != 0)) {
    FUN_008e0c00(uVar5 + 0x560);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDCC40  AnywayHighJumpStatePl0010::vf10  size=604  [class]
void __thiscall AnywayHighJumpStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined *puVar9;
  undefined1 auStack_6c [4];
  undefined4 *local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if (param_2 == (undefined4 *)0x0) {
    local_68 = param_2;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar9);
    local_68 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar5 = (int *)local_68[3];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar9);
    piVar5 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar5);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar4 = FUN_00a9f760(0xb5);
  if (iVar4 != 0) {
    fVar1 = *(float *)(piVar5[0x1035] + 0x174);
    piVar5[0x1060] = *(int *)(piVar5[0x1035] + 0x170);
    piVar5[0x105f] = (int)(fVar1 * 0.017453292);
    piVar5[0x1061] = 0;
    FUN_00b8af00();
  }
  local_64 = *(float *)(piVar5[0x1035] + 0xf8) * *(float *)(param_1 + 0x58);
  iVar4 = FUN_00a9f760(0xb5);
  if (iVar4 != 0) {
    *(float *)(param_1 + 0x48) = (float)local_68[2] + *(float *)(param_1 + 0x48);
  }
  if (*(int *)(piVar5[0x109a] + 0x94) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  if (*(int *)(piVar5[0x109a] + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  iVar4 = FUN_00a9f760(0xb5);
  if ((iVar4 != 0) && (iVar4 = FUN_00a95270(0xb5,8), iVar4 != 0)) {
    FUN_00bd3620(param_2,param_1,100);
  }
  if ((0x7fffffff < *(uint *)(param_1 + 0x24)) && (iVar4 = FUN_00a9f760(0xb5), iVar4 != 0)) {
    fVar6 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
    fVar7 = (float10)local_64;
    fVar8 = fVar6 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48) *
            fVar7;
    fVar6 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
    fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48) *
            fVar7;
    fVar1 = *(float *)(param_1 + 0x38);
    fVar7 = (float10)*(float *)(piVar5[0x1d9] + 0xf4) * (float10)(float)local_68[2] *
            (float10)(float)local_68[2] * fVar7 * fVar7 + (float10)*(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x4c) = (float)fVar7;
    fVar2 = *(float *)(param_1 + 0x3c);
    fVar3 = *(float *)(param_1 + 0x48);
    if (!NAN(fVar3) && 0.33333334 < fVar3 != (fVar3 == 0.33333334)) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    *(float *)(param_1 + 0x38) = (float)fVar8;
    *(float *)(param_1 + 0x3c) = (float)fVar6;
    local_60 = 0;
    local_5c = (float)((fVar6 - (float10)fVar2) + fVar7);
    local_58 = (float)(fVar8 - (float10)fVar1);
    FUN_00ddc1d0(local_50,piVar5 + 0x24,5);
    D3DXVec3TransformNormal(&local_60,&local_60,local_50);
    (**(code **)(*piVar5 + 0x70))(auStack_6c);
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

