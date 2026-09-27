// src/player/pl0010/state/NarrowScaffoldRunStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81D50..00BAEBE0, 9 functions

#include "mgrr.h"
#include "NarrowScaffoldRunStatePl0010.h"

// 00B81D50  NarrowScaffoldRunStatePl0010::vf08  size=19  [class]
bool NarrowScaffoldRunStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B81D70  NarrowScaffoldRunStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall NarrowScaffoldRunStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

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

// 00B81D80  NarrowScaffoldRunStatePl0010::vf18  size=5  [class]
undefined4 __thiscall NarrowScaffoldRunStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81D90  NarrowScaffoldRunStatePl0010::vf24  size=19  [class]
bool NarrowScaffoldRunStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81DD0  NarrowScaffoldRunStatePl0010::vf00  size=6  [class]
undefined * NarrowScaffoldRunStatePl0010::vf00(void)

{
  return &DAT_01be9e44;
}

// 00B91100  NarrowScaffoldRunStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall NarrowScaffoldRunStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAE330  NarrowScaffoldRunStatePl0010::SafeCheck  size=163  [class]
void __thiscall NarrowScaffoldRunStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

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
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar2 + 0x4170) = 1;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BAE3E0  NarrowScaffoldRunStatePl0010::qteSafeCheck  size=2034  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NarrowScaffoldRunStatePl0010::qteSafeCheck(undefined4 *param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_a0 [16];
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
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  piVar6 = *(int **)(uVar2 + 0xc);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar7);
    piVar6 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar6);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  if ((float)piVar6[0x34a] <=
      *(float *)(piVar6[0x1035] + 0x14c) * *(float *)(piVar6[0x1035] + 0x14c)) {
    FUN_00d82510(0x1a,100);
  }
  else {
    FUN_00b8ae90(&local_e0);
    FUN_00da0640(local_50);
    local_110 = _DAT_01b7b920;
    local_10c = 0.0;
    local_108 = _DAT_01b7b924;
    D3DXVec3TransformNormal(&local_e0,&local_110,local_50);
    if (((local_e0 != 0.0) || (fStack_dc != 0.0)) || (fStack_d8 != 0.0)) {
      fVar1 = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + local_e0 * local_e0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_e0,&local_e0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_e0 = 0.0;
        fStack_dc = 1.0;
        fStack_d8 = 0.0;
      }
    }
    FUN_00a8b8a0(&fStack_90,0x3e19999a);
    FUN_00a8b8a0(&fStack_70,0xbe19999a);
    FUN_00a8b9b0(&fStack_60,0x3e19999a);
    FUN_00a8b9b0(&fStack_80,0xbe19999a);
    FUN_00a8bac0(&fStack_c0,0x3e19999a);
    FUN_00a8bac0(&fStack_d0,0xbe19999a);
    piVar3 = (int *)FUN_009f8b60();
    uVar2 = *piVar3 << 0x10 | 0x1a;
    pfVar4 = (float *)FUN_00a925a0(&local_110);
    if (0.5 < pfVar4[2] * fStack_d8 + local_e0 * *pfVar4 + pfVar4[1] * fStack_dc) {
      fStack_100 = fStack_90 + fStack_c0 + (float)piVar6[0x10];
      fStack_fc = (float)piVar6[0x11] + fStack_bc + fStack_8c;
      fStack_f8 = fStack_88 + (float)piVar6[0x12] + fStack_b8;
      fStack_f4 = fStack_84 + (float)piVar6[0x13] + fStack_b4;
      local_108 = fStack_c8 * 2.0;
      fStack_f0 = fStack_d0 * 2.0 + fStack_100;
      fStack_ec = fStack_cc * 2.0 + fStack_fc;
      fStack_e8 = local_108 + fStack_f8;
      fStack_e4 = fStack_f4 + fStack_c4 * 2.0;
      FUN_00f95fa0(&fStack_100,&fStack_f0,0xffffffff,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (0,0,0,0,&fStack_100,&fStack_f0,uVar2,"narrow");
      if (iVar5 != 0) {
        pfVar4 = (float *)FUN_00a925a0(auStack_a0);
        local_110 = *pfVar4 * 0.05;
        local_10c = pfVar4[1] * 0.05;
        local_108 = pfVar4[2] * 0.05;
        fStack_104 = pfVar4[3] * 0.05;
        (**(code **)(*piVar6 + 0x70))(&local_110);
      }
    }
    pfVar4 = (float *)FUN_00a925a0(auStack_a0);
    if (0.5 < pfVar4[2] * -1.0 * fStack_d8 +
              *pfVar4 * -1.0 * local_e0 + pfVar4[1] * -1.0 * fStack_dc) {
      fStack_f0 = fStack_70 + fStack_c0 + (float)piVar6[0x10];
      fStack_ec = fStack_6c + (float)piVar6[0x11] + fStack_bc;
      fStack_e8 = fStack_68 + (float)piVar6[0x12] + fStack_b8;
      fStack_e4 = fStack_64 + (float)piVar6[0x13] + fStack_b4;
      local_108 = fStack_c8 * 2.0;
      fStack_100 = fStack_d0 * 2.0 + fStack_f0;
      fStack_fc = fStack_cc * 2.0 + fStack_ec;
      fStack_f8 = local_108 + fStack_e8;
      fStack_f4 = fStack_c4 * 2.0 + fStack_e4;
      FUN_00f95fa0(&fStack_f0,&fStack_100,0xffff0000,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (0,0,0,0,&fStack_f0,&fStack_100,uVar2,"narrow");
      if (iVar5 != 0) {
        pfVar4 = (float *)FUN_00a925a0(auStack_a0);
        local_110 = *pfVar4 * -0.05;
        local_10c = pfVar4[1] * -0.05;
        local_108 = pfVar4[2] * -0.05;
        fStack_104 = pfVar4[3] * -0.05;
        (**(code **)(*piVar6 + 0x70))(&local_110);
      }
    }
    pfVar4 = (float *)FUN_00a92640(auStack_a0);
    if (0.5 < pfVar4[2] * fStack_d8 + *pfVar4 * local_e0 + pfVar4[1] * fStack_dc) {
      fStack_f0 = fStack_60 + fStack_c0 + (float)piVar6[0x10];
      fStack_ec = fStack_5c + (float)piVar6[0x11] + fStack_bc;
      fStack_e8 = fStack_58 + (float)piVar6[0x12] + fStack_b8;
      fStack_e4 = fStack_54 + (float)piVar6[0x13] + fStack_b4;
      local_108 = fStack_c8 * 2.0;
      fStack_100 = fStack_d0 * 2.0 + fStack_f0;
      fStack_fc = fStack_cc * 2.0 + fStack_ec;
      fStack_f8 = local_108 + fStack_e8;
      fStack_f4 = fStack_c4 * 2.0 + fStack_e4;
      FUN_00f95fa0(&fStack_f0,&fStack_100,0xff00ff00,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (0,0,0,0,&fStack_f0,&fStack_100,uVar2,"narrow");
      if (iVar5 != 0) {
        pfVar4 = (float *)FUN_00a92640(auStack_a0);
        local_110 = *pfVar4 * 0.05;
        local_10c = pfVar4[1] * 0.05;
        local_108 = pfVar4[2] * 0.05;
        fStack_104 = pfVar4[3] * 0.05;
        (**(code **)(*piVar6 + 0x70))(&local_110);
      }
    }
    pfVar4 = (float *)FUN_00a92640(auStack_a0);
    if (0.5 < pfVar4[2] * -1.0 * fStack_d8 +
              *pfVar4 * -1.0 * local_e0 + pfVar4[1] * -1.0 * fStack_dc) {
      fStack_f0 = fStack_80 + fStack_c0 + (float)piVar6[0x10];
      fStack_ec = fStack_7c + (float)piVar6[0x11] + fStack_bc;
      fStack_e8 = fStack_78 + (float)piVar6[0x12] + fStack_b8;
      fStack_e4 = fStack_74 + (float)piVar6[0x13] + fStack_b4;
      local_108 = fStack_c8 * 2.0;
      fStack_100 = fStack_d0 * 2.0 + fStack_f0;
      fStack_fc = fStack_cc * 2.0 + fStack_ec;
      fStack_f8 = local_108 + fStack_e8;
      fStack_f4 = fStack_c4 * 2.0 + fStack_e4;
      FUN_00f95fa0(&fStack_f0,&fStack_100,0xff0000ff,0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (0,0,0,0,&fStack_f0,&fStack_100,uVar2,"narrow");
      if (iVar5 != 0) {
        pfVar4 = (float *)FUN_00a92640(auStack_a0);
        local_110 = *pfVar4 * -0.05;
        local_10c = pfVar4[1] * -0.05;
        local_108 = pfVar4[2] * -0.05;
        fStack_104 = pfVar4[3] * -0.05;
        (**(code **)(*piVar6 + 0x70))(&local_110);
        StateMachineNode::qteSafeCheck(param_1);
        return;
      }
    }
  }
  StateMachineNode::qteSafeCheck(param_1);
  return;
}

// 00BAEBE0  NarrowScaffoldRunStatePl0010::vf20  size=135  [class]
undefined4 NarrowScaffoldRunStatePl0010::vf20(undefined4 *param_1)

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

