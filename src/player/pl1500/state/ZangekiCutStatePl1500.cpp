// src/player/pl1500/state/ZangekiCutStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A42D0..008CA630, 26 functions

#include "mgrr.h"
#include "ZangekiCutStatePl1500.h"

// 008A42D0  ZangekiCutStatePl1500::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiCutStatePl1500::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 008A42E0  ZangekiCutStatePl1500::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiCutStatePl1500::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 008A42F0  ZangekiCutStatePl1500::SlashFirstHitSlot::vf18  size=37  [class]
void ZangekiCutStatePl1500::SlashFirstHitSlot::vf18(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00b8bdf0();
  }
  return;
}

// 008A4330  ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 008A4340  ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 008A4350  ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf18  size=37  [class]
void ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf18(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00b8be20();
  }
  return;
}

// 008A4390  ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 008A43A0  ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 008A43C0  ZangekiCutStatePl1500::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiCutStatePl1500::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 008A43D0  ZangekiCutStatePl1500::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiCutStatePl1500::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 008A43E0  ZangekiCutStatePl1500::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiCutStatePl1500::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 008A4430  ZangekiCutStatePl1500::SafeCheck  size=40  [class]
void __thiscall ZangekiCutStatePl1500::SafeCheck(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00c5fd80(&DAT_01d61860);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008A4460  ZangekiCutStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiCutStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4470  ZangekiCutStatePl1500::vf24  size=19  [class]
bool ZangekiCutStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A9F70  ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

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

// 008A9FE0  ZangekiCutStatePl1500::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1500::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008AA000  ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1500::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008AA020  ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1500::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008AA040  ZangekiCutStatePl1500::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1500::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008AA060  ZangekiCutStatePl1500::ZangekiCutStatePl1500  size=36  [class]
undefined4 * __thiscall
ZangekiCutStatePl1500::ZangekiCutStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_00410710();
  return param_1;
}

// 008AA090  ZangekiCutStatePl1500::vf00  size=6  [class]
undefined * ZangekiCutStatePl1500::vf00(void)

{
  return &DAT_01b35ba8;
}

// 008AA0B0  ZangekiCutStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiCutStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B3290  ZangekiCutStatePl1500::vf14  size=124  [class]
void __thiscall ZangekiCutStatePl1500::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar3);
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(9,100);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 008B3310  ZangekiCutStatePl1500::vf20  size=663  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiCutStatePl1500::vf20(int param_1,undefined4 *param_2)

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
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b90;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b90);
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
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(uVar3 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    *(undefined4 *)(uVar3 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0x1fc) != 0) {
      FUN_00d8a1d0(0x13,*(int *)(param_1 + 0x1fc));
      if (*(undefined4 **)(param_1 + 0x1fc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x1fc))(1);
        *(undefined4 *)(param_1 + 0x1fc) = 0;
      }
    }
    if (*(int *)(param_1 + 0x200) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(param_1 + 0x200));
      if (*(undefined4 **)(param_1 + 0x200) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x200))(1);
        *(undefined4 *)(param_1 + 0x200) = 0;
      }
    }
    if (*(int *)(param_1 + 0x204) != 0) {
      FUN_00d8a1d0(0x1d,*(int *)(param_1 + 0x204));
      if (*(undefined4 **)(param_1 + 0x204) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x204))(1);
        *(undefined4 *)(param_1 + 0x204) = 0;
      }
    }
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_00d8a1d0(0x12,*(int *)(param_1 + 0x208));
      if (*(undefined4 **)(param_1 + 0x208) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x208))(1);
        *(undefined4 *)(param_1 + 0x208) = 0;
      }
    }
    DAT_01d61924 = 1;
    _DAT_01d61928 = 0x41200000;
    DAT_01d6192c = 1;
    DAT_01d61850 = 0;
    _DAT_01d61898 = 0;
    _DAT_01d618a8 = 0;
    _DAT_01d61894 = 0;
    _DAT_01d618ac = 0;
    _DAT_01d61890 = 0;
    _DAT_01d618b0 = 0;
    _DAT_01d6188c = 0;
    DAT_01d618d4 = 0;
    _DAT_01d61884 = 0;
    _DAT_01d61880 = 0;
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
    *(undefined4 *)(uVar3 + 0x6e0) = 0;
    *(undefined4 *)(uVar3 + 0x6e4) = 0;
    *(undefined4 *)(uVar3 + 0x6e8) = 0;
    *(undefined4 *)(uVar3 + 0x6ec) = 0x3f800000;
    *(undefined4 *)(uVar3 + 0x6f0) = 0;
    *(undefined4 *)(uVar3 + 0x6f4) = 0;
    return 1;
  }
  return 0;
}

// 008CA270  ZangekiCutStatePl1500::vf08  size=951  [class]
undefined4 __thiscall ZangekiCutStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int *local_4;
  
  puVar5 = param_2;
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  local_4 = *(int **)(uVar6 + 0x5e0);
  if (local_4 == (int *)0x0) {
    local_4 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*local_4 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar8);
    local_4 = (int *)(-(uint)(iVar2 != 0) & (uint)local_4);
  }
  if (*(int *)(*(int *)(uVar6 + 0x178) + 8) == 0) {
    FUN_00d82510(9,100);
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
  *(undefined4 *)(param_1 + 0x1e0) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1e4) = 0x41500000;
  if (*(int *)(uVar6 + 0x568) == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(*(int *)(uVar6 + 0x178) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xc47a0000;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x447a0000;
    uVar7 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(uVar6 + 0x178) + 4);
    *(undefined4 *)(param_1 + 0x60) = *puVar1;
    *(undefined4 *)(param_1 + 100) = puVar1[1];
    *(undefined4 *)(param_1 + 0x68) = puVar1[2];
    uVar7 = puVar1[3];
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 1;
  iVar2 = FUN_008b8a60(param_2);
  *(int *)(param_1 + 0x34) = iVar2;
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  uVar3 = 0;
  param_2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*puVar5)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar2 != 0) & (uint)puVar5;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar2 = FUN_008b8bb0(puVar5);
    if (iVar2 != 0) {
      param_2 = (undefined4 *)0x0;
      goto LAB_008ca441;
    }
    iVar2 = FUN_008b7810(puVar5);
    if ((iVar2 == 0) && (*(int *)(uVar6 + 0x188) != 0)) goto LAB_008ca441;
  }
  param_2 = (undefined4 *)0x1;
LAB_008ca441:
  FUN_008c0600(puVar5,param_1 + 0x60,param_1 + 0x34,param_1 + 0x38,param_2);
  uVar9 = 0x42c80000;
  *(undefined4 *)(uVar6 + 0x5c4) = 0;
  iVar2 = local_4[0x13c];
  uVar7 = 0x3f490fdb;
  iVar4 = (**(code **)(*local_4 + 0x84))(0x3f490fdb,0x42c80000);
  FUN_00c58e90(uVar6 + 0x5b8,iVar2,*(undefined4 *)(iVar4 + 4),uVar7,uVar9);
  FUN_008b6240(puVar5,param_1 + 0x60);
  FUN_008aab60(puVar5,0);
  if (*(int *)(*(int *)(uVar6 + 0x178) + 8) != 0) {
    FUN_008b5af0(puVar5);
  }
  *(undefined4 *)(uVar6 + 0x2f8) = 1;
  *(float *)(uVar6 + 0x3f8) = *(float *)(uVar6 + 0x3c0) * 57.29578 - 90.0;
  local_4[0xb01] = 0x41200000;
  DAT_01d618d4 = 1;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashFirstHitSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x1fc) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x200) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x204) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x208) = puVar5;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_00d89ec0(0x13,*(int *)(param_1 + 0x1fc));
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_00d89ec0(0x14,*(int *)(param_1 + 0x200));
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_00d89ec0(0x1d,*(int *)(param_1 + 0x204));
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_00d89ec0(0x12,*(int *)(param_1 + 0x208));
  }
  *(undefined4 *)(uVar6 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 500) = 1;
  return 1;
}

// 008CA630  ZangekiCutStatePl1500::qteSafeCheck  size=2113  [class]
void __thiscall ZangekiCutStatePl1500::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  uint local_c;
  int aiStack_8 [2];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar5 + 0x5e0);
  if (piVar4 == (int *)0x0) {
    local_c = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar7);
    local_c = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar2 + 0x56c) != 0) {
    FUN_00d82510(7,100);
  }
  if ((((*(int *)(uVar5 + 0x528) != 0) &&
       (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x41200000), iVar3 != 0)) &&
      (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
     (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01b35260;
    (**(code **)(*piVar4 + 4))(&DAT_01b35260);
    iVar3 = FUN_00dd6d80(puVar7);
    if (iVar3 != 0) {
      FUN_005ca1a0(2);
    }
  }
  if (DAT_01d61ac4 != 0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0x40a00000;
    DAT_01d61ac4 = 0;
    *(undefined4 *)(param_1 + 0x214) = 1;
  }
  if ((*(int *)(param_1 + 0x1f0) == 0) && (0.0 < *(float *)(param_1 + 0x1ec))) {
    fVar6 = (float10)FUN_00e049b0();
    fVar6 = (float10)*(float *)(param_1 + 0x1ec) - fVar6;
    *(float *)(param_1 + 0x1ec) = (float)fVar6;
    if (fVar6 < (float10)0) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
  }
  if (((*(int *)(local_c + 0x408c) != 0) && (*(int *)(param_1 + 0x214) != 0)) &&
     (*(int *)(param_1 + 0x210) < *(int *)(local_c + 0x4090))) {
    FUN_008b8fd0(param_2);
    *(undefined4 *)(param_1 + 0x1f8) = 0x41700000;
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  FUN_008b8d50(aiStack_8,param_2);
  if ((*(int *)(uVar5 + 0x568) != 0) ||
     (iVar3 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar3 != 0)) {
    FUN_008c2e50(param_2);
  }
  if (*(int *)(param_1 + 0x34) == -1) goto LAB_008cacee;
  iVar3 = FUN_00a952e0(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x70));
  if (iVar3 != 0) {
    FUN_008c0ab0(param_2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(uVar5 + 0x520) != 0) {
      FUN_008c1dd0(param_2,param_1 + 0x60,1);
    }
  }
  if (*(int *)(uVar5 + 0x3e0) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    *(undefined4 *)(uVar5 + 0x3e0) = 0;
  }
  iVar3 = *(int *)(local_c + 0x40c8);
  if ((((iVar3 == 2) || (iVar3 == 0xe)) || (iVar3 == 8)) &&
     ((((DAT_01bea090 & 0x80000800) == 0 &&
       ((*(int *)(uVar5 + 0x3e4) != 0 || (*(int *)(uVar5 + 1000) != 0)))) &&
      (*(int *)(param_1 + 0x1d8) == 0)))) {
    *(undefined4 *)(param_1 + 0x1d8) = 1;
    *(undefined4 *)(param_1 + 0x1d4) = 1;
    *(undefined4 *)(uVar5 + 0x6b0) = 1;
  }
  piVar4 = (int *)(param_1 + 0x1d4);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 < 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (((*(int *)(param_1 + 0x1d8) != 0) && (*(int *)(param_1 + 0x78) == 0)) &&
     (aiStack_8[0] = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)),
     *(float *)(param_1 + 0x3c) <= (float)aiStack_8[0])) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(int *)(param_1 + 500) != 0) {
      *(undefined4 *)(param_1 + 500) = 0;
      DAT_01dc08bc = 1;
      DAT_01dc08c0 = 0;
      FUN_00e5e050("core_se_btl_char_datsu_in_pl1500",0);
    }
    *(undefined4 *)(uVar5 + 0x3e4) = 0;
    *(undefined4 *)(uVar5 + 0x2f4) = 1;
  }
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (aiStack_8[0] = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)),
     *(float *)(param_1 + 0x3c) <= (float)aiStack_8[0])) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_008b81d0(param_2,0);
    *(undefined4 *)(param_1 + 0x218) = 1;
    *(undefined4 *)(uVar5 + 0x6b0) = 1;
  }
  if ((*(int *)(param_1 + 0x40) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c)),
     iVar3 != 0)) {
    if (*(int *)(local_c + 0x40c8) != 9) {
      *(undefined4 *)(uVar5 + 0x2f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(int *)(param_1 + 0x48) == 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44)),
     iVar3 != 0)) {
    if (*(int *)(local_c + 0x40c8) != 9) {
      *(undefined4 *)(uVar5 + 0x2f8) = 0;
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
      FUN_00d82510(4,0x3c);
      *(int *)(uVar5 + 0x564) = *(int *)(uVar5 + 0x564) + 1;
      *(int *)(uVar5 + 0x570) = *(int *)(uVar5 + 0x570) + 1;
      *(undefined4 *)(uVar5 + 0x568) = 1;
      break;
    case 1:
      FUN_00d82510(4,0x3c);
      *(int *)(uVar5 + 0x570) = *(int *)(uVar5 + 0x570) + 1;
      *(undefined4 *)(uVar5 + 0x568) = 0;
      break;
    case 2:
      FUN_008b7160(param_2,param_1,0x50,1,1);
      break;
    case 3:
      FUN_008b7230(param_2,param_1,0x50,1,1);
      break;
    default:
      FUN_008c3b70(param_2,param_1,0x32,0);
      FUN_008b7160(param_2,param_1,0x32,0,0);
      FUN_008b7230(param_2,param_1,0x32,0,0);
    }
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     ((iVar3 = FUN_00a8c760(0), iVar3 != 0 || (*(int *)(uVar5 + 0x3f4) != 0)))) {
    FUN_008c3990(param_2,param_1,0x28);
    FUN_008c3ad0(param_2,param_1,0x1e);
  }
  if ((*(int *)(uVar5 + 0x500) == 0) &&
     (iVar3 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x54) < 0) {
      iVar3 = FUN_008b78c0(param_2);
      iVar3 = (iVar3 != 0) - 1;
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 < 0) {
        iVar3 = FUN_008b7f00(param_2);
        iVar3 = (-(uint)(iVar3 != 0) & 2) - 1;
        *(int *)(param_1 + 0x54) = iVar3;
        if (((iVar3 < 0) &&
            (iVar3 = (-(uint)((*(uint *)(local_c + 0xcfc) & 0x80) != 0) & 3) - 1,
            *(int *)(param_1 + 0x54) = iVar3, iVar3 < 0)) &&
           (iVar3 = (uint)((*(byte *)(local_c + 0xcfc) & 0x40) != 0) * 4 + -1,
           *(int *)(param_1 + 0x54) = iVar3, iVar3 < 0)) goto LAB_008cac10;
      }
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_00b8bd70();
      FUN_00b7ab80(0,0x3f800000);
      FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    }
  }
LAB_008cac10:
  iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x42700000);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((0.0 < *(float *)(local_c + 0x341c)) && (*(float *)(local_c + 0x3420) < 0.1)) {
        FUN_008b8470(param_2,0x3e99999a,*(float *)(local_c + 0x341c) * 5.0000005,0x3f4ccccd,
                     0x3dcccccd);
      }
      if (*(int *)(param_1 + 0x78) == 0) goto LAB_008cacb5;
    }
    if (*(int *)(uVar5 + 0x3c8) != 0) {
      FUN_00b8bd70();
    }
  }
LAB_008cacb5:
  iVar3 = FUN_00c1c880();
  if ((((*(int *)(iVar3 + 0xc) == 0) && (*(int *)(param_1 + 0x1dc) != 0)) &&
      (*(int *)(param_1 + 0x78) != 0)) && (*(int *)(uVar5 + 0x3c8) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    FUN_00b8bd70();
  }
LAB_008cacee:
  if ((*(int *)(uVar5 + 0x2f4) != 0) && (*(float *)(local_c + 0x343c) < 0.0)) {
    *(undefined4 *)(uVar5 + 0x2f4) = 0;
  }
  if (((*(int *)(param_1 + 0x218) != 0) && (FUN_00b8c3c0(), *(int *)(param_1 + 0x218) != 0)) &&
     (*(float *)(uVar5 + 0x5cc) < 0.0)) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    FUN_008b8470(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    *(undefined4 *)(uVar5 + 0x6b4) = 0x41200000;
    *(undefined4 *)(uVar5 + 0x6b0) = 0;
  }
  FUN_008b7700(param_2,param_1,100);
  FUN_008b8720(param_2);
  if (0.0 < *(float *)(param_1 + 0x1f8)) {
    fVar1 = *(float *)(param_1 + 0x1f8) - 1.0;
    *(float *)(param_1 + 0x1f8) = fVar1;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      iVar3 = FUN_00d45a70("PD10_NMANI");
      if (iVar3 == 0) {
        if (*(int *)(uVar5 + 0x38c) != 0) {
          FUN_005edcb0(0);
        }
        if (*(int *)(uVar5 + 0x390) != 0) {
          FUN_005edcb0(0);
          StateMachineNode::qteSafeCheck(param_2);
          return;
        }
      }
    }
    else {
      if (*(int *)(uVar5 + 0x38c) != 0) {
        FUN_005edcb0(0x40900000);
      }
      if (*(int *)(uVar5 + 0x390) != 0) {
        FUN_005edcb0(0x40900000);
        StateMachineNode::qteSafeCheck(param_2);
        return;
      }
    }
  }
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

