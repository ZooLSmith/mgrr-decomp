// src/player/pl0010/state/DiveRollStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81350..00BDE500, 9 functions

#include "types.h"

// 00B81350  DiveRollStatePl0010::vf08  size=35  [class]
undefined4 __thiscall DiveRollStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  return 1;
}

// 00B81380  DiveRollStatePl0010::vf18  size=5  [class]
undefined4 __thiscall DiveRollStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81390  DiveRollStatePl0010::vf24  size=19  [class]
bool DiveRollStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B813D0  DiveRollStatePl0010::vf00  size=6  [class]
undefined * DiveRollStatePl0010::vf00(void)

{
  return &DAT_01be9e08;
}

// 00B90F20  DiveRollStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall DiveRollStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAA3F0  DiveRollStatePl0010::vf0C  size=205  [class]
void __thiscall DiveRollStatePl0010::vf0C(int param_1,undefined4 *param_2)

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
    FUN_00aa3f60(0x30);
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    FUN_00aa92c0(3);
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x4170) = 1;
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAA4C0  DiveRollStatePl0010::vf20  size=171  [class]
undefined4 DiveRollStatePl0010::vf20(undefined4 *param_1)

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
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCA190  DiveRollStatePl0010::vf14  size=680  [class]
void __thiscall DiveRollStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    local_24 = param_2;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    local_24 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar1 = (int *)local_24[3];
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  bVar3 = false;
  iVar4 = FUN_00a94db0(0x30);
  if (iVar4 != 0) {
    if (*(int *)(*(int *)(uVar5 + 0x764) + 0x104) != 0) {
      *(undefined4 *)(*(int *)(uVar5 + 0x764) + 0x104) = 0;
    }
    iVar4 = FUN_008e2740();
    if ((iVar4 != 0) ||
       ((*(int *)(uVar5 + 0x41e0) != 0 &&
        (*(float *)(uVar5 + 0x41e4) < *(float *)(*(int *)(uVar5 + 0x40d4) + 0x160))))) {
      uVar7 = 0x32;
    }
    else {
      local_24[5] = 1;
      local_24[8] = *(undefined4 *)(uVar5 + 0x560);
      local_24[9] = *(undefined4 *)(uVar5 + 0x564);
      local_24[10] = *(undefined4 *)(uVar5 + 0x568);
      local_24[0xb] = *(undefined4 *)(uVar5 + 0x56c);
      FUN_008e0c00(uVar5 + 0x560);
      uVar7 = 0x31;
    }
    FUN_00aa3f60(uVar7);
    bVar3 = true;
  }
  iVar4 = FUN_00a94db0(0x32);
  if (iVar4 == 0) {
    if (!bVar3) goto switchD_00bca304_caseD_6;
  }
  else {
    FUN_00bb8d00(param_2,param_1,0x19,0,1);
    iVar4 = FUN_008e2740();
    if ((iVar4 == 0) &&
       ((*(int *)(uVar5 + 0x41e0) == 0 ||
        (*(float *)(*(int *)(uVar5 + 0x40d4) + 0x160) <= *(float *)(uVar5 + 0x41e4))))) {
      FUN_00d82510(0xe,100);
    }
  }
  uVar7 = FUN_00b8b610();
  switch(uVar7) {
  case 1:
    uVar7 = 0x15;
    break;
  case 2:
    uVar7 = 0x17;
    break;
  case 3:
    uVar7 = 0x18;
    break;
  case 4:
    uVar7 = 0x16;
    break;
  case 5:
    uVar7 = 0x10;
    break;
  default:
    goto switchD_00bca304_caseD_6;
  case 8:
    uVar7 = 0x14;
    break;
  case 9:
    uVar7 = 0x25;
    break;
  case 0xb:
    uVar7 = 0x2b;
    break;
  case 0xc:
    uVar7 = 0xd;
    break;
  case 0xd:
    uVar7 = 9;
    break;
  case 0x10:
    uVar7 = 0x26;
  }
  FUN_00d82510(uVar7,100);
switchD_00bca304_caseD_6:
  iVar4 = FUN_00a9f760(0x31);
  if (iVar4 != 0) {
    iVar4 = FUN_008e2740();
    if ((iVar4 == 0) &&
       ((*(int *)(uVar5 + 0x41e0) == 0 ||
        (*(float *)(*(int *)(uVar5 + 0x40d4) + 0x160) <= *(float *)(uVar5 + 0x41e4))))) {
      FUN_00b8ad30(&local_20,
                   SQRT((float)local_24[10] * (float)local_24[10] +
                        (float)local_24[8] * (float)local_24[8]));
      fVar2 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x164) * *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x30) = fVar2;
      local_20 = local_20 * fVar2;
      local_1c = local_1c * fVar2;
      local_18 = local_18 * fVar2;
      local_14 = fVar2 * local_14;
      FUN_008e0c30(&local_20);
      StateMachineNode::vf14(param_2);
      return;
    }
    FUN_00aa3f60(0x32);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDE500  DiveRollStatePl0010::vf10  size=197  [class]
void __thiscall DiveRollStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  iVar4 = FUN_00a95270(0x30,6);
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x2c);
    *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x30);
    *(undefined4 *)(uVar3 + 0x417c) = uVar1;
    *(undefined4 *)(uVar3 + 0x4184) = 0;
    FUN_00b8af00();
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

