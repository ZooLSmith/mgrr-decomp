// src/unsorted/unit_00847BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00847BA0..00848290, 8 functions

#include "types.h"

// 00847BA0  FUN_00847ba0  size=111  [run]
undefined4 __fastcall FUN_00847ba0(int param_1)

{
  int iVar1;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = local_20 | 0x80000000;
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = 0;
  local_1c = 0;
  local_1a = 0;
  iVar1 = FUN_00c3d9d0(param_1 + 0x40,&local_20);
  if ((iVar1 != 0) && ((local_18 & 0x40000000) != 0)) {
    return 1;
  }
  return 0;
}

// 00847CE0  FUN_00847ce0  size=39  [run]
void __fastcall FUN_00847ce0(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00847d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 00847D10  FUN_00847d10  size=77  [run]
uint FUN_00847d10(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00847FF0  FUN_00847ff0  size=122  [run]
void __fastcall FUN_00847ff0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xad4);
  iVar1 = 4;
  do {
    FUN_00c5ad80(*puVar2);
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00a9d8a0();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00848140  FUN_00848140  size=64  [run]
void __fastcall FUN_00848140(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x139] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0084817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 00848180  FUN_00848180  size=77  [run]
uint FUN_00848180(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 008481D0  FUN_008481d0  size=177  [run]
void __fastcall FUN_008481d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  BehaviorAppBase::vf30();
  FUN_00dde2d0(0,1);
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar4 = &DAT_01b35b20;
        (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
        iVar1 = FUN_00dd6d80(puVar4);
        uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
      goto LAB_00848234;
    }
  }
  uVar3 = 0;
LAB_00848234:
  *(undefined4 *)(uVar3 + 0x3bcc) = 1;
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  (**(code **)(*param_1 + 100))();
  param_1[0x139] = 1;
  return;
}

// 00848290  FUN_00848290  size=1002  [run]
void __fastcall FUN_00848290(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  int local_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 *local_154;
  undefined4 local_150 [12];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  undefined1 local_e0 [64];
  undefined1 auStack_a0 [156];
  
  *(undefined4 *)(param_1 + 0xab0) = 1;
  if (*(int *)(param_1 + 0x370) != 0) {
    FUN_00a1abe0(1);
  }
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  local_150[0] = 0;
  local_150[1] = 0x3f490fdb;
  local_150[2] = 0x3fc90fdb;
  local_150[3] = 0x4016cbe4;
  local_150[4] = 0x3eb2b8c2;
  local_150[5] = 0x3f91361e;
  local_150[6] = 0x3ff5be0b;
  local_150[7] = 0x4032b8c2;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0x40400000;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0x3f800000;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0xbf800000;
  local_f0 = 0;
  local_ec = 0;
  local_e8[0] = 0xc0400000;
  sVar1 = FUN_00dde2d0(0,7);
  local_154 = local_150 + sVar1;
  puVar4 = &local_120;
  puVar5 = (undefined4 *)(param_1 + 0xad4);
  local_178 = 4;
  do {
    uVar3 = *local_154;
    iVar2 = *(int *)(param_1 + 0x4b0);
    local_190 = 0.0;
    local_188 = 0.0;
    if (iVar2 == 0xf0071) {
      local_190 = 3.0;
      local_188 = 0.06;
      uVar3 = 0xbfbde44e;
    }
    local_18c = 0.0;
    if (iVar2 == 0xf0072) {
      local_190 = 2.5;
      local_18c = -0.6;
      local_188 = -0.6;
      uVar3 = 0xbf2e40f1;
    }
    if (iVar2 == 0xf0073) {
      local_190 = 2.8;
      local_18c = -0.12;
      uVar3 = 0;
      local_188 = 0.0;
    }
    if (iVar2 == 0xf0074) {
      local_190 = 2.16;
      local_18c = -0.77;
      local_188 = -0.9;
      uVar3 = 0xbef14639;
    }
    if (iVar2 == 0xf0075) {
      local_190 = 1.2;
      local_18c = 0.0;
      local_188 = 0.7;
      uVar3 = 0x3f860a92;
    }
    if (iVar2 == 0xf0077) {
      local_190 = 1.88;
      local_18c = 0.09;
      local_188 = 0.3;
      uVar3 = 0x3f6cce68;
    }
    if (iVar2 == 0xf0078) {
      local_190 = 2.35;
      local_18c = -0.28;
      local_188 = 0.2;
      uVar3 = 0xbf17e9d8;
    }
    if (iVar2 == 0xf0079) {
      local_190 = 3.07;
      local_18c = 1.46;
      local_188 = 0.0;
      uVar3 = 0xbdb2b8c2;
    }
    D3DXMatrixRotationX(local_e0,uVar3);
    D3DXVec3TransformNormal(&local_178,puVar4,local_e8);
    fStack_170 = local_190 + fStack_170;
    fStack_16c = fStack_16c + local_18c;
    fStack_168 = fStack_168 + local_188;
    fStack_164 = fStack_184 + fStack_164;
    uStack_174 = 0x42480000;
    iVar2 = FUN_009c4bf0();
    if (iVar2 == 0) {
      uStack_174 = 0x42b40000;
    }
    iVar2 = FUN_009c4bf0();
    uVar3 = uStack_174;
    if (iVar2 == 1) {
      uVar3 = 0x428c0000;
    }
    local_150[8] = 0;
    local_150[9] = 0;
    local_150[10] = 0;
    FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,0xffffffff,&fStack_170,local_150 + 8,uVar3,
                 0x3f000000,0xbf800000);
    uVar3 = FUN_00c5abe0(auStack_a0);
    *puVar5 = uVar3;
    FUN_00c52770(uVar3,0x42480000);
    FUN_00c52700(*puVar5,1);
    FUN_00c528c0(*puVar5,1);
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 4;
    local_178 = local_178 + -1;
  } while (local_178 != 0);
  return;
}

