// src/player/pl0010/state/OvercomeContainerStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82030..00BDFB70, 10 functions

#include "mgrr.h"
#include "OvercomeContainerStatePl0010.h"

// 00B82030  OvercomeContainerStatePl0010::vf08  size=37  [class]
undefined4 __thiscall OvercomeContainerStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}

// 00B82060  OvercomeContainerStatePl0010::vf18  size=5  [class]
undefined4 __thiscall OvercomeContainerStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82070  OvercomeContainerStatePl0010::vf24  size=19  [class]
bool OvercomeContainerStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B820B0  OvercomeContainerStatePl0010::vf00  size=6  [class]
undefined * OvercomeContainerStatePl0010::vf00(void)

{
  return &DAT_01be9e50;
}

// 00B91170  OvercomeContainerStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall OvercomeContainerStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAF9C0  FUN_00baf9c0  size=561  [callgraph]
void __thiscall FUN_00baf9c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar9 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar6 = *(int *)(uVar9 + 0xc4);
  local_2c = *(float *)(iVar6 + 0x54);
  fVar2 = *(float *)(iVar6 + 0x50) - *(float *)(uVar8 + 0x40);
  fVar3 = local_2c - *(float *)(uVar8 + 0x44);
  fVar4 = *(float *)(iVar6 + 0x58) - *(float *)(uVar8 + 0x48);
  fVar5 = *(float *)(iVar6 + 0x5c) - *(float *)(uVar8 + 0x4c);
  pfVar7 = (float *)FUN_00a92640(local_20);
  if (pfVar7[2] * fVar4 + fVar2 * *pfVar7 + pfVar7[1] * fVar3 <= 0.0) {
    uVar11 = 0xb7;
  }
  else {
    uVar11 = 0xb8;
  }
  FUN_00aa3f60(uVar11);
  local_40 = fVar2;
  local_3c = fVar3;
  local_38 = fVar4;
  local_34 = fVar5;
  if (((fVar2 != 0.0) || (fVar3 != 0.0)) || (fVar4 != 0.0)) {
    fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
  }
  FUN_00a96030(0,0x3f000000);
  FUN_00a95fb0(0);
  if (*(float *)(uVar8 + 0x44) < local_2c) {
    fVar2 = local_2c - *(float *)(uVar8 + 0x44);
    *(float *)(param_1 + 0x30) = fVar2 + fVar2;
  }
  if (*(float *)(param_1 + 0x30) <= 4.0) {
    *(undefined4 *)(param_1 + 0x30) = 0x40800000;
    FUN_00a937e0();
    return;
  }
  FUN_00a937e0();
  return;
}

// 00BAFC00  OvercomeContainerStatePl0010::SafeCheck  size=198  [class]
void __thiscall OvercomeContainerStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
    FUN_008e6c60(0);
    FUN_00baf9c0(param_2);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BAFCD0  OvercomeContainerStatePl0010::vf20  size=196  [class]
undefined4 __thiscall OvercomeContainerStatePl0010::vf20(int param_1,undefined4 *param_2)

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
  FUN_008e6c60(1);
  if (*(int *)(param_1 + 0x24) != 0x1e) {
    FUN_00a93820();
  }
  return 1;
}

// 00BCC000  OvercomeContainerStatePl0010::vf14  size=321  [class]
void __thiscall OvercomeContainerStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_c [12];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  iVar1 = FUN_00a94db0(0xb7);
  if (((iVar1 != 0) || (iVar1 = FUN_00a94db0(0xb8), iVar1 != 0)) ||
     (iVar1 = FUN_00a94db0(0xb5), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar2 = (int *)FUN_00c1bd10();
    piVar2 = (int *)(**(code **)(*piVar2 + 4))(local_c,uVar4,0,0x41f00000,0);
    *(int *)(uVar3 + 0xc4) = *piVar2;
    *(int *)(uVar3 + 200) = piVar2[1];
    *(int *)(uVar3 + 0xcc) = piVar2[2];
    if ((piVar2[1] != 0) && ((*piVar2 != 0 || (piVar2[2] != 0)))) {
      FUN_00baf9c0(param_2);
    }
    if ((*(int *)(uVar3 + 200) == 0) ||
       ((*(int *)(uVar3 + 0xc4) == 0 && (*(int *)(uVar3 + 0xcc) == 0)))) {
      FUN_00bb91f0(param_2,param_1);
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDFB70  OvercomeContainerStatePl0010::qteSafeCheck  size=636  [class]
void __thiscall OvercomeContainerStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  float local_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  piVar4 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_58 = 0.0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    local_58 = (float)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)local_58 + 0xc);
  if (piVar1 != (int *)0x0) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar1);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar3 = *(int *)((int)local_58 + 0xc4);
  fStack_40 = *(float *)(iVar3 + 0x50);
  fStack_4c = *(float *)((int)local_58 + 200);
  fStack_48 = *(float *)((int)local_58 + 0xcc);
  fStack_3c = *(float *)(iVar3 + 0x54);
  fStack_38 = *(float *)(iVar3 + 0x58);
  fStack_34 = *(float *)(iVar3 + 0x5c);
  fVar5 = (float10)FUN_00a8ed10(&fStack_40,piVar4 + 0x10);
  FUN_00a8e960((float)fVar5);
  fStack_50 = fStack_40 - (float)piVar4[0x10];
  fStack_4c = fStack_3c - (float)piVar4[0x11];
  fStack_48 = fStack_38 - (float)piVar4[0x12];
  fStack_44 = fStack_34 - (float)piVar4[0x13];
  fStack_30 = fStack_50;
  fStack_2c = fStack_4c;
  fStack_28 = fStack_48;
  fStack_24 = fStack_44;
  if (((fStack_50 != 0.0) || (fStack_4c != 0.0)) || (fStack_48 != 0.0)) {
    fVar2 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_50,&fStack_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_50 = 0.0;
      fStack_4c = 1.0;
      fStack_48 = 0.0;
    }
  }
  fVar5 = (float10)FUN_00a958c0(0);
  fVar6 = (float10)FUN_00a95680(0);
  fVar5 = (float10)fcos((float10)(float)fVar5 / fVar6);
  (**(code **)(*piVar4 + 0x74))((float)(fVar5 * (float10)*(float *)(param_1 + 0x30) * (float10)0.1))
  ;
  fStack_24 = fStack_34 * local_58;
  fStack_20 = fStack_30 * local_58;
  fStack_1c = fStack_2c * local_58;
  fStack_18 = local_58 * fStack_28;
  (**(code **)(*piVar4 + 0x70))(&fStack_24);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

