// src/player/pl0010/state/ZangekiHugeCutDownStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83120..00BE32A0, 10 functions

#include "mgrr.h"
#include "ZangekiHugeCutDownStatePl0010.h"

// 00B83120  ZangekiHugeCutDownStatePl0010::SafeCheck  size=5  [class]
void __thiscall ZangekiHugeCutDownStatePl0010::SafeCheck(int param_1,undefined4 param_2)

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

// 00B83130  ZangekiHugeCutDownStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiHugeCutDownStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B83140  ZangekiHugeCutDownStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiHugeCutDownStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B83150  ZangekiHugeCutDownStatePl0010::vf24  size=19  [class]
bool ZangekiHugeCutDownStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83190  ZangekiHugeCutDownStatePl0010::vf00  size=6  [class]
undefined * ZangekiHugeCutDownStatePl0010::vf00(void)

{
  return &DAT_01be9eb4;
}

// 00B916C0  ZangekiHugeCutDownStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiHugeCutDownStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB60B0  ZangekiHugeCutDownStatePl0010::vf08  size=19  [class]
void ZangekiHugeCutDownStatePl0010::vf08(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = StateMachineNode::vf08(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar6);
  }
  iVar1 = FUN_00a7f600(0x20600);
  if (iVar1 == 0) goto LAB_00bb6196;
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
LAB_00bb615c:
    fVar5 = (float10)1.0;
  }
  else {
    puVar6 = &DAT_01b351a0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 == 0) goto LAB_00bb615c;
    fVar5 = (float10)FUN_0059fa90();
  }
  FUN_00aa4520(0xf2,iVar1,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,(float)fVar5);
LAB_00bb6196:
  *(undefined4 *)(uVar4 + 0x3f8) = 0;
  *(undefined4 *)(uVar4 + 0x2f8) = 1;
  return;
}

// 00BB60C3  FUN_00bb60c3  size=237  [between]
void FUN_00bb60c3(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  float10 fVar5;
  undefined *puVar6;
  
  if (unaff_EDI == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*unaff_EDI)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)unaff_EDI;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar6);
  }
  iVar1 = FUN_00a7f600(0x20600);
  if (iVar1 == 0) goto LAB_00bb6196;
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
LAB_00bb615c:
    fVar5 = (float10)1.0;
  }
  else {
    puVar6 = &DAT_01b351a0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 == 0) goto LAB_00bb615c;
    fVar5 = (float10)FUN_0059fa90();
  }
  FUN_00aa4520(0xf2,iVar1,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,(float)fVar5);
LAB_00bb6196:
  *(undefined4 *)(uVar4 + 0x3f8) = 0;
  *(undefined4 *)(uVar4 + 0x2f8) = 1;
  return;
}

// 00BB61B0  ZangekiHugeCutDownStatePl0010::vf20  size=171  [class]
undefined4 ZangekiHugeCutDownStatePl0010::vf20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 != 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar3 = &DAT_01be9ef4;
      (**(code **)*param_1)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar3);
      uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    if (*(int **)(uVar2 + 0xc) != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(**(int **)(uVar2 + 0xc) + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar3);
    }
    *(undefined4 *)(uVar2 + 0x2f8) = 0;
    iVar1 = FUN_00a92f90();
    if (iVar1 != 0) {
      iVar1 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar1 + 0x98,0,0);
    }
    return 1;
  }
  return 0;
}

// 00BE32A0  ZangekiHugeCutDownStatePl0010::qteSafeCheck  size=391  [class]
void __thiscall ZangekiHugeCutDownStatePl0010::qteSafeCheck(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar5);
  }
  *(undefined4 *)(uVar4 + 0x3f8) = 0;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00d82510(0x3c,100);
  }
  iVar1 = FUN_00a8c760(2);
  if (iVar1 != 0) {
    FUN_00bd61b0(param_2);
  }
  iVar1 = FUN_00a8c760(1);
  if (iVar1 != 0) {
    FUN_00bd6f70(param_2,param_1,100);
  }
  uVar2 = FUN_00a8c760(2);
  *(undefined4 *)(uVar4 + 0x3f4) = uVar2;
  iVar1 = FUN_00a8c760(1);
  *(uint *)(uVar4 + 0x2f8) = (uint)(iVar1 == 0);
  iVar1 = FUN_00a8c760(0xb);
  if (iVar1 == 0) {
    StateMachineNode::qteSafeCheck(param_2);
    return;
  }
  FUN_00b92a30(local_20,param_2,*(float *)(uVar4 + 0x3f8) + 180.0);
  FUN_00bb9f50(param_2,local_20);
  iVar1 = 2;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar4 + 0x330) == 0x20) {
    iVar1 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00be340d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_00be34d0 + iVar1 * 4))();
  return;
}

