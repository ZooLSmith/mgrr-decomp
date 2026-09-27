// src/player/pl0010/state/ZangekiTateStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83910..00BE5640, 26 functions

#include "mgrr.h"
#include "ZangekiTateStatePl0010.h"

// 00B83910  ZangekiTateStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 00B83920  ZangekiTateStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 00B83940  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 00B83950  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 00B83970  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 00B83980  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 00B839A0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 00B839B0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 00B839C0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 00B83A10  ZangekiTateStatePl0010::thunk_vf0C  size=5  [class]
void __thiscall ZangekiTateStatePl0010::thunk_vf0C(int param_1,undefined4 param_2)

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

// 00B83A20  ZangekiTateStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiTateStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B83A30  ZangekiTateStatePl0010::vf24  size=19  [class]
bool ZangekiTateStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83A50  ZangekiTateStatePl0010::ZangekiTateStatePl0010  size=53  [class]
undefined4 * __thiscall
ZangekiTateStatePl0010::ZangekiTateStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00B83A90  ZangekiTateStatePl0010::vf00  size=6  [class]
undefined * ZangekiTateStatePl0010::vf00(void)

{
  return &DAT_01be9eec;
}

// 00B91920  ZangekiTateStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf18(void)

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

// 00B91970  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf18(void)

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

// 00B919C0  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

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

// 00B91A30  ZangekiTateStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiTateStatePl0010::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91A50  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91A70  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91A90  ZangekiTateStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiTateStatePl0010::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91AB0  ZangekiTateStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiTateStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB85C0  ZangekiTateStatePl0010::vf14  size=126  [class]
void __thiscall ZangekiTateStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  if ((*(int *)(param_1 + 0x30) == -1) ||
     (iVar2 = FUN_00a94ce0(*(int *)(param_1 + 0x30)), iVar2 != 0)) {
    FUN_00d82510(0x3d,0x19);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BB8640  ZangekiTateStatePl0010::vf20  size=526  [class]
undefined4 __thiscall ZangekiTateStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar3);
      param_2 = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
    }
    if (*(int **)((int)param_2 + 0xc) != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(**(int **)((int)param_2 + 0xc) + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar3);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
    }
    *(undefined4 *)((int)param_2 + 0x3c0) = 0;
    *(undefined4 *)((int)param_2 + 0x314) = 1;
    *(undefined4 *)((int)param_2 + 0x2f8) = 0;
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)((int)param_2 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
    *(undefined4 *)((int)param_2 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_00d8a1d0(0x13,*(int *)(param_1 + 0x94));
      if (*(undefined4 **)(param_1 + 0x94) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x94))(1);
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(param_1 + 0x98));
      if (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x98))(1);
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00d8a1d0(0x1d,*(int *)(param_1 + 0x9c));
      if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x9c))(1);
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_00d8a1d0(0x12,*(int *)(param_1 + 0xa0));
      if (*(undefined4 **)(param_1 + 0xa0) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa0))(1);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
    return 1;
  }
  return 0;
}

// 00BE5280  ZangekiTateStatePl0010::vf08  size=946  [class]
undefined4 __thiscall ZangekiTateStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_24 = *(int **)(uVar6 + 0xc);
  if (local_24 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*local_24 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar7);
    local_24 = (int *)(-(uint)(iVar1 != 0) & (uint)local_24);
  }
  uVar2 = FUN_00bbc710(param_2);
  *(undefined4 *)(param_1 + 0x38) = 0x41300000;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = 0x41300000;
  *(undefined4 *)(param_1 + 0x40) = 0x42340000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (100 < *(uint *)(uVar6 + 0x310)) {
    *(undefined4 *)(uVar6 + 0x310) = 0;
  }
  if (*(int *)(uVar6 + 0x314) == 0) {
    *(undefined4 *)(uVar6 + 0x310) = 0;
  }
  FUN_00b92a30(&local_20,param_2,
               *(undefined4 *)
                (*(int *)(*(int *)(uVar6 + 0x31c) + 4) +
                (*(uint *)(uVar6 + 0x310) % *(uint *)(*(int *)(uVar6 + 0x31c) + 8)) * 4));
  *(int *)(uVar6 + 0x310) = *(int *)(uVar6 + 0x310) + 1;
  *(undefined4 *)(param_1 + 0x60) = local_20;
  *(undefined4 *)(param_1 + 100) = local_1c;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x68) = local_18;
  *(undefined4 *)(param_1 + 0x6c) = local_14;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar1 = FUN_00bbc850(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_00bbb570(param_2);
      if ((iVar1 != 0) || (*(int *)(uVar6 + 0x188) == 0)) {
        local_28 = 1;
      }
    }
    else {
      local_28 = 0;
    }
  }
  else {
    local_28 = 1;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30) + 1;
  FUN_00bd3af0(param_2,&local_20,param_1 + 0x30,(int *)(param_1 + 0x34),local_28);
  uVar8 = 0x41200000;
  *(undefined4 *)(uVar6 + 0x5c4) = 0;
  iVar1 = local_24[0x13c];
  uVar2 = 0x3f490fdb;
  iVar4 = (**(code **)(*local_24 + 0x84))(0x3f490fdb,0x41200000);
  FUN_00c58e90(uVar6 + 0x5b8,iVar1,*(undefined4 *)(iVar4 + 4),uVar2,uVar8);
  FUN_00bb9f50(param_2,param_1 + 0x60);
  FUN_00b92f30(param_2,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(uVar6 + 0x2f8) = 1;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashFirstHitSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x94) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa0) = puVar5;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00d89ec0(0x13,*(int *)(param_1 + 0x94));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_00d89ec0(0x14,*(int *)(param_1 + 0x98));
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00d89ec0(0x1d,*(int *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00d89ec0(0x12,*(int *)(param_1 + 0xa0));
  }
  *(float *)(uVar6 + 0x3f8) = *(float *)(uVar6 + 0x3c0) * 57.29578 - 90.0;
  local_24[0xb01] = 0x41200000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  return 1;
}

// 00BE5640  ZangekiTateStatePl0010::vf10  size=1535  [class]
void __thiscall ZangekiTateStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  undefined *puVar9;
  float fStack_8;
  float fStack_4;
  
  puVar2 = param_2;
  piVar7 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar9);
    param_2 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar5 = *(int **)((int)param_2 + 0xc);
  if (piVar5 != (int *)0x0) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar9);
    piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar5);
  }
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar3 != 0) & (uint)puVar2;
  }
  if (*(int *)(uVar4 + 0x56c) != 0) {
    FUN_00d82510(0x35,100);
  }
  if ((((*(int *)((int)param_2 + 0x528) != 0) &&
       (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),0x41200000), iVar3 != 0)) &&
      (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
     (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar9 = &DAT_01b35260;
    (**(code **)(*piVar5 + 4))(&DAT_01b35260);
    iVar3 = FUN_00dd6d80(puVar9);
    if (iVar3 != 0) {
      FUN_005ca1a0(2);
    }
  }
  if (DAT_01d61ac4 != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0x40a00000;
    DAT_01d61ac4 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  if ((*(int *)(param_1 + 0x88) == 0) && (0.0 < *(float *)(param_1 + 0x84))) {
    fVar8 = (float10)FUN_00e049b0();
    fVar8 = (float10)*(float *)(param_1 + 0x84) - fVar8;
    *(float *)(param_1 + 0x84) = (float)fVar8;
    if (fVar8 < (float10)0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
    }
  }
  if (((piVar7[0x1023] != 0) && (*(int *)(param_1 + 0xb4) != 0)) &&
     (*(int *)(param_1 + 0xb0) < piVar7[0x1024])) {
    iVar3 = *piVar7;
    uVar6 = FUN_00fdbc60();
    uVar6 = FUN_00fdbc60(piVar7[0x1026],uVar6);
    (**(code **)(iVar3 + 0x214))(uVar6);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  FUN_00bbc9f0(&fStack_8,puVar2);
  FUN_00bd61b0(puVar2);
  if (*(int *)(param_1 + 0x30) != -1) {
    iVar3 = FUN_00a952e0(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x70));
    if (iVar3 != 0) {
      FUN_00bd43f0(puVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
      if (*(int *)((int)param_2 + 0x520) != 0) {
        FUN_00bd5700(puVar2,param_1 + 0x60,1);
      }
    }
    if (*(int *)((int)param_2 + 0x3e0) != 0) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)((int)param_2 + 0x3e0) = 0;
      FUN_00bd43f0(puVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    }
    iVar3 = piVar7[0x1032];
    if (((((iVar3 == 2) || (iVar3 == 0xe)) || (iVar3 == 8)) &&
        (((DAT_01bea090 & 0x80000800) == 0 &&
         ((*(int *)((int)param_2 + 0x3e4) != 0 || (*(int *)((int)param_2 + 1000) != 0)))))) &&
       (*(int *)(param_1 + 0xa8) == 0)) {
      *(undefined4 *)(param_1 + 0xa8) = 1;
      *(undefined4 *)(param_1 + 0xa4) = 1;
    }
    piVar5 = (int *)(param_1 + 0xa4);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 < 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0x78) == 0)) &&
       (fStack_8 = (float)FUN_00a959f0(*(undefined4 *)(param_1 + 0x30)),
       12.0 <= (float)(int)fStack_8)) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_0085c270();
      *(undefined4 *)((int)param_2 + 0x3e4) = 0;
      *(undefined4 *)((int)param_2 + 0x2f4) = 1;
    }
    if ((*(int *)(param_1 + 0x7c) != 0) &&
       (fStack_8 = (float)FUN_00a959f0(*(undefined4 *)(param_1 + 0x30)),
       12.0 <= (float)(int)fStack_8)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_00bbbef0(puVar2,0);
      *(undefined4 *)(param_1 + 0xb8) = 1;
    }
  }
  if ((*(int *)(param_1 + 0x3c) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38)),
     iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if ((*(int *)(param_1 + 0x44) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40)),
     iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x88) == 0)) {
    if ((*(byte *)(piVar7 + 0x33f) & 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if ((*(byte *)(piVar7 + 0x33f) & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if ((*(byte *)(piVar7 + 0x33f) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
  }
  else {
    *(undefined4 *)((int)param_2 + 0x2f8) = 0;
    if (*(int *)((int)param_2 + 0x500) == 0) {
      if (((*(byte *)(piVar7 + 0x33f) & 0x40) != 0) || (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_00bbaf90(puVar2,param_1,0x50,1,0);
      }
      if (((*(byte *)(piVar7 + 0x33f) & 0x80) != 0) || (*(int *)(param_1 + 0x48) != 0)) {
        FUN_00bbaed0(puVar2,param_1,0x50,1,0);
      }
    }
    FUN_00bd6eb0(puVar2,param_1,0x32,0);
  }
  if (((*(int *)(param_1 + 0x3c) != 0) || (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
     (*(int *)(param_1 + 0xb8) == 0)) {
    *(undefined4 *)((int)param_2 + 0x2f8) = 0;
    FUN_00bbc9f0(&fStack_8,puVar2);
    if (200.0 < ABS(fStack_4) + ABS(fStack_8)) {
      FUN_00d82510(0x36,0x19);
    }
  }
  iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),0x42700000);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if ((*(int *)(param_1 + 0x78) == 0) &&
       ((0.0 < (float)piVar7[0xd07] && ((float)piVar7[0xd08] < 0.1)))) {
      FUN_00bbc0e0(puVar2,0x3e99999a,(float)piVar7[0xd07] * 5.0000005,0x3f4ccccd,0x3dcccccd);
    }
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)((int)param_2 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
  }
  if ((*(int *)((int)param_2 + 0x2f4) != 0) && ((float)piVar7[0xd0f] < 0.0)) {
    *(undefined4 *)((int)param_2 + 0x2f4) = 0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    puVar1 = (undefined4 *)piVar7[500];
    if (puVar1 != (undefined4 *)0x0) {
      puVar9 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar9);
      if (iVar3 != 0) {
        puVar1[0x176] = 0x41200000;
      }
    }
    if ((*(int *)(param_1 + 0xb8) != 0) && (*(float *)((int)param_2 + 0x5cc) < 0.0)) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      FUN_00bbc0e0(puVar2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    }
  }
  FUN_00bbb430(puVar2,param_1,100);
  FUN_00bbc390(puVar2);
  StateMachineNode::vf10(puVar2);
  return;
}

