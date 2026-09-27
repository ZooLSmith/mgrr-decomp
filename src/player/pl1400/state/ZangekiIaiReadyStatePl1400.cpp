// src/player/pl1400/state/ZangekiIaiReadyStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085FDA0..00872B00, 9 functions

#include "mgrr.h"
#include "ZangekiIaiReadyStatePl1400.h"

// 0085FDA0  ZangekiIaiReadyStatePl1400::SafeCheck  size=5  [class]
void __thiscall ZangekiIaiReadyStatePl1400::SafeCheck(int param_1,undefined4 param_2)

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

// 0085FDB0  ZangekiIaiReadyStatePl1400::qteSafeCheck  size=43  [class]
void ZangekiIaiReadyStatePl1400::qteSafeCheck(undefined4 param_1)

{
  FUN_00c5bbb0(2);
  FUN_00c5bbb0(0x10);
  StateMachineNode::qteSafeCheck(param_1);
  return;
}

// 0085FDE0  ZangekiIaiReadyStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiIaiReadyStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085FDF0  ZangekiIaiReadyStatePl1400::vf24  size=19  [class]
bool ZangekiIaiReadyStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085FE30  ZangekiIaiReadyStatePl1400::vf00  size=6  [class]
undefined * ZangekiIaiReadyStatePl1400::vf00(void)

{
  return &DAT_01b35b50;
}

// 00868BD0  ZangekiIaiReadyStatePl1400::vf20  size=83  [class]
undefined4 ZangekiIaiReadyStatePl1400::vf20(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uRam000002f8 = 0;
    return 1;
  }
  puVar2 = &DAT_01b35b78;
  (**(code **)*param_1)(&DAT_01b35b78);
  iVar1 = FUN_00dd6d80(puVar2);
  *(undefined4 *)((-(uint)(iVar1 != 0) & (uint)param_1) + 0x2f8) = 0;
  return 1;
}

// 00868C30  ZangekiIaiReadyStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIaiReadyStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00872A30  ZangekiIaiReadyStatePl1400::vf08  size=197  [class]
void ZangekiIaiReadyStatePl1400::vf08(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = StateMachineNode::vf08(param_1);
  if (iVar1 != 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar3 = &DAT_01b35b78;
      (**(code **)*param_1)(&DAT_01b35b78);
      iVar1 = FUN_00dd6d80(puVar3);
      uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    if (*(int **)(uVar2 + 0x5e0) != (int *)0x0) {
      puVar3 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar3);
    }
    FUN_00aa4080(0x61,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(0x61,0,0,0x3f800000,0x8000000);
    *(undefined4 *)(uVar2 + 0x2f8) = 1;
    return;
  }
  return;
}

// 00872B00  ZangekiIaiReadyStatePl1400::vf14  size=122  [class]
void ZangekiIaiReadyStatePl1400::vf14(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00d82510(10,100);
  }
  StateMachineNode::vf14(param_1);
  return;
}

