// src/player/pl1400/state/ZangekiIaiAttackStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F770..00896A30, 17 functions

#include "types.h"

// 0085F770  ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf10(void)

{
  return;
}

// 0085F780  ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf14(void)

{
  return;
}

// 0085F790  ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf18  size=37  [class]
void ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf18(void)

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

// 0085F7D0  ZangekiIaiAttackStatePl1400::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiIaiAttackStatePl1400::thunk_vf14(int param_1,undefined4 param_2)

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

// 0085F7E0  ZangekiIaiAttackStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiIaiAttackStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F7F0  ZangekiIaiAttackStatePl1400::vf24  size=19  [class]
bool ZangekiIaiAttackStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085F810  ZangekiIaiAttackStatePl1400::ZangekiIaiAttackStatePl1400  size=33  [class]
undefined4 * __thiscall
ZangekiIaiAttackStatePl1400::ZangekiIaiAttackStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 0085F840  ZangekiIaiAttackStatePl1400::vf00  size=6  [class]
undefined * ZangekiIaiAttackStatePl1400::vf00(void)

{
  return &DAT_01b35b48;
}

// 00867C90  ZangekiIaiAttackStatePl1400::vf08  size=176  [class]
undefined4 __thiscall ZangekiIaiAttackStatePl1400::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x428c0000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  puVar2 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7c168);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = DatsuTargetCreateSlot::vftable;
  }
  *(undefined4 **)(param_1 + 0x84) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00d89ec0(0x14,puVar2);
  }
  return 1;
}

// 00867D40  ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 * __thiscall
ZangekiIaiAttackStatePl1400::DatsuTargetCreateSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00867D60  ZangekiIaiAttackStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIaiAttackStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008719D0  ZangekiIaiAttackStatePl1400::vf20  size=309  [class]
undefined4 ZangekiIaiAttackStatePl1400::vf20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;
  undefined *puVar4;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 != 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35b78;
      (**(code **)*param_1)(&DAT_01b35b78);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar4);
    }
    *(undefined4 *)(uVar3 + 0x618) = 0;
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    *(undefined4 *)(uVar3 + 0x5d4) = 0;
    *(undefined4 *)(uVar3 + 0x3e4) = 0;
    *(undefined4 *)(uVar3 + 0x61c) = 0;
    FUN_00a83990();
    FUN_00a83990();
    FUN_00a83990();
    if (param_1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar4 = &DAT_01b35b78;
      (**(code **)*param_1)(&DAT_01b35b78);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    (**(code **)(*(int *)(uVar2 + 0x240) + 8))(0x41200000,0,0);
    if (*(int *)(unaff_ESI + 0x84) != 0) {
      FUN_00d8a1d0(0x14,*(int *)(unaff_ESI + 0x84));
      if (*(undefined4 **)(unaff_ESI + 0x84) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(unaff_ESI + 0x84))(1);
        *(undefined4 *)(unaff_ESI + 0x84) = 0;
      }
    }
    *(undefined4 *)(uVar3 + 0x2f4) = 0;
    return 1;
  }
  return 0;
}

// 00871B10  FUN_00871b10  size=704  [callgraph]
void __thiscall FUN_00871b10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 *local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    local_38 = param_2;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar8);
    local_38 = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_2);
  }
  piVar7 = (int *)local_38[0x178];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar8);
    piVar7 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar7);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d4,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x5c));
    FUN_00864400(0x1d4,0,0,0x3f800000,0x8000000);
    (**(code **)(*piVar7 + 0x318))();
    FUN_008e0af0(0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else if (*(int *)(param_1 + 0x34) != 1) goto LAB_00871db4;
  iVar5 = FUN_00a952e0(0,*(undefined4 *)(param_1 + 0x80));
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (((*(float *)(param_1 + 0x40) == 0.0) && (*(float *)(param_1 + 0x44) == 0.0)) &&
     (*(float *)(param_1 + 0x48) == 0.0)) goto LAB_00871db4;
  fVar1 = (float)piVar7[0x10] - *(float *)(param_1 + 0x40);
  fVar3 = (float)piVar7[0x11] - *(float *)(param_1 + 0x44);
  fVar2 = (float)piVar7[0x12] - *(float *)(param_1 + 0x48);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar1 < 1.0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (2.0 <= fVar1) {
    if (fVar1 < 3.0) {
      iVar5 = FUN_00a92f90();
      FUN_00e26e90();
      uVar4 = 0x3dcccccd;
      goto LAB_00871ce2;
    }
  }
  else {
    iVar5 = FUN_00a92f90();
    FUN_00e26e90();
    uVar4 = 0;
LAB_00871ce2:
    *(undefined4 *)(iVar5 + 0xe4) = uVar4;
    *(undefined4 *)(iVar5 + 0xe8) = uVar4;
    *(undefined4 *)(iVar5 + 0xec) = uVar4;
  }
  if (5.0 < fVar1) {
    iVar5 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar5 + 0xe4) = 0x40000000;
    *(undefined4 *)(iVar5 + 0xe8) = 0x40000000;
    *(undefined4 *)(iVar5 + 0xec) = 0x40000000;
  }
  if ((piVar7[0x9a8] != 0) || (piVar7[0x1513] != 0)) {
    iVar5 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar5 + 0xe4) = 0;
    *(undefined4 *)(iVar5 + 0xe8) = 0;
    *(undefined4 *)(iVar5 + 0xec) = 0;
  }
  fVar1 = (*(float *)(param_1 + 0x44) - (float)piVar7[0x11]) * 0.1;
  pfVar6 = (float *)FUN_00a926e0(local_20);
  local_30 = *pfVar6 * fVar1;
  local_2c = pfVar6[1] * fVar1;
  local_28 = pfVar6[2] * fVar1;
  local_24 = fVar1 * pfVar6[3];
  (**(code **)(*piVar7 + 0x70))(&local_30);
LAB_00871db4:
  FUN_00b83ea0(0x40a00000);
  return;
}

// 00871DD0  FUN_00871dd0  size=683  [callgraph]
void __thiscall FUN_00871dd0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  undefined *puVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar8 = *(int **)(uVar5 + 0x5e0);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar8 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar9);
    piVar8 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar8);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d4,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x5c));
    FUN_00864400(0x1d4,0,0,0x3f800000,0x8000000);
    (**(code **)(*piVar8 + 0x318))();
    FUN_008e0af0(0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00871e43:
    iVar6 = FUN_00a952e0(0,*(undefined4 *)(param_1 + 0x80));
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00871e43;
  if (((*(float *)(param_1 + 0x40) == 0.0) && (*(float *)(param_1 + 0x44) == 0.0)) &&
     (*(float *)(param_1 + 0x48) == 0.0)) {
    return;
  }
  fVar1 = (float)piVar8[0x10] - *(float *)(param_1 + 0x40);
  fVar3 = (float)piVar8[0x11] - *(float *)(param_1 + 0x44);
  fVar2 = (float)piVar8[0x12] - *(float *)(param_1 + 0x48);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar1 < 1.0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (2.0 <= fVar1) {
    if (3.0 <= fVar1) goto LAB_00871fb6;
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    uVar4 = 0x3dcccccd;
  }
  else {
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    uVar4 = 0;
  }
  *(undefined4 *)(iVar6 + 0xe4) = uVar4;
  *(undefined4 *)(iVar6 + 0xe8) = uVar4;
  *(undefined4 *)(iVar6 + 0xec) = uVar4;
LAB_00871fb6:
  if (5.0 < fVar1) {
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar6 + 0xe4) = 0x3fc00000;
    *(undefined4 *)(iVar6 + 0xe8) = 0x3fc00000;
    *(undefined4 *)(iVar6 + 0xec) = 0x3fc00000;
  }
  if ((piVar8[0x9a8] != 0) || (piVar8[0x1513] != 0)) {
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar6 + 0xe4) = 0;
    *(undefined4 *)(iVar6 + 0xe8) = 0;
    *(undefined4 *)(iVar6 + 0xec) = 0;
  }
  fVar1 = (*(float *)(param_1 + 0x44) - (float)piVar8[0x11]) * 0.1;
  pfVar7 = (float *)FUN_00a926e0(local_20);
  local_30 = *pfVar7 * fVar1;
  local_2c = pfVar7[1] * fVar1;
  local_28 = pfVar7[2] * fVar1;
  local_24 = fVar1 * pfVar7[3];
  (**(code **)(*piVar8 + 0x70))(&local_30);
  return;
}

// 00872080  FUN_00872080  size=1167  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00872080(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  undefined *puVar11;
  int *local_d8;
  int local_d4;
  undefined4 local_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [156];
  
  local_d4 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar11 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar11);
    uVar9 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  local_d8 = *(int **)(uVar9 + 0x5e0);
  if (local_d8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar11 = &DAT_01b35b20;
    (**(code **)(*local_d8 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar11);
    piVar8 = (int *)(-(uint)(iVar4 != 0) & (uint)local_d8);
  }
  if (*(int *)(param_1 + 0x30) == 5) {
    return;
  }
  iVar4 = FUN_00a8c760(0x16);
  if (iVar4 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    FUN_00da8810(0x42700000);
    FUN_00db3e80(0x42700000,0,&DAT_01bea1d0);
    FUN_00b8bb40(_DAT_01bea3b0);
    *(undefined4 *)(param_1 + 0x74) = 0;
    return;
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), param_1 = local_d4, iVar4 == 0)) {
    if ((*(float *)(param_1 + 0x40) == 0.0) &&
       ((*(float *)(param_1 + 0x44) == 0.0 && (*(float *)(param_1 + 0x48) == 0.0)))) {
      return;
    }
    pfVar5 = (float *)FUN_00a926e0(&local_d0);
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar5[3];
    local_c0 = *pfVar5 * 1.35 + (float)piVar8[0x10];
LAB_0087246b:
    local_bc = fVar1 * 1.35 + (float)piVar8[0x11];
    local_b8 = (float)piVar8[0x12] + fVar2 * 1.35;
    local_b4 = fVar3 * 1.35 + (float)piVar8[0x13];
    thunk_FUN_00dde510(&local_d8,&local_d4,(float *)(param_1 + 0x40),&local_c0);
    FUN_00b8bb40(-(float)local_d8);
    iVar4 = FUN_00a8c760(5);
    if (iVar4 == 0) {
      return;
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x84))();
    local_d0 = *puVar6;
    uStack_c8 = puVar6[2];
    uStack_c4 = puVar6[3];
    fVar10 = (float10)*(float *)(param_1 + 0x40) - (float10)(float)piVar8[0x10];
    fVar1 = *(float *)(param_1 + 0x48);
  }
  else {
    if (-1 < *(int *)(uVar9 + 0x610)) {
      iVar4 = FUN_00c518c0(local_a0,*(int *)(uVar9 + 0x610));
      iVar4 = FUN_00a12210(*(undefined4 *)(iVar4 + 8));
      if (iVar4 == 0) {
        return;
      }
      pfVar5 = (float *)FUN_00a926e0(&local_d0);
      local_c0 = *pfVar5 * 1.35 + (float)piVar8[0x10];
      local_bc = (float)piVar8[0x11] + pfVar5[1] * 1.35;
      local_b8 = (float)piVar8[0x12] + pfVar5[2] * 1.35;
      local_b4 = (float)piVar8[0x13] + pfVar5[3] * 1.35;
      local_b0 = *(float *)(iVar4 + 0x40);
      local_ac = *(undefined4 *)(iVar4 + 0x44);
      local_a8 = *(float *)(iVar4 + 0x48);
      local_a4 = *(undefined4 *)(iVar4 + 0x4c);
      thunk_FUN_00dde510(&local_d8,&local_d4,&local_b0,&local_c0);
      FUN_00b8bb40(-(float)local_d8);
      iVar4 = FUN_00a8c760(5);
      if (iVar4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x84))();
      local_d0 = *puVar6;
      uStack_c8 = puVar6[2];
      uStack_c4 = puVar6[3];
      pcVar7 = *(code **)(*piVar8 + 0x88);
      fVar10 = (float10)local_b0 - (float10)(float)piVar8[0x10];
      fVar1 = local_a8;
      goto LAB_008724f9;
    }
    if (*(int *)(uVar9 + 0x614) < 0) {
      if (((*(float *)(local_d4 + 0x40) == 0.0) && (*(float *)(local_d4 + 0x44) == 0.0)) &&
         (*(float *)(local_d4 + 0x48) == 0.0)) {
        return;
      }
      pfVar5 = (float *)FUN_00a926e0(&local_d0);
      fVar1 = pfVar5[1];
      fVar2 = pfVar5[2];
      fVar3 = pfVar5[3];
      local_c0 = (float)piVar8[0x10] + *pfVar5 * 1.35;
      goto LAB_0087246b;
    }
    iVar4 = FUN_00a12210(*(int *)(uVar9 + 0x614));
    if (iVar4 == 0) {
      return;
    }
    pfVar5 = (float *)FUN_00a926e0(&local_d0);
    local_c0 = (float)piVar8[0x10] + *pfVar5 * 1.35;
    local_bc = (float)piVar8[0x11] + pfVar5[1] * 1.35;
    local_b8 = pfVar5[2] * 1.35 + (float)piVar8[0x12];
    local_b4 = (float)piVar8[0x13] + pfVar5[3] * 1.35;
    local_b0 = *(float *)(iVar4 + 0x40);
    local_ac = *(undefined4 *)(iVar4 + 0x44);
    local_a8 = *(float *)(iVar4 + 0x48);
    local_a4 = *(undefined4 *)(iVar4 + 0x4c);
    thunk_FUN_00dde510(&local_d8,&local_d4,&local_b0,&local_c0);
    FUN_00b8bb40(-(float)local_d8);
    iVar4 = FUN_00a8c760(5);
    if (iVar4 == 0) {
      return;
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x84))();
    local_d0 = *puVar6;
    uStack_c8 = puVar6[2];
    uStack_c4 = puVar6[3];
    fVar10 = (float10)local_b0 - (float10)(float)piVar8[0x10];
    fVar1 = local_a8;
  }
  pcVar7 = *(code **)(*piVar8 + 0x88);
LAB_008724f9:
  fVar10 = (float10)fpatan(fVar10,(float10)fVar1 - (float10)(float)piVar8[0x12]);
  fStack_cc = (float)fVar10;
  (*pcVar7)(&local_d0);
  return;
}

// 00896930  ZangekiIaiAttackStatePl1400::vf0C  size=246  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiIaiAttackStatePl1400::vf0C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar3 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar1 = FUN_00dd6d80(puVar3);
      uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar2 + 0x5e0) != (int *)0x0) {
      puVar3 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar3);
    }
    FUN_00e25500(0);
    FUN_008892a0(param_2);
    *(undefined4 *)(uVar2 + 0x2f8) = 1;
    *(undefined4 *)(uVar2 + 0x5d4) = 1;
    if (*(int *)(uVar2 + 0x628) != 0) {
      _DAT_01bea940 = 0x41f00000;
      FUN_00da8810(0x41f00000);
      FUN_00db3e80(0x41f00000,1,&DAT_01bea1d0);
      StateMachineNode::vf0C(param_2);
      return;
    }
    _DAT_01bea940 = 0;
    FUN_00da8810(0);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00896A30  ZangekiIaiAttackStatePl1400::vf10  size=340  [class]
void __thiscall ZangekiIaiAttackStatePl1400::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  puVar2 = param_2;
  piVar4 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    param_2 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)param_2 + 0x5e0);
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar1);
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    FUN_00889810(puVar2);
    break;
  case 1:
    FUN_008899f0(puVar2);
    break;
  case 2:
    FUN_00889c30(puVar2);
    break;
  case 3:
    FUN_00871b10(puVar2);
    break;
  case 4:
    FUN_00871dd0(puVar2);
    break;
  case 5:
    FUN_00889f40(puVar2);
  }
  FUN_00872080(puVar2);
  FUN_00877520(puVar2);
  FUN_0088a130(puVar2);
  FUN_00869480(puVar2);
  iVar3 = FUN_00a8c760(0x16);
  if (iVar3 == 0) {
    FUN_00c5bbb0(2);
    FUN_00c5bbb0(0x10);
    *(undefined4 *)((int)param_2 + 0x374) = 0;
    if (*(int *)((int)param_2 + 0x2f8) != 0) {
      (**(code **)(*piVar4 + 0x220))(0x40a00000);
    }
  }
  iVar3 = FUN_00b7a500();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  if ((*(int *)(param_1 + 0x7c) == 0) && ((piVar4[0x33e] & piVar4[0x389]) == 0)) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  StateMachineNode::vf10(puVar2);
  return;
}

