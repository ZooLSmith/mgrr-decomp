// src/player/pl1400/state/ZangekiIaiIdleStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F860..008A03B0, 9 functions

#include "mgrr.h"
#include "ZangekiIaiIdleStatePl1400.h"

// 0085F860  ZangekiIaiIdleStatePl1400::SafeCheck  size=5  [class]
void __thiscall ZangekiIaiIdleStatePl1400::SafeCheck(int param_1,undefined4 param_2)

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

// 0085F870  ZangekiIaiIdleStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiIaiIdleStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 0085F880  ZangekiIaiIdleStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiIaiIdleStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F890  ZangekiIaiIdleStatePl1400::vf24  size=19  [class]
bool ZangekiIaiIdleStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085F8D0  ZangekiIaiIdleStatePl1400::vf00  size=6  [class]
undefined * ZangekiIaiIdleStatePl1400::vf00(void)

{
  return &DAT_01b35b4c;
}

// 00867D80  ZangekiIaiIdleStatePl1400::vf20  size=83  [class]
undefined4 ZangekiIaiIdleStatePl1400::vf20(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uRam00000300 = 0;
    return 1;
  }
  puVar2 = &DAT_01b35b78;
  (**(code **)*param_1)(&DAT_01b35b78);
  iVar1 = FUN_00dd6d80(puVar2);
  *(undefined4 *)((-(uint)(iVar1 != 0) & (uint)param_1) + 0x300) = 0;
  return 1;
}

// 00867DE0  ZangekiIaiIdleStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIaiIdleStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0088A260  ZangekiIaiIdleStatePl1400::vf08  size=25  [class]
void __thiscall ZangekiIaiIdleStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar4);
    }
    uVar2 = 0x1d7;
    iVar1 = FUN_00876530(param_2);
    if (iVar1 == 0) {
      uVar2 = 0x1d8;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00864400(uVar2,0,0,0x3f800000,0x8000000);
    *(undefined4 *)(uVar3 + 0x300) = 1;
    return;
  }
  return;
}

// 008A03B0  ZangekiIaiIdleStatePl1400::qteSafeCheck  size=835  [class]
void __thiscall ZangekiIaiIdleStatePl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar5 + 0x5e0);
  if (piVar4 == (int *)0x0) {
    local_28 = 0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    local_28 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) goto LAB_008a04d0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_008a0447:
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar8 = 0x1d6;
    iVar3 = FUN_00876530(param_2);
    if (iVar3 == 0) {
      uVar8 = 0x1d9;
    }
    FUN_00aa4080(uVar8,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00864400(uVar8,0,0,0x3f800000,0x8000000);
  }
  else {
    if (iVar3 == 1) goto LAB_008a0447;
    if (iVar3 != 2) goto LAB_008a04d0;
  }
  *(undefined4 *)(uVar5 + 0x61c) = 1;
  *(float *)(uVar5 + 0x618) = *(float *)(uVar5 + 0x618) + 1.0;
LAB_008a04d0:
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar2 + 0x2f4) == 0) {
    FUN_00876030(param_2);
  }
  FUN_0088fce0(param_2,0x420c0000,0xc2200000,0,0);
  FUN_008770b0(param_2,0x3f800000);
  FUN_00c5bbb0(2);
  FUN_00c5bbb0(0x10);
  fVar1 = 70.0 - *(float *)(uVar5 + 0x3f8);
  if (180.0 < fVar1) {
    fVar1 = 70.0 - (*(float *)(uVar5 + 0x3f8) + 360.0);
  }
  if (fVar1 < -180.0) {
    fVar1 = 70.0 - (*(float *)(uVar5 + 0x3f8) - 360.0);
  }
  *(float *)(uVar5 + 0x3f8) = fVar1 * 0.1 + *(float *)(uVar5 + 0x3f8);
  if (((-1 < (char)*(uint *)(local_28 + 0xcf8)) ||
      ((*(uint *)(local_28 + 0xe50) & *(uint *)(local_28 + 0xcf8)) == 0)) ||
     (fVar6 = (float10)FUN_00bda020(), (float10)0 == fVar6)) {
    FUN_00d82510(9,100);
  }
  FUN_0089e060(param_2);
  local_20 = *(float *)(uVar5 + 0x600);
  local_1c = *(float *)(uVar5 + 0x604);
  local_18 = *(float *)(uVar5 + 0x608);
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_1c = *(float *)(iVar3 + 0x44);
    local_18 = *(float *)(iVar3 + 0x48);
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01b35260;
    (**(code **)(*piVar4 + 4))(&DAT_01b35260);
    iVar3 = FUN_00dd6d80(puVar7);
    if (iVar3 != 0) {
      if ((((local_20 == 0.0) && (local_1c == 0.0)) && (local_18 == 0.0)) ||
         (local_20 = local_20 - *(float *)(local_28 + 0x40),
         local_1c = local_1c - *(float *)(local_28 + 0x44),
         local_18 = local_18 - *(float *)(local_28 + 0x48),
         3.0 <= SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18))) {
        uVar8 = 3;
      }
      else {
        uVar8 = 0;
      }
      FUN_005ca1a0(uVar8);
    }
  }
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

