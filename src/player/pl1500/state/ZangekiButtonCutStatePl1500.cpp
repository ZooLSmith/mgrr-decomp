// src/player/pl1500/state/ZangekiButtonCutStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4040..008C9BF0, 26 functions

#include "mgrr.h"
#include "ZangekiButtonCutStatePl1500.h"

// 008A4040  ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 008A4050  ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 008A4060  ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf18  size=37  [class]
void ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf18(void)

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

// 008A40A0  ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 008A40B0  ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 008A40C0  ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf18  size=37  [class]
void ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf18(void)

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

// 008A4100  ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 008A4110  ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 008A4130  ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 008A4140  ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 008A4150  ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 008A41A0  ZangekiButtonCutStatePl1500::vf0C  size=5  [class]
void __thiscall ZangekiButtonCutStatePl1500::vf0C(int param_1,undefined4 param_2)

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

// 008A41B0  ZangekiButtonCutStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiButtonCutStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A41C0  ZangekiButtonCutStatePl1500::vf24  size=19  [class]
bool ZangekiButtonCutStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A41E0  ZangekiButtonCutStatePl1500::ZangekiButtonCutStatePl1500  size=53  [class]
undefined4 * __thiscall
ZangekiButtonCutStatePl1500::ZangekiButtonCutStatePl1500(undefined4 *param_1,undefined4 param_2)

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

// 008A4220  ZangekiButtonCutStatePl1500::vf00  size=6  [class]
undefined * ZangekiButtonCutStatePl1500::vf00(void)

{
  return &DAT_01b35ba0;
}

// 008A9E40  ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

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

// 008A9EB0  ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiButtonCutStatePl1500::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008A9ED0  ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiButtonCutStatePl1500::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008A9EF0  ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiButtonCutStatePl1500::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008A9F10  ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiButtonCutStatePl1500::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008A9F30  ZangekiButtonCutStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiButtonCutStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B2FA0  ZangekiButtonCutStatePl1500::vf14  size=129  [class]
void __thiscall ZangekiButtonCutStatePl1500::vf14(int param_1,undefined4 *param_2)

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
  if ((*(int *)(param_1 + 0x30) == -1) ||
     (iVar2 = FUN_00a94ce0(*(int *)(param_1 + 0x30)), iVar2 != 0)) {
    FUN_00d82510(9,0x19);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 008B3030  ZangekiButtonCutStatePl1500::vf20  size=606  [class]
undefined4 __thiscall ZangekiButtonCutStatePl1500::vf20(int param_1,undefined4 *param_2)

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
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x3d4ccccd);
    }
    *(undefined4 *)(uVar3 + 0x3c0) = 0;
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    if (*(int *)(uVar3 + 0x6d0) == 1) {
      *(undefined4 *)(uVar3 + 0x314) = 1;
    }
    else if (*(int *)(uVar3 + 0x6d0) == 2) {
      *(undefined4 *)(uVar3 + 0x30c) = 1;
    }
    if (*(int *)(param_1 + 0x24) != 2) {
      *(undefined4 *)(uVar3 + 0x6d0) = 0;
    }
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(uVar3 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
    *(undefined4 *)(uVar3 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00d8a1d0(0x13,*(int *)(param_1 + 0xa4));
      if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa4))(1);
        *(undefined4 *)(param_1 + 0xa4) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(param_1 + 0xa8));
      if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_00d8a1d0(0x1d,*(int *)(param_1 + 0xac));
      if (*(undefined4 **)(param_1 + 0xac) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xac))(1);
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_00d8a1d0(0x12,*(int *)(param_1 + 0xb0));
      if (*(undefined4 **)(param_1 + 0xb0) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xb0))(1);
        *(undefined4 *)(param_1 + 0xb0) = 0;
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

// 008C97A0  ZangekiButtonCutStatePl1500::vf08  size=1102  [class]
void __thiscall ZangekiButtonCutStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_44 = *(int **)(uVar6 + 0x5e0);
  if (local_44 == (int *)0x0) {
    local_44 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*local_44 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar7);
    local_44 = (int *)(-(uint)(iVar1 != 0) & (uint)local_44);
  }
  uVar2 = FUN_008b8a60(param_2);
  *(undefined4 *)(param_1 + 0x38) = 0x41300000;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0x42340000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(uVar6 + 0x6d0) == 1) {
    if (100 < *(uint *)(uVar6 + 0x310)) {
      *(undefined4 *)(uVar6 + 0x310) = 0;
    }
    if (*(int *)(uVar6 + 0x314) == 0) {
      *(undefined4 *)(uVar6 + 0x310) = 0;
    }
    puVar3 = (undefined4 *)
             FUN_008aa640(local_20,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(uVar6 + 0x31c) + 4) +
                           (*(uint *)(uVar6 + 0x310) % *(uint *)(*(int *)(uVar6 + 0x31c) + 8)) * 4))
    ;
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    local_34 = puVar3[3];
    *(int *)(uVar6 + 0x310) = *(int *)(uVar6 + 0x310) + 1;
  }
  else if (*(int *)(uVar6 + 0x6d0) == 2) {
    if (100 < *(uint *)(uVar6 + 0x308)) {
      *(undefined4 *)(uVar6 + 0x308) = 0;
    }
    if (*(int *)(uVar6 + 0x30c) == 0) {
      *(undefined4 *)(uVar6 + 0x308) = 0;
    }
    puVar3 = (undefined4 *)
             FUN_008aa700(local_30,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(uVar6 + 0x318) + 4) +
                           (*(uint *)(uVar6 + 0x308) % *(uint *)(*(int *)(uVar6 + 0x318) + 8)) * 4))
    ;
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    local_34 = puVar3[3];
    *(int *)(uVar6 + 0x308) = *(int *)(uVar6 + 0x308) + 1;
  }
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x60) = local_40;
  *(undefined4 *)(param_1 + 100) = local_3c;
  *(undefined4 *)(param_1 + 0x68) = local_38;
  *(undefined4 *)(param_1 + 0x6c) = local_34;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar4 + 0xe4) == 0) {
    iVar1 = FUN_008b8bb0(param_2);
    if (iVar1 != 0) {
      local_48 = 0;
      goto LAB_008c99dd;
    }
    iVar1 = FUN_008b7810(param_2);
    if ((iVar1 == 0) && (*(int *)(uVar6 + 0x188) != 0)) goto LAB_008c99dd;
  }
  local_48 = 1;
LAB_008c99dd:
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30) + 1;
  FUN_008c0600(param_2,&local_40,param_1 + 0x30,(int *)(param_1 + 0x34),local_48);
  uVar8 = 0x41200000;
  *(undefined4 *)(uVar6 + 0x5c4) = 0;
  iVar1 = local_44[0x13c];
  uVar2 = 0x3f490fdb;
  iVar5 = (**(code **)(*local_44 + 0x84))(0x3f490fdb,0x41200000);
  FUN_00c58e90(uVar6 + 0x5b8,iVar1,*(undefined4 *)(iVar5 + 4),uVar2,uVar8);
  FUN_008b6240(param_2,param_1 + 0x60);
  FUN_008aab60(param_2,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(uVar6 + 0x2f8) = 1;
  puVar3 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = SlashFirstHitSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa4) = puVar3;
  puVar3 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa8) = puVar3;
  puVar3 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xac) = puVar3;
  puVar3 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xb0) = puVar3;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00d89ec0(0x13,*(int *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00d89ec0(0x14,*(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_00d89ec0(0x1d,*(int *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00d89ec0(0x12,*(int *)(param_1 + 0xb0));
  }
  *(float *)(uVar6 + 0x3f8) = *(float *)(uVar6 + 0x3c0) * 57.29578 - 90.0;
  local_44[0xb01] = 0x41200000;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  *(undefined4 *)(uVar6 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  return;
}

// 008C9BF0  ZangekiButtonCutStatePl1500::vf10  size=1660  [class]
void __thiscall ZangekiButtonCutStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  int aiStack_8 [2];
  
  puVar2 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar6 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar8);
    param_2 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)piVar5);
  }
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*puVar2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)puVar2;
  }
  if (*(int *)(uVar3 + 0x56c) != 0) {
    FUN_00d82510(7,100);
  }
  if ((((*(int *)(uVar6 + 0x528) != 0) &&
       (iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),0x41200000), iVar4 != 0)) &&
      (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01b35260;
    (**(code **)(*piVar5 + 4))(&DAT_01b35260);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      FUN_005ca1a0(2);
    }
  }
  if (DAT_01d61ac4 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x40a00000;
    DAT_01d61ac4 = 0;
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  if ((*(int *)(param_1 + 0x90) == 0) && (0.0 < *(float *)(param_1 + 0x8c))) {
    fVar7 = (float10)FUN_00e049b0();
    fVar7 = (float10)*(float *)(param_1 + 0x8c) - fVar7;
    *(float *)(param_1 + 0x8c) = (float)fVar7;
    if (fVar7 < (float10)0) {
      *(undefined4 *)(param_1 + 0x90) = 1;
    }
  }
  if (((*(int *)((int)param_2 + 0x408c) != 0) && (*(int *)(param_1 + 0xbc) != 0)) &&
     (*(int *)(param_1 + 0xb8) < *(int *)((int)param_2 + 0x4090))) {
    FUN_008b8fd0(puVar2);
    *(undefined4 *)(param_1 + 0x98) = 0x41700000;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  FUN_008b8d50(aiStack_8,puVar2);
  FUN_008c2e50(puVar2);
  if (*(int *)(param_1 + 0x30) != -1) {
    iVar4 = FUN_00a952e0(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x70));
    if (iVar4 != 0) {
      FUN_008c0ab0(puVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
      if (*(int *)(uVar6 + 0x520) != 0) {
        FUN_008c1dd0(puVar2,param_1 + 0x60,1);
      }
    }
    if (*(int *)(uVar6 + 0x3e0) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
      *(undefined4 *)(uVar6 + 0x3e0) = 0;
      FUN_008c0ab0(puVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    }
    iVar4 = *(int *)((int)param_2 + 0x40c8);
    if ((((iVar4 == 2) || (iVar4 == 0xe)) || (iVar4 == 8)) &&
       ((((DAT_01bea090 & 0x80000800) == 0 &&
         ((*(int *)(uVar6 + 0x3e4) != 0 || (*(int *)(uVar6 + 1000) != 0)))) &&
        (*(int *)(param_1 + 0x84) == 0)))) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)(uVar6 + 0x6b0) = 1;
    }
    piVar5 = (int *)(param_1 + 0x80);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 < 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    if (((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0x78) == 0)) &&
       (aiStack_8[0] = FUN_00a959f0(*(undefined4 *)(param_1 + 0x30)),
       *(float *)(param_1 + 0x38) <= (float)aiStack_8[0])) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x7c) = 1;
      if (*(int *)(param_1 + 0x94) != 0) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        DAT_01dc08bc = 1;
        DAT_01dc08c0 = 0;
        FUN_00e5e050("core_se_btl_char_datsu_in_pl1500",0);
      }
      *(undefined4 *)(uVar6 + 0x3e4) = 0;
      *(undefined4 *)(uVar6 + 0x2f4) = 1;
    }
    if ((*(int *)(param_1 + 0x7c) != 0) &&
       (aiStack_8[0] = FUN_00a959f0(*(undefined4 *)(param_1 + 0x30)),
       *(float *)(param_1 + 0x38) <= (float)aiStack_8[0])) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_008b81d0(puVar2,0);
      *(undefined4 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(uVar6 + 0x6b0) = 1;
    }
  }
  if ((*(int *)(param_1 + 0x3c) == 0) &&
     (iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38)),
     iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if ((*(int *)(param_1 + 0x44) == 0) &&
     (iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40)),
     iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
    if ((*(byte *)((int)param_2 + 0xcfc) & 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if ((*(byte *)((int)param_2 + 0xcfc) & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if ((*(byte *)((int)param_2 + 0xcfc) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
  }
  else {
    *(undefined4 *)(uVar6 + 0x2f8) = 0;
    if (*(int *)(uVar6 + 0x500) == 0) {
      if (((*(byte *)((int)param_2 + 0xcfc) & 0x40) != 0) || (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_008b7230(puVar2,param_1,0x50,1,0);
      }
      if (((*(byte *)((int)param_2 + 0xcfc) & 0x80) != 0) || (*(int *)(param_1 + 0x48) != 0)) {
        FUN_008b7160(puVar2,param_1,0x50,1,0);
      }
    }
    FUN_008c3b70(puVar2,param_1,0x32,0);
  }
  if (((*(int *)(param_1 + 0x3c) != 0) || (iVar4 = FUN_00a8c760(0), iVar4 != 0)) &&
     (*(int *)(param_1 + 0xc0) == 0)) {
    *(undefined4 *)(uVar6 + 0x2f8) = 0;
    FUN_008c3990(puVar2,param_1,0x28);
    FUN_008c3ad0(puVar2,param_1,0x1e);
  }
  iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x30),0x42700000);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    if ((*(int *)(param_1 + 0x78) == 0) &&
       ((0.0 < *(float *)((int)param_2 + 0x341c) && (*(float *)((int)param_2 + 0x3420) < 0.1)))) {
      FUN_008b8470(puVar2,0x3e99999a,*(float *)((int)param_2 + 0x341c) * 5.0000005,0x3f4ccccd,
                   0x3dcccccd);
    }
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(uVar6 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
  }
  if ((*(int *)(uVar6 + 0x2f4) != 0) && (*(float *)((int)param_2 + 0x343c) < 0.0)) {
    *(undefined4 *)(uVar6 + 0x2f4) = 0;
  }
  if (((*(int *)(param_1 + 0xc0) != 0) && (FUN_00b8c3c0(), *(int *)(param_1 + 0xc0) != 0)) &&
     (*(float *)(uVar6 + 0x5cc) < 0.0)) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    FUN_008b8470(puVar2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    *(undefined4 *)(uVar6 + 0x6b4) = 0x41200000;
    *(undefined4 *)(uVar6 + 0x6b0) = 0;
  }
  FUN_008b7700(puVar2,param_1,100);
  FUN_008b8720(puVar2);
  if (0.0 < *(float *)(param_1 + 0x98)) {
    fVar1 = *(float *)(param_1 + 0x98) - 1.0;
    *(float *)(param_1 + 0x98) = fVar1;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      iVar4 = FUN_00d45a70("PD10_NMANI");
      if (iVar4 == 0) {
        if (*(int *)(uVar6 + 0x38c) != 0) {
          FUN_005edcb0(0);
        }
        if (*(int *)(uVar6 + 0x390) != 0) {
          FUN_005edcb0(0);
          StateMachineNode::vf10(puVar2);
          return;
        }
      }
    }
    else {
      if (*(int *)(uVar6 + 0x38c) != 0) {
        FUN_005edcb0(0x40900000);
      }
      if (*(int *)(uVar6 + 0x390) != 0) {
        FUN_005edcb0(0x40900000);
        StateMachineNode::vf10(puVar2);
        return;
      }
    }
  }
  StateMachineNode::vf10(puVar2);
  return;
}

