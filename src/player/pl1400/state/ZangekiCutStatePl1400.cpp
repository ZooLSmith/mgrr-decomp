// src/player/pl1400/state/ZangekiCutStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F300..008955F0, 26 functions

#include "mgrr.h"
#include "ZangekiCutStatePl1400.h"

// 0085F300  ZangekiCutStatePl1400::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiCutStatePl1400::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 0085F310  ZangekiCutStatePl1400::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiCutStatePl1400::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 0085F320  ZangekiCutStatePl1400::SlashFirstHitSlot::vf18  size=37  [class]
void ZangekiCutStatePl1400::SlashFirstHitSlot::vf18(void)

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

// 0085F360  ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 0085F370  ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 0085F380  ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf18  size=37  [class]
void ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf18(void)

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

// 0085F3C0  ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 0085F3D0  ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 0085F3F0  ZangekiCutStatePl1400::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiCutStatePl1400::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 0085F400  ZangekiCutStatePl1400::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiCutStatePl1400::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 0085F410  ZangekiCutStatePl1400::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiCutStatePl1400::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 0085F460  ZangekiCutStatePl1400::vf0C  size=40  [class]
void __thiscall ZangekiCutStatePl1400::vf0C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00c5fd80(&DAT_01d61860);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 0085F490  ZangekiCutStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiCutStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F4A0  ZangekiCutStatePl1400::vf24  size=19  [class]
bool ZangekiCutStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00867A50  ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

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

// 00867AC0  ZangekiCutStatePl1400::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1400::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00867AE0  ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1400::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00867B00  ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1400::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00867B20  ZangekiCutStatePl1400::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiCutStatePl1400::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00867B40  ZangekiCutStatePl1400::ZangekiCutStatePl1400  size=36  [class]
undefined4 * __thiscall
ZangekiCutStatePl1400::ZangekiCutStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00410710();
  return param_1;
}

// 00867B70  ZangekiCutStatePl1400::vf00  size=6  [class]
undefined * ZangekiCutStatePl1400::vf00(void)

{
  return &DAT_01b35b34;
}

// 00867B90  ZangekiCutStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiCutStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00870B50  ZangekiCutStatePl1400::vf14  size=124  [class]
void __thiscall ZangekiCutStatePl1400::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(0xd,100);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00870BD0  ZangekiCutStatePl1400::vf20  size=623  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiCutStatePl1400::vf20(int param_1,undefined4 *param_2)

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
      puVar4 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
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

// 00895240  ZangekiCutStatePl1400::vf08  size=937  [class]
undefined4 __thiscall ZangekiCutStatePl1400::vf08(int param_1,undefined4 *param_2)

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
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  local_4 = *(int **)(uVar6 + 0x5e0);
  if (local_4 == (int *)0x0) {
    local_4 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*local_4 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar8);
    local_4 = (int *)(-(uint)(iVar2 != 0) & (uint)local_4);
  }
  if (*(int *)(*(int *)(uVar6 + 0x178) + 8) == 0) {
    FUN_00d82510(0xd,100);
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
  iVar2 = FUN_00877860(param_2);
  *(int *)(param_1 + 0x34) = iVar2;
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  uVar3 = 0;
  param_2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar8 = &DAT_01b35b78;
    (**(code **)*puVar5)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar2 != 0) & (uint)puVar5;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar2 = FUN_008779b0(puVar5);
    if (iVar2 != 0) {
      param_2 = (undefined4 *)0x0;
      goto LAB_00895411;
    }
    iVar2 = FUN_00876530(puVar5);
    if ((iVar2 == 0) && (*(int *)(uVar6 + 0x188) != 0)) goto LAB_00895411;
  }
  param_2 = (undefined4 *)0x1;
LAB_00895411:
  FUN_0088d870(puVar5,param_1 + 0x60,param_1 + 0x34,param_1 + 0x38,param_2);
  uVar9 = 0x42c80000;
  *(undefined4 *)(uVar6 + 0x5c4) = 0;
  iVar2 = local_4[0x13c];
  uVar7 = 0x3f490fdb;
  iVar4 = (**(code **)(*local_4 + 0x84))(0x3f490fdb,0x42c80000);
  FUN_00c58e90(uVar6 + 0x5b8,iVar2,*(undefined4 *)(iVar4 + 4),uVar7,uVar9);
  FUN_00874f80(puVar5,param_1 + 0x60);
  FUN_008697f0(puVar5,0);
  if (*(int *)(*(int *)(uVar6 + 0x178) + 8) != 0) {
    FUN_00874780(puVar5);
  }
  *(undefined4 *)(uVar6 + 0x2f8) = 1;
  *(float *)(uVar6 + 0x3f8) = *(float *)(uVar6 + 0x3c0) * 57.29578 - 90.0;
  local_4[0xb01] = 0x41200000;
  DAT_01d618d4 = 1;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashFirstHitSlot::vftable;
  }
  *(undefined4 **)(param_1 + 500) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x1f8) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x1fc) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x200) = puVar5;
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
  *(undefined4 *)(uVar6 + 0x5e8) = 0;
  return 1;
}

// 008955F0  ZangekiCutStatePl1400::vf10  size=1904  [class]
void __thiscall ZangekiCutStatePl1400::vf10(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined1 auStack_8 [4];
  float fStack_4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar6 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar1 + 0x56c) != 0) {
    FUN_00d82510(7,100);
  }
  if ((((*(int *)(uVar6 + 0x528) != 0) &&
       (iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x41200000), iVar2 != 0)) &&
      (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
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
    fVar7 = (float10)FUN_00e049b0();
    fVar7 = (float10)*(float *)(param_1 + 0x1ec) - fVar7;
    *(float *)(param_1 + 0x1ec) = (float)fVar7;
    if (fVar7 < (float10)0) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
    }
  }
  if (((piVar5[0x1023] != 0) && (*(int *)(param_1 + 0x20c) != 0)) &&
     (*(int *)(param_1 + 0x208) < piVar5[0x1024])) {
    iVar2 = *piVar5;
    uVar4 = FUN_00fdbc60();
    uVar4 = FUN_00fdbc60(piVar5[0x1026],uVar4);
    (**(code **)(iVar2 + 0x214))(uVar4);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  FUN_00877b60(auStack_8,param_2);
  if ((*(int *)(uVar6 + 0x568) != 0) ||
     (iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar2 != 0)) {
    FUN_0088ffb0(param_2);
  }
  if (*(int *)(param_1 + 0x34) == -1) goto LAB_00895cac;
  iVar2 = FUN_00a952e0(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x70));
  if (iVar2 != 0) {
    FUN_0088e170(param_2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(uVar6 + 0x520) != 0) {
      FUN_0088f490(param_2,param_1 + 0x60,1);
    }
  }
  if (*(int *)(uVar6 + 0x3e0) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    *(undefined4 *)(uVar6 + 0x3e0) = 0;
  }
  iVar2 = piVar5[0x1032];
  if ((((iVar2 == 2) || (iVar2 == 0xe)) || (iVar2 == 8)) &&
     ((((DAT_01bea090 & 0x80000800) == 0 &&
       ((*(int *)(uVar6 + 0x3e4) != 0 || (*(int *)(uVar6 + 1000) != 0)))) &&
      (*(int *)(param_1 + 0x1d8) == 0)))) {
    *(undefined4 *)(param_1 + 0x1d8) = 1;
    *(undefined4 *)(param_1 + 0x1d4) = 1;
    *(undefined4 *)(uVar6 + 0x5e8) = 1;
  }
  piVar3 = (int *)(param_1 + 0x1d4);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 < 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (((*(int *)(param_1 + 0x1d8) != 0) && (*(int *)(param_1 + 0x78) == 0)) &&
     (iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)), 12.0 <= (float)iVar2)) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_0085c270();
    *(undefined4 *)(uVar6 + 0x3e4) = 0;
    *(undefined4 *)(uVar6 + 0x2f4) = 1;
  }
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34)), 12.0 <= (float)iVar2)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_00876eb0(param_2,0);
    *(undefined4 *)(param_1 + 0x210) = 1;
    *(undefined4 *)(uVar6 + 0x5e8) = 1;
  }
  if ((*(int *)(param_1 + 0x40) == 0) &&
     (iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c)),
     iVar2 != 0)) {
    if (piVar5[0x1032] != 9) {
      *(undefined4 *)(uVar6 + 0x2f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(int *)(param_1 + 0x48) == 0) &&
     (iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44)),
     iVar2 != 0)) {
    if (piVar5[0x1032] != 9) {
      *(undefined4 *)(uVar6 + 0x2f8) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  if ((*(int *)(param_1 + 0x50) == 0) &&
     (iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x4c)),
     iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x1f0) != 0)) {
    switch(*(undefined4 *)(param_1 + 0x54)) {
    case 0:
      FUN_00d82510(4,0x3c);
      *(int *)(uVar6 + 0x564) = *(int *)(uVar6 + 0x564) + 1;
      *(int *)(uVar6 + 0x570) = *(int *)(uVar6 + 0x570) + 1;
      *(undefined4 *)(uVar6 + 0x568) = 1;
      break;
    case 1:
      FUN_00d82510(4,0x3c);
      *(int *)(uVar6 + 0x570) = *(int *)(uVar6 + 0x570) + 1;
      *(undefined4 *)(uVar6 + 0x568) = 0;
      break;
    case 2:
      FUN_00875eb0(param_2,param_1,0x50,1,1);
      break;
    case 3:
      FUN_00875f70(param_2,param_1,0x50,1,1);
      break;
    default:
      FUN_00890bf0(param_2,param_1,0x32,0);
      FUN_00875eb0(param_2,param_1,0x32,0,0);
      FUN_00875f70(param_2,param_1,0x32,0,0);
    }
  }
  if ((((*(int *)(uVar6 + 0x3f4) == 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) ||
      (*(int *)(param_1 + 0x48) != 0)) && (0.1 < ABS(fStack_4) + ABS(fStack_4))) {
    FUN_00d82510(8,0x19);
  }
  if ((*(int *)(uVar6 + 0x500) == 0) &&
     (iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4)), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x54) < 0) {
      iVar2 = FUN_008765a0(param_2);
      iVar2 = (iVar2 != 0) - 1;
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 < 0) {
        iVar2 = FUN_00876be0(param_2);
        iVar2 = (-(uint)(iVar2 != 0) & 2) - 1;
        *(int *)(param_1 + 0x54) = iVar2;
        if (iVar2 < 0) {
          iVar2 = FUN_00874e90(param_2);
          iVar2 = (-(uint)(iVar2 != 0) & 3) - 1;
          *(int *)(param_1 + 0x54) = iVar2;
          if (iVar2 < 0) {
            iVar2 = FUN_00874f10(param_2);
            iVar2 = (-(uint)(iVar2 != 0) & 4) - 1;
            *(int *)(param_1 + 0x54) = iVar2;
            if (iVar2 < 0) goto LAB_00895bce;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_00b8bd70();
      FUN_00b7ab80(0,0x3f800000);
      FUN_00877160(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    }
  }
LAB_00895bce:
  iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),0x42700000);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((0.0 < (float)piVar5[0xd07]) && ((float)piVar5[0xd08] < 0.1)) {
        FUN_00877160(param_2,0x3e99999a,(float)piVar5[0xd07] * 5.0000005,0x3f4ccccd,0x3dcccccd);
      }
      if (*(int *)(param_1 + 0x78) == 0) goto LAB_00895c73;
    }
    if (*(int *)(uVar6 + 0x3c8) != 0) {
      FUN_00b8bd70();
    }
  }
LAB_00895c73:
  iVar2 = FUN_00c1c880();
  if ((((*(int *)(iVar2 + 0xc) == 0) && (*(int *)(param_1 + 0x1dc) != 0)) &&
      (*(int *)(param_1 + 0x78) != 0)) && (*(int *)(uVar6 + 0x3c8) != 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    FUN_00b8bd70();
  }
LAB_00895cac:
  if ((*(int *)(uVar6 + 0x2f4) != 0) && ((float)piVar5[0xd0f] < 0.0)) {
    *(undefined4 *)(uVar6 + 0x2f4) = 0;
  }
  if (((*(int *)(param_1 + 0x210) != 0) && (FUN_00b8c3c0(), *(int *)(param_1 + 0x210) != 0)) &&
     (*(float *)(uVar6 + 0x5cc) < 0.0)) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    FUN_00877160(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    *(undefined4 *)(uVar6 + 0x5ec) = 0x41200000;
    *(undefined4 *)(uVar6 + 0x5e8) = 0;
  }
  FUN_00876420(param_2,param_1,100);
  FUN_00877520(param_2);
  StateMachineNode::vf10(param_2);
  return;
}

