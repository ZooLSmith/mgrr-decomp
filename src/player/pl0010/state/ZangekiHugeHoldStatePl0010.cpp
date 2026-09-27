// src/player/pl0010/state/ZangekiHugeHoldStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B833F0..00BE3E30, 9 functions

#include "types.h"

// 00B833F0  ZangekiHugeHoldStatePl0010::vf0C  size=5  [class]
void __thiscall ZangekiHugeHoldStatePl0010::vf0C(int param_1,undefined4 param_2)

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

// 00B83400  ZangekiHugeHoldStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiHugeHoldStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B83410  ZangekiHugeHoldStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiHugeHoldStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B83420  ZangekiHugeHoldStatePl0010::vf20  size=19  [class]
bool ZangekiHugeHoldStatePl0010::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 00B83440  ZangekiHugeHoldStatePl0010::vf24  size=19  [class]
bool ZangekiHugeHoldStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83480  ZangekiHugeHoldStatePl0010::vf00  size=6  [class]
undefined * ZangekiHugeHoldStatePl0010::vf00(void)

{
  return &DAT_01be9ec8;
}

// 00B91760  ZangekiHugeHoldStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiHugeHoldStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB6960  ZangekiHugeHoldStatePl0010::vf08  size=261  [class]
void __thiscall ZangekiHugeHoldStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar6);
  }
  *(undefined4 *)(param_1 + 0x34) = 0x41200000;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  iVar1 = FUN_00a7f600(0x20600);
  if (iVar1 == 0) goto LAB_00bb6a53;
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
LAB_00bb6a1c:
    fVar5 = (float10)1.0;
  }
  else {
    puVar6 = &DAT_01b351a0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 == 0) goto LAB_00bb6a1c;
    fVar5 = (float10)FUN_0059fa90();
  }
  FUN_00aa4520(0xee,iVar1,0,0x3c888889,0x3f800000,0,0xbf800000,(float)fVar5);
LAB_00bb6a53:
  *(undefined4 *)(uVar4 + 0x3f4) = 1;
  return;
}

// 00BE3E30  ZangekiHugeHoldStatePl0010::vf10  size=39  [class]
void __thiscall ZangekiHugeHoldStatePl0010::vf10(undefined4 param_1,undefined4 param_2)

{
  FUN_00bd61b0(param_2);
  FUN_00bd6f70(param_2,param_1,100);
  StateMachineNode::vf10(param_2);
  return;
}

