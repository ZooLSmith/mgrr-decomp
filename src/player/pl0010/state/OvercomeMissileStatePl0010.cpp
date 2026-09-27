// src/player/pl0010/state/OvercomeMissileStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82190..00BE03C0, 10 functions

#include "mgrr.h"
#include "OvercomeMissileStatePl0010.h"

// 00B82190  OvercomeMissileStatePl0010::vf08  size=49  [class]
undefined4 __thiscall OvercomeMissileStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return 1;
}

// 00B821D0  OvercomeMissileStatePl0010::vf18  size=5  [class]
undefined4 __thiscall OvercomeMissileStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B821E0  OvercomeMissileStatePl0010::vf24  size=19  [class]
bool OvercomeMissileStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82200  OvercomeMissileStatePl0010::OvercomeMissileStatePl0010  size=33  [class]
undefined4 * __thiscall
OvercomeMissileStatePl0010::OvercomeMissileStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00B82230  OvercomeMissileStatePl0010::vf00  size=6  [class]
undefined * OvercomeMissileStatePl0010::vf00(void)

{
  return &DAT_01be9e58;
}

// 00B911B0  OvercomeMissileStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall OvercomeMissileStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB0460  OvercomeMissileStatePl0010::vf0C  size=708  [class]
void __thiscall OvercomeMissileStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined1 local_48 [4];
  int *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    local_44 = *(int **)(uVar5 + 0xc);
    if (local_44 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*local_44 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar3 != 0) & (uint)local_44;
    }
    iVar3 = *(int *)(uVar6 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar6 + 0x418c) = *(undefined4 *)(uVar6 + 0x4180);
    *(undefined4 *)(uVar6 + 0x4188) = *(undefined4 *)(uVar6 + 0x417c);
    *(undefined4 *)(uVar6 + 0x4190) = *(undefined4 *)(uVar6 + 0x4184);
    FUN_00a7c940(*(int *)(*(int *)(uVar5 + 0xc0) + 4) + 0xb50);
    local_44 = (int *)(*(float *)(*(int *)(uVar6 + 0x764) + 0xfc) + 3.0);
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar3 + 0x44);
    uVar8 = *(undefined4 *)(iVar3 + 0x48);
    fVar2 = *(float *)(iVar3 + 0x4c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x40);
    *(float *)(param_1 + 100) = fVar1 + 0.5;
    *(undefined4 *)(param_1 + 0x68) = uVar8;
    *(float *)(param_1 + 0x6c) = fVar2 + local_24;
    local_40 = *(float *)(param_1 + 0x60) - *(float *)(uVar6 + 0x40);
    local_3c = *(float *)(param_1 + 100) - *(float *)(uVar6 + 0x44);
    local_38 = *(float *)(param_1 + 0x68) - *(float *)(uVar6 + 0x48);
    local_34 = *(float *)(param_1 + 0x6c) - *(float *)(uVar6 + 0x4c);
    pfVar4 = (float *)FUN_00a92640(local_20);
    if (pfVar4[2] * local_38 + *pfVar4 * local_40 + pfVar4[1] * local_3c <= 0.0) {
      uVar8 = 0xb7;
    }
    else {
      uVar8 = 0xb8;
    }
    FUN_00aa3f60(uVar8);
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    local_24 = local_34;
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
    }
    FUN_00a95fb0(0);
    FUN_00d83250(param_1 + 0x30,param_1 + 0x34,0x40c00000,local_44,
                 ABS(*(float *)(*(int *)(uVar6 + 0x764) + 0xf4)));
    FUN_00a7c960(local_48);
    FUN_00a937e0();
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar6 + 0x44);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB0730  OvercomeMissileStatePl0010::vf20  size=179  [class]
undefined4 __thiscall OvercomeMissileStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  if (*(int *)(param_1 + 0x24) != 0x20) {
    FUN_00a93820();
  }
  return 1;
}

// 00BCC260  OvercomeMissileStatePl0010::vf14  size=309  [class]
void __thiscall OvercomeMissileStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
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
  iVar2 = FUN_00a94db0(0xb7);
  if (iVar2 == 0) {
    iVar2 = FUN_00a94db0(0xb8);
    if (iVar2 != 0) goto LAB_00bcc2dd;
  }
  else {
LAB_00bcc2dd:
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(uVar4 + 0x30) = 1;
    if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
      iVar2 = FUN_008e2740();
      if (iVar2 == 0) goto LAB_00bcc33d;
    }
    FUN_00d82510(0x13,100);
    iVar2 = FUN_00b8b610();
    if (iVar2 == 0x16) {
      FUN_00d82510(0x20,0x96);
    }
  }
LAB_00bcc33d:
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = FUN_00bb90c0(param_2,param_1);
    if (iVar2 != 0) {
      FUN_008e0c00(uVar3 + 0x560);
      iVar2 = FUN_00b8b610();
      if (iVar2 == 0x16) {
        FUN_00d82510(0x20,0x96);
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE03C0  OvercomeMissileStatePl0010::vf10  size=673  [class]
void __thiscall OvercomeMissileStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar2 + 0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  fVar5 = (float10)FUN_00a8ed10(param_1 + 0x60,piVar4 + 0x10);
  FUN_00a8e960((float)fVar5);
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
    iVar3 = FUN_00a8cab0();
    if (iVar3 < 3) goto LAB_00be047d;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
LAB_00be047d:
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  else {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    local_40 = *(float *)(iVar3 + 0x40) - (float)piVar4[0x10];
    local_3c = (*(float *)(iVar3 + 0x44) + 0.5) - (float)piVar4[0x11];
    local_38 = *(float *)(iVar3 + 0x48) - (float)piVar4[0x12];
    local_34 = (*(float *)(iVar3 + 0x4c) + local_14) - (float)piVar4[0x13];
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    local_24 = local_34;
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
    }
    fVar5 = (float10)FUN_00a95680(0);
    fVar6 = (float10)FUN_00a958c0(0);
    if ((float10)0 < (float10)(float)fVar5 - fVar6) {
      fVar5 = ((float10)(float)fVar5 - fVar6) * (float10)60.0;
      local_20 = (float)((float10)local_30 / fVar5);
      local_1c = (float)((float10)local_2c / fVar5);
      local_18 = (float)((float10)local_28 / fVar5);
      local_14 = (float)((float10)local_24 / fVar5);
      (**(code **)(*piVar4 + 0x70))(&local_20);
    }
    iVar3 = FUN_008e0ce0(&local_20);
    if (*(float *)(iVar3 + 4) < 0.0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

