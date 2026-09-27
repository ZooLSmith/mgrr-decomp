// src/player/pl0010/state/NarrowScaffoldWalkStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81DF0..00BAF6A0, 10 functions

#include "mgrr.h"
#include "NarrowScaffoldWalkStatePl0010.h"

// 00B81DF0  FUN_00b81df0  size=195  [callgraph]
void FUN_00b81df0(undefined4 *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_ESI;
  float10 fVar4;
  float *pfVar5;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = *param_2 + *param_3;
  local_2c = param_3[1] + param_2[1];
  local_28 = param_3[2] + param_2[2];
  local_24 = param_3[3] + param_2[3];
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  pfVar5 = &local_30;
  D3DXVec3TransformNormal(pfVar5,pfVar5,param_4);
  fVar1 = *(float *)(param_4 + 0x34);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_4);
  fVar2 = *(float *)(param_4 + 0x30);
  fVar3 = *(float *)(param_4 + 0x38);
  *param_1 = 0;
  fVar4 = (float10)fpatan((float10)(float)pfVar5 - ((float10)fVar2 + (float10)(fVar1 + fStack_38)),
                          (float10)unaff_ESI - ((float10)local_30 + (float10)fVar3));
  param_1[1] = (float)fVar4;
  param_1[2] = 0;
  return;
}

// 00B81EC0  NarrowScaffoldWalkStatePl0010::vf08  size=19  [class]
bool NarrowScaffoldWalkStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B81EE0  NarrowScaffoldWalkStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall NarrowScaffoldWalkStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

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

// 00B81EF0  NarrowScaffoldWalkStatePl0010::vf18  size=5  [class]
undefined4 __thiscall NarrowScaffoldWalkStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81F00  NarrowScaffoldWalkStatePl0010::vf24  size=19  [class]
bool NarrowScaffoldWalkStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81F40  NarrowScaffoldWalkStatePl0010::vf00  size=6  [class]
undefined * NarrowScaffoldWalkStatePl0010::vf00(void)

{
  return &DAT_01be9e48;
}

// 00B91120  NarrowScaffoldWalkStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall NarrowScaffoldWalkStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAEC70  NarrowScaffoldWalkStatePl0010::vf0C  size=176  [class]
void __thiscall NarrowScaffoldWalkStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar4);
      uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
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
    FUN_00aa3f60(0xd4);
    FUN_00a95fb0(0);
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar2 + 0x4170) = 1;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAED20  NarrowScaffoldWalkStatePl0010::vf10  size=2424  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NarrowScaffoldWalkStatePl0010::vf10(undefined4 *param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  float local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [16];
  undefined1 local_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar2 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar5 != 0) & (uint)piVar3;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  fVar1 = *(float *)(*(int *)(uVar2 + 0x40d4) + 0x14c);
  if (fVar1 * fVar1 < *(float *)(uVar2 + 0xd28)) {
    FUN_00b8ae90(&local_f0);
    FUN_00da0640(local_50);
    local_120 = _DAT_01b7b920;
    local_11c = 0.0;
    local_118 = _DAT_01b7b924;
    D3DXVec3TransformNormal(&local_f0,&local_120,local_50);
    if (((local_f0 != 0.0) || (fStack_ec != 0.0)) || (fStack_e8 != 0.0)) {
      fVar1 = fStack_e8 * fStack_e8 + local_f0 * local_f0 + fStack_ec * fStack_ec;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_f0,&local_f0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_f0 = 0.0;
        fStack_ec = 1.0;
        fStack_e8 = 0.0;
      }
    }
    FUN_00a8b8a0(&fStack_80,0x3d4ccccd);
    FUN_00a8b8a0(&fStack_a0,0xbd4ccccd);
    FUN_00a8b9b0(&fStack_70,0x3d4ccccd);
    FUN_00a8b9b0(&fStack_90,0xbd4ccccd);
    FUN_00a8bac0(&fStack_d0,0x3e4ccccd);
    FUN_00a8bac0(&fStack_c0,0xbe4ccccd);
    piVar3 = (int *)FUN_009f8b60();
    uVar6 = *piVar3 << 0x10 | 0x1a;
    iStack_d8 = 0;
    uStack_d4 = 0;
    pfVar4 = (float *)FUN_00a925a0(auStack_b0);
    if (0.5 < pfVar4[2] * fStack_e8 + *pfVar4 * local_f0 + pfVar4[1] * fStack_ec) {
      local_120 = fStack_80 + *(float *)(uVar2 + 0x40) + fStack_d0;
      local_11c = fStack_7c + *(float *)(uVar2 + 0x44) + fStack_cc;
      local_118 = fStack_78 + *(float *)(uVar2 + 0x48) + fStack_c8;
      fStack_114 = fStack_74 + *(float *)(uVar2 + 0x4c) + fStack_c4;
      fStack_a8 = fStack_b8 * 2.0;
      fStack_100 = fStack_c0 * 2.0 + local_120;
      fStack_fc = fStack_bc * 2.0 + local_11c;
      fStack_f8 = fStack_a8 + local_118;
      fStack_f4 = fStack_114 + fStack_b4 * 2.0;
      FUN_00f95fa0(&local_120,&fStack_100,0xffffffff,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (auStack_b0,0,&uStack_d4,0,&local_120,&fStack_100,uVar6,"narrow");
      if (iVar5 != 0) {
        iVar5 = FUN_00b81df0(auStack_60,uVar2 + 0x40,&fStack_80,uVar2 + 0xf0);
        *(undefined4 *)(uVar2 + 0x94) = *(undefined4 *)(iVar5 + 4);
        iStack_d8 = 1;
        *(float *)(uVar2 + 0x50) = *(float *)(uVar2 + 0x50) + fStack_80 * 0.15;
        *(float *)(uVar2 + 0x54) = fStack_7c * 0.15 + *(float *)(uVar2 + 0x54);
        *(float *)(uVar2 + 0x58) = *(float *)(uVar2 + 0x58) + fStack_78 * 0.15;
        *(float *)(uVar2 + 0x5c) = fStack_74 * 0.15 + *(float *)(uVar2 + 0x5c);
        *(undefined4 *)(uVar2 + 0x54) = uStack_ac;
      }
    }
    pfVar4 = (float *)FUN_00a925a0(auStack_60);
    if (0.5 < pfVar4[2] * -1.0 * fStack_e8 +
              *pfVar4 * -1.0 * local_f0 + pfVar4[1] * -1.0 * fStack_ec) {
      fStack_100 = fStack_a0 + fStack_d0 + *(float *)(uVar2 + 0x40);
      fStack_fc = fStack_9c + *(float *)(uVar2 + 0x44) + fStack_cc;
      fStack_f8 = fStack_98 + *(float *)(uVar2 + 0x48) + fStack_c8;
      fStack_f4 = fStack_94 + *(float *)(uVar2 + 0x4c) + fStack_c4;
      fStack_a8 = fStack_b8 * 2.0;
      local_120 = fStack_c0 * 2.0 + fStack_100;
      local_11c = fStack_bc * 2.0 + fStack_fc;
      local_118 = fStack_a8 + fStack_f8;
      fStack_114 = fStack_b4 * 2.0 + fStack_f4;
      FUN_00f95fa0(&fStack_100,&local_120,0xffff0000,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (auStack_b0,0,&uStack_d4,0,&fStack_100,&local_120,uVar6,"narrow");
      if (iVar5 != 0) {
        iVar5 = FUN_00b81df0(auStack_60,(float *)(uVar2 + 0x40),&fStack_a0,uVar2 + 0xf0);
        *(undefined4 *)(uVar2 + 0x94) = *(undefined4 *)(iVar5 + 4);
        iStack_d8 = 1;
        *(float *)(uVar2 + 0x50) = fStack_a0 * 0.15 + *(float *)(uVar2 + 0x50);
        *(float *)(uVar2 + 0x54) = fStack_9c * 0.15 + *(float *)(uVar2 + 0x54);
        *(float *)(uVar2 + 0x58) = *(float *)(uVar2 + 0x58) + fStack_98 * 0.15;
        *(float *)(uVar2 + 0x5c) = fStack_94 * 0.15 + *(float *)(uVar2 + 0x5c);
        *(undefined4 *)(uVar2 + 0x54) = uStack_ac;
      }
    }
    pfVar4 = (float *)FUN_00a92640(auStack_60);
    if (0.5 <= pfVar4[2] * fStack_e8 + *pfVar4 * local_f0 + pfVar4[1] * fStack_ec) {
      fStack_100 = fStack_70 + fStack_d0 + *(float *)(uVar2 + 0x40);
      fStack_fc = fStack_6c + *(float *)(uVar2 + 0x44) + fStack_cc;
      fStack_f8 = fStack_68 + *(float *)(uVar2 + 0x48) + fStack_c8;
      fStack_f4 = fStack_64 + *(float *)(uVar2 + 0x4c) + fStack_c4;
      fStack_a8 = fStack_b8 * 2.0;
      local_120 = fStack_c0 * 2.0 + fStack_100;
      local_11c = fStack_bc * 2.0 + fStack_fc;
      local_118 = fStack_a8 + fStack_f8;
      fStack_114 = fStack_b4 * 2.0 + fStack_f4;
      FUN_00f95fa0(&fStack_100,&local_120,0xff00ff00,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (auStack_b0,0,&uStack_d4,0,&fStack_100,&local_120,uVar6,"narrow");
      if (iVar5 != 0) {
        iVar5 = FUN_00b81df0(auStack_60,(float *)(uVar2 + 0x40),&fStack_70,uVar2 + 0xf0);
        *(undefined4 *)(uVar2 + 0x94) = *(undefined4 *)(iVar5 + 4);
        iStack_d8 = 1;
        *(float *)(uVar2 + 0x50) = fStack_70 * 0.15 + *(float *)(uVar2 + 0x50);
        *(float *)(uVar2 + 0x54) = fStack_6c * 0.15 + *(float *)(uVar2 + 0x54);
        *(float *)(uVar2 + 0x58) = *(float *)(uVar2 + 0x58) + fStack_68 * 0.15;
        *(float *)(uVar2 + 0x5c) = fStack_64 * 0.15 + *(float *)(uVar2 + 0x5c);
        *(undefined4 *)(uVar2 + 0x54) = uStack_ac;
      }
    }
    pfVar4 = (float *)FUN_00a92640(auStack_60);
    if (0.5 <= pfVar4[2] * -1.0 * fStack_e8 +
               *pfVar4 * -1.0 * local_f0 + pfVar4[1] * -1.0 * fStack_ec) {
      fStack_100 = *(float *)(uVar2 + 0x40) + fStack_d0 + fStack_90;
      fStack_fc = fStack_8c + *(float *)(uVar2 + 0x44) + fStack_cc;
      fStack_f8 = fStack_88 + *(float *)(uVar2 + 0x48) + fStack_c8;
      fStack_f4 = fStack_84 + *(float *)(uVar2 + 0x4c) + fStack_c4;
      fStack_a8 = fStack_b8 * 2.0;
      local_120 = fStack_c0 * 2.0 + fStack_100;
      local_11c = fStack_bc * 2.0 + fStack_fc;
      local_118 = fStack_a8 + fStack_f8;
      fStack_114 = fStack_b4 * 2.0 + fStack_f4;
      FUN_00f95fa0(&fStack_100,&local_120,0xff0000ff,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (auStack_b0,0,&uStack_d4,0,&fStack_100,&local_120,uVar6,"narrow");
      if (iVar5 != 0) {
        iVar5 = FUN_00b81df0(auStack_60,uVar2 + 0x40,&fStack_90,uVar2 + 0xf0);
        *(undefined4 *)(uVar2 + 0x94) = *(undefined4 *)(iVar5 + 4);
        *(float *)(uVar2 + 0x50) = *(float *)(uVar2 + 0x50) + fStack_90 * 0.15;
        *(float *)(uVar2 + 0x54) = fStack_8c * 0.15 + *(float *)(uVar2 + 0x54);
        *(float *)(uVar2 + 0x58) = *(float *)(uVar2 + 0x58) + fStack_88 * 0.15;
        *(float *)(uVar2 + 0x5c) = fStack_84 * 0.15 + *(float *)(uVar2 + 0x5c);
        *(undefined4 *)(uVar2 + 0x54) = uStack_ac;
        goto LAB_00baf682;
      }
    }
    if (iStack_d8 != 0) goto LAB_00baf682;
  }
  FUN_00d82510(0x1a,100);
LAB_00baf682:
  StateMachineNode::vf10(param_1);
  return;
}

// 00BAF6A0  NarrowScaffoldWalkStatePl0010::vf20  size=135  [class]
undefined4 NarrowScaffoldWalkStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
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
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  return 1;
}

