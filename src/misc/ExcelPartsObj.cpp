// src/misc/ExcelPartsObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B09E0..00AB76E0, 14 functions

#include "types.h"

// 005B09E0  ExcelPartsObj::vf4C  size=83  [class]
void __fastcall ExcelPartsObj::vf4C(int *param_1)

{
  float fVar1;
  
  if (param_1[0x2ad] == 0) {
    Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x005b0a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  fVar1 = (float)param_1[0x2ae];
  param_1[0x2ae] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x2ad] = 0;
    FUN_009fdde0();
    return;
  }
  return;
}

// 005B0A60  ExcelPartsObj::vf1B8  size=31  [class]
void ExcelPartsObj::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42320;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 005B78F0  ExcelPartsObj::vf40  size=577  [class]
undefined4 __fastcall ExcelPartsObj::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x640) = 2;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
  uVar4 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar4);
  local_c = 1;
  local_8 = 1;
  local_4 = 1;
  iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x874) = 10;
  *(undefined4 *)(param_1 + 0x870) = 10;
  FUN_00a8caf0(1,0,0,0);
  FUN_009fd240();
  if (*(int *)(param_1 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  *(undefined4 *)(param_1 + 0xab0) = 0;
  uVar4 = FUN_00de3850(0,"_col.hkx",0);
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4f0);
    uVar3 = FUN_00de3ee0(uVar4);
    uVar4 = FUN_00de3cf0(uVar4);
    iVar2 = FUN_008f6410(uVar1,uVar4,uVar3);
    if (iVar2 != 0) {
      FUN_008f2cd0(0);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x40);
      FUN_008f1600(0x20);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_10,0);
      FUN_00910ab0(uVar4);
    }
  }
  FUN_008f40f0(param_1);
  FUN_00410540(0x10,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
  Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
  *(undefined4 *)(param_1 + 0xaf0) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xaf4) = 0x41a00000;
  *(undefined4 *)(param_1 + 0xad4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xad8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xadc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae4) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 300;
  FUN_00a8d280();
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a04500();
  return 1;
}

// 005B7B40  ExcelPartsObj::vf44  size=122  [class]
void __fastcall ExcelPartsObj::vf44(int param_1)

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

// 005B7BC0  ExcelPartsObj::getAttackInfo  size=193  [class]
int __thiscall ExcelPartsObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *puVar1 = (uint)*param_2;
      uVar4 = 0;
      uVar5 = 0;
      if (*param_2 == 4) {
        *puVar1 = 0x181;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        puVar1[0x24] = puVar1[0x24] | 0x20000000;
        puVar1[0x23] = puVar1[0x23] | 0x1000;
        uVar4 = *(uint *)(param_1 + 0xaec);
        uVar5 = 8;
      }
      else if (*param_2 == 5) {
        *puVar1 = 0x181;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        puVar1[0x23] = puVar1[0x23] | 0x401000;
      }
      puVar1[3] = 10;
      puVar1[2] = 10;
      puVar1[1] = uVar4;
      *(undefined1 *)(puVar1 + 4) = uVar5;
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_016431d4);
  return 0;
}

// 005B7C90  ExcelPartsObj::vf50  size=64  [class]
void __fastcall ExcelPartsObj::vf50(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x139] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x005b7ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 005B7CD0  FUN_005b7cd0  size=77  [between]
uint FUN_005b7cd0(void)

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
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 005B7D20  ExcelPartsObj::vf30  size=177  [class]
void __fastcall ExcelPartsObj::vf30(int *param_1)

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
        puVar4 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar4);
        uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
      goto LAB_005b7d84;
    }
  }
  uVar3 = 0;
LAB_005b7d84:
  *(undefined4 *)(uVar3 + 0x3bcc) = 1;
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  (**(code **)(*param_1 + 100))();
  param_1[0x139] = 1;
  return;
}

// 005B7DE0  FUN_005b7de0  size=1002  [callgraph]
void __fastcall FUN_005b7de0(int param_1)

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

// 005B81D0  FUN_005b81d0  size=63  [callgraph]
uint FUN_005b81d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b351c0;
  (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 005C4AC0  ExcelPartsObj::vf48  size=177  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ExcelPartsObj::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00a92fb0();
  fVar3 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0xae8) - _DAT_01be942c;
  *(float *)(param_1 + 0xae8) = fVar1;
  if (fVar1 < -1.0) {
    *(undefined4 *)(param_1 + 0xae8) = 0xbf800000;
  }
  BehaviorAppBase::vf48();
  iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xad4));
  if ((((iVar2 != 0) && (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xad8)), iVar2 != 0)) &&
      (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xadc)), iVar2 != 0)) &&
     (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xae0)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0xaf4);
  }
  FUN_005c26c0();
  return;
}

// 005C4B80  ExcelPartsObj::vf1A4  size=140  [class]
void ExcelPartsObj::vf1A4(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x220))(0x42700000);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b351c0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && ((param_2 & 1) != 0)) {
        param_1 = param_1 + 0x100;
        FUN_005b81d0(param_1);
        FUN_005c4170(param_1);
      }
    }
  }
  return;
}

// 00AAEB60  ExcelPartsObj::vf04  size=6  [class]
undefined * ExcelPartsObj::vf04(void)

{
  return &DAT_01b351d0;
}

// 00AB76E0  ExcelPartsObj::vf00  size=30  [class]
undefined4 __thiscall ExcelPartsObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_86();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

