// src/player/pl0010/state/OvercomeEnemyStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B820E0..00BE02E0, 17 functions

#include "mgrr.h"
#include "OvercomeEnemyStatePl0010.h"

// 00B820E0  OvercomeEnemyStatePl0010::vf08  size=49  [class]
undefined4 __thiscall OvercomeEnemyStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 1;
}

// 00B82120  OvercomeEnemyStatePl0010::vf24  size=19  [class]
bool OvercomeEnemyStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82140  OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010  size=33  [class]
undefined4 * __thiscall
OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00B82170  OvercomeEnemyStatePl0010::vf00  size=6  [class]
undefined * OvercomeEnemyStatePl0010::vf00(void)

{
  return &DAT_01be9e54;
}

// 00B91190  OvercomeEnemyStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall OvercomeEnemyStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAFDA0  FUN_00bafda0  size=177  [callgraph]
void __thiscall FUN_00bafda0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
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
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(float *)(param_1 + 0x44) = 1.6 / *(float *)(*(int *)(uVar2 + 0x40d4) + 0xd4);
  FUN_00aa3f60(0xa8);
  *(undefined4 *)(param_1 + 0x30) = 0xab;
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar3 = *(int *)(uVar2 + 0x764);
  if (*(int *)(iVar3 + 0x104) != 1) {
    *(undefined4 *)(iVar3 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
  }
  return;
}

// 00BAFE60  FUN_00bafe60  size=157  [callgraph]
void __thiscall FUN_00bafe60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
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
  if ((*(int *)(param_1 + 0x4c) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
    if (((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) &&
       (iVar3 = FUN_008e2740(), iVar3 == 0)) {
      return;
    }
    FUN_00d82510(0x13,100);
  }
  return;
}

// 00BAFF00  FUN_00baff00  size=302  [callgraph]
void __thiscall FUN_00baff00(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
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
  iVar4 = *(int *)(uVar3 + 0x764);
  if (*(int *)(iVar4 + 0x104) != 1) {
    *(undefined4 *)(iVar4 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
  }
  FUN_008e6c60(0);
  *(undefined4 *)(uVar3 + 0x418c) = *(undefined4 *)(uVar3 + 0x4180);
  uVar6 = 7;
  *(undefined4 *)(uVar3 + 0x4188) = *(undefined4 *)(uVar3 + 0x417c);
  *(undefined4 *)(uVar3 + 0x4190) = *(undefined4 *)(uVar3 + 0x4184);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00a81330(7);
  FUN_00a7c8a0();
  iVar4 = FUN_00a12210(uVar6);
  fVar1 = *(float *)(iVar4 + 0x44);
  FUN_00aa3f60(0xb5);
  FUN_00a96030(0,0x3e800000);
  FUN_00a95fb0(0);
  if (*(float *)(uVar3 + 0x44) < fVar1) {
    *(float *)(param_1 + 0x58) = fVar1 - *(float *)(uVar3 + 0x44);
    return;
  }
  return;
}

// 00BB0030  FUN_00bb0030  size=481  [callgraph]
void __thiscall FUN_00bb0030(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar1 + 0xc);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  uVar8 = 7;
  FUN_00a81330(7);
  FUN_00a7c8a0();
  iVar2 = FUN_00a12210(uVar8);
  local_20 = *(undefined4 *)(iVar2 + 0x40);
  local_1c = *(undefined4 *)(iVar2 + 0x44);
  local_18 = *(undefined4 *)(iVar2 + 0x48);
  local_14 = *(undefined4 *)(iVar2 + 0x4c);
  fVar6 = (float10)FUN_00a8ed10(&local_20,piVar5 + 0x10);
  FUN_00a8e960((float)fVar6);
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(*piVar5 + 0x6c))(&local_20);
    iVar2 = *piVar5;
    uVar8 = 7;
    FUN_00a81330(7);
    FUN_00a7c8a0();
    iVar3 = FUN_00a12210(uVar8);
    (**(code **)(iVar2 + 0x88))(iVar3 + 0x90);
    switchD_0080dbae::default();
  }
  iVar2 = FUN_00a94db0(0xb5);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
    FUN_008e6c60(1);
    FUN_00aa3f60(0x56);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      iVar3 = (**(code **)(*piVar4 + 0x14c))(0x24,piVar5[0x13c]);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x150))(0x24,piVar5[0x13c]);
        iVar3 = FUN_00a7c8a0();
        FUN_00b7b380(iVar2,iVar3 + 0x40,1);
      }
    }
  }
  if (((byte)DAT_01b7b914 & 0x40) != 0) {
    iVar2 = FUN_00a9f760(0x56);
    uVar8 = 0x57;
    if (iVar2 == 0) {
      iVar2 = FUN_00a9f760(0x57);
      uVar8 = 0x58;
      if (iVar2 == 0) {
        iVar2 = FUN_00a9f760(0x58);
        if (iVar2 == 0) goto LAB_00bb01f0;
        uVar8 = 0x59;
      }
    }
    FUN_00aa3f60(uVar8);
  }
LAB_00bb01f0:
  iVar2 = FUN_00a94db0(0x59);
  if (iVar2 != 0) {
    FUN_00d82510(0x11,100);
  }
  return;
}

// 00BB0220  OvercomeEnemyStatePl0010::SafeCheck  size=282  [class]
void __thiscall OvercomeEnemyStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar4 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar2 + 0x418c) = *(undefined4 *)(uVar2 + 0x4180);
    *(undefined4 *)(uVar2 + 0x5088) = 1;
    *(undefined4 *)(uVar2 + 0x4170) = 1;
    *(undefined4 *)(uVar2 + 0x4188) = *(undefined4 *)(uVar2 + 0x417c);
    *(undefined4 *)(uVar2 + 0x508c) = 0;
    *(undefined4 *)(uVar2 + 0x4190) = *(undefined4 *)(uVar2 + 0x4184);
    FUN_00a7c960(*(int *)(*(int *)(uVar4 + 0xc0) + 4) + 0xc30);
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (*(int *)(iVar3 + 0x4b4) == 0x20010) {
      FUN_00bafda0(param_2);
      StateMachineNode::SafeCheck(param_2);
      return;
    }
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (*(int *)(iVar3 + 0x4b4) == 0x20030) {
      FUN_00baff00(param_2);
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BB0340  OvercomeEnemyStatePl0010::vf18  size=87  [class]
void OvercomeEnemyStatePl0010::vf18(undefined4 param_1)

{
  int iVar1;
  
  FUN_00a81330();
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x4b4) == 0x20010) {
    FUN_00bafe60(param_1);
    StateMachineNode::vf18(param_1);
    return;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  StateMachineNode::vf18(param_1);
  return;
}

// 00BB03A0  OvercomeEnemyStatePl0010::vf20  size=191  [class]
undefined4 OvercomeEnemyStatePl0010::vf20(undefined4 *param_1)

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
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x5088) = 0;
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x508c) = 0;
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  FUN_008e6c60(1);
  return 1;
}

// 00BCC150  FUN_00bcc150  size=152  [callgraph]
void __thiscall FUN_00bcc150(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
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
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      iVar3 = FUN_00bb90c0(param_2,param_1);
      if (iVar3 == 0) {
        FUN_008e0c00(uVar2 + 0x560);
      }
    }
  }
  return;
}

// 00BCC1F0  OvercomeEnemyStatePl0010::vf14  size=107  [class]
void OvercomeEnemyStatePl0010::vf14(undefined4 param_1)

{
  int iVar1;
  
  FUN_00a81330();
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x4b4) == 0x20010) {
    FUN_00bcc150(param_1);
    StateMachineNode::vf14(param_1);
    return;
  }
  FUN_00a81330();
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x4b4) == 0x20030) {
    FUN_00bb0030(param_1);
  }
  StateMachineNode::vf14(param_1);
  return;
}

// 00BDFDF0  FUN_00bdfdf0  size=669  [callgraph]
void __thiscall FUN_00bdfdf0(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar2 + 0xc);
  if (piVar4 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  iVar3 = FUN_00a94db0(0xa8);
  if (iVar3 != 0) {
    FUN_00aa3f60(0xaa);
    local_20 = 0x3f800000;
    local_1c = *(undefined4 *)(param_1 + 0x44);
    local_18 = 0x3f800000;
    FUN_00a95ff0(&local_20);
  }
  iVar3 = FUN_00a94db0(0xaa);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x4c;
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      iVar5 = (**(code **)(*piVar4 + 0x14c))(0x24,*(undefined4 *)(uVar2 + 0x4f0));
      if (iVar5 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x150))(0x24,*(undefined4 *)(uVar2 + 0x4f0));
        iVar5 = FUN_00a7c8a0();
        FUN_00b7b380(iVar3,iVar5 + 0x40,1);
      }
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(uVar2 + 0xbb4) = 0x41c80000;
    if (*(float *)(uVar2 + 0x3454) <= 0.0) {
      *(undefined4 *)(uVar2 + 0x343c) = 0x41c80000;
      *(undefined4 *)(uVar2 + 0x3440) = 0x3e4ccccd;
    }
  }
  iVar3 = FUN_00a9f760(0xab);
  if (iVar3 != 0) {
    fVar1 = *(float *)(*(int *)(uVar2 + 0x40d4) + 0x174);
    *(undefined4 *)(uVar2 + 0x4180) = *(undefined4 *)(*(int *)(uVar2 + 0x40d4) + 0x170);
    *(float *)(uVar2 + 0x417c) = fVar1 * 0.017453292;
    *(undefined4 *)(uVar2 + 0x4184) = 0;
    FUN_00b8af00();
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x4c;
      FUN_00aa42d0(0x4c,*(undefined4 *)(param_1 + 0x3c));
      *(float *)(uVar2 + 0xbb4) = 25.0 - *(float *)(param_1 + 0x3c) * 60.0;
      if (*(float *)(uVar2 + 0x3454) <= 0.0) {
        *(float *)(uVar2 + 0x343c) = 25.0 - *(float *)(param_1 + 0x3c) * 60.0;
        *(undefined4 *)(uVar2 + 0x3440) = 0x3e4ccccd;
      }
    }
  }
  iVar3 = FUN_00a95270(0xab,0x14);
  if (iVar3 != 0) {
    FUN_00bd3620(param_2,param_1,100);
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (iVar3 = FUN_00a95270(0xab,0xf), iVar3 != 0)) {
    *(undefined4 *)(uVar2 + 0x508c) = 1;
  }
  iVar3 = FUN_00a9f760(0xab);
  if ((iVar3 != 0) && (((byte)DAT_01b7b914 & 0x80) != 0)) {
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    FUN_00bd3620(param_2,param_1,100);
  }
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  return;
}

// 00BE0090  FUN_00be0090  size=590  [callgraph]
void __thiscall FUN_00be0090(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float unaff_EBX;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar2 + 0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  uVar8 = 7;
  FUN_00a81330(7);
  FUN_00a7c8a0();
  iVar3 = FUN_00a12210(uVar8);
  local_50 = *(float *)(iVar3 + 0x40);
  local_4c = *(float *)(iVar3 + 0x44);
  local_48 = *(float *)(iVar3 + 0x48);
  local_44 = *(float *)(iVar3 + 0x4c);
  fVar5 = (float10)FUN_00a8ed10(&local_50,piVar4 + 0x10);
  FUN_00a8e960((float)fVar5);
  local_40 = local_50 - (float)piVar4[0x10];
  local_3c = local_4c - (float)piVar4[0x11];
  local_38 = local_48 - (float)piVar4[0x12];
  local_34 = local_44 - (float)piVar4[0x13];
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_24 = local_34;
  if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
    fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
  }
  fVar5 = (float10)FUN_00a958c0(0);
  fVar6 = (float10)FUN_00a95680(0);
  fVar5 = (float10)fcos((float10)(float)fVar5 / fVar6);
  (**(code **)(*piVar4 + 0x74))((float)(fVar5 * (float10)*(float *)(param_1 + 0x58) * (float10)0.1))
  ;
  local_24 = local_34 * unaff_EBX;
  fStack_20 = local_30 * unaff_EBX;
  fStack_1c = local_2c * unaff_EBX;
  fStack_18 = unaff_EBX * local_28;
  (**(code **)(*piVar4 + 0x70))(&local_24);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  return;
}

// 00BE02E0  OvercomeEnemyStatePl0010::qteSafeCheck  size=210  [class]
void OvercomeEnemyStatePl0010::qteSafeCheck(undefined4 *param_1)

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
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if (*(int *)(iVar2 + 0x4b4) != 0x20010) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (*(int *)(iVar2 + 0x4b4) == 0x20030) {
      FUN_00be0090(param_1);
    }
    StateMachineNode::qteSafeCheck(param_1);
    return;
  }
  FUN_00bdfdf0(param_1);
  StateMachineNode::qteSafeCheck(param_1);
  return;
}

