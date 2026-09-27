// src/player/pl0010/state/ZangekiCutStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82C90..00BE18E0, 26 functions

#include "types.h"

// 00B82C90  ZangekiCutStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 00B82CA0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 00B82CC0  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 00B82CD0  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 00B82CF0  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 00B82D00  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 00B82D20  ZangekiCutStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 00B82D30  ZangekiCutStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 00B82D40  ZangekiCutStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 00B82D90  ZangekiCutStatePl0010::vf0C  size=40  [class]
void __thiscall ZangekiCutStatePl0010::vf0C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00c5fd80(&DAT_01d61860);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00B82DC0  ZangekiCutStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiCutStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82DD0  ZangekiCutStatePl0010::vf24  size=19  [class]
bool ZangekiCutStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B913D0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf18(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0);
  iVar3 = FUN_00a7c8a0();
  if ((iVar3 != 0) && (puVar1 = *(undefined4 **)(iVar3 + 2000), puVar1 != (undefined4 *)0x0)) {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      puVar1[0xf8] = 1;
    }
  }
  return;
}

// 00B91420  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf18(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0);
  iVar3 = FUN_00a7c8a0();
  if ((iVar3 != 0) && (puVar1 = *(undefined4 **)(iVar3 + 2000), puVar1 != (undefined4 *)0x0)) {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      puVar1[0xf9] = 1;
    }
  }
  return;
}

// 00B91470  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01dc53d8;
    (**(code **)*param_2)(&DAT_01dc53d8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  if ((iVar2 != 0) && (uVar4 != 0)) {
    uVar3 = FUN_00a7c8b0();
    FUN_00b8be50(uVar3);
  }
  return;
}

// 00B914E0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl0010::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91500  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91520  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91540  ZangekiCutStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl0010::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91560  ZangekiCutStatePl0010::ZangekiCutStatePl0010  size=36  [class]
undefined4 * __thiscall
ZangekiCutStatePl0010::ZangekiCutStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00410710();
  return param_1;
}

// 00B91590  ZangekiCutStatePl0010::vf00  size=6  [class]
undefined * ZangekiCutStatePl0010::vf00(void)

{
  return &DAT_01be9e9c;
}

// 00B915B0  ZangekiCutStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiCutStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB2B40  ZangekiCutStatePl0010::vf14  size=121  [class]
void __thiscall ZangekiCutStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(0x3d,100);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BB2BC0  ZangekiCutStatePl0010::vf20  size=620  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiCutStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
    }
    if ((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(uVar3 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    *(undefined4 *)(uVar3 + 0x3e4) = 0;
    if (*(int *)(param_1 + 500) != 0) {
      FUN_00d8a1d0(0x13,*(int *)(param_1 + 500));
      if (*(undefined4 **)(param_1 + 500) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 500))(1);
        *(undefined4 *)(param_1 + 500) = 0;
      }
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(param_1 + 0x1f8));
      if (*(undefined4 **)(param_1 + 0x1f8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x1f8))(1);
        *(undefined4 *)(param_1 + 0x1f8) = 0;
      }
    }
    if (*(int *)(param_1 + 0x1fc) != 0) {
      FUN_00d8a1d0(0x1d,*(int *)(param_1 + 0x1fc));
      if (*(undefined4 **)(param_1 + 0x1fc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x1fc))(1);
        *(undefined4 *)(param_1 + 0x1fc) = 0;
      }
    }
    if (*(int *)(param_1 + 0x200) != 0) {
      FUN_00d8a1d0(0x12,*(int *)(param_1 + 0x200));
      if (*(undefined4 **)(param_1 + 0x200) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x200))(1);
        *(undefined4 *)(param_1 + 0x200) = 0;
      }
    }
    _DAT_01d61928 = 0x41200000;
    DAT_01d61850 = 0;
    _DAT_01d618a8 = 0;
    _DAT_01d61898 = 0;
    _DAT_01d618ac = 0;
    _DAT_01d61894 = 0;
    _DAT_01d618b0 = 0;
    _DAT_01d61890 = 0;
    DAT_01d618d4 = 0;
    _DAT_01d6188c = 0;
    _DAT_01d61884 = 0;
    DAT_01d61924 = 1;
    _DAT_01d61880 = 0;
    DAT_01d6192c = 1;
    _DAT_01d6187c = 0;
    _DAT_01d61878 = 0;
    _DAT_01d61870 = 0;
    _DAT_01d6186c = 0;
    _DAT_01d61868 = 0;
    DAT_01d61864 = 0;
    _DAT_01d6189c = 0x3f800000;
    _DAT_01d61888 = 0x3f800000;
    _DAT_01d61874 = 0x3f800000;
    DAT_01d61860 = 0x3f800000;
    _DAT_01d618a0 = 0;
    _DAT_01d618a4 = 0;
    return 1;
  }
  return 0;
}

// 00BE1500  ZangekiCutStatePl0010::vf08  size=979  [class]
undefined4 __thiscall ZangekiCutStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int *local_8;
  undefined4 local_4;
  
  puVar6 = param_2;
  iVar3 = StateMachineNode::vf08(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    param_2 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  local_8 = *(int **)((int)param_2 + 0xc);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*local_8 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    local_8 = (int *)(-(uint)(iVar3 != 0) & (uint)local_8);
  }
  if (*(int *)(*(int *)((int)param_2 + 0x178) + 8) == 0) {
    FUN_00d82510(0x3d,100);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x41300000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x420c0000;
  *(undefined4 *)(param_1 + 0x1f0) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0x42340000;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e4) = 0x42c80000;
  if (*(int *)((int)param_2 + 0x568) == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x41f00000;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  if (*(int *)(*(int *)((int)param_2 + 0x178) + 8) == 0) {
    *puVar1 = 0xc47a0000;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x447a0000;
    uVar7 = 0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)((int)param_2 + 0x178) + 4);
    *puVar1 = *puVar2;
    *(undefined4 *)(param_1 + 100) = puVar2[1];
    *(undefined4 *)(param_1 + 0x68) = puVar2[2];
    uVar7 = puVar2[3];
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x74) = 1;
  iVar3 = FUN_00bbc710(puVar6);
  *(int *)(param_1 + 0x34) = iVar3;
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  uVar4 = 0;
  local_4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*puVar6)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar3 != 0) & (uint)puVar6;
  }
  if (*(int *)(uVar4 + 0xe4) == 0) {
    iVar3 = FUN_00bbc850(puVar6);
    if (iVar3 != 0) {
      local_4 = 0;
      goto LAB_00be16f9;
    }
    iVar3 = FUN_00bbb570(puVar6);
    if ((iVar3 == 0) && (*(int *)((int)param_2 + 0x188) != 0)) goto LAB_00be16f9;
  }
  local_4 = 1;
LAB_00be16f9:
  FUN_00bd3af0(puVar6,puVar1,param_1 + 0x34,param_1 + 0x38,local_4);
  uVar9 = 0x42c80000;
  *(undefined4 *)((int)param_2 + 0x5c4) = 0;
  uVar7 = 0x3f490fdb;
  iVar3 = local_8[0x13c];
  iVar5 = (**(code **)(*local_8 + 0x84))(0x3f490fdb,0x42c80000);
  FUN_00c58e90((int)param_2 + 0x5b8,iVar3,*(undefined4 *)(iVar5 + 4),uVar7,uVar9);
  FUN_00bb9f50(puVar6,puVar1);
  FUN_00b92f30(puVar6,0);
  if (*(int *)(*(int *)((int)param_2 + 0x178) + 8) != 0) {
    FUN_00bb9840(puVar6);
  }
  *(undefined4 *)((int)param_2 + 0x2f8) = 1;
  puVar6 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = SlashFirstHitSlot::vftable;
  }
  *(undefined4 **)(param_1 + 500) = puVar6;
  puVar6 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x1f8) = puVar6;
  puVar6 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x1fc) = puVar6;
  puVar6 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x200) = puVar6;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_00d89ec0(0x13,*(int *)(param_1 + 500));
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    FUN_00d89ec0(0x14,*(int *)(param_1 + 0x1f8));
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_00d89ec0(0x1d,*(int *)(param_1 + 0x1fc));
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_00d89ec0(0x12,*(int *)(param_1 + 0x200));
  }
  *(float *)((int)param_2 + 0x3f8) = *(float *)((int)param_2 + 0x3c0) * 57.29578 - 90.0;
  local_8[0xb01] = 0x41200000;
  DAT_01d618d4 = 1;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  return 1;
}

// 00BE18E0  ZangekiCutStatePl0010::vf10  size=1938  [class]
void __thiscall ZangekiCutStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined1 auStack_8 [4];
  float fStack_4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar7 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar6 = *(int **)(uVar7 + 0xc);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    piVar6 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar6);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar2 + 0x56c) != 0) {
    FUN_00d82510(0x35,100);
  }
  if ((((*(int *)(uVar7 + 0x528) != 0) &&
       (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x41200000), iVar3 != 0)) &&
      (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
     (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar10 = &DAT_01b35260;
    (**(code **)(*piVar4 + 4))(&DAT_01b35260);
    iVar3 = FUN_00dd6d80(puVar10);
    if (iVar3 != 0) {
      FUN_005ca1a0(2);
    }
  }
  if (DAT_01d61ac4 != 0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0x40a00000;
    DAT_01d61ac4 = 0;
    *(undefined4 *)(param_1 + 0x20c) = 1;
  }
  if ((*(int *)(param_1 + 0x1f0) == 0) && (0.0 < *(float *)(param_1 + 0x1ec))) {
    fVar9 = (float10)FUN_00e049b0();
    fVar9 = (float10)*(float *)(param_1 + 0x1ec) - fVar9;
    *(float *)(param_1 + 0x1ec) = (float)fVar9;
    if (fVar9 < (float10)0) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
  }
  if (((piVar6[0x1023] != 0) && (*(int *)(param_1 + 0x20c) != 0)) &&
     (*(int *)(param_1 + 0x208) < piVar6[0x1024])) {
    iVar3 = *piVar6;
    uVar5 = FUN_00fdbc60();
    uVar5 = FUN_00fdbc60(piVar6[0x1026],uVar5);
    (**(code **)(iVar3 + 0x214))(uVar5);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  FUN_00bbc9f0(auStack_8,param_2);
  if ((*(int *)(uVar7 + 0x568) != 0) ||
     (iVar3 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar3 != 0)) {
    FUN_00bd61b0(param_2);
  }
  if (*(int *)(param_1 + 0x34) == -1) goto LAB_00be1fa0;
  iVar3 = FUN_00a952e0(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x70));
  if (iVar3 != 0) {
    FUN_00bd43f0(param_2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(uVar7 + 0x520) != 0) {
      FUN_00bd5700(param_2,param_1 + 0x60,1);
    }
  }
  if (*(int *)(uVar7 + 0x3e0) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    *(undefined4 *)(uVar7 + 0x3e0) = 0;
  }
  iVar3 = piVar6[0x1032];
  if (((((iVar3 == 2) || (iVar3 == 0xe)) || (iVar3 == 8)) &&
      (((DAT_01bea090 & 0x80000800) == 0 &&
       ((*(int *)(uVar7 + 0x3e4) != 0 || (*(int *)(uVar7 + 1000) != 0)))))) &&
     (*(int *)(param_1 + 0x1d8) == 0)) {
    *(undefined4 *)(param_1 + 0x1d8) = 1;
    *(undefined4 *)(param_1 + 0x1d4) = 1;
  }
  piVar4 = (int *)(param_1 + 0x1d4);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 < 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (((*(int *)(param_1 + 0x1d8) != 0) && (*(int *)(param_1 + 0x7c) == 0)) &&
     (iVar3 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)), 12.0 <= (float)iVar3)) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x80) = 1;
    FUN_0085c270();
    *(undefined4 *)(uVar7 + 0x3e4) = 0;
    *(undefined4 *)(uVar7 + 0x2f4) = 1;
  }
  if ((*(int *)(param_1 + 0x80) != 0) &&
     (iVar3 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)), 12.0 <= (float)iVar3)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_00bbbef0(param_2,0);
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
  if ((*(int *)(param_1 + 0x40) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c)),
     iVar3 != 0)) {
    if (piVar6[0x1032] != 9) {
      *(undefined4 *)(uVar7 + 0x2f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(int *)(param_1 + 0x48) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44)),
     iVar3 != 0)) {
    if (piVar6[0x1032] != 9) {
      *(undefined4 *)(uVar7 + 0x2f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  if ((*(int *)(param_1 + 0x50) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x4c)),
     iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x1f0) != 0)) {
    switch(*(undefined4 *)(param_1 + 0x54)) {
    case 0:
      FUN_00d82510(0x31,0x3c);
      *(int *)(uVar7 + 0x564) = *(int *)(uVar7 + 0x564) + 1;
      *(int *)(uVar7 + 0x570) = *(int *)(uVar7 + 0x570) + 1;
      *(undefined4 *)(uVar7 + 0x568) = 1;
      break;
    case 1:
      FUN_00d82510(0x31,0x3c);
      *(int *)(uVar7 + 0x570) = *(int *)(uVar7 + 0x570) + 1;
      *(undefined4 *)(uVar7 + 0x568) = 0;
      break;
    case 2:
      FUN_00bbaed0(param_2,param_1,0x50,1,1);
      break;
    case 3:
      FUN_00bbaf90(param_2,param_1,0x50,1,1);
      break;
    default:
      FUN_00bd6eb0(param_2,param_1,0x32,0);
      FUN_00bbaed0(param_2,param_1,0x32,0,0);
      FUN_00bbaf90(param_2,param_1,0x32,0,0);
    }
  }
  if ((((*(int *)(uVar7 + 0x3f4) == 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) ||
      (*(int *)(param_1 + 0x48) != 0)) && (0.1 < ABS(fStack_4) + ABS(fStack_4))) {
    FUN_00d82510(0x36,0x19);
  }
  if ((*(int *)(uVar7 + 0x500) == 0) &&
     (iVar3 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x54) < 0) {
      iVar3 = FUN_00bbb5e0(param_2);
      iVar3 = (iVar3 != 0) - 1;
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 < 0) {
        iVar3 = FUN_00bbbc20(param_2);
        *(uint *)(param_1 + 0x54) = (-(uint)(iVar3 != 0) & 2) - 1;
      }
    }
    if ((((-1 < *(int *)(param_1 + 0x54)) ||
         (iVar3 = (-(uint)((piVar6[0x33f] & 0x80U) != 0) & 3) - 1, *(int *)(param_1 + 0x54) = iVar3,
         -1 < iVar3)) ||
        (iVar3 = (uint)((*(byte *)(piVar6 + 0x33f) & 0x40) != 0) * 4 + -1,
        *(int *)(param_1 + 0x54) = iVar3, -1 < iVar3)) && (*(int *)(param_1 + 0x7c) != 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_00b8bd70();
      FUN_00b7ab80(0,0x3f800000);
      FUN_00bbc0e0(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    }
  }
  iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x42700000);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0x7c) == 0) {
      if ((0.0 < (float)piVar6[0xd07]) && ((float)piVar6[0xd08] < 0.1)) {
        FUN_00bbc0e0(param_2,0x3e99999a,(float)piVar6[0xd07] * 5.0000005,0x3f4ccccd,0x3dcccccd);
      }
      if (*(int *)(param_1 + 0x7c) == 0) goto LAB_00be1f67;
    }
    if (*(int *)(uVar7 + 0x3c8) != 0) {
      FUN_00b8bd70();
    }
  }
LAB_00be1f67:
  iVar3 = FUN_00c1c880();
  if ((((*(int *)(iVar3 + 0xc) == 0) && (*(int *)(param_1 + 0x1dc) != 0)) &&
      (*(int *)(param_1 + 0x7c) != 0)) && (*(int *)(uVar7 + 0x3c8) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    FUN_00b8bd70();
  }
LAB_00be1fa0:
  if ((*(int *)(uVar7 + 0x2f4) != 0) && ((float)piVar6[0xd0f] < 0.0)) {
    *(undefined4 *)(uVar7 + 0x2f4) = 0;
  }
  bVar8 = *(int *)(param_1 + 0x210) == 0;
  if (!bVar8) {
    puVar1 = (undefined4 *)piVar6[500];
    if (puVar1 != (undefined4 *)0x0) {
      puVar10 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar10);
      if (iVar3 != 0) {
        puVar1[0x176] = 0x41200000;
      }
    }
    bVar8 = *(int *)(param_1 + 0x210) == 0;
  }
  if ((!bVar8) && (*(float *)(uVar7 + 0x5cc) < 0.0)) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    FUN_00bbc0e0(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
  }
  FUN_00bbb430(param_2,param_1,100);
  FUN_00bbc390(param_2);
  StateMachineNode::vf10(param_2);
  return;
}

