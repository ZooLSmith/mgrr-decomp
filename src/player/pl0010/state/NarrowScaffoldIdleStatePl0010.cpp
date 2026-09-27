// src/player/pl0010/state/NarrowScaffoldIdleStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81BE0..00BAE2B0, 10 functions

#include "mgrr.h"
#include "NarrowScaffoldIdleStatePl0010.h"

// 00B81BE0  FUN_00b81be0  size=195  [callgraph]
void FUN_00b81be0(undefined4 *param_1,float *param_2,float *param_3,int param_4)

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

// 00B81CB0  NarrowScaffoldIdleStatePl0010::vf08  size=19  [class]
bool NarrowScaffoldIdleStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B81CD0  NarrowScaffoldIdleStatePl0010::vf14  size=5  [class]
undefined4 __thiscall NarrowScaffoldIdleStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B81CE0  NarrowScaffoldIdleStatePl0010::vf18  size=5  [class]
undefined4 __thiscall NarrowScaffoldIdleStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81CF0  NarrowScaffoldIdleStatePl0010::vf24  size=19  [class]
bool NarrowScaffoldIdleStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81D30  NarrowScaffoldIdleStatePl0010::vf00  size=6  [class]
undefined * NarrowScaffoldIdleStatePl0010::vf00(void)

{
  return &DAT_01be9e40;
}

// 00B910E0  NarrowScaffoldIdleStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall NarrowScaffoldIdleStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAD050  NarrowScaffoldIdleStatePl0010::vf0C  size=170  [class]
void __thiscall NarrowScaffoldIdleStatePl0010::vf0C(int param_1,undefined4 *param_2)

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
    FUN_00aa3f60(0xd6);
    FUN_00a95fb0(0);
    iVar3 = *(int *)(uVar2 + 0x764);
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAD100  NarrowScaffoldIdleStatePl0010::vf10  size=4521  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NarrowScaffoldIdleStatePl0010::vf10(undefined4 *param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  float fStack_18c;
  float fStack_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float fStack_174;
  undefined1 local_170 [4];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined1 auStack_14c [8];
  float fStack_144;
  int iStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined1 local_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar3 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar4 = *(int **)(uVar3 + 0xc);
  if (piVar4 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar3 = -(uint)(iVar6 != 0) & (uint)piVar4;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
  if (*(float *)(uVar3 + 0xd28) <= fVar1 * fVar1) {
    FUN_00aa9280(0xd6);
    StateMachineNode::vf10(param_1);
    return;
  }
  FUN_00b8ae90(local_170);
  FUN_00da0640(local_50);
  local_180 = _DAT_01b7b920;
  local_17c = 0.0;
  local_178 = _DAT_01b7b924;
  D3DXVec3TransformNormal(local_170,&local_180,local_50);
  if (((local_17c != 0.0) || (local_178 != 0.0)) || (fStack_174 != 0.0)) {
    fVar1 = fStack_174 * fStack_174 + local_178 * local_178 + local_17c * local_17c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_17c,&local_17c);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_17c = 0.0;
      local_178 = 1.0;
      fStack_174 = 0.0;
    }
  }
  if ((_DAT_01b7b910 & 0x4000) == 0) {
    fVar1 = 0.15;
  }
  else {
    fVar1 = 0.25;
  }
  FUN_00a8b8a0(&fStack_cc,fVar1);
  FUN_00a8b8a0(&fStack_ac,-fVar1);
  FUN_00a8b9b0(&fStack_dc,fVar1);
  FUN_00a8b9b0(&fStack_bc,-fVar1);
  FUN_00a8bac0(&fStack_10c,0x3e4ccccd);
  FUN_00a8bac0(&fStack_11c,0xbe4ccccd);
  piVar4 = (int *)FUN_009f8b60();
  uVar7 = *piVar4 << 0x10 | 0x1a;
  bVar2 = false;
  iStack_130 = 0;
  pfVar5 = (float *)FUN_00a925a0(auStack_14c);
  if (0.5 < pfVar5[2] * fStack_174 + *pfVar5 * local_17c + pfVar5[1] * local_178) {
    fStack_16c = fStack_cc + *(float *)(uVar3 + 0x40) + fStack_10c;
    fStack_168 = fStack_c8 + *(float *)(uVar3 + 0x44) + fStack_108;
    fStack_164 = fStack_c4 + *(float *)(uVar3 + 0x48) + fStack_104;
    fStack_160 = fStack_c0 + *(float *)(uVar3 + 0x4c) + fStack_100;
    local_184 = fStack_114 * 2.0;
    fStack_15c = fStack_11c * 2.0 + fStack_16c;
    fStack_158 = fStack_118 * 2.0 + fStack_168;
    fStack_154 = local_184 + fStack_164;
    fStack_150 = fStack_160 + fStack_110 * 2.0;
    FUN_00f95fa0(&fStack_16c,&fStack_15c,0xffffffff,0);
    iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (auStack_6c,0,&iStack_130,0,&fStack_16c,&fStack_15c,uVar7,"narrow");
    if (iVar6 != 0) {
      bVar2 = true;
      iVar6 = FUN_00b81be0(auStack_14c,uVar3 + 0x40,&fStack_cc,uVar3 + 0xf0);
      *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
      *(float *)(uVar3 + 0x50) = *(float *)(uVar3 + 0x50) + fStack_cc * fVar1;
      *(float *)(uVar3 + 0x54) = fStack_c8 * fVar1 + *(float *)(uVar3 + 0x54);
      *(float *)(uVar3 + 0x58) = fStack_c4 * fVar1 + *(float *)(uVar3 + 0x58);
      *(float *)(uVar3 + 0x5c) = fStack_c0 * fVar1 + *(float *)(uVar3 + 0x5c);
      *(undefined4 *)(uVar3 + 0x54) = uStack_68;
    }
  }
  pfVar5 = (float *)FUN_00a925a0(auStack_14c);
  if (0.5 < pfVar5[2] * -1.0 * fStack_174 +
            pfVar5[1] * -1.0 * local_178 + *pfVar5 * -1.0 * local_17c) {
    fStack_16c = fStack_ac + fStack_10c + *(float *)(uVar3 + 0x40);
    fStack_168 = fStack_a8 + *(float *)(uVar3 + 0x44) + fStack_108;
    fStack_164 = fStack_a4 + *(float *)(uVar3 + 0x48) + fStack_104;
    fStack_160 = fStack_a0 + *(float *)(uVar3 + 0x4c) + fStack_100;
    local_184 = fStack_114 * 2.0;
    fStack_15c = fStack_11c * 2.0 + fStack_16c;
    fStack_158 = fStack_118 * 2.0 + fStack_168;
    fStack_154 = local_184 + fStack_164;
    fStack_150 = fStack_110 * 2.0 + fStack_160;
    FUN_00f95fa0(&fStack_16c,&fStack_15c,0xffff0000,0);
    iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (auStack_6c,0,&iStack_130,0,&fStack_16c,&fStack_15c,uVar7,"narrow");
    if (iVar6 != 0) {
      bVar2 = true;
      iVar6 = FUN_00b81be0(auStack_14c,(float *)(uVar3 + 0x40),&fStack_ac,uVar3 + 0xf0);
      *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
      *(float *)(uVar3 + 0x50) = fStack_ac * fVar1 + *(float *)(uVar3 + 0x50);
      *(float *)(uVar3 + 0x54) = fStack_a8 * fVar1 + *(float *)(uVar3 + 0x54);
      *(float *)(uVar3 + 0x58) = fStack_a4 * fVar1 + *(float *)(uVar3 + 0x58);
      *(float *)(uVar3 + 0x5c) = fStack_a0 * fVar1 + *(float *)(uVar3 + 0x5c);
      *(undefined4 *)(uVar3 + 0x54) = uStack_68;
    }
  }
  pfVar5 = (float *)FUN_00a92640(auStack_14c);
  if (0.5 < pfVar5[2] * fStack_174 + local_17c * *pfVar5 + pfVar5[1] * local_178) {
    fStack_16c = fStack_dc + fStack_10c + *(float *)(uVar3 + 0x40);
    fStack_168 = fStack_d8 + *(float *)(uVar3 + 0x44) + fStack_108;
    fStack_164 = fStack_d4 + *(float *)(uVar3 + 0x48) + fStack_104;
    fStack_160 = fStack_d0 + *(float *)(uVar3 + 0x4c) + fStack_100;
    local_184 = fStack_114 * 2.0;
    fStack_15c = fStack_11c * 2.0 + fStack_16c;
    fStack_158 = fStack_118 * 2.0 + fStack_168;
    fStack_154 = local_184 + fStack_164;
    fStack_150 = fStack_110 * 2.0 + fStack_160;
    FUN_00f95fa0(&fStack_16c,&fStack_15c,0xff00ff00,0);
    iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (auStack_6c,0,&iStack_130,0,&fStack_16c,&fStack_15c,uVar7,"narrow");
    if (iVar6 != 0) {
      bVar2 = true;
      iVar6 = FUN_00b81be0(auStack_14c,(float *)(uVar3 + 0x40),&fStack_dc,uVar3 + 0xf0);
      *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
      *(float *)(uVar3 + 0x50) = fStack_dc * fVar1 + *(float *)(uVar3 + 0x50);
      *(float *)(uVar3 + 0x54) = fStack_d8 * fVar1 + *(float *)(uVar3 + 0x54);
      *(float *)(uVar3 + 0x58) = fStack_d4 * fVar1 + *(float *)(uVar3 + 0x58);
      *(float *)(uVar3 + 0x5c) = fStack_d0 * fVar1 + *(float *)(uVar3 + 0x5c);
      *(undefined4 *)(uVar3 + 0x54) = uStack_68;
    }
  }
  pfVar5 = (float *)FUN_00a92640(auStack_14c);
  if (0.5 < pfVar5[2] * -1.0 * fStack_174 +
            *pfVar5 * -1.0 * local_17c + pfVar5[1] * -1.0 * local_178) {
    fStack_16c = fStack_bc + fStack_10c + *(float *)(uVar3 + 0x40);
    fStack_168 = fStack_b8 + *(float *)(uVar3 + 0x44) + fStack_108;
    fStack_164 = fStack_b4 + *(float *)(uVar3 + 0x48) + fStack_104;
    fStack_160 = fStack_b0 + *(float *)(uVar3 + 0x4c) + fStack_100;
    local_184 = fStack_114 * 2.0;
    fStack_15c = fStack_11c * 2.0 + fStack_16c;
    fStack_158 = fStack_118 * 2.0 + fStack_168;
    fStack_154 = local_184 + fStack_164;
    fStack_150 = fStack_110 * 2.0 + fStack_160;
    FUN_00f95fa0(&fStack_16c,&fStack_15c,0xff0000ff,0);
    iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (auStack_6c,0,&iStack_130,0,&fStack_16c,&fStack_15c,uVar7,"narrow");
    if (iVar6 != 0) {
      iVar6 = FUN_00b81be0(auStack_14c,(float *)(uVar3 + 0x40),&fStack_bc,uVar3 + 0xf0);
      *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
      *(float *)(uVar3 + 0x50) = *(float *)(uVar3 + 0x50) + fStack_bc * fVar1;
      *(float *)(uVar3 + 0x54) = fStack_b8 * fVar1 + *(float *)(uVar3 + 0x54);
      *(float *)(uVar3 + 0x58) = fStack_b4 * fVar1 + *(float *)(uVar3 + 0x58);
      *(float *)(uVar3 + 0x5c) = fStack_b0 * fVar1 + *(float *)(uVar3 + 0x5c);
      *(undefined4 *)(uVar3 + 0x54) = uStack_68;
      goto LAB_00bae21f;
    }
  }
  if (!bVar2) {
    FUN_00a8b8a0(&fStack_9c,0x3d4ccccd);
    FUN_00a8b8a0(&fStack_7c,0xbd4ccccd);
    FUN_00a8b9b0(&fStack_8c,0x3d4ccccd);
    FUN_00a8b9b0(&fStack_16c,0xbd4ccccd);
    FUN_00a8bac0(&fStack_ec,0x3e4ccccd);
    FUN_00a8bac0(&fStack_fc,0xbe4ccccd);
    piVar4 = (int *)FUN_009f8b60();
    uVar7 = *piVar4 << 0x10 | 0x1a;
    pfVar5 = (float *)FUN_00a925a0(auStack_14c);
    if (0.5 < pfVar5[2] * fStack_174 + *pfVar5 * local_17c + pfVar5[1] * local_178) {
      fStack_18c = fStack_9c + fStack_ec + *(float *)(uVar3 + 0x40);
      fStack_188 = fStack_98 + *(float *)(uVar3 + 0x44) + fStack_e8;
      local_184 = fStack_94 + *(float *)(uVar3 + 0x48) + fStack_e4;
      local_180 = fStack_90 + *(float *)(uVar3 + 0x4c) + fStack_e0;
      fStack_144 = fStack_f4 * 2.0;
      fStack_12c = fStack_fc * 2.0 + fStack_18c;
      fStack_128 = fStack_f8 * 2.0 + fStack_188;
      fStack_124 = fStack_144 + local_184;
      fStack_120 = fStack_f0 * 2.0 + local_180;
      FUN_00f95fa0(&fStack_18c,&fStack_12c,0xffffffff,0);
      iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&fStack_15c,0,&stack0xfffffe68,0,&fStack_18c,&fStack_12c,uVar7,"narrow");
      if (iVar6 != 0) {
        bVar2 = true;
        iVar6 = FUN_00b81be0(auStack_14c,(float *)(uVar3 + 0x40),&fStack_9c,uVar3 + 0xf0);
        *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
        *(float *)(uVar3 + 0x50) = *(float *)(uVar3 + 0x50) + fStack_9c * 0.05;
        *(float *)(uVar3 + 0x54) = fStack_98 * 0.05 + *(float *)(uVar3 + 0x54);
        *(float *)(uVar3 + 0x58) = *(float *)(uVar3 + 0x58) + fStack_94 * 0.05;
        *(float *)(uVar3 + 0x5c) = fStack_90 * 0.05 + *(float *)(uVar3 + 0x5c);
        *(float *)(uVar3 + 0x54) = fStack_158;
      }
    }
    pfVar5 = (float *)FUN_00a925a0(auStack_14c);
    if (0.5 < pfVar5[2] * -1.0 * fStack_174 +
              pfVar5[1] * -1.0 * local_178 + local_17c * *pfVar5 * -1.0) {
      fStack_12c = fStack_7c + *(float *)(uVar3 + 0x40) + fStack_ec;
      fStack_128 = fStack_78 + *(float *)(uVar3 + 0x44) + fStack_e8;
      fStack_124 = fStack_74 + *(float *)(uVar3 + 0x48) + fStack_e4;
      fStack_120 = fStack_70 + *(float *)(uVar3 + 0x4c) + fStack_e0;
      fStack_144 = fStack_f4 * 2.0;
      fStack_18c = fStack_fc * 2.0 + fStack_12c;
      fStack_188 = fStack_f8 * 2.0 + fStack_128;
      local_184 = fStack_144 + fStack_124;
      local_180 = fStack_f0 * 2.0 + fStack_120;
      FUN_00f95fa0(&fStack_12c,&fStack_18c,0xffff0000,0);
      iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&fStack_15c,0,&stack0xfffffe68,0,&fStack_12c,&fStack_18c,uVar7,"narrow");
      if (iVar6 != 0) {
        bVar2 = true;
        iVar6 = FUN_00b81be0(auStack_14c,uVar3 + 0x40,&fStack_7c,uVar3 + 0xf0);
        *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
        *(float *)(uVar3 + 0x50) = fStack_7c * 0.05 + *(float *)(uVar3 + 0x50);
        *(float *)(uVar3 + 0x54) = fStack_78 * 0.05 + *(float *)(uVar3 + 0x54);
        *(float *)(uVar3 + 0x58) = fStack_74 * 0.05 + *(float *)(uVar3 + 0x58);
        *(float *)(uVar3 + 0x5c) = fStack_70 * 0.05 + *(float *)(uVar3 + 0x5c);
        *(float *)(uVar3 + 0x54) = fStack_158;
      }
    }
    pfVar5 = (float *)FUN_00a92640(auStack_14c);
    if (0.5 < pfVar5[2] * fStack_174 + local_17c * *pfVar5 + pfVar5[1] * local_178) {
      fStack_12c = fStack_8c + *(float *)(uVar3 + 0x40) + fStack_ec;
      fStack_128 = fStack_88 + *(float *)(uVar3 + 0x44) + fStack_e8;
      fStack_124 = fStack_84 + *(float *)(uVar3 + 0x48) + fStack_e4;
      fStack_120 = fStack_80 + *(float *)(uVar3 + 0x4c) + fStack_e0;
      fStack_144 = fStack_f4 * 2.0;
      fStack_18c = fStack_fc * 2.0 + fStack_12c;
      fStack_188 = fStack_f8 * 2.0 + fStack_128;
      local_184 = fStack_144 + fStack_124;
      local_180 = fStack_f0 * 2.0 + fStack_120;
      FUN_00f95fa0(&fStack_12c,&fStack_18c,0xff00ff00,0);
      iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&fStack_15c,0,&stack0xfffffe68,0,&fStack_12c,&fStack_18c,uVar7,"narrow");
      if (iVar6 != 0) {
        bVar2 = true;
        iVar6 = FUN_00b81be0(auStack_14c,uVar3 + 0x40,&fStack_8c,uVar3 + 0xf0);
        *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
        *(float *)(uVar3 + 0x50) = fStack_8c * 0.05 + *(float *)(uVar3 + 0x50);
        *(float *)(uVar3 + 0x54) = fStack_88 * 0.05 + *(float *)(uVar3 + 0x54);
        *(float *)(uVar3 + 0x58) = fStack_84 * 0.05 + *(float *)(uVar3 + 0x58);
        *(float *)(uVar3 + 0x5c) = fStack_80 * 0.05 + *(float *)(uVar3 + 0x5c);
        *(float *)(uVar3 + 0x54) = fStack_158;
      }
    }
    pfVar5 = (float *)FUN_00a92640(auStack_14c);
    if (0.5 < pfVar5[2] * -1.0 * fStack_174 +
              *pfVar5 * -1.0 * local_17c + pfVar5[1] * -1.0 * local_178) {
      fStack_12c = fStack_16c + fStack_ec + *(float *)(uVar3 + 0x40);
      fStack_128 = fStack_168 + *(float *)(uVar3 + 0x44) + fStack_e8;
      fStack_124 = fStack_164 + *(float *)(uVar3 + 0x48) + fStack_e4;
      fStack_120 = fStack_160 + *(float *)(uVar3 + 0x4c) + fStack_e0;
      fStack_144 = fStack_f4 * 2.0;
      fStack_18c = fStack_fc * 2.0 + fStack_12c;
      fStack_188 = fStack_f8 * 2.0 + fStack_128;
      local_184 = fStack_144 + fStack_124;
      local_180 = fStack_f0 * 2.0 + fStack_120;
      FUN_00f95fa0(&fStack_12c,&fStack_18c,0xff0000ff,0);
      iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&fStack_15c,0,&stack0xfffffe68,0,&fStack_12c,&fStack_18c,uVar7,"narrow");
      if (iVar6 != 0) {
        iVar6 = FUN_00b81be0(auStack_14c,(float *)(uVar3 + 0x40),&fStack_16c,uVar3 + 0xf0);
        *(undefined4 *)(uVar3 + 0x94) = *(undefined4 *)(iVar6 + 4);
        *(float *)(uVar3 + 0x50) = *(float *)(uVar3 + 0x50) + fStack_16c * 0.05;
        *(float *)(uVar3 + 0x54) = fStack_168 * 0.05 + *(float *)(uVar3 + 0x54);
        *(float *)(uVar3 + 0x58) = fStack_164 * 0.05 + *(float *)(uVar3 + 0x58);
        *(float *)(uVar3 + 0x5c) = fStack_160 * 0.05 + *(float *)(uVar3 + 0x5c);
        *(float *)(uVar3 + 0x54) = fStack_158;
        goto LAB_00bae21f;
      }
    }
    if (!bVar2) {
      FUN_00aa9280(0xd6);
      StateMachineNode::vf10(param_1);
      return;
    }
  }
LAB_00bae21f:
  if (iStack_130 != 0) {
    if ((_DAT_01b7b910 & 0x4000) == 0) {
      uVar8 = 0xd4;
    }
    else {
      uVar8 = 0xd5;
    }
    FUN_00aa9280(uVar8);
  }
  FUN_00a95fb0(0);
  StateMachineNode::vf10(param_1);
  return;
}

// 00BAE2B0  NarrowScaffoldIdleStatePl0010::vf20  size=125  [class]
undefined4 NarrowScaffoldIdleStatePl0010::vf20(undefined4 *param_1)

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
  return 1;
}

