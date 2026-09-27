// src/player/pl0010/state/ZangekiChanceStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82C00..00BF89B0, 9 functions

#include "mgrr.h"
#include "ZangekiChanceStatePl0010.h"

// 00B82C00  ZangekiChanceStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B82C10  ZangekiChanceStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82C20  ZangekiChanceStatePl0010::vf24  size=19  [class]
bool ZangekiChanceStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82C60  ZangekiChanceStatePl0010::vf00  size=6  [class]
undefined * ZangekiChanceStatePl0010::vf00(void)

{
  return &DAT_01be9e98;
}

// 00B913B0  ZangekiChanceStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiChanceStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BCD120  ZangekiChanceStatePl0010::vf08  size=322  [class]
undefined4 __thiscall ZangekiChanceStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(uVar3 + 0x40c8) = 2;
  *(undefined4 *)(uVar3 + 0x4058) = 0;
  if ((*(int *)(uVar5 + 0x52c) == 0) && (*(int *)(uVar5 + 0x530) == 0)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar5 + 0x4c4) == 0) goto LAB_00bcd242;
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar5 + 0x4c4) = 0;
    pcVar6 = "bgm_Zangeki_Enter";
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar5 + 0x4c4) == 1) goto LAB_00bcd242;
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar5 + 0x4c4) = 1;
    pcVar6 = "bgm_Zangeki_SP_Enter";
  }
  FUN_00e5e1b0(pcVar6);
LAB_00bcd242:
  uVar7 = 0x43;
  uVar4 = (*(code *)**(undefined4 **)param_2[1])(0x43,param_2);
  FUN_00d82bf0(uVar4,uVar7);
  return 1;
}

// 00BCD270  ZangekiChanceStatePl0010::SafeCheck  size=74  [class]
void __thiscall ZangekiChanceStatePl0010::SafeCheck(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00bbc0e0(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BCD2C0  ZangekiChanceStatePl0010::vf20  size=202  [class]
undefined4 __thiscall ZangekiChanceStatePl0010::vf20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_14;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar4 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar3 + 0x341c) = 0;
    *(undefined4 *)(uVar3 + 0x40c8) = 0;
    *(undefined4 *)(uVar3 + 0x4058) = 0;
    if (*(int *)(uVar4 + 0x188) != 0) {
      *(undefined4 *)(uVar3 + 0x890) = 0;
      *(undefined4 *)(uVar3 + 0x894) = 0;
      *(undefined4 *)(uVar3 + 0x898) = 0;
      *(undefined4 *)(uVar3 + 0x89c) = local_14;
    }
    FUN_00bbc7f0(param_2,param_1);
    return 1;
  }
  return 0;
}

// 00BF89B0  ZangekiChanceStatePl0010::qteSafeCheck  size=541  [class]
void __thiscall ZangekiChanceStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  undefined *puVar8;
  
  puVar2 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar6 = *(int **)(uVar3 + 0xc);
  if (piVar6 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar6;
  }
  if (((DAT_01bea090 & 0x80000000) == 0) && (fVar7 = (float10)FUN_00bda020(), (float10)0 == fVar7))
  {
    FUN_00b92be0(param_2,param_1,100,1);
  }
  iVar4 = FUN_00c27610(0x41a00000,1);
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  if (*(float *)(uVar3 + 0x341c) <= 0.0) {
    FUN_00b92be0(param_2,param_1,100,1);
  }
  FUN_00c5bbb0(2);
  FUN_00c5bbb0(0x10);
  FUN_00be6620(param_2,param_1,100,0.0 < *(float *)(param_1 + 0x30),0);
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar5 + 0x2f4) == 0) {
    FUN_00bbb050(param_2);
  }
  FUN_00bbc310(param_2);
  FUN_00bbc000(param_2);
  FUN_00bf24f0(param_2,0x3f800000);
  param_2 = (undefined4 *)0xc2200000;
  iVar4 = FUN_00a7f600(0x2070a);
  if ((iVar4 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
    puVar8 = &DAT_01b351c0;
    (**(code **)(*piVar6 + 4))(&DAT_01b351c0);
    iVar4 = FUN_00dd6d80(puVar8);
    if ((iVar4 != 0) && (iVar4 = FUN_00a8cbe0(0x20016), iVar4 != 0)) {
      param_2 = (undefined4 *)0xc2820000;
    }
  }
  FUN_00bd5f40(puVar2,0x420c0000,param_2,0,0);
  if ((*(float *)(param_1 + 0x30) == 0.0) && ((*(byte *)(uVar3 + 0xcfc) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0x41a00000;
  }
  fVar1 = *(float *)(param_1 + 0x30) - *(float *)(uVar3 + 0x910);
  *(float *)(param_1 + 0x30) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    StateMachineNode::qteSafeCheck(puVar2);
    return;
  }
  StateMachineNode::qteSafeCheck(puVar2);
  return;
}

