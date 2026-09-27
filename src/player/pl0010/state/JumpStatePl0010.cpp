// src/player/pl0010/state/JumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81760..00BDEE30, 9 functions

#include "mgrr.h"
#include "JumpStatePl0010.h"

// 00B81760  JumpStatePl0010::vf24  size=19  [class]
bool JumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B817A0  JumpStatePl0010::vf00  size=6  [class]
undefined * JumpStatePl0010::vf00(void)

{
  return &DAT_01be9e20;
}

// 00B90FE0  JumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall JumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAB8B0  JumpStatePl0010::vf08  size=168  [class]
undefined4 __thiscall JumpStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar3 = StateMachineNode::vf08(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar4 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  uVar1 = *(undefined4 *)(uVar4 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return 1;
}

// 00BAB960  JumpStatePl0010::vf0C  size=246  [class]
void __thiscall JumpStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar6 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar5 + 0xc);
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
    *(undefined4 *)(uVar5 + 0x70) = 0;
    *(undefined4 *)(uVar4 + 0x5074) = 0;
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    *(undefined4 *)(param_1 + 0x98) = 0x5c;
    fVar1 = *(float *)(*(int *)(uVar4 + 0x40d4) + 0x14c);
    if ((fVar1 * fVar1 < *(float *)(uVar4 + 0xd28)) &&
       ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe48)) != 0)) {
      *(undefined4 *)(param_1 + 0x98) = 0x5b;
    }
    FUN_00aa9280(*(undefined4 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BABA60  JumpStatePl0010::vf14  size=344  [class]
void __thiscall JumpStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if ((*(int *)(param_1 + 0x90) == 1) &&
     ((iVar4 = *(int *)(param_1 + 0x98), iVar4 == 0x5b || (iVar4 == 0x5c)))) {
    iVar4 = FUN_00a94db0(iVar4);
    if (iVar4 != 0) {
      FUN_00b8ae90(param_1 + 0x70);
      FUN_008e0c00(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x98) = 0x5f;
      fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
      if ((fVar1 * fVar1 < *(float *)(uVar3 + 0xd28)) &&
         ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) != 0)) {
        *(undefined4 *)(param_1 + 0x98) = 0x5e;
      }
      uVar5 = FUN_00aa9280(*(undefined4 *)(param_1 + 0x98));
      FUN_00a96070(uVar5,0x80,1);
      *(undefined4 *)(param_1 + 0x90) = 2;
    }
  }
  iVar4 = *(int *)(param_1 + 0x98);
  if ((iVar4 == 0x5e) || (iVar4 == 0x5f)) {
    iVar4 = FUN_00a94db0(iVar4);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x98);
  if ((iVar4 == 0x5e) || (iVar4 == 0x5f)) {
    iVar4 = FUN_00a95270(iVar4,0xf);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 3;
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BABBC0  JumpStatePl0010::vf18  size=220  [class]
void __thiscall JumpStatePl0010::vf18(int param_1,undefined4 *param_2)

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
  if (0.001 < *(float *)(param_1 + 0x80) - *(float *)(uVar2 + 0x44)) {
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) goto LAB_00babc8e;
  if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
    iVar3 = FUN_008e2740();
    if (iVar3 != 0) goto LAB_00babc6b;
  }
  else {
LAB_00babc6b:
    FUN_00d82510(0x13,100);
  }
  if (*(float *)(uVar2 + 0x44) < *(float *)(param_1 + 0x30)) {
    FUN_00d82510(0xe,100);
  }
LAB_00babc8e:
  StateMachineNode::vf18(param_2);
  return;
}

// 00BABCA0  JumpStatePl0010::vf20  size=136  [class]
undefined4 JumpStatePl0010::vf20(undefined4 *param_1)

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

// 00BDEE30  JumpStatePl0010::vf10  size=867  [class]
void __thiscall JumpStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar4 + 0xc);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  *(int *)(param_1 + 0x80) = piVar5[0x11];
  fVar1 = *(float *)(piVar5[0x1035] + 0x16c);
  piVar5[0x1060] = *(int *)(piVar5[0x1035] + 0x168);
  piVar5[0x105f] = (int)(fVar1 * 0.017453292);
  piVar5[0x1061] = 0;
  FUN_00b8af00();
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar2 = FUN_00a9f760(0x5e);
  if (iVar2 == 0) {
    FUN_00a9f760(0x5f);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00bd3620(param_2,param_1,100);
  }
  if ((1 < *(int *)(param_1 + 0x90)) && (0x7fffffff < *(uint *)(param_1 + 0x24))) {
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(uVar4 + 8);
    FUN_00b8ae90(&local_30);
    if ((local_30 == 0.0) && ((local_2c == 0.0 && (local_28 == 0.0)))) {
      local_30 = *(float *)(param_1 + 0x70);
      local_2c = *(float *)(param_1 + 0x74);
      local_28 = *(float *)(param_1 + 0x78);
      local_24 = *(float *)(param_1 + 0x7c);
      *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) * 0.8;
      *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) * 0.8;
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) * 0.8;
      fVar1 = *(float *)(param_1 + 0x7c) * 0.8;
    }
    else {
      *(float *)(param_1 + 0x70) = local_30;
      *(float *)(param_1 + 0x74) = local_2c;
      *(float *)(param_1 + 0x78) = local_28;
      fVar1 = local_24;
    }
    *(float *)(param_1 + 0x7c) = fVar1;
    if (*(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_008e0be0();
      *(undefined4 *)(param_1 + 0x94) = 1;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      fVar1 = 0.36666667 - *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x60) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      fVar1 = *(float *)(param_1 + 0x60);
      if (!NAN(fVar1) && 0.16666667 < fVar1 != (fVar1 == 0.16666667)) {
        *(undefined4 *)(param_1 + 0x60) = 0x3e2aaaab;
      }
      if (*(int *)(param_1 + 0x84) == 0) {
        *(undefined4 *)(param_1 + 100) = 1;
      }
    }
    fVar1 = *(float *)(param_1 + 0x60) - *(float *)(uVar4 + 8);
    *(float *)(param_1 + 0x60) = fVar1;
    if ((0.0 <= fVar1) && (*(int *)(param_1 + 0x84) == 0)) {
      pfVar3 = (float *)FUN_00a8bac0(local_20,-(*(float *)(uVar4 + 8) *
                                                *(float *)(piVar5[0x1d9] + 0xf4) *
                                               *(float *)(uVar4 + 8)));
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *pfVar3;
      *(float *)(param_1 + 0x54) = pfVar3[1] + *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x58) = pfVar3[2] + *(float *)(param_1 + 0x58);
      *(float *)(param_1 + 0x5c) = pfVar3[3] + *(float *)(param_1 + 0x5c);
    }
    fVar1 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 100) != 0) {
      pfVar3 = (float *)FUN_00a8bac0(local_20,fVar1 - *(float *)(param_1 + 0x40));
      local_30 = *(float *)(param_1 + 0x50) + *pfVar3 + local_30;
      local_2c = *(float *)(param_1 + 0x54) + pfVar3[1] + local_2c;
      local_28 = *(float *)(param_1 + 0x58) + pfVar3[2] + local_28;
      local_24 = *(float *)(param_1 + 0x5c) + pfVar3[3] + local_24;
    }
    *(float *)(param_1 + 0x40) = fVar1;
    (**(code **)(*piVar5 + 0x70))(&local_30);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    if (((piVar5[0x1078] != 0) && ((float)piVar5[0x1079] <= 0.36)) ||
       (iVar2 = FUN_008e2740(), iVar2 != 0)) {
      FUN_00d82510(0x13,100);
    }
    if ((float)piVar5[0x11] < *(float *)(param_1 + 0x30)) {
      FUN_00d82510(0xe,100);
    }
  }
  StateMachineNode::vf10(param_2);
  return;
}

