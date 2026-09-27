// src/player/pl0010/state/ZangekiYokoStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83AC0..00BE6000, 66 functions

#include "mgrr.h"
#include "ZangekiYokoStatePl0010.h"

// 00B83AC0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf10(void)

{
  return;
}

// 00B83AD0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf14(void)

{
  return;
}

// 00B83AF0  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 00B83B00  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 00B83B20  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf10(void)

{
  return;
}

// 00B83B30  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf14(void)

{
  return;
}

// 00B83B50  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf10(void)

{
  return;
}

// 00B83B60  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf14(void)

{
  return;
}

// 00B83B70  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf18(void)

{
  DAT_01d61ac4 = 1;
  return;
}

// 00B83BC0  ZangekiYokoStatePl0010::vf0C  size=5  [class]
void __thiscall ZangekiYokoStatePl0010::vf0C(int param_1,undefined4 param_2)

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

// 00B83BD0  ZangekiYokoStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiYokoStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B83BE0  ZangekiYokoStatePl0010::vf24  size=19  [class]
bool ZangekiYokoStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83C00  ZangekiYokoStatePl0010::ZangekiYokoStatePl0010  size=53  [class]
undefined4 * __thiscall
ZangekiYokoStatePl0010::ZangekiYokoStatePl0010(undefined4 *param_1,undefined4 param_2)

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

// 00B83C40  ZangekiYokoStatePl0010::vf00  size=6  [class]
undefined * ZangekiYokoStatePl0010::vf00(void)

{
  return &DAT_01be9ef0;
}

// 00B91AD0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf18(void)

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

// 00B91B20  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf18(void)

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

// 00B91B70  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 param_1,undefined4 *param_2)

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

// 00B91BE0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiYokoStatePl0010::SlashFirstHitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91C00  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91C20  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91C40  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiYokoStatePl0010::EntryCutTargetSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91C60  ZangekiYokoStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiYokoStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB8850  ZangekiYokoStatePl0010::vf14  size=126  [class]
void __thiscall ZangekiYokoStatePl0010::vf14(int param_1,undefined4 *param_2)

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

// 00BB88D0  ZangekiYokoStatePl0010::vf20  size=526  [class]
undefined4 __thiscall ZangekiYokoStatePl0010::vf20(int param_1,undefined4 *param_2)

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
    *(undefined4 *)((int)param_2 + 0x30c) = 1;
    *(undefined4 *)((int)param_2 + 0x2f8) = 0;
    if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)((int)param_2 + 0x3c8) != 0)) {
      FUN_00b8bd70();
    }
    *(undefined4 *)((int)param_2 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00d8a1d0(0x13,*(int *)(param_1 + 0x9c));
      if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x9c))(1);
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(param_1 + 0xa0));
      if (*(undefined4 **)(param_1 + 0xa0) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa0))(1);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00d8a1d0(0x1d,*(int *)(param_1 + 0xa4));
      if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa4))(1);
        *(undefined4 *)(param_1 + 0xa4) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00d8a1d0(0x12,*(int *)(param_1 + 0xa8));
      if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
        *(undefined4 *)(param_1 + 0xa8) = 0;
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

// 00BB8AE0  FUN_00bb8ae0  size=473  [callgraph]
undefined4 FUN_00bb8ae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar2 = FUN_00b8b610();
  if ((iVar2 != 0) && (iVar3 = FUN_00d45a70("breakdown_test"), iVar3 != 0)) {
    FUN_00d82510(2,param_3);
    return 1;
  }
  switch(iVar2) {
  case 1:
    FUN_00d82510(0x15,param_3);
    return 1;
  case 2:
    FUN_00d82510(0x17,param_3);
    return 1;
  case 3:
    FUN_00d82510(0x18,param_3);
    return 1;
  case 4:
    FUN_00d82510(0x16,param_3);
    return 1;
  case 5:
    FUN_00d82510(0x10,param_3);
    return 1;
  case 6:
    FUN_00d82510(4,param_3);
    return 1;
  case 7:
    FUN_00d82510(0x2a,param_3);
    return 1;
  case 8:
    FUN_00d82510(0x14,param_3);
    return 1;
  case 9:
    FUN_00d82510(0x25,param_3);
    return 1;
  case 0xb:
    FUN_00d82510(0x2b,param_3);
    return 1;
  case 0xc:
    FUN_00d82510(0xd,param_3);
    return 1;
  case 0xd:
    FUN_00d82510(9,param_3);
    break;
  case 0x10:
    FUN_00d82510(0x26,param_3);
    return 1;
  case 0x11:
    FUN_00d82510(0xc,param_3);
    return 1;
  }
  return 1;
}

// 00BB8D00  FUN_00bb8d00  size=198  [callgraph]
undefined4 FUN_00bb8d00(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
  if (fVar1 * fVar1 < *(float *)(uVar3 + 0xd28)) {
    bVar5 = (*(uint *)(uVar3 + 0xe48) & *(uint *)(uVar3 + 0xcf8)) != 0;
  }
  else {
    bVar5 = false;
  }
  iVar4 = -1;
  if (bVar5) {
    if (bVar5) {
      iVar4 = 10;
    }
  }
  else {
    iVar4 = 0x11;
  }
  if (((param_4 == 0) || (iVar4 != 0x11)) && ((param_5 == 0 || (iVar4 != *(int *)(param_2 + 4))))) {
    FUN_00d82510(iVar4,param_3);
    return 1;
  }
  return 0;
}

// 00BB8DD0  FUN_00bb8dd0  size=592  [callgraph]
undefined4 FUN_00bb8dd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float *pfStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  float *pfStack_f8;
  float *pfStack_f4;
  float local_e0 [5];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0 [4];
  undefined1 local_b0 [4];
  undefined1 auStack_ac [12];
  undefined1 local_a0 [52];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [100];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    pfStack_f4 = (float *)&DAT_01be9ef4;
    pfStack_f8 = (float *)0xbb8df7;
    (**(code **)*param_1)();
    pfStack_f8 = (float *)0xbb8dfe;
    iVar3 = FUN_00dd6d80();
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar5 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    pfStack_f4 = (float *)&DAT_01be9db8;
    pfStack_f8 = (float *)0xbb8e1f;
    (**(code **)(*piVar2 + 4))();
    pfStack_f8 = (float *)0xbb8e26;
    iVar3 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  if (((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe48)) != 0) &&
     (fVar1 = *(float *)(*(int *)(uVar4 + 0x40d4) + 0x14c),
     fVar1 * fVar1 < *(float *)(uVar4 + 0xd28))) {
    local_e0[2] = -*(float *)(uVar4 + 0xd0c);
    local_e0[0] = -*(float *)(uVar4 + 0xd08);
    local_e0[1] = 0.0;
    fVar1 = local_e0[2] * local_e0[2] + local_e0[0] * local_e0[0];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_f8 = local_e0;
      puStack_fc = (undefined1 *)0xbb8eb7;
      pfStack_f4 = pfStack_f8;
      FUN_00ddf460();
    }
    else {
      pfStack_f4 = (float *)&DAT_0163d0ac;
      pfStack_f8 = (float *)0xbb8ecc;
      FUN_00dd5650();
      local_e0[0] = 0.0;
      local_e0[1] = 1.0;
      local_e0[2] = 0.0;
    }
    local_c0[0] = 0.0;
    pfStack_f4 = (float *)0x5;
    local_c0[1] = 0.0;
    puStack_fc = local_a0;
    local_c0[2] = 1.0;
    puStack_100 = (undefined1 *)0xbb8f00;
    pfStack_f8 = (float *)(uVar4 + 0x90);
    FUN_00ddc1d0();
    pfStack_f4 = (float *)local_a0;
    pfStack_f8 = local_c0;
    puStack_fc = local_b0;
    puStack_100 = (undefined1 *)0xbb8f17;
    D3DXVec3TransformNormal();
    uStack_cc = 0x3f800000;
    puStack_100 = (undefined1 *)0x5;
    uStack_c8 = 0;
    uStack_c4 = 0;
    pfStack_104 = (float *)(uVar4 + 0x90);
    FUN_00ddc1d0(auStack_ac);
    puStack_100 = auStack_ac;
    pfStack_104 = (float *)&uStack_cc;
    D3DXVec3TransformNormal(auStack_6c);
    FUN_00db6410(auStack_68,&DAT_01bea380,&DAT_01bea390,&DAT_01bea3a0);
    D3DXVec3TransformNormal(&pfStack_f8,&pfStack_f8,auStack_68);
    pfStack_104 = (float *)(*(float *)(uVar4 + 0x40) + (float)pfStack_104);
    puStack_100 = (undefined1 *)(*(float *)(uVar4 + 0x44) + (float)puStack_100);
    puStack_fc = (undefined1 *)(*(float *)(uVar4 + 0x48) + (float)puStack_fc);
    pfStack_f8 = (float *)(*(float *)(uVar4 + 0x4c) + (float)pfStack_f8);
    fVar6 = (float10)FUN_00a8ec30(&pfStack_104);
    fVar7 = (float10)FUN_00ddba30((float)((float10)*(float *)(uVar4 + 0x94) - fVar6));
    if ((fVar7 < (float10)-0.7853982) ||
       (fVar7 < (float10)0.7853982 == (fVar7 == (float10)0.7853982))) {
      *(undefined4 *)(uVar4 + 0x416c) = 1;
      *(float *)(uVar5 + 0x74) = (float)fVar6;
      FUN_00d82510(0x29,param_3);
      return 1;
    }
  }
  return 0;
}

// 00BB9020  FUN_00bb9020  size=147  [callgraph]
undefined4 FUN_00bb9020(undefined4 *param_1)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar5 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if (((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) != 0) &&
     (fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c),
     fVar1 * fVar1 < *(float *)(uVar3 + 0xd28))) {
    *(undefined4 *)(uVar5 + 0x7c) = 0;
    return *(undefined4 *)(uVar5 + 0x7c);
  }
  *(undefined4 *)(uVar5 + 0x7c) = 1;
  return *(undefined4 *)(uVar5 + 0x7c);
}

// 00BB90C0  FUN_00bb90c0  size=303  [callgraph]
undefined4 FUN_00bb90c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  iVar2 = FUN_008e2740();
  if ((iVar2 == 0) &&
     ((*(int *)(uVar3 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar3 + 0x40d4) + 0x160) <= *(float *)(uVar3 + 0x41e4))))) {
    *(undefined4 *)(uVar4 + 0x14) = 1;
    *(undefined4 *)(uVar4 + 0x20) = *(undefined4 *)(uVar3 + 0x560);
    *(undefined4 *)(uVar4 + 0x24) = *(undefined4 *)(uVar3 + 0x564);
    *(undefined4 *)(uVar4 + 0x28) = *(undefined4 *)(uVar3 + 0x568);
    *(undefined4 *)(uVar4 + 0x2c) = *(undefined4 *)(uVar3 + 0x56c);
    FUN_008e0c00(uVar3 + 0x560);
    FUN_00d82510(0xe,100);
    return 1;
  }
  if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
    iVar2 = FUN_008e2740();
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_00d82510(0x13,100);
  return 1;
}

// 00BB91F0  FUN_00bb91f0  size=250  [callgraph]
undefined4 FUN_00bb91f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if (*(int *)(*(int *)(uVar4 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x764) + 0x104) = 0;
  }
  if ((*(int *)(uVar4 + 0x41e0) == 0) || (0.36 < *(float *)(uVar4 + 0x41e4))) {
    iVar2 = FUN_008e2740();
    if (iVar2 == 0) {
      *(undefined4 *)(uVar3 + 0x14) = 1;
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(uVar4 + 0x560);
      *(undefined4 *)(uVar3 + 0x24) = *(undefined4 *)(uVar4 + 0x564);
      *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)(uVar4 + 0x568);
      *(undefined4 *)(uVar3 + 0x2c) = *(undefined4 *)(uVar4 + 0x56c);
      FUN_008e0c00(uVar4 + 0x560);
      FUN_00d82510(0xe,100);
      return 1;
    }
  }
  FUN_00d82510(0x13,100);
  return 1;
}

// 00BB92F0  FUN_00bb92f0  size=231  [callgraph]
void FUN_00bb92f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = piVar3[0x1d9];
  if (*(int *)(iVar2 + 0x104) != 1) {
    *(undefined4 *)(iVar2 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
  }
  FUN_008e0be0();
  local_18 = 0.75;
  if (piVar3[0x1078] != 0) {
    local_18 = 0.5;
  }
  local_18 = *(float *)(piVar3[0x109a] + 0x548) - local_18;
  local_20 = 0;
  local_1c = 0;
  FUN_00a8bdd0(&local_20);
  (**(code **)(*piVar3 + 0x70))(&local_20);
  FUN_00a96070(0,0x80,1);
  return;
}

// 00BB93E0  FUN_00bb93e0  size=234  [callgraph]
void FUN_00bb93e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_20;
  float local_1c;
  float local_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = piVar3[0x1d9];
  if (*(int *)(iVar2 + 0x104) != 1) {
    *(undefined4 *)(iVar2 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
  }
  FUN_008e0be0();
  local_1c = *(float *)(piVar3[0x109a] + 0x54c) - *(float *)(piVar3[0x1035] + 0x128);
  local_18 = *(float *)(piVar3[0x109a] + 0x548) - *(float *)(piVar3[0x1035] + 0x124);
  local_20 = 0;
  FUN_00a8bdd0(&local_20);
  (**(code **)(*piVar3 + 0x70))(&local_20);
  FUN_00a96070(0,0x80,1);
  return;
}

// 00BB94D0  FUN_00bb94d0  size=234  [callgraph]
void FUN_00bb94d0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_20;
  float local_1c;
  float local_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = piVar3[0x1d9];
  if (*(int *)(iVar2 + 0x104) != 1) {
    *(undefined4 *)(iVar2 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
  }
  FUN_008e0be0();
  local_1c = *(float *)(piVar3[0x109a] + 0x54c) - *(float *)(piVar3[0x1035] + 0x13c);
  local_18 = *(float *)(piVar3[0x109a] + 0x548) - *(float *)(piVar3[0x1035] + 0x138);
  local_20 = 0;
  FUN_00a8bdd0(&local_20);
  (**(code **)(*piVar3 + 0x70))(&local_20);
  FUN_00a96070(0,0x80,1);
  return;
}

// 00BB95C0  FUN_00bb95c0  size=638  [callgraph]
void FUN_00bb95c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int unaff_EDI;
  float10 fVar9;
  undefined *puVar10;
  float fVar11;
  uint local_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_14;
  
  uVar8 = 0;
  if (param_1 == (undefined4 *)0x0) {
    local_44 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar10);
    local_44 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(local_44 + 0xc);
  if (piVar2 != (int *)0x0) {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  puVar1 = (undefined4 *)(uVar8 + 0xb0);
  *(undefined4 *)(uVar8 + 0x90) = 0;
  *(undefined4 *)(uVar8 + 0x94) = 0;
  *(undefined4 *)(uVar8 + 0x98) = 0;
  *(undefined4 *)(uVar8 + 0x9c) = local_14;
  *(undefined4 *)(uVar8 + 0xe8) = 0;
  *(undefined4 *)(uVar8 + 0xe4) = 0;
  *(undefined4 *)(uVar8 + 0xe0) = 0;
  *(undefined4 *)(uVar8 + 0xdc) = 0;
  *(undefined4 *)(uVar8 + 0xd4) = 0;
  *(undefined4 *)(uVar8 + 0xd0) = 0;
  *(undefined4 *)(uVar8 + 0xcc) = 0;
  *(undefined4 *)(uVar8 + 200) = 0;
  *(undefined4 *)(uVar8 + 0xc0) = 0;
  *(undefined4 *)(uVar8 + 0xbc) = 0;
  *(undefined4 *)(uVar8 + 0xb8) = 0;
  *(undefined4 *)(uVar8 + 0xb4) = 0;
  *(undefined4 *)(uVar8 + 0xec) = 0x3f800000;
  *(undefined4 *)(uVar8 + 0xd8) = 0x3f800000;
  *(undefined4 *)(uVar8 + 0xc4) = 0x3f800000;
  *puVar1 = 0x3f800000;
  D3DXMatrixInverse(uVar8 + 0xf0,0,puVar1);
  fVar11 = 1.0;
  if (param_4[2] * 0.0 + param_4[1] * 0.0 + *param_4 <= 0.0) {
    fVar3 = -1.0;
  }
  else {
    fVar3 = 1.0;
    fVar11 = -1.0;
  }
  fVar4 = *param_4 * fVar3;
  fVar5 = param_4[1] * fVar3;
  fVar3 = param_4[2] * fVar3;
  fVar9 = (float10)FUN_00ddbb50(((fVar5 + fVar4) * 0.0 + fVar3) /
                                (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * 1.0));
  if (fVar11 < 0.0) {
    fVar9 = fVar9 - (float10)3.1415927;
  }
  *(float *)(uVar8 + 0x94) = (float)fVar9;
  *(float *)(unaff_EDI + 0x70) = (float)fVar9;
  pfVar7 = (float *)FUN_00a92640(&fStack_3c);
  fVar11 = pfVar7[1] * param_4[2] - pfVar7[2] * param_4[1];
  fVar3 = pfVar7[2] * *param_4 - *pfVar7 * param_4[2];
  fVar4 = *pfVar7 * param_4[1] - pfVar7[1] * *param_4;
  fVar9 = (float10)FUN_00ddbb50((param_4[2] * fVar4 + *param_4 * fVar11 + param_4[1] * fVar3) /
                                (SQRT(param_4[1] * param_4[1] + *param_4 * *param_4 +
                                      param_4[2] * param_4[2]) *
                                SQRT(fVar3 * fVar3 + fVar11 * fVar11 + fVar4 * fVar4)));
  fStack_3c = param_4[2] * fVar3 - param_4[1] * fVar4;
  fStack_38 = *param_4 * fVar4 - param_4[2] * fVar11;
  fStack_34 = param_4[1] * fVar11 - fVar3 * *param_4;
  fStack_2c = fStack_3c;
  fStack_28 = fStack_38;
  fStack_24 = fStack_34;
  D3DXMatrixRotationAxis(puVar1,&fStack_2c,(float)fVar9);
  D3DXMatrixInverse(uVar8 + 0xf0,0,puVar1);
  if (param_5 != 0) {
    switchD_0080dbae::default();
  }
  return;
}

// 00BB9840  FUN_00bb9840  size=122  [callgraph]
void FUN_00bb9840(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  iVar2 = *(int *)(uVar1 + 0x178);
  uVar1 = 0;
  if (*(int *)(iVar2 + 8) != 1) {
    puVar4 = *(undefined4 **)(iVar2 + 4);
    puVar3 = puVar4 + 6;
    do {
      uVar1 = uVar1 + 1;
      *puVar4 = puVar3[-2];
      puVar4 = puVar4 + 4;
      puVar3[-5] = puVar3[-1];
      puVar3[-4] = *puVar3;
      puVar3[-3] = puVar3[1];
      puVar3 = puVar3 + 4;
    } while (uVar1 < *(int *)(iVar2 + 8) - 1U);
  }
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 8) != 0)) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  return;
}

// 00BB98C0  FUN_00bb98c0  size=92  [callgraph]
void FUN_00bb98c0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if ((uint)param_1[3] <= (uint)param_1[2]) {
    uVar2 = 0;
    if (param_1[2] != 1) {
      iVar3 = 0;
      do {
        puVar1 = (undefined4 *)(param_1[1] + iVar3);
        *puVar1 = *(undefined4 *)(param_1[1] + 0x10 + iVar3);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x10;
        puVar1[1] = puVar1[5];
        puVar1[2] = puVar1[6];
        puVar1[3] = puVar1[7];
      } while (uVar2 < param_1[2] - 1U);
    }
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      param_1[2] = param_1[2] + -1;
    }
  }
  (**(code **)(*param_1 + 8))(param_2);
  return;
}

// 00BB9B10  FUN_00bb9b10  size=1078  [callgraph]
void FUN_00bb9b10(undefined4 *param_1,undefined4 param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar5 + 0xc) != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar5 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar6);
  }
  if (param_4 == 0) {
    uVar4 = FUN_00a9f560("AirSlash",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar5 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0x124,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0x11c,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0x121,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0x11e,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0x11f,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0x123,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0x11b,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0x122,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0x11d,0x3d4ccccd,0x8002000);
    uVar4 = 0x120;
  }
  else {
    uVar4 = FUN_00a9f560("GroundSlash",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar5 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0xfa,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0xf2,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0xf7,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0xf4,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0xf5,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0xf9,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0xf1,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0xf8,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0xf3,0x3d4ccccd,0x8002000);
    uVar4 = 0xf6;
  }
  FUN_00a9f600(0xffffffff,param_2,0,0xffffffd3,0,uVar4,0x3d4ccccd,0x8002000);
  fVar1 = (param_3 + 1.5707964) * 57.29578;
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  if ((((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) || (fVar2 = 1.0, 1.0 < fVar1)) &&
      (fVar2 = -179.0, fVar1 < 180.0)) && (-179.0 < fVar1)) {
    if ((-160.0 <= fVar1) || (fVar1 <= -179.0)) {
      fVar2 = fVar1;
      if ((160.0 < fVar1) && (fVar1 < 180.0)) {
        fVar2 = 180.0;
      }
    }
    else {
      fVar2 = -179.9;
    }
  }
  FUN_00a947e0(param_2,0,fVar2,0);
  return;
}

// 00BB9F50  FUN_00bb9f50  size=2831  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb9f50(undefined4 *param_1,float *param_2)

{
  void *_Src;
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void **ppvVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  void *pvStack_1bc;
  float *pfStack_1b8;
  float *pfStack_1b4;
  float *pfStack_1b0;
  float *pfStack_1ac;
  float *pfStack_1a8;
  void **local_1a4;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  float fStack_10c;
  float fStack_108;
  void *local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  void *local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 auStack_e0 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [18];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [20];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar13 = 0;
  }
  else {
    local_1a4 = (void **)&DAT_01be9ef4;
    pfStack_1a8 = (float *)0xbb9f77;
    (**(code **)*param_1)();
    pfStack_1a8 = (float *)0xbb9f7e;
    iVar9 = FUN_00dd6d80();
    uVar13 = -(uint)(iVar9 != 0) & (uint)param_1;
  }
  piVar12 = *(int **)(uVar13 + 0xc);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    local_1a4 = (void **)&DAT_01be9db8;
    pfStack_1a8 = (float *)0xbb9f9f;
    (**(code **)(*piVar12 + 4))();
    pfStack_1a8 = (float *)0xbb9fa6;
    iVar9 = FUN_00dd6d80();
    piVar12 = (int *)(-(uint)(iVar9 != 0) & (uint)piVar12);
  }
  piVar12[0xe4b] = 3;
  local_1a4 = (void **)0xbb9fbd;
  iVar9 = FUN_00f98a90();
  local_104 = (void *)((float)iVar9 * 0.5);
  local_1a4 = (void **)0xbb9fd7;
  iVar9 = FUN_00f98aa0();
  local_ec = (float)iVar9 * 0.5;
  local_f0 = local_104;
  local_e8 = 0.0;
  local_140 = *param_2;
  local_13c = param_2[1];
  local_138 = 0.0;
  local_170 = param_2[2];
  local_16c = param_2[3];
  local_168 = 0.0;
  local_100 = (local_170 + local_140) * 0.5;
  local_fc = (local_13c + local_16c) * 0.5;
  local_f4 = (local_164 + local_134) * 0.5;
  local_160 = (local_140 - local_100) * 100.0 + local_140;
  local_15c = (local_13c - local_fc) * 100.0 + local_13c;
  local_158 = 0;
  local_154 = (local_134 - local_f4) * 100.0 + local_134;
  local_120 = (local_170 - local_100) * 100.0;
  local_11c = (local_16c - local_fc) * 100.0;
  local_190 = local_120 + local_170;
  local_18c = local_16c + local_11c;
  local_188 = 0.0;
  local_184 = (local_164 - local_f4) * 100.0 + local_164;
  local_180 = local_100 - local_160;
  local_17c = local_fc - local_15c;
  local_174 = local_f4 - local_154;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar3 = local_180 * local_180 + local_17c * local_17c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0xbba1b2;
      local_1a4 = (void **)pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (void **)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0xbba1c7;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_120 = 0.0;
  local_11c = 0.0;
  pfStack_1a8 = &local_120;
  local_118 = 0;
  pfStack_1ac = &local_180;
  pfStack_1b0 = &local_160;
  local_1a4 = (void **)0x461c4000;
  pfStack_1b4 = &local_140;
  pfStack_1b8 = (float *)0xbba21b;
  FUN_00b83ee0();
  local_180 = local_100 - local_190;
  local_17c = local_fc - local_18c;
  local_174 = local_f4 - local_184;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar3 = local_180 * local_180 + local_17c * local_17c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0xbba2a9;
      local_1a4 = (void **)pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (void **)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0xbba2be;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_120 = 0.0;
  local_11c = 0.0;
  pfStack_1a8 = &local_120;
  local_118 = 0;
  pfStack_1ac = &local_180;
  pfStack_1b0 = &local_190;
  local_1a4 = (void **)0x461c4000;
  pfStack_1b4 = &local_170;
  pfStack_1b8 = (float *)0xbba312;
  FUN_00b83ee0();
  local_190 = (local_140 + local_170) * 0.5;
  local_18c = (local_13c + local_16c) * 0.5;
  local_188 = (local_138 + local_168) * 0.5;
  local_184 = (local_134 + local_164) * 0.5;
  fVar3 = local_170 - local_190;
  fVar4 = local_16c - local_18c;
  fVar5 = local_168 - local_188;
  local_1a4 = (void **)((fVar3 * 300.0 + fVar4 * 0.0 + fVar5 * 0.0) /
                       (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) * 300.0));
  pfStack_1a8 = (float *)0xbba3af;
  FUN_00ddbb50();
  local_180 = (local_170 * 0.4 + (float)local_f0) - (local_140 * 0.4 + (float)local_f0);
  local_17c = (local_16c * 0.4 + local_ec) - (local_13c * 0.4 + local_ec);
  local_174 = local_114 - local_114;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar3 = local_17c * local_17c + local_180 * local_180;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0xbba489;
      local_1a4 = (void **)pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (void **)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0xbba49c;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_1a4 = &local_f0;
  pfStack_1a8 = &local_150;
  pfStack_1ac = (float *)0xbba4ce;
  FUN_00d9fab0();
  local_1a4 = (void **)&local_100;
  pfStack_1a8 = &local_d0;
  local_100 = local_190 * 0.0 + (float)local_f0;
  local_fc = local_18c * 0.0 + local_ec;
  local_f8 = local_188 * 0.0 + local_e8;
  local_f4 = local_184 * 0.0 + local_e4;
  pfStack_1ac = (float *)0xbba53e;
  FUN_00d9fab0();
  local_1a4 = (void **)&local_120;
  pfStack_1a8 = (float *)0xbba54d;
  pfVar10 = (float *)FUN_00a925a0();
  local_1a4 = (void **)&local_120;
  local_150 = local_150 - *pfVar10;
  local_14c = local_14c - pfVar10[1];
  local_148 = local_148 - pfVar10[2];
  local_144 = local_144 - pfVar10[3];
  pfStack_1a8 = (float *)0xbba591;
  pfVar10 = (float *)FUN_00a925a0();
  local_d0 = (local_d0 - *pfVar10) - local_150;
  local_cc = (local_cc - pfVar10[1]) - local_14c;
  local_c8 = (local_c8 - pfVar10[2]) - local_148;
  local_c4[0] = (local_c4[0] - pfVar10[3]) - local_144;
  local_1a4 = (void **)0xffffffff;
  local_150 = local_d0 + local_150;
  local_14c = local_14c + local_cc;
  local_148 = local_c8 + local_148;
  local_144 = local_c4[0] + local_144;
  pfStack_1a8 = (float *)0xbba625;
  iVar9 = FUN_00a12210();
  _Src = (void *)(iVar9 + 0x10);
  local_1a4 = (void **)-(*(float *)(iVar9 + 0x18) /
                        SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                             *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                             *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30)));
  pfStack_1a8 = (float *)0xbba651;
  FUN_00ddbaa0();
  local_60 = 0;
  pfStack_1ac = (float *)&local_60;
  local_5c = 0;
  local_58 = 0x3f800000;
  pfStack_1b0 = (float *)0xbba680;
  pfStack_1a8 = pfStack_1ac;
  local_1a4 = _Src;
  D3DXVec3TransformNormal();
  local_cc = 1.0;
  pfStack_1b8 = &local_cc;
  local_c8 = 0.0;
  local_c4[0] = 0.0;
  pvStack_1bc = (void *)0xbba6aa;
  pfStack_1b4 = pfStack_1b8;
  pfStack_1b0 = _Src;
  D3DXVec3TransformNormal();
  local_f8 = 0.0;
  local_f4 = 1.0;
  local_f0 = (void *)0x0;
  pvStack_1bc = _Src;
  D3DXVec3TransformNormal(&local_f8,&local_f8);
  local_c4[0xe] = 0.0;
  local_c4[0xd] = 0.0;
  local_c4[0xc] = 0.0;
  local_c4[0xb] = 0.0;
  local_c4[9] = 0.0;
  local_c4[8] = 0.0;
  local_c4[7] = 0.0;
  local_c4[6] = 0.0;
  local_c4[4] = 0.0;
  local_c4[3] = 0.0;
  local_c4[2] = 0.0;
  local_c4[1] = 0.0;
  local_c4[0xf] = 1.0;
  local_c4[10] = 1.0;
  local_c4[5] = 1.0;
  local_c4[0] = 1.0;
  FID_conflict__memcpy(local_c4,_Src,0x40);
  puVar15 = auStack_74;
  D3DXMatrixRotationX(puVar15,*(float *)(uVar13 + 0x3b0) + *(float *)(uVar13 + 0x374));
  pfVar10 = &local_cc;
  D3DXMatrixMultiply(pfVar10,auStack_7c,pfVar10);
  pfVar1 = local_c4 + 0xf;
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(auStack_e0,local_c4 + 0xd,auStack_e0);
  fVar3 = *(float *)(uVar13 + 0x3a4) + 1.35;
  pfStack_1ac = (float *)(fStack_12c * fVar3);
  pfStack_1a8 = (float *)(fStack_128 * fVar3);
  local_1a4 = (void **)(fStack_124 * fVar3);
  local_14c = (float)pvStack_1bc - local_18c;
  local_148 = (float)pfStack_1b8 - local_188;
  local_144 = (float)pfStack_1b4 - local_184;
  local_140 = (float)pfStack_1b0 - local_180;
  iVar9 = FUN_00b83fb0(&local_18c,&local_14c,&local_13c,0x43480000);
  ppvVar6 = local_1a4;
  pfVar7 = pfStack_1a8;
  pfVar8 = pfStack_1ac;
  if (iVar9 != 0) {
    fVar3 = (float)pfVar10 * 0.0011111111;
    fVar4 = (float)puVar15 * 0.0011111111;
    ppvVar6 = (void **)(((float)local_1a4 - fStack_124 * fVar3) - (float)local_104 * fVar4);
    pfVar7 = (float *)(((float)pfStack_1a8 - fStack_128 * fVar3) - fStack_108 * fVar4);
    pfVar8 = (float *)(((float)pfStack_1ac - fStack_12c * fVar3) - fVar4 * fStack_10c);
  }
  local_c4[2] = local_c4[2] + (float)pfVar8;
  local_c4[3] = (float)pfVar7 + local_c4[3];
  local_c4[4] = (float)ppvVar6 + local_c4[4];
  uVar11 = (**(code **)(*piVar12 + 0x270))();
  if (piVar12[0x1032] == 4) {
    uVar11 = 3;
  }
  if (*(int *)(uVar13 + 0x528) == 0) {
    uVar11 = 0;
  }
  if ((piVar12[0x1032] == 8) && (*(int *)(uVar13 + 0x330) == 1)) {
    uVar11 = 3;
  }
  local_150 = *(float *)(uVar13 + 0x18c);
  *(float **)(uVar13 + 0x3c0) = pfVar1;
  DAT_01d61850 = 1;
  pvStack_1bc = (void *)((float)puVar15 * 0.0011111111);
  pfStack_1b8 = (float *)((float)pfVar10 * 0.0011111111);
  local_170 = (float)pfStack_1b8;
  local_f0 = pvStack_1bc;
  FID_conflict__memcpy(&DAT_01d61860,&local_ec,0x40);
  _DAT_01d618b4 = pvStack_1bc;
  _DAT_01d618a0 = local_150;
  _DAT_01d618ac = 1;
  _DAT_01d618b0 = 0xffffffff;
  pvStack_1bc = local_f0;
  _DAT_01d618b8 = (float)pfStack_1b8;
  puVar2 = (undefined4 *)piVar12[500];
  pfStack_1b8 = (float *)local_170;
  local_170 = 0.0;
  fVar3 = 0.0;
  _DAT_01d618a4 = pfVar1;
  _DAT_01d618a8 = uVar11;
  if (puVar2 != (undefined4 *)0x0) {
    puVar14 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar9 = FUN_00dd6d80(puVar14);
    fVar3 = local_170;
    if (iVar9 != 0) {
      fVar3 = (float)puVar2[0xdd];
    }
  }
  FUN_00b93000(param_1,&local_ec,0x42c80000,fVar3,pfVar1,uVar11,&pvStack_1bc);
  return;
}

// 00BBAA60  FUN_00bbaa60  size=682  [callgraph]
void FUN_00bbaa60(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int local_138;
  float local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined1 auStack_d8 [8];
  undefined1 local_d0 [64];
  undefined4 local_90 [16];
  int local_50 [19];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar5 != 0) & (uint)piVar1;
  }
  iVar5 = FUN_00a96130(local_50,0x10);
  local_138 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = local_50[local_138];
      FID_conflict__memcpy(local_90,(void *)(uVar4 + 0x10),0x40);
      uVar13 = 0x40;
      uVar11 = 0;
      FUN_00a92f90(0,0x40);
      iVar6 = FUN_00e3a1e0(uVar11,uVar13);
      sVar3 = *(short *)(iVar2 + 6);
      if (iVar6 != 0) {
        sVar3 = FUN_00a96170(sVar3);
      }
      uVar7 = uVar4;
      if (sVar3 != -1) {
        uVar7 = FUN_00a12210((int)sVar3);
      }
      if (uVar7 != 0) {
        puVar9 = (undefined4 *)(uVar7 + 0x10);
        puVar10 = local_90;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_130 = *(float *)(iVar2 + 0xc);
      uVar11 = *(undefined4 *)(iVar2 + 0x10);
      local_128[0] = *(undefined4 *)(iVar2 + 0x14);
      local_e0 = *(float *)(iVar2 + 0x18);
      local_dc = *(float *)(iVar2 + 0x1c);
      if (iVar6 != 0) {
        local_dc = local_dc * -1.0;
        local_130 = local_130 * -1.0;
      }
      local_e8 = 0;
      local_ec = 0;
      local_f0 = 0.0;
      local_f4 = 0;
      local_fc = 0;
      local_100 = 0;
      local_104 = 0;
      local_108 = 0;
      local_110 = 0;
      local_114 = 0;
      local_118 = 0;
      local_11c = 0;
      local_e4 = 0x3f800000;
      local_f8 = 0x3f800000;
      local_10c = 0x3f800000;
      local_120 = 0x3f800000;
      if (*(float *)(iVar2 + 0x20) != 0.0) {
        D3DXMatrixRotationZ(local_d0,*(float *)(iVar2 + 0x20));
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      if (local_dc != 0.0) {
        D3DXMatrixRotationY(local_d0,local_dc);
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      if (local_e0 != 0.0) {
        D3DXMatrixRotationX(local_d0,local_e0);
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      local_f0 = local_130;
      local_e8 = local_128[0];
      local_ec = uVar11;
      D3DXMatrixMultiply(&local_120,&local_120,local_90);
    } while ((*(char *)(iVar2 + 2) != '\x03') && (local_138 = local_138 + 1, local_138 < iVar5));
  }
  return;
}

// 00BBAD20  FUN_00bbad20  size=417  [callgraph]
void FUN_00bbad20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 *local_94;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01be9ef4;
    puStack_98 = (undefined1 *)0xbbad44;
    (**(code **)*param_1)();
    puStack_98 = (undefined1 *)0xbbad4b;
    iVar2 = FUN_00dd6d80();
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01be9db8;
    puStack_98 = (undefined1 *)0xbbad6c;
    (**(code **)(*piVar1 + 4))();
    puStack_98 = (undefined1 *)0xbbad73;
    iVar2 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar3 + 0x500) == 0) && ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe50)) != 0)
     ) {
    if (*(int *)(uVar4 + 0x40c8) == 8) {
      local_94 = param_1;
      puStack_98 = (undefined1 *)0xbbadad;
      iVar2 = FUN_00b92c60();
      if (iVar2 != 0) {
        return;
      }
    }
    if ((*(byte *)(uVar4 + 0xcfc) & 0xc0) != 0) {
      puStack_98 = local_50;
      *(undefined4 *)(uVar3 + 0x568) = 0;
      local_7c = 0xc47a0000;
      local_78 = 0;
      local_74 = 0x447a0000;
      local_5c = 0x447a0000;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58[0] = 0;
      local_6c = 0xc47a0000;
      local_94 = (undefined4 *)(*(float *)(uVar3 + 0x3f8) * 0.017453292);
      puStack_9c = (undefined4 *)0xbbae1d;
      D3DXMatrixRotationZ();
      puStack_9c = local_58;
      puStack_a4 = &local_78;
      puStack_a8 = (undefined1 *)0xbbae2f;
      puStack_a0 = puStack_a4;
      D3DXVec3TransformNormal();
      puStack_a8 = (undefined1 *)(*(float *)(uVar3 + 0x3f8) * 0.017453292);
      D3DXMatrixRotationZ(auStack_64);
      D3DXVec3TransformNormal(&local_7c,&local_7c,&local_6c);
      puStack_a8 = puStack_98;
      puStack_a4 = local_94;
      FUN_00bb98c0(*(undefined4 *)(uVar3 + 0x178),&puStack_a8);
      FUN_00bb98c0(*(undefined4 *)(uVar3 + 0x17c),&puStack_a8);
      if (*(int *)(*(int *)(uVar3 + 0x170) + 4) != 0) {
        *(undefined4 *)(*(int *)(uVar3 + 0x170) + 8) = 0;
      }
      FUN_00d82510(0x31,0x32);
    }
  }
  return;
}

// 00BBAED0  FUN_00bbaed0  size=180  [callgraph]
void FUN_00bbaed0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if (*(int *)(uVar4 + 0x500) == 0) {
    if ((*(int *)(uVar3 + 0x40c8) == 8) && (iVar2 = FUN_00b92c60(param_1), iVar2 != 0)) {
      return;
    }
    if (((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe50)) != 0) &&
       ((((*(byte *)(uVar3 + 0xcfc) & 0x80) != 0 || (param_4 != 0)) &&
        (FUN_00d82510(0x45,param_3), param_5 != 0)))) {
      *(int *)(uVar4 + 0x570) = *(int *)(uVar4 + 0x570) + 1;
    }
  }
  return;
}

// 00BBAF90  FUN_00bbaf90  size=180  [callgraph]
void FUN_00bbaf90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if (*(int *)(uVar4 + 0x500) == 0) {
    if ((*(int *)(uVar3 + 0x40c8) == 8) && (iVar2 = FUN_00b92c60(param_1), iVar2 != 0)) {
      return;
    }
    if (((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe50)) != 0) &&
       ((((*(byte *)(uVar3 + 0xcfc) & 0x40) != 0 || (param_4 != 0)) &&
        (FUN_00d82510(0x46,param_3), param_5 != 0)))) {
      *(int *)(uVar4 + 0x570) = *(int *)(uVar4 + 0x570) + 1;
    }
  }
  return;
}

// 00BBB050  FUN_00bbb050  size=684  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbb050(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_70 [4];
  undefined4 auStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    local_b4 = 0.0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar7);
    local_b4 = (float)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar7 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar2 = FUN_00dd6d80(puVar7);
    if (iVar2 != 0) {
      iVar2 = FUN_00a12210(0xffffffff);
      fStack_b0 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                       *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                       *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      fStack_ac = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                       *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      fStack_bc = *(float *)(iVar2 + 0x28) / fVar1;
      fStack_b8 = *(float *)(iVar2 + 0x38) / fVar1;
      fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
      fVar6 = (float10)fpatan((float10)fStack_bc,(float10)fStack_b8);
      fStack_90 = (float)fVar6;
      fStack_8c = (float)fVar5;
      fVar5 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)fStack_ac,
                              (float10)*(float *)(iVar2 + 0x10) / (float10)fStack_b0);
      fStack_88 = (float)fVar5;
      fStack_b0 = 0.0;
      fStack_ac = 1.0;
      uStack_a8 = 0;
      FUN_00ddc1d0(auStack_50,&fStack_90,5);
      D3DXVec3TransformNormal(auStack_70,&fStack_b0,auStack_50);
      fStack_bc = 1.0;
      fStack_b8 = 0.0;
      local_b4 = 0.0;
      FUN_00ddc1d0(auStack_5c,auStack_9c,5);
      D3DXVec3TransformNormal(auStack_6c,&fStack_bc,auStack_5c);
      fStack_b8 = 0.0;
      local_b4 = *(float *)(unaff_ESI + 0x44) + fStack_84 * 1.35;
      fStack_b0 = 0.0;
      uVar8 = *(undefined4 *)(uVar4 + 0x374);
      fVar5 = (float10)FUN_00ddba30((*(float *)(uVar4 + 0x3f8) + 90.0) * 0.017453292);
      uStack_94 = 0;
      fStack_90 = (float)fVar5;
      if (*(int *)(uVar4 + 0x568) != 0) {
        fStack_b8 = _DAT_01d618b4;
        local_b4 = _DAT_01d618b8;
        fStack_b0 = 0.0;
        fStack_ac = (float)auStack_6c[0];
      }
      uStack_98 = uVar8;
      FUN_005ca2a0((float *)(iVar2 + 0x10),&fStack_b8,&uStack_98);
      piVar3[0x234] = 1;
      piVar3[0x235] = 10;
      if (*(int *)(uVar4 + 0x528) == 0) {
        FUN_005ca1a0(1);
      }
    }
  }
  return;
}

// 00BBB3A0  FUN_00bbb3a0  size=144  [callgraph]
bool FUN_00bbb3a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
  }
  if (piVar2[0x1032] != 9) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*piVar2 + 800))(0x3c888889);
      return iVar1 != 0;
    }
  }
  return false;
}

// 00BBB430  FUN_00bbb430  size=196  [callgraph]
void FUN_00bbb430(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if ((((((*(int *)(uVar4 + 0x2f4) == 0) && (*(int *)(uVar4 + 0x2f8) == 0)) &&
        (*(int *)(uVar4 + 0x2fc) == 0)) &&
       ((*(int *)(uVar4 + 0x300) == 0 && (*(int *)(uVar4 + 0x304) < 1)))) &&
      ((*(float *)(uVar4 + 0x5d8) <= 0.0 &&
       ((*(int *)(uVar3 + 0x40c8) != 8 && (*(int *)(uVar3 + 0x40c8) != 0xf)))))) &&
     (*(int *)(uVar4 + 0x3c4) != 0)) {
    *(undefined4 *)(uVar4 + 0x3c4) = 0;
    FUN_00d82510(0x3f,param_3);
  }
  return;
}

// 00BBB500  FUN_00bbb500  size=103  [callgraph]
void FUN_00bbb500(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  iVar1 = FUN_00d821d0(0x3f);
  if (iVar1 != 0) {
    *(undefined4 *)(uVar3 + 0x3c4) = 0;
    return;
  }
  if (*(int *)(uVar3 + 0x188) != 0) {
    uVar2 = FUN_00bbb3a0(param_1,param_2);
    *(undefined4 *)(uVar3 + 0x3c4) = uVar2;
  }
  return;
}

// 00BBB570  FUN_00bbb570  size=107  [callgraph]
bool FUN_00bbb570(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar1 + 0xc);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    piVar2 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
  }
  iVar3 = (**(code **)(*piVar2 + 800))(0x3c888889);
  return iVar3 != 0;
}

// 00BBB5E0  FUN_00bbb5e0  size=1585  [callgraph]
undefined4 FUN_00bbb5e0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  uint local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_5c;
  float *local_58;
  uint local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_a8 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar9);
    local_a8 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  local_5c = *(uint *)(*(int *)(local_a8 + 0x170) + 8);
  local_9c = 0;
  if (2 < local_5c) {
    local_a4 = 0.0;
    local_a0 = 0.0;
    if (local_5c != 1) {
      local_74 = *(float **)(*(int *)(local_a8 + 0x170) + 4);
      fVar1 = 0.0;
      uVar7 = 0;
      do {
        local_98 = *local_74;
        local_94 = local_74[1];
        local_34 = uVar7 + 1;
        if (local_34 < local_5c) {
          local_54 = local_34 - uVar7;
          local_58 = local_74 + 2;
          uVar8 = local_34;
          do {
            if (7 < local_54) break;
            local_a4 = *local_58;
            fVar1 = local_58[1];
            local_40 = local_a4 - local_98;
            local_a0 = fVar1;
            if (1200.0 < SQRT((fVar1 - local_94) * (fVar1 - local_94) + local_40 * local_40)) {
              bVar3 = true;
              local_9c = 1;
              if (uVar7 <= uVar8) {
                local_38 = (local_94 - fVar1) * (local_94 - fVar1);
                local_3c = (local_98 - local_a4) * (local_98 - local_a4);
                pfVar5 = local_74;
                uVar6 = uVar7;
                do {
                  local_c0 = *pfVar5;
                  local_bc = pfVar5[1];
                  if ((bVar3) && (SQRT(local_c0 * local_c0 + local_bc * local_bc) < 950.0)) {
                    bVar3 = false;
                  }
                  fVar2 = -local_94;
                  if (local_3c <= local_38) {
                    if (200.0 < ABS(local_c0 -
                                    ((local_40 / (-fVar1 - fVar2)) * (-local_bc - fVar2) + local_98)
                                   )) {
                      local_9c = 0;
                      break;
                    }
                  }
                  else if (200.0 < ABS(local_bc -
                                       -(fVar2 + (local_c0 - local_98) *
                                                 ((-fVar1 - fVar2) / local_40)))) {
                    local_9c = 0;
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  pfVar5 = pfVar5 + 2;
                } while (uVar6 <= uVar8);
              }
              if ((*(int *)(local_a8 + 0x3f4) != 0) && (bVar3)) {
                local_9c = 0;
                goto LAB_00bbb83f;
              }
              if (local_9c != 0) goto LAB_00bbb865;
            }
            uVar8 = uVar8 + 1;
            local_54 = local_54 + 1;
            local_58 = local_58 + 2;
          } while (uVar8 < local_5c);
        }
        if (local_9c != 0) {
LAB_00bbb865:
          if (*(int *)(local_a8 + 0x570) == 0) {
            local_20 = (local_98 + local_a4) * 0.5;
            local_1c = (local_94 + fVar1) * 0.5;
            local_84 = (local_14 + local_64) * 0.5;
            local_70 = local_98 - local_20;
            local_6c = local_94 - local_1c;
            local_44 = local_64 - local_84;
            local_20 = local_a4 - local_20;
            local_1c = fVar1 - local_1c;
            local_84 = local_14 - local_84;
            local_50 = local_70 * 100.0 + local_70;
            local_4c = local_6c + local_6c * 100.0;
            local_48 = 0;
            local_44 = local_44 * 100.0 + local_44;
            local_90 = local_20 * 100.0 + local_20;
            local_8c = local_1c + local_1c * 100.0;
            local_88 = 0;
            local_84 = local_84 * 100.0 + local_84;
            local_c0 = -local_50;
            local_bc = -local_4c;
            local_b4 = -local_44;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_00b83ee0(&local_70,&local_50,&local_c0,&local_30,0x447a0000);
            local_c0 = -local_90;
            local_bc = -local_8c;
            local_b4 = -local_84;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_00b83ee0(&local_20,&local_90,&local_c0,&local_30,0x447a0000);
            local_98 = local_70;
            local_94 = local_6c;
            local_a4 = local_20;
            local_a0 = local_1c;
            fVar1 = local_1c;
          }
          local_68 = local_a4;
          local_70 = local_98;
          local_6c = local_94;
          local_64 = fVar1;
          FUN_00bb98c0(*(undefined4 *)(local_a8 + 0x178),&local_70);
          uVar7 = local_a8;
          local_70 = local_98;
          local_6c = local_94;
          local_68 = local_a4;
          local_64 = local_a0;
          FUN_00bb98c0(*(undefined4 *)(local_a8 + 0x17c),&local_70);
          if (*(int *)(*(int *)(uVar7 + 0x170) + 4) != 0) {
            *(undefined4 *)(*(int *)(uVar7 + 0x170) + 8) = 0;
          }
          return 1;
        }
LAB_00bbb83f:
        local_74 = local_74 + 2;
        uVar7 = local_34;
      } while (local_34 < local_5c - 1);
    }
  }
  return 0;
}

// 00BBBC20  FUN_00bbbc20  size=712  [callgraph]
undefined4 FUN_00bbbc20(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined *puVar11;
  undefined4 *local_54;
  uint local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_54 = param_1;
  }
  else {
    puVar11 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar11);
    local_54 = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_1);
  }
  iVar5 = local_54[0x5c];
  uVar1 = *(uint *)(iVar5 + 8);
  if (2 < uVar1) {
    local_38 = 0.0;
    local_34 = 0.0;
    local_4c = 0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    if (uVar1 != 1) {
      pfVar10 = *(float **)(iVar5 + 4);
      uVar8 = 1;
      do {
        local_28 = *pfVar10;
        local_24 = pfVar10[1];
        if (uVar8 < uVar1) {
          iVar7 = uVar8 - local_4c;
          uVar9 = uVar8;
          pfVar4 = pfVar10;
          do {
            pfVar6 = pfVar4 + 2;
            if (1 < uVar9) {
              local_18 = local_30;
              local_14 = local_2c;
            }
            if (uVar9 != 0) {
              local_30 = local_38;
              local_2c = local_34;
            }
            local_38 = *pfVar6;
            local_34 = pfVar4[3];
            fVar2 = (float)iVar7;
            if (iVar7 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            if ((((((fVar2 < 5.0) &&
                   (750.0 < SQRT((local_34 - local_24) * (local_34 - local_24) +
                                 (local_38 - local_28) * (local_38 - local_28)))) &&
                  (750.0 < SQRT(local_28 * local_28 + local_24 * local_24))) &&
                 ((ABS(local_38) < 50.0 && (ABS(local_34) < 50.0)))) &&
                ((ABS(local_30) < 50.0 && ((ABS(local_2c) < 50.0 && (ABS(local_18) < 50.0)))))) &&
               (ABS(local_14) < 50.0)) {
              fVar2 = pfVar4[3];
              fVar3 = *pfVar6;
              local_28 = -local_28;
              local_24 = -local_24;
              if (*(int *)(iVar5 + 4) != 0) {
                *(undefined4 *)(iVar5 + 8) = 0;
              }
              local_30 = fVar3;
              local_2c = fVar2;
              local_18 = local_28;
              local_14 = local_24;
              FUN_00bb98c0(local_54[0x5e],&local_30);
              local_28 = local_18;
              local_24 = local_14;
              local_30 = fVar3;
              local_2c = fVar2;
              FUN_00bb98c0(local_54[0x5f],&local_30);
              return 1;
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 1;
            pfVar4 = pfVar6;
          } while (uVar9 < uVar1);
        }
        local_4c = local_4c + 1;
        pfVar10 = pfVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (local_4c < uVar1 - 1);
    }
  }
  return 0;
}

// 00BBBEF0  FUN_00bbbef0  size=269  [callgraph]
void FUN_00bbbef0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  param_1 = (undefined4 *)0x42700000;
  local_4 = 0x3c23d70a;
  local_8 = 0x3c23d70a;
  if (param_2 != 0) {
    local_4 = 0x3ccccccd;
    local_8 = 0x3ccccccd;
    param_1 = (undefined4 *)0x42480000;
  }
  FUN_00b8bcd0();
  if (((*(int *)(uVar4 + 0xe0) == 0) && (*(int *)(uVar4 + 0x188) == 0)) &&
     (*(int *)(uVar4 + 0x330) != 0x13)) {
    local_8 = *(undefined4 *)(uVar4 + 0x5d0);
  }
  *(undefined4 *)(uVar3 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_1,local_4,local_8,0,1,0x3e99999a);
  *(undefined4 *)(uVar3 + 0x3428) = 0;
  *(undefined4 *)(uVar3 + 0x342c) = 0;
  *(undefined4 **)(uVar4 + 0x5cc) = param_1;
  return;
}

// 00BBC000  FUN_00bbc000  size=218  [callgraph]
void FUN_00bbc000(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar8 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar9 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  iVar6 = FUN_00a7ca20();
  piVar2 = *(int **)(iVar6 + 0x18);
  for (piVar1 = *(int **)(iVar6 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
    iVar6 = *(int *)(*piVar1 + 0x24);
    if ((((iVar6 == 0xf0086) || (iVar6 == 0xf0087)) || (iVar6 == 0xf0089)) &&
       (pfVar7 = (float *)FUN_00a7c8b0(), fVar3 = *(float *)(uVar9 + 0x40) - *pfVar7,
       fVar5 = *(float *)(uVar9 + 0x44) - pfVar7[1], fVar4 = *(float *)(uVar9 + 0x48) - pfVar7[2],
       SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)(uVar8 + 0x574))) {
      FUN_00c5bc40(*piVar1,1);
    }
  }
  return;
}

// 00BBC0E0  FUN_00bbc0e0  size=236  [callgraph]
void FUN_00bbc0e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar6 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar5 != 0) & (uint)piVar3;
  }
  if (*(int *)(uVar6 + 0x52c) == 0) {
    if (*(int *)(uVar6 + 0x530) == 0) {
      uVar1 = *(undefined4 *)(uVar4 + 0x4060);
      uVar2 = *(undefined4 *)(uVar4 + 0x4064);
    }
    else {
      uVar1 = *(undefined4 *)(uVar4 + 0x4068);
      uVar2 = *(undefined4 *)(uVar4 + 0x406c);
      if (((((DAT_01bea094 & 0x800) != 0) && (iVar5 = *(int *)(uVar4 + 0x40c8), iVar5 != 0x14)) &&
          (iVar5 != 0xc)) && (iVar5 != 8)) {
        uVar1 = 0x3f800000;
        uVar2 = 0x3f800000;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(uVar4 + 0x4070);
    uVar2 = *(undefined4 *)(uVar4 + 0x4074);
  }
  *(undefined4 *)(uVar4 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_3,uVar1,uVar2,*(undefined4 *)(uVar4 + 0x3450),0,param_2);
  return;
}

// 00BBC2A0  FUN_00bbc2a0  size=108  [callgraph]
void FUN_00bbc2a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(uVar3 + 0x524) = uRam0000341c;
    return;
  }
  puVar4 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar4);
  *(undefined4 *)(uVar3 + 0x524) = *(undefined4 *)((-(uint)(iVar2 != 0) & (uint)piVar1) + 0x341c);
  return;
}

// 00BBC310  FUN_00bbc310  size=115  [callgraph]
void FUN_00bbc310(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if (0.0 < *(float *)(uVar3 + 0x341c)) {
    *(undefined4 *)(uVar3 + 0x341c) = *(undefined4 *)(uVar4 + 0x524);
    return;
  }
  return;
}

// 00BBC390  FUN_00bbc390  size=605  [callgraph]
void FUN_00bbc390(undefined4 *param_1)

{
  void *_Src;
  float fVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined1 *puVar8;
  void *apvStack_fc [5];
  undefined4 *puStack_e8;
  undefined *local_e4;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_e4 = &DAT_01be9ef4;
    puStack_e8 = (undefined4 *)0xbbc3b7;
    (**(code **)*param_1)();
    puStack_e8 = (undefined4 *)0xbbc3be;
    iVar2 = FUN_00dd6d80();
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    local_e4 = &DAT_01be9db8;
    puStack_e8 = (undefined4 *)0xbbc3df;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))();
    puStack_e8 = (undefined4 *)0xbbc3e6;
    FUN_00dd6d80();
  }
  local_e4 = (undefined *)0x0;
  local_c8 = 0.0;
  puStack_e8 = (undefined4 *)0xbbc403;
  iVar2 = FUN_00a8cbe0();
  if (iVar2 != 0) {
    local_e4 = (undefined *)0x0;
    puStack_e8 = (undefined4 *)0xbbc414;
    iVar2 = FUN_00a8cbe0();
    if (iVar2 == 0) {
      local_c8 = 1.4013e-45;
    }
  }
  local_c4 = *(float *)(*(int *)(uVar3 + 0x38c + (int)local_c8 * 4) + 0x8d8);
  local_e4 = (undefined *)0xffffffff;
  puStack_e8 = (undefined4 *)0xbbc43e;
  iVar2 = FUN_00a12210();
  _Src = (void *)(iVar2 + 0x10);
  local_e4 = (undefined *)
             -(*(float *)(iVar2 + 0x18) /
              SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30)));
  puStack_e8 = (undefined4 *)0xbbc46a;
  FUN_00ddbaa0();
  local_70 = 0;
  apvStack_fc[4] = &local_70;
  local_6c = 0;
  local_68 = 0x3f800000;
  apvStack_fc[3] = (void *)0xbbc490;
  puStack_e8 = apvStack_fc[4];
  local_e4 = _Src;
  D3DXVec3TransformNormal();
  local_6c = 0x3f800000;
  apvStack_fc[1] = &local_6c;
  local_68 = 0;
  uStack_64 = 0;
  apvStack_fc[0] = (void *)0xbbc4ba;
  apvStack_fc[2] = apvStack_fc[1];
  apvStack_fc[3] = _Src;
  D3DXVec3TransformNormal();
  puVar8 = &stack0xffffff28;
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0;
  apvStack_fc[0] = _Src;
  D3DXVec3TransformNormal(puVar8,puVar8);
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  fStack_cc = 0.0;
  uStack_d0 = 0;
  uStack_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  FID_conflict__memcpy(&uStack_d4,_Src,0x40);
  fVar7 = *(float *)(uVar3 + 0x3b0) + *(float *)(uVar3 + 0x374);
  puVar6 = auStack_74;
  D3DXMatrixRotationX(puVar6,fVar7);
  D3DXMatrixMultiply(&stack0xffffff24,auStack_7c,&stack0xffffff24);
  D3DXMatrixRotationZ(auStack_88,apvStack_fc[0]);
  D3DXMatrixMultiply(apvStack_fc + 3,auStack_90,apvStack_fc + 3);
  fVar1 = *(float *)(uVar3 + 0x3a4) + 1.35;
  fStack_cc = fStack_cc + (float)puVar6 * fVar1;
  local_c8 = fVar7 * fVar1 + local_c8;
  local_c4 = (float)puVar8 * fVar1 + local_c4;
  ppvVar4 = apvStack_fc;
  puVar5 = &DAT_01d61860;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *ppvVar4;
    ppvVar4 = ppvVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005ee3d0(apvStack_fc);
  return;
}

// 00BBC5F0  FUN_00bbc5f0  size=132  [callgraph]
undefined4 FUN_00bbc5f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((((*(int *)(uVar2 + 0x40c8) != 8) && (iVar3 = *(int *)(uVar4 + 0x330), iVar3 != 3)) &&
      (iVar3 != 4)) && ((iVar3 != 5 && (*(int *)(uVar2 + 0x40c8) != 0x12)))) {
    return 0;
  }
  return 1;
}

// 00BBC680  FUN_00bbc680  size=132  [callgraph]
undefined4 FUN_00bbc680(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((((*(int *)(uVar2 + 0x40c8) != 8) && (iVar3 = *(int *)(uVar4 + 0x330), iVar3 != 3)) &&
      (iVar3 != 4)) && ((iVar3 != 5 && (*(int *)(uVar2 + 0x40c8) != 0x12)))) {
    return 0;
  }
  return 2;
}

// 00BBC710  FUN_00bbc710  size=105  [callgraph]
undefined4 FUN_00bbc710(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 00BBC780  FUN_00bbc780  size=105  [callgraph]
undefined4 FUN_00bbc780(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 00BBC7F0  FUN_00bbc7f0  size=96  [callgraph]
void FUN_00bbc7f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_2 + 0x24) != 0x33) && (*(int *)(param_2 + 0x24) != 0x32)) {
    DAT_01dc08bc = 0;
  }
  return;
}

// 00BBC850  FUN_00bbc850  size=160  [callgraph]
undefined4 FUN_00bbc850(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = *(int *)(uVar2 + 0x40c8);
  if ((((iVar3 != 0xd) && (iVar3 != 9)) && (iVar3 != 0xf)) && (iVar3 != 0xc)) {
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = FUN_00bbb570(param_1);
      if ((iVar3 != 0) && (*(int *)(uVar4 + 0xe0) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}

// 00BBC8F0  FUN_00bbc8f0  size=106  [callgraph]
undefined4 FUN_00bbc8f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar2 + 0x40c8) == 8) {
    return *(undefined4 *)(uVar4 + 0xe8);
  }
  return 1;
}

// 00BBC960  FUN_00bbc960  size=140  [callgraph]
void FUN_00bbc960(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = (**(code **)(*piVar3 + 0x84))();
  uStack_1c = *(undefined4 *)(iVar2 + 4);
  uStack_20 = 0;
  uStack_18 = 0;
  (**(code **)(*piVar3 + 0x88))(&uStack_20);
  return;
}

// 00BBC9F0  FUN_00bbc9f0  size=366  [callgraph]
void FUN_00bbc9f0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar5 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar3;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    fVar1 = *(float *)(uVar5 + 0x3bd4);
    fVar2 = *(float *)(uVar5 + 0x3bd8);
  }
  else {
    fVar1 = *(float *)(uVar5 + 0x3bdc);
    fVar2 = *(float *)(uVar5 + 0x3be0);
  }
  local_18 = 0;
  local_14 = local_14 - local_14;
  local_20 = fVar1;
  local_1c = fVar2;
  if ((fVar1 != 0.0) || (fVar2 != 0.0)) {
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
    }
  }
  fVar1 = ABS(fVar2) + ABS(fVar1);
  if (1000.0 < fVar1) {
    *param_1 = local_20 * 1000.0;
    param_1[1] = local_1c * 1000.0;
    return;
  }
  *param_1 = local_20 * fVar1;
  param_1[1] = fVar1 * local_1c;
  return;
}

// 00BE5C40  ZangekiYokoStatePl0010::vf08  size=948  [class]
undefined4 __thiscall ZangekiYokoStatePl0010::vf08(int param_1,undefined4 *param_2)

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
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x42340000;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (100 < *(uint *)(uVar6 + 0x308)) {
    *(undefined4 *)(uVar6 + 0x308) = 0;
  }
  if (*(int *)(uVar6 + 0x30c) == 0) {
    *(undefined4 *)(uVar6 + 0x308) = 0;
  }
  FUN_00b92af0(&local_20,param_2,
               *(undefined4 *)
                (*(int *)(*(int *)(uVar6 + 0x318) + 4) +
                (*(uint *)(uVar6 + 0x308) % *(uint *)(*(int *)(uVar6 + 0x318) + 8)) * 4));
  *(int *)(uVar6 + 0x308) = *(int *)(uVar6 + 0x308) + 1;
  *(undefined4 *)(param_1 + 0x60) = local_20;
  *(undefined4 *)(param_1 + 100) = local_1c;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x68) = local_18;
  *(undefined4 *)(param_1 + 0x6c) = local_14;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
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
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa0) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = SlashKogekkoBallSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa4) = puVar5;
  puVar5 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = EntryCutTargetSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0xa8) = puVar5;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00d89ec0(0x13,*(int *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00d89ec0(0x14,*(int *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00d89ec0(0x1d,*(int *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00d89ec0(0x12,*(int *)(param_1 + 0xa8));
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

// 00BE6000  ZangekiYokoStatePl0010::vf10  size=1532  [class]
void __thiscall ZangekiYokoStatePl0010::vf10(int param_1,undefined4 *param_2)

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
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x40a00000;
    DAT_01d61ac4 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  if ((*(int *)(param_1 + 0x90) == 0) && (0.0 < *(float *)(param_1 + 0x8c))) {
    fVar8 = (float10)FUN_00e049b0();
    fVar8 = (float10)*(float *)(param_1 + 0x8c) - fVar8;
    *(float *)(param_1 + 0x8c) = (float)fVar8;
    if (fVar8 < (float10)0) {
      *(undefined4 *)(param_1 + 0x90) = 1;
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
      *(undefined4 *)(param_1 + 0x88) = 1;
      *(undefined4 *)((int)param_2 + 0x3e0) = 0;
      FUN_00bd43f0(puVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0x74));
    }
    iVar3 = piVar7[0x1032];
    if (((((iVar3 == 2) || (iVar3 == 0xe)) || (iVar3 == 8)) &&
        (((DAT_01bea090 & 0x80000800) == 0 &&
         ((*(int *)((int)param_2 + 0x3e4) != 0 || (*(int *)((int)param_2 + 1000) != 0)))))) &&
       (*(int *)(param_1 + 0x84) == 0)) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      *(undefined4 *)(param_1 + 0x80) = 1;
    }
    piVar5 = (int *)(param_1 + 0x80);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 < 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    if (((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0x78) == 0)) &&
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
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
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
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
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

