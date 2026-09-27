// src/player/pl0010/state/SlipFallStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82680..00BB1B00, 9 functions

#include "mgrr.h"
#include "SlipFallStatePl0010.h"

// 00B82680  SlipFallStatePl0010::vf08  size=19  [class]
bool SlipFallStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B826A0  SlipFallStatePl0010::SafeCheck  size=5  [class]
void __thiscall SlipFallStatePl0010::SafeCheck(int param_1,undefined4 param_2)

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

// 00B826B0  SlipFallStatePl0010::vf18  size=5  [class]
undefined4 __thiscall SlipFallStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B826C0  SlipFallStatePl0010::vf20  size=19  [class]
bool SlipFallStatePl0010::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 00B826E0  SlipFallStatePl0010::vf24  size=19  [class]
bool SlipFallStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82720  SlipFallStatePl0010::vf00  size=6  [class]
undefined * SlipFallStatePl0010::vf00(void)

{
  return &DAT_01be9e74;
}

// 00B91290  SlipFallStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall SlipFallStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB19A0  SlipFallStatePl0010::qteSafeCheck  size=343  [class]
void __thiscall SlipFallStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  undefined *puVar9;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar6 + 0xc);
  if (piVar4 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)piVar4;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  fVar1 = *(float *)(param_1 + 8);
  if (NAN(fVar1) || 0.083333336 < fVar1 == (fVar1 == 0.083333336)) {
    pfVar8 = (float *)FUN_00a925a0(local_20);
    fVar2 = pfVar8[1] * 0.1;
    fVar3 = pfVar8[2] * 0.1;
    fVar5 = pfVar8[3] * 0.1;
    fVar1 = *pfVar8 * 0.1 + *(float *)(uVar6 + 0x50);
  }
  else {
    pfVar8 = (float *)FUN_00a92640(local_20);
    fVar1 = pfVar8[1];
    fVar2 = pfVar8[2];
    fVar3 = pfVar8[3];
    *(float *)(uVar6 + 0x50) = *(float *)(uVar6 + 0x50) + *pfVar8 * 0.1;
    *(float *)(uVar6 + 0x54) = fVar1 * 0.1 + *(float *)(uVar6 + 0x54);
    *(float *)(uVar6 + 0x58) = *(float *)(uVar6 + 0x58) + fVar2 * 0.1;
    *(float *)(uVar6 + 0x5c) = fVar3 * 0.1 + *(float *)(uVar6 + 0x5c);
    pfVar8 = (float *)FUN_00a925a0(local_20);
    fVar2 = pfVar8[1] * 0.05;
    fVar3 = pfVar8[2] * 0.05;
    fVar5 = pfVar8[3] * 0.05;
    fVar1 = *(float *)(uVar6 + 0x50) + *pfVar8 * 0.05;
  }
  *(float *)(uVar6 + 0x50) = fVar1;
  *(float *)(uVar6 + 0x54) = fVar2 + *(float *)(uVar6 + 0x54);
  *(float *)(uVar6 + 0x58) = *(float *)(uVar6 + 0x58) + fVar3;
  *(float *)(uVar6 + 0x5c) = fVar5 + *(float *)(uVar6 + 0x5c);
  switchD_0080dbae::default();
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

// 00BB1B00  SlipFallStatePl0010::vf14  size=216  [class]
void SlipFallStatePl0010::vf14(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
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
  iVar3 = FUN_008e2740();
  if ((iVar3 == 0) &&
     ((*(int *)(uVar2 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar2 + 0x40d4) + 0x160) <= *(float *)(uVar2 + 0x41e4))))) {
    FUN_00d82510(0xe,100);
  }
  if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
    iVar3 = FUN_008e2740();
    if (iVar3 == 0) goto LAB_00bb1bca;
  }
  FUN_00d82510(0x13,100);
LAB_00bb1bca:
  StateMachineNode::vf14(param_1);
  return;
}

