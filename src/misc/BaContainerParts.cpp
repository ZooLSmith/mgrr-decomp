// src/misc/BaContainerParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0047F010..00AB9700, 26 functions

#include "mgrr.h"
#include "BaContainerParts.h"
#include "hkpCdPointCollector.h"

// 0047F010  BaContainerParts::vf50  size=41  [class]
void __fastcall BaContainerParts::vf50(int param_1)

{
  switchD_0080dbae::default();
  if ((*(int *)(param_1 + 0x1208) == 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f3cb0(param_1);
  }
  BehaviorAppBase::vf50();
  return;
}

// 0047F040  BaContainerParts::vf54  size=36  [class]
void __fastcall BaContainerParts::vf54(int param_1)

{
  if ((*(int *)(param_1 + 0x1208) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
  }
  Behavior::vf54();
  return;
}

// 0047F070  BaContainerParts::vf1B8  size=92  [class]
void BaContainerParts::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_00eaa6e0(0x3f800000,0);
  iVar1 = FUN_00a7fde0();
  if (iVar1 < 2) {
    if (0 < param_3) {
      do {
        *param_1 = 0x42380;
        param_1 = param_1 + 3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (0 < param_3) {
    do {
      *param_1 = 0x42381;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

// 0047F0D0  BaContainerParts::thunk_vf19C  size=5  [class]
void __thiscall BaContainerParts::thunk_vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(auStack_a0,(void *)(param_2 + 0x40),0x40);
  uStack_70 = uVar1;
  uStack_6c = uVar2;
  uStack_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),auStack_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0048DE60  BaContainerParts::vf44  size=155  [class]
void __fastcall BaContainerParts::vf44(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
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
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  FUN_00a8c820();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  Behavior::vf44();
  return;
}

// 00497760  BaContainerParts::vf40  size=977  [class]
undefined4 __fastcall BaContainerParts::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_174;
  int iStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 auStack_160 [348];
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 != 0) {
    FUN_009fd240();
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)(param_1 + 800) + iVar5;
        *(undefined4 *)(iVar3 + 0x10) = 0x3fc00000;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x70;
        *(undefined4 *)(iVar3 + 0x14) = 0x3f4ccccd;
        *(undefined4 *)(iVar3 + 0x18) = 0x3e99999a;
        *(undefined4 *)(iVar3 + 0x1c) = 0x3f800000;
      } while (iVar2 < *(short *)(param_1 + 0x324));
    }
    FUN_00a8d280();
    FUN_00dd7240();
    uVar7 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar7);
    *(undefined4 *)(param_1 + 0x1210) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1204) = 1;
    *(undefined4 *)(param_1 + 0x1208) = 0;
    *(undefined4 *)(param_1 + 0x120c) = 0;
    local_16c = 1;
    local_168 = 1;
    local_164 = 1;
    iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_16c);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      uVar7 = FUN_00de3850(0,"_col.hkx",0);
      iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = RigidBodyCollection::RigidBodyCollection_2();
      }
      *(int *)(param_1 + 0x7b0) = iVar2;
      if (iVar2 != 0) {
        local_174 = *(int *)(param_1 + 0x4f0);
        uVar4 = FUN_00de3ee0(uVar7);
        uVar7 = FUN_00de3cf0(uVar7);
        iVar2 = FUN_008f6410(local_174,uVar7,uVar4);
        if (iVar2 != 0) {
          FUN_008f2cd0(0);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x40);
          FUN_008f1600(0x20);
          uVar7 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(&local_174,0);
          FUN_00910ab0(uVar7);
          FUN_0091a930(0xb);
        }
      }
      FUN_008f40f0(param_1);
      FUN_00410540(4,&DAT_01b7bd48);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(4);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),9);
      iVar2 = 0;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x870) = 10;
      *(undefined4 *)(param_1 + 0x1214) = 0;
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3(4);
      iStack_170 = 0;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
      if (0 < iVar5) {
        puVar6 = (undefined4 *)(param_1 + 0xa0c);
        do {
          (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_174,iStack_170);
          if (unaff_ESI != 0) {
            puVar6[-2] = 0x1e;
            *puVar6 = 0x1e;
            puVar6[-1] = 0x1e;
            puVar6[-3] = 0x10c;
            *(undefined1 *)(puVar6 + 1) = 10;
            puVar6[0x20] = puVar6[0x20] | 0x100000;
            *(undefined1 *)((int)puVar6 + 5) = 10;
            *(undefined2 *)(puVar6 + 0x1e) = 0x4001;
            uVar7 = CollisionAttackData::CollisionAttackData(puVar6 + -3);
            Behavior::addBodyOffenseCollisionFromRigidBody(&stack0xfffffe84,iVar2,iVar2,6,uVar7);
            iVar2 = iVar2 + 1;
            puVar6 = puVar6 + 0x40;
          }
          iVar5 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
        } while (iStack_170 < iVar5);
      }
      *(undefined4 *)(param_1 + 0x12c0) = 0;
      *(undefined4 *)(param_1 + 0x12c4) = 0;
      if (*(int *)(param_1 + 0x370) != 0) {
        FUN_00a1abe0(1);
      }
      local_174 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar2 = 0;
        do {
          iVar5 = *(int *)(param_1 + 800);
          iVar3 = *(int *)(*(int *)(iVar5 + 0x60 + iVar2) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"damage"), iVar3 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38 + iVar2);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_174 = local_174 + 1;
          iVar2 = iVar2 + 0x70;
        } while (local_174 < *(short *)(param_1 + 0x324));
      }
      FUN_004039a0(0,param_1,0);
      if (param_1 + 0x1380 != 0) {
        FUN_00dffb20(param_1 + 0x1380);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      return 1;
    }
  }
  return 0;
}

// 00497B40  BaContainerParts::vf48  size=211  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall BaContainerParts::vf48(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined1 local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  iVar2 = FUN_00c13920();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar6 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
      }
      goto LAB_00497b9d;
    }
  }
  uVar4 = 0;
LAB_00497b9d:
  D3DXMatrixInverse(local_50,0,param_1 + 0x10);
  pfVar1 = (float *)(param_1 + 0x1440);
  D3DXVec3TransformNormal(pfVar1,uVar4 + 0x40,&stack0xffffffa4);
  *pfVar1 = fStack_38 + *pfVar1;
  *(float *)(param_1 + 0x1444) = *(float *)(param_1 + 0x1444) + fStack_34;
  *(float *)(param_1 + 0x1448) = *(float *)(param_1 + 0x1448) + fStack_30;
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x1450) = (float)fVar5;
  *(undefined4 *)(param_1 + 0x910) = _DAT_01be942c;
  FUN_00494920();
  BehaviorAppBase::vf48();
  return;
}

// 00497C20  FUN_00497c20  size=348  [between]
void __thiscall
FUN_00497c20(int param_1,undefined4 *param_2,float *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 local_160 [348];
  
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1204) = param_6;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x1220) = *param_3;
  *(float *)(param_1 + 0x1224) = param_3[1];
  *(float *)(param_1 + 0x1228) = param_3[2];
  *(float *)(param_1 + 0x122c) = param_3[3];
  if ((param_5 != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f40f0(param_1);
    FUN_008f3c70();
    *(undefined4 *)(param_1 + 0x1208) = 1;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x7b0) + 0xd8))();
    fStack_170 = (float)((float10)*param_3 * fVar3);
    fStack_16c = (float)((float10)param_3[1] * fVar3);
    fStack_168 = (float)((float10)param_3[2] * fVar3);
    fStack_164 = (float)(fVar3 * (float10)param_3[3]);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x8c))(&fStack_170,param_4);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x41a00000);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12c4) = 1;
  FUN_004039a0(3,param_1,0);
  if (param_1 + 0x12d0 != 0) {
    FUN_00dffb20(param_1 + 0x12d0);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00497D80  FUN_00497d80  size=652  [between]
void __thiscall FUN_00497d80(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_2c;
  float fStack_24;
  float fStack_18;
  
  iVar4 = FUN_00c13920();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      goto LAB_00497dd6;
    }
  }
  uVar6 = 0;
LAB_00497dd6:
  local_40 = *(float *)(uVar6 + 0x40);
  local_38 = *(float *)(uVar6 + 0x48);
  local_34 = *(float *)(uVar6 + 0x4c);
  local_3c = *(float *)(uVar6 + 0x44) + 1.8;
  local_50 = *(float *)(param_1 + 0x40);
  local_4c = *(float *)(param_1 + 0x44);
  fStack_48 = *(float *)(param_1 + 0x48);
  fStack_44 = *(float *)(param_1 + 0x4c);
  fVar1 = local_40 - local_50;
  fStack_2c = local_3c - local_4c;
  fVar2 = local_38 - fStack_48;
  fStack_24 = local_34 - fStack_44;
  fStack_60 = *param_2 + local_50;
  fStack_5c = param_2[1] + local_4c;
  fStack_58 = param_2[2] + fStack_48;
  fStack_54 = param_2[3] + fStack_44;
  fStack_18 = fStack_58 - fStack_48;
  fVar3 = (fStack_18 * fVar2 + (fStack_5c - local_4c) * fStack_2c + fVar1 * (fStack_60 - local_50))
          / (fVar2 * fVar2 + fVar1 * fVar1 + fStack_2c * fStack_2c);
  fStack_70 = fStack_60 - (fVar1 * fVar3 + local_50);
  fStack_6c = fStack_5c - (fStack_2c * fVar3 + local_4c);
  fStack_68 = fStack_58 - (fVar2 * fVar3 + fStack_48);
  fStack_64 = fStack_54 - (fStack_24 * fVar3 + fStack_44);
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_68 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 1.0;
  }
  fStack_70 = fStack_70 * 2.0;
  fStack_6c = fStack_6c * 2.0;
  fStack_68 = fStack_68 * 2.0;
  fStack_64 = fStack_64 * 2.0;
  fStack_60 = (local_50 + local_40) * 0.5 + fStack_70;
  fStack_5c = (local_4c + local_3c) * 0.5 + fStack_6c;
  fStack_58 = fStack_68 + (fStack_48 + local_38) * 0.5;
  fStack_54 = (fStack_44 + local_34) * 0.5 + fStack_64;
  FUN_00494af0(param_1 + 0x1230,&local_50,&fStack_60,&local_40);
  *(undefined4 *)(param_1 + 0x1290) = 0;
  return;
}

// 00498010  FUN_00498010  size=290  [between]
void __fastcall FUN_00498010(int param_1)

{
  undefined4 uVar1;
  undefined4 local_150 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined4 local_12c;
  uint local_b4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x120c) == 0) {
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00494f80((undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x120c) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00410710();
    local_12c = *(undefined4 *)(param_1 + 0x4f0);
    local_30 = 0x40400000;
    local_b4 = local_b4 | 0x100000;
    local_2c = 0x3f800000;
    local_150[0] = 1;
    local_140 = 0x10c;
    local_28 = 0x40400000;
    local_13c = 100;
    local_134 = 0;
    local_20 = 0x3d888889;
    local_138 = 0;
    local_130 = 0xa00;
    local_24 = 1;
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    local_40 = *(undefined4 *)(param_1 + 0x40);
    local_3c = *(undefined4 *)(param_1 + 0x44);
    local_38 = *(undefined4 *)(param_1 + 0x48);
    local_34 = *(undefined4 *)(param_1 + 0x4c);
    local_18 = FUN_009f8b40();
    Behavior::createAttackImpactWave(local_150);
  }
  return;
}

// 00498140  FUN_00498140  size=302  [between]
void __fastcall FUN_00498140(byte *param_1)

{
  float fVar1;
  int iVar2;
  float local_20 [7];
  
  if ((((*param_1 & 4) == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x910);
    local_20[0] = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x10);
    local_20[2] = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x18);
    local_20[3] = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x1c);
    local_20[1] = 0.0;
    fVar1 = local_20[2] * local_20[2] + local_20[0] * local_20[0];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(local_20,local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20[0] = 0.0;
      local_20[1] = 1.0;
      local_20[2] = 0.0;
    }
    *(float *)(param_1 + 0x30) = local_20[2] * -1.0;
    *(float *)(param_1 + 0x38) = local_20[0];
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    switch(param_1[8]) {
    case 0:
      FUN_00495020();
      return;
    case 1:
      FUN_004953e0();
      return;
    case 2:
      FUN_004955f0();
      return;
    case 3:
      FUN_004855b0();
      return;
    case 4:
      FUN_00495850();
    }
  }
  return;
}

// 00498290  FUN_00498290  size=447  [between]
/* WARNING: Type propagation algorithm not settling */

uint __fastcall FUN_00498290(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 uVar7;
  undefined1 auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [44];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  uint local_10;
  char *local_c;
  undefined1 *local_8;
  
  if (param_1[0x128] == 0) {
    puStack_14 = (undefined1 *)param_1[0x13c];
    local_8 = (undefined1 *)0x41200000;
    local_c = (char *)0x3fb2b8c2;
    local_10 = param_1[0x25];
    fStack_18 = 6.750914e-39;
    FUN_00a80b20();
  }
  uVar5 = param_1[0x186];
  if (0x20000 < (int)uVar5) {
    if (0x50000 < (int)uVar5) {
      if ((int)uVar5 < 0x60001) {
        if (uVar5 == 0x60000) {
          return 0;
        }
        uVar4 = uVar5 - 0x50001;
        switch(uVar4) {
        case 0:
          local_8 = (undefined1 *)0xf;
          local_c = (char *)0x4830ba;
          iVar6 = FUN_00a8c760();
          uVar5 = 0;
          if (iVar6 != 0) {
            fVar1 = (float)param_1[0x495];
            uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 0.0) << 0xe);
            if ((0.0 >= fVar1 && (fVar1 == 0.0) == 0) && (param_1[0x8ac] != 0)) {
              local_8 = (undefined1 *)0x1;
              local_c = (char *)0x0;
              local_10 = 0x4830e8;
              uVar5 = FUN_00dde2d0();
              if ((short)uVar5 != 0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
                param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00483102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar5;
              }
            }
            if ((4 < *(byte *)((int)param_1 + 0xdae)) &&
               ((uVar5 = param_1[0x36c], uVar5 == 2 || (uVar5 == 0xffffffff)))) {
              if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59179e-40;
                puStack_1c = (undefined1 *)0x48315f;
                FUN_0047e3b0();
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59186e-40;
                puStack_1c = (undefined1 *)0x483173;
                uVar5 = FUN_0047e3b0();
                if (1 < param_1[0x8af]) {
                  return uVar5;
                }
              }
              fVar1 = (float)param_1[0x2a4];
              if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) &&
                  ((float)param_1[0x2a4] <= 144.0)) && ((float)param_1[0x2a8] < 0.5235988)) {
                local_8 = &LAB_004831bc;
                FUN_0047f8d0();
              }
              fVar1 = (float)param_1[0x2a4];
              uVar5 = (uint)(ushort)((ushort)(49.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 49.0) << 0xe);
              if (49.0 >= fVar1 && (fVar1 == 49.0) == 0) {
                fVar1 = (float)param_1[0x2a8];
                uVar5 = (uint)(ushort)((ushort)(1.134464 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 1.134464) << 0xe);
                if (!NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)) {
                  local_8 = (undefined1 *)0x0;
                  local_c = (char *)0x0;
                  local_10 = 0;
                  puStack_14 = (undefined1 *)0x0;
                  fStack_18 = 4.59177e-40;
                  puStack_1c = &LAB_004831f6;
                  uVar5 = FUN_0047e3b0();
                }
              }
            }
          }
          return uVar5;
        case 1:
        case 2:
          local_8 = (undefined1 *)0xf;
          local_c = (char *)0x48356a;
          iVar6 = FUN_00a8c760();
          uVar5 = 0;
          if (iVar6 != 0) {
            fVar1 = (float)param_1[0x495];
            uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 0.0) << 0xe);
            if ((0.0 >= fVar1 && (fVar1 == 0.0) == 0) && (param_1[0x8ac] != 0)) {
              local_8 = (undefined1 *)0x1;
              local_c = (char *)0x0;
              local_10 = 0x483598;
              uVar5 = FUN_00dde2d0();
              if ((short)uVar5 != 0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
                param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x004835b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar5;
              }
            }
            if ((4 < *(byte *)((int)param_1 + 0xdae)) &&
               ((uVar5 = param_1[0x36c], uVar5 == 2 || (uVar5 == 0xffffffff)))) {
              if ((1 < param_1[0x8af]) &&
                 (((float)param_1[0x2a4] < 49.0 && ((float)param_1[0x2a8] < 1.2217305)))) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59186e-40;
                puStack_1c = (undefined1 *)0x483620;
                uVar5 = FUN_0047e3b0();
                return uVar5;
              }
              if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59179e-40;
                puStack_1c = (undefined1 *)0x483656;
                FUN_0047e3b0();
              }
              if (((49.0 < (float)param_1[0x2a4] != ((float)param_1[0x2a4] == 49.0)) &&
                  ((float)param_1[0x2a4] <= 144.0)) && ((float)param_1[0x2a8] < 0.5235988)) {
                local_8 = (undefined1 *)0x48369c;
                FUN_0047f8d0();
              }
              fVar1 = (float)param_1[0x2a4];
              uVar5 = (uint)(ushort)((ushort)(49.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 49.0) << 0xe);
              if (49.0 >= fVar1 && (fVar1 == 49.0) == 0) {
                fVar1 = (float)param_1[0x2a8];
                uVar5 = (uint)(ushort)((ushort)(1.134464 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 1.134464) << 0xe);
                if (!NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)) {
                  local_8 = (undefined1 *)0x0;
                  local_c = (char *)0x0;
                  local_10 = 0;
                  puStack_14 = (undefined1 *)0x0;
                  fStack_18 = 4.59177e-40;
                  puStack_1c = &LAB_004836d6;
                  uVar5 = FUN_0047e3b0();
                }
              }
            }
          }
          return uVar5;
        default:
          return uVar4;
        case 4:
          if (param_1[0x187] != 0) {
            local_8 = (undefined1 *)0x48aa35;
            uVar4 = FUN_00483e70();
            if ((uVar4 == 0) && (param_1[0x187] == 3)) {
              if (((*(byte *)(param_1 + 0x47c) & 2) != 0) &&
                 (((float)param_1[0x2a4] < 64.0 && ((float)param_1[0x2a8] < 0.7853982)))) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 4;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59184e-40;
                puStack_1c = &LAB_0048aa85;
                FUN_0047e3b0();
              }
              fVar1 = (float)param_1[0x2a8];
              uVar4 = (uint)(ushort)((ushort)(1.3962634 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 1.3962634) << 0xe);
              if ((1.3962634 < fVar1) || (*(char *)((int)param_1 + 0x11a5) == '\0')) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 4;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59184e-40;
                puStack_1c = &LAB_0048aab5;
                uVar4 = FUN_0047e3b0();
              }
            }
          }
          return uVar4;
        case 5:
        case 7:
        case 8:
        case 9:
        case 0xd:
          goto switchD_004982ee_caseD_b;
        }
      }
      if (0x70000 < (int)uVar5) {
        if ((int)uVar5 < 0x80001) {
          if (uVar5 == 0x80000) {
            return 0;
          }
          uVar4 = uVar5 - 0x70001;
          switch(uVar5) {
          default:
            return uVar4;
          case 0x70005:
            uVar5 = FUN_0047def0();
            return uVar5;
          case 0x7000c:
            goto switchD_00498369_caseD_4;
          }
        }
        if (0x90002 < (int)uVar5) {
          if (uVar5 != 0x90003) {
            return uVar5;
          }
          uVar5 = FUN_00486190();
          return uVar5;
        }
        if (uVar5 != 0x90002) {
          return uVar5;
        }
        uVar5 = FUN_0047f440();
        return uVar5;
      }
      if (uVar5 == 0x70000) {
        return 0;
      }
      uVar4 = 0;
      if (uVar5 - 0x60001 != 0) {
        return uVar5 - 0x60001;
      }
switchD_00498369_caseD_4:
      param_1[0x8ad] = 1;
switchD_004982ee_caseD_0:
      return uVar4;
    }
    if (uVar5 == 0x50000) {
      uVar5 = FUN_00482800();
      return uVar5;
    }
    uVar4 = uVar5 - 0x20001;
    switch(uVar4) {
    default:
      goto switchD_004982ee_caseD_0;
    case 1:
      param_1[0x8ad] = 1;
      if (param_1[0x187] == 0) {
        return uVar4;
      }
      uVar5 = FUN_00483e70();
      return uVar5;
    case 2:
      uVar5 = FUN_0047d4b0();
      return uVar5;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xe:
    case 0xf:
      goto switchD_00498369_caseD_4;
    case 10:
      uVar5 = FUN_004894a0();
      return uVar5;
    case 0xb:
      uVar5 = FUN_0047d4f0();
      return uVar5;
    case 0xc:
      uVar5 = 1;
      param_1[0x8ad] = 1;
      if (param_1[0x187] != 0) {
        param_1[0x8da] = 0x40c00000;
        param_1[0x8d9] = 1;
        param_1[0x8db] = 0x43960000;
        param_1[0x8dc] = 0x40490fdb;
        local_8 = (undefined1 *)param_1[0x6e0];
        local_c = "WAIT0";
        local_10 = 0x481c6b;
        uVar5 = FUN_00a5e5e0();
        if ((char)uVar5 != '\0') {
          local_8 = (undefined1 *)0x0;
          local_c = (char *)0x0;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x0;
          fStack_18 = 1.83691e-40;
          puStack_1c = (undefined1 *)0x481c83;
          uVar5 = FUN_0047e3b0();
          param_1[0x37d] = 200;
        }
      }
      return uVar5;
    case 0xd:
      param_1[0x8ad] = 1;
      if (param_1[0x187] != 0) {
        param_1[0x8d9] = 1;
        param_1[0x8da] = 0x40c00000;
        param_1[0x8db] = 0x43960000;
        param_1[0x8dc] = 0x40490fdb;
        fStack_60 = 0.0;
        fStack_5c = 0.0;
        fStack_58 = 10.0;
        iVar6 = FUN_00ac45b0(unaff_ESI);
        if (iVar6 != 0) {
          FUN_00ac45b0(unaff_ESI);
          iVar6 = FUN_00a7c8a0();
          if (iVar6 != 0) {
            fStack_60 = *(float *)(iVar6 + 0x40);
            fStack_5c = *(float *)(iVar6 + 0x44);
            fStack_58 = *(float *)(iVar6 + 0x48);
            uStack_54 = *(undefined4 *)(iVar6 + 0x4c);
            D3DXMatrixInverse(auStack_50,0,param_1 + 4);
            D3DXVec3TransformNormal(auStack_6c,auStack_6c,&fStack_5c);
            fStack_60 = fStack_60 + (float)puStack_20;
            fStack_5c = (float)puStack_1c + fStack_5c;
            fStack_58 = fStack_18 + fStack_58;
          }
        }
        cVar2 = FUN_00a5e5e0("WAIT1",param_1[0x6e0]);
        if ((cVar2 != '\0') || (param_1[0x37d] < 1)) {
          FUN_0047e3b0(0x20011,0,0,0,0);
          FUN_00c81e40(0x16);
        }
        if (((fStack_58 <= 7.0) && ((float)param_1[0x40c] < 0.0)) || (param_1[0x8a4] < 1)) {
          FUN_0047e3b0(0x2000f,0,0,0,0);
          sVar3 = FUN_00dde2d0(0,2);
          param_1[0x8a4] = sVar3 + 3;
        }
        fVar1 = (float)param_1[0x40d];
        uVar4 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0) << 0xe);
        if ((0.0 >= fVar1 && (fVar1 == 0.0) == 0) && (param_1[0x896] != 0)) {
          fVar1 = (float)param_1[0x2a4];
          uVar4 = (uint)(ushort)((ushort)(144.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                (ushort)(fVar1 == 144.0) << 0xe);
          if (144.0 < fVar1) {
            sVar3 = FUN_00dde2d0(0,1);
            if (sVar3 == 0) {
              uVar7 = 2;
            }
            else {
              uVar7 = 1;
            }
            uVar4 = FUN_004841d0(uVar7,0);
          }
          param_1[0x40d] = 0x44160000;
        }
      }
      return uVar4;
    case 0x10:
      uVar5 = FUN_00482220();
      return uVar5;
    case 0x11:
      param_1[0x8ad] = 1;
      if (param_1[0x187] == 0) {
        return uVar4;
      }
      local_c = (char *)0x48a140;
      uVar5 = FUN_00483e70();
      if (uVar5 != 0) {
        return uVar5;
      }
      uVar5 = 0;
      if (param_1[0x896] == 0) goto LAB_0048a405;
      fVar1 = (float)param_1[0x40d];
      uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe);
      if (0.0 < fVar1 || (fVar1 == 0.0) != 0) goto LAB_0048a405;
      if (((float)param_1[0x2a8] < 1.0471976) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) {
        iVar6 = param_1[0x892] % 3;
        if (iVar6 == 0) {
          local_c = (char *)0x0;
          if (1.0471976 <= (float)param_1[0x2a8]) {
            local_10 = 1;
            puStack_14 = (undefined1 *)0x48a25e;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a26c;
            sVar3 = FUN_00dde2d0();
            param_1[0x40d] = (int)((float)(int)sVar3 + 240.0);
          }
          else {
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a230;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a23e;
            sVar3 = FUN_00dde2d0();
            param_1[0x40d] = (int)((float)(int)sVar3 + 180.0);
          }
        }
        else if (iVar6 == 1) {
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x48a1f3;
          FUN_004841d0();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x48a201;
          sVar3 = FUN_00dde2d0();
          param_1[0x40d] = (int)((float)(int)sVar3 + 240.0);
        }
        else {
          local_c = (char *)(iVar6 + -2);
          if (local_c == (char *)0x0) {
            local_10 = 2;
            puStack_14 = (undefined1 *)0x48a1be;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a1cc;
            sVar3 = FUN_00dde2d0();
            param_1[0x40d] = (int)((float)(int)sVar3 + 300.0);
          }
        }
      }
      if ((1.0471976 <= (float)param_1[0x2a8]) || (36.0 <= (float)param_1[0x2a3])) {
        fVar1 = (float)param_1[0x2a3];
        uVar5 = (uint)(ushort)((ushort)(36.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 36.0) << 0xe);
        if (36.0 >= fVar1 && (fVar1 == 36.0) == 0) {
          uVar5 = param_1[0x892] / 3;
          iVar6 = param_1[0x892] % 3;
          if (iVar6 == 0) {
            local_c = (char *)0x0;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x48a3da;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a3e8;
            uVar5 = FUN_00dde2d0();
            fVar1 = (float)(int)(short)uVar5;
          }
          else if (iVar6 == 1) {
            local_c = (char *)0x0;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x48a3b6;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a3c4;
            sVar3 = FUN_00dde2d0();
            uVar5 = (uint)sVar3;
            fVar1 = (float)(int)uVar5;
          }
          else {
            local_c = (char *)(iVar6 + -2);
            if (local_c != (char *)0x0) goto LAB_0048a3ff;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x48a390;
            FUN_004841d0();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x48a39e;
            uVar5 = FUN_00dde2d0();
            fVar1 = (float)(int)(short)uVar5;
          }
LAB_0048a3f3:
          fVar1 = fVar1 + 240.0;
          goto LAB_0048a3f9;
        }
      }
      else {
        uVar5 = param_1[0x892] / 3;
        iVar6 = param_1[0x892] % 3;
        if (iVar6 == 0) {
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x48a332;
          FUN_004841d0();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x48a340;
          uVar5 = FUN_00dde2d0();
          fVar1 = (float)(int)(short)uVar5 + 180.0;
        }
        else {
          if (iVar6 != 1) {
            local_c = (char *)(iVar6 + -2);
            if (local_c == (char *)0x0) {
              local_10 = 2;
              puStack_14 = (undefined1 *)0x48a2dc;
              FUN_004841d0();
              local_c = (char *)0x3c;
              local_10 = 0;
              puStack_14 = (undefined1 *)0x48a2ea;
              uVar5 = FUN_00dde2d0();
              fVar1 = (float)(int)(short)uVar5;
              goto LAB_0048a3f3;
            }
            goto LAB_0048a3ff;
          }
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x48a305;
          FUN_004841d0();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x48a313;
          sVar3 = FUN_00dde2d0();
          uVar5 = (uint)sVar3;
          fVar1 = (float)(int)uVar5 + 180.0;
        }
LAB_0048a3f9:
        param_1[0x40d] = (int)fVar1;
      }
LAB_0048a3ff:
      param_1[0x892] = param_1[0x892] + 1;
LAB_0048a405:
      param_1[0x8da] = 0x40c00000;
      param_1[0x8d9] = 1;
      param_1[0x8db] = 0x43960000;
      param_1[0x8dc] = 0x40490fdb;
      if (param_1[0x128] == 8) {
        fVar1 = (float)param_1[0x2a4];
        uVar5 = (uint)(ushort)((ushort)(100.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 100.0) << 0xe);
        if (100.0 >= fVar1 && (fVar1 == 100.0) == 0) {
          local_c = (char *)0x0;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x0;
          fStack_18 = 0.0;
          puStack_1c = (undefined1 *)0x20001;
          puStack_20 = (undefined1 *)0x48a463;
          FUN_0047e3b0();
          local_c = (char *)0x0;
          local_10 = 0x48a46f;
          FUN_00c3ccb0();
          local_c = (char *)0x0;
          local_10 = 4;
          puStack_14 = &LAB_0048a47e;
          uVar5 = FUN_00a88b50();
        }
      }
      return uVar5;
    }
  }
  if (uVar5 == 0x20000) {
    return 0;
  }
  uVar4 = uVar5 - 0x10000;
  switch(uVar4) {
  default:
    goto switchD_004982ee_caseD_0;
  case 4:
    uVar5 = FUN_004888c0();
    return uVar5;
  case 5:
    uVar5 = FUN_00495b50();
    return uVar5;
  case 6:
    uVar5 = FUN_00495d50();
    return uVar5;
  case 9:
  case 10:
    uVar5 = FUN_00488fa0();
    return uVar5;
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
switchD_004982ee_caseD_b:
    if (param_1[0x187] == 0) {
      return uVar4;
    }
    uVar5 = FUN_00483e70();
    return uVar5;
  case 0xd:
    uVar5 = FUN_00496420();
    return uVar5;
  case 0xe:
    uVar5 = FUN_00480e90();
    return uVar5;
  case 0xf:
    if (param_1[0x187] == 0) {
      return uVar4;
    }
    local_c = (char *)0x48a4a6;
    uVar5 = FUN_00483e70();
    if (uVar5 != 0) {
      return uVar5;
    }
    if ((1.0471976 <= (float)param_1[0x2a8]) || ((float)param_1[0x2a3] <= 100.0)) {
      param_1[0x591] = 0;
    }
    else {
      param_1[0x591] = 1;
    }
    if ((((float)param_1[0x40c] < 0.0) && ((float)param_1[0x2a8] < 1.0471976)) &&
       ((float)param_1[0x2a3] <= 36.0)) {
      local_c = (char *)0x0;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x0;
      fStack_18 = 0.0;
      puStack_1c = (undefined1 *)0x5000f;
      puStack_20 = (undefined1 *)0x48a52d;
      FUN_0047e3b0();
    }
    if ((((float)param_1[0x40d] < 0.0) && ((float)param_1[0x2a8] < 1.0471976)) &&
       (100.0 < (float)param_1[0x2a3])) {
      local_c = (char *)0x0;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x0;
      fStack_18 = 0.0;
      puStack_1c = (undefined1 *)0x5000e;
      puStack_20 = &LAB_0048a57a;
      FUN_0047e3b0();
    }
    if ((param_1[0x896] == 0) || (0.0 <= (float)param_1[0x40d])) goto LAB_0048a6b8;
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
      local_c = (char *)0x0;
      local_10 = 2;
      puStack_14 = (undefined1 *)0x48a68f;
      FUN_004841d0();
      local_c = (char *)0x78;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x48a69d;
      sVar3 = FUN_00dde2d0();
      fVar1 = (float)(int)sVar3;
LAB_0048a6a6:
      fVar1 = fVar1 + 420.0;
LAB_0048a6ac:
      param_1[0x40d] = (int)fVar1;
    }
    else {
      iVar6 = param_1[0x892] % 3;
      if (iVar6 == 0) {
        local_c = (char *)0x0;
        if (0.5235988 <= (float)param_1[0x2a8]) {
          local_10 = 2;
          puStack_14 = (undefined1 *)0x48a669;
          FUN_004841d0();
          local_c = (char *)0x78;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x48a677;
          sVar3 = FUN_00dde2d0();
          fVar1 = (float)(int)sVar3;
          goto LAB_0048a6a6;
        }
        local_10 = 0;
        puStack_14 = (undefined1 *)0x48a641;
        FUN_004841d0();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x48a64f;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3 + 240.0;
        goto LAB_0048a6ac;
      }
      if (iVar6 == 1) {
        local_c = (char *)0x0;
        local_10 = 1;
        puStack_14 = (undefined1 *)0x48a601;
        FUN_004841d0();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x48a60f;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3 + 360.0;
        goto LAB_0048a6ac;
      }
      local_c = (char *)(iVar6 + -2);
      if (local_c == (char *)0x0) {
        local_10 = 2;
        puStack_14 = (undefined1 *)0x48a5d8;
        FUN_004841d0();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x48a5e6;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3;
        goto LAB_0048a6a6;
      }
    }
    param_1[0x892] = param_1[0x892] + 1;
LAB_0048a6b8:
    fVar1 = (float)param_1[0x248];
    uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 >= fVar1 && (fVar1 == 0.0) == 0) {
      if ((float)param_1[0x2a7] < -1.0471976) {
        local_c = (char *)0x0;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x0;
        fStack_18 = 0.0;
        puStack_1c = (undefined1 *)0x10012;
        puStack_20 = &LAB_0048a6ee;
        FUN_0047e3b0();
      }
      fVar1 = (float)param_1[0x2a7];
      uVar5 = (uint)(ushort)((ushort)(1.0471976 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 1.0471976) << 0xe);
      if (1.0471976 < fVar1) {
        local_c = (char *)0x0;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x0;
        fStack_18 = 0.0;
        puStack_1c = (undefined1 *)0x10013;
        puStack_20 = &LAB_0048a715;
        uVar5 = FUN_0047e3b0();
      }
    }
    param_1[0x8d9] = 1;
    param_1[0x8da] = 0x40c00000;
    param_1[0x8db] = 0x43480000;
    param_1[0x8dc] = 0x40490fdb;
    return uVar5;
  case 0x14:
    uVar5 = FUN_00481540();
    return uVar5;
  case 0x15:
    if (param_1[0x187] == 0) {
      return uVar4;
    }
    local_c = (char *)0x4891d6;
    uVar5 = FUN_00483e70();
    if (uVar5 != 0) {
      return uVar5;
    }
    local_c = (char *)0x3d888889;
    local_10 = 0x4891f4;
    puStack_1c = (undefined1 *)(**(code **)(*param_1 + 800))();
    if (puStack_1c == (undefined1 *)0x0) {
      puStack_20 = (undefined1 *)0x70005;
      param_1[0x128] = 0;
      uStack_24 = 0x48920e;
      fStack_18 = (float)puStack_1c;
      puStack_14 = puStack_1c;
      local_10 = (uint)puStack_1c;
      uVar5 = FUN_0047e3b0();
      return uVar5;
    }
    if (param_1[0x896] == 0) goto LAB_00489357;
    fVar1 = (float)param_1[0x2a8];
    puStack_1c = (undefined1 *)
                 (uint)(ushort)((ushort)(1.2217305 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 1.2217305) << 0xe);
    if (1.2217305 < fVar1 || (fVar1 == 1.2217305) != 0) goto LAB_00489357;
    fVar1 = (float)param_1[0x40d];
    puStack_1c = (undefined1 *)
                 (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1 || (fVar1 == 0.0) != 0) goto LAB_00489357;
  }
  puStack_1c = (undefined1 *)(param_1[0x892] / 5);
  switch(param_1[0x892] % 5) {
  case 0:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664689e-39;
    FUN_004841d0();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664713e-39;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    uVar5 = (uint)(short)puStack_1c;
    goto LAB_00489345;
  case 1:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x1;
    fStack_18 = 6.66475e-39;
    FUN_004841d0();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664774e-39;
    sVar3 = FUN_00dde2d0();
    puStack_1c = (undefined1 *)(int)sVar3;
    fVar1 = (float)(int)puStack_1c + 180.0;
    break;
  case 2:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x2;
    fStack_18 = 6.664818e-39;
    FUN_004841d0();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664842e-39;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    fVar1 = (float)(int)(short)puStack_1c + 300.0;
    break;
  case 3:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x1;
    fStack_18 = 6.664884e-39;
    FUN_004841d0();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664908e-39;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    fVar1 = (float)(int)(short)puStack_1c + 180.0;
    break;
  case 4:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.66495e-39;
    FUN_004841d0();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 6.664973e-39;
    sVar3 = FUN_00dde2d0();
    puStack_1c = (undefined1 *)(int)sVar3;
    uVar5 = (uint)puStack_1c;
LAB_00489345:
    fVar1 = (float)(int)uVar5 + 60.0;
    break;
  default:
    goto switchD_0048925f_default;
  }
  param_1[0x40d] = (int)fVar1;
switchD_0048925f_default:
  param_1[0x892] = param_1[0x892] + 1;
LAB_00489357:
  param_1[0x8d9] = 1;
  param_1[0x8da] = 0x40800000;
  param_1[0x8db] = 0x43480000;
  param_1[0x8dc] = 0x3fc90fdb;
  return (uint)puStack_1c;
}

// 00498550  FUN_00498550  size=609  [between]
void __fastcall FUN_00498550(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x2120) == 0) && ((*(byte *)(param_1 + 0x20b0) & 4) == 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x20b0) = *(byte *)(param_1 + 0x20b0) | 4;
    *(undefined1 *)(param_1 + 0x20b8) = 0xff;
  }
  FUN_00498140();
  if (*(int *)(param_1 + 0x2128) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x20b8) == -1) {
    *(undefined4 *)(param_1 + 0x2128) = 0;
  }
  if (*(char *)(param_1 + 0x20b8) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x20b9) < '\x02') {
    return;
  }
  if (*(int *)(param_1 + 0x22cc) == 0) {
    iVar1 = FUN_00ac4780();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x2124) == 0) goto LAB_0049878d;
      iVar1 = *(int *)(param_1 + 0x2124) + -1;
      if (iVar1 == 0) {
        FUN_0047eee0(0xe,0x40400000);
        *(undefined4 *)(param_1 + 0x2128) = 0;
        return;
      }
    }
    else {
      iVar3 = FUN_00ac4780();
      iVar1 = *(int *)(param_1 + 0x2124);
      if (iVar3 < 3) {
        if (iVar1 == 0) goto LAB_0049865f;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_0047eee0(0x18,0x40400000);
          *(undefined4 *)(param_1 + 0x2128) = 0;
          return;
        }
      }
      else {
        if (iVar1 == 0) {
          uVar4 = 0x41400000;
          uVar2 = 4;
          goto LAB_00498799;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_0047eee0(0x24,0x40400000);
          *(undefined4 *)(param_1 + 0x2128) = 0;
          return;
        }
      }
    }
LAB_00498610:
    if (iVar1 == 1) {
      FUN_0047eee0(0xffffffff,0xbf800000);
      *(undefined4 *)(param_1 + 0x2128) = 0;
      return;
    }
  }
  else {
    iVar3 = FUN_00ac4780();
    iVar1 = *(int *)(param_1 + 0x2124);
    if (iVar3 < 3) {
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          if ((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) {
            FUN_0047eee0(7,0x41000000);
            *(undefined4 *)(param_1 + 0x2128) = 0;
            return;
          }
          FUN_0047eee0(0xe,0x40400000);
          *(undefined4 *)(param_1 + 0x2128) = 0;
          return;
        }
        goto LAB_00498610;
      }
LAB_0049878d:
      uVar4 = 0x41400000;
      uVar2 = 1;
    }
    else {
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_0047eee0(0x14,0x40400000);
          *(undefined4 *)(param_1 + 0x2128) = 0;
          return;
        }
        goto LAB_00498610;
      }
LAB_0049865f:
      uVar4 = 0x41900000;
      uVar2 = 2;
    }
LAB_00498799:
    FUN_0047eee0(uVar2,uVar4);
  }
  *(undefined4 *)(param_1 + 0x2128) = 0;
  return;
}

// 004987C0  FUN_004987c0  size=724  [between]
void __fastcall FUN_004987c0(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  int local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00a81330();
  iVar3 = FUN_00a7c8a0();
  if (iVar3 != 0) {
    iVar4 = FUN_00a81330();
    local_44 = 0;
    if (iVar4 != 0) {
      local_44 = FUN_00a7c8a0();
    }
    FUN_004976f0();
    iVar4 = *(int *)(param_1 + 0x1b4);
    if ((*(int *)(param_1 + 0x1bc) != 0) && (iVar4 == 0)) {
      iVar4 = 1;
    }
    if (*(int *)(param_1 + 0x1ac) == 0) {
      if (*(int *)(iVar3 + 0xdc0) == 0) {
        bVar1 = *(byte *)(iVar3 + 0x4a8) & 0x40;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x4a8) & 0x80;
      }
      if (bVar1 != 0) {
        iVar4 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if ((local_44 != 0) && (*(int *)(iVar3 + 0x2258) != 0)) {
      local_30 = *(float *)(iVar3 + 0x2270);
      uVar6 = 0x38;
      local_2c = *(float *)(iVar3 + 0x2274);
      local_28 = *(float *)(iVar3 + 0x2278);
      local_24 = *(float *)(iVar3 + 0x227c);
      FUN_00a81330(0x38);
      FUN_00a7c8a0();
      iVar3 = FUN_00a12210(uVar6);
      if (iVar3 != 0) {
        local_20 = 0.0;
        local_1c = 0.0;
        local_18 = 1.0;
        D3DXVec3TransformNormal(&local_20,&local_20,iVar3 + 0x10);
        fStack_40 = local_30 - *(float *)(iVar3 + 0x40);
        fStack_3c = local_2c - *(float *)(iVar3 + 0x44);
        fStack_38 = local_28 - *(float *)(iVar3 + 0x48);
        fStack_34 = local_24 - *(float *)(iVar3 + 0x4c);
        fVar2 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&fStack_40,&fStack_40);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_40 = 0.0;
          fStack_3c = 1.0;
          fStack_38 = 0.0;
        }
        fVar5 = (float10)FUN_00ddbb50((fStack_3c * local_1c + local_20 * fStack_40 +
                                      fStack_38 * local_18) /
                                      (SQRT(fStack_38 * fStack_38 +
                                            fStack_40 * fStack_40 + fStack_3c * fStack_3c) *
                                      SQRT(local_18 * local_18 +
                                           local_20 * local_20 + local_1c * local_1c)));
        if (fVar5 < (float10)0.017453292 != (fVar5 == (float10)0.017453292)) {
          *(undefined4 *)(param_1 + 0x1b8) = 1;
        }
      }
      FUN_00a84720();
      FUN_00a84720();
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(&local_30,0,iVar4,0,0,0x3f800000);
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(&local_30,iVar4,0,0,0,0x3f800000);
    }
  }
  return;
}

// 00498AA0  FUN_00498aa0  size=535  [between]
void __fastcall FUN_00498aa0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  FUN_00a81330();
  iVar6 = FUN_00a7c8a0();
  if (iVar6 != 0) {
    iVar7 = FUN_00a81330();
    iVar9 = 0;
    if (iVar7 != 0) {
      iVar9 = FUN_00a7c8a0();
    }
    FUN_004976f0();
    if (iVar9 != 0) {
      fVar2 = *(float *)(iVar6 + 0x2280);
      fVar3 = *(float *)(iVar6 + 0x2284);
      fVar4 = *(float *)(iVar6 + 0x2288);
      fVar5 = *(float *)(iVar6 + 0x228c);
      local_50 = fVar2;
      local_4c = fVar3;
      local_48 = fVar4;
      local_44 = fVar5;
      iVar7 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
      local_40 = *(undefined4 *)(iVar7 + 0x40);
      local_3c = *(undefined4 *)(iVar7 + 0x44);
      local_38 = *(undefined4 *)(iVar7 + 0x48);
      local_34 = *(undefined4 *)(iVar7 + 0x4c);
      local_24 = *(float *)(iVar6 + 0x910);
      local_30 = (local_50 - *(float *)(param_1 + 0x200)) / local_24;
      local_2c = (local_4c - *(float *)(param_1 + 0x204)) / local_24;
      local_28 = (local_48 - *(float *)(param_1 + 0x208)) / local_24;
      local_24 = (local_44 - *(float *)(param_1 + 0x20c)) / local_24;
      puVar8 = (undefined4 *)
               FUN_00a8cf30(local_20,&local_50,&local_30,&local_40,0x3fc00000,0x3f800000);
      *(undefined4 *)(param_1 + 0x210) = *puVar8;
      pfVar1 = (float *)(param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x214) = puVar8[1];
      *(undefined4 *)(param_1 + 0x218) = puVar8[2];
      *(undefined4 *)(param_1 + 0x21c) = puVar8[3];
      *pfVar1 = fVar2;
      *(float *)(param_1 + 0x214) = fVar3;
      *(float *)(param_1 + 0x218) = fVar4;
      *(float *)(param_1 + 0x21c) = fVar5;
      FUN_00a84720();
      FUN_00a84720();
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(pfVar1,0,*(undefined4 *)(param_1 + 0x1b4),0,0,0x3f800000);
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(pfVar1,*(undefined4 *)(param_1 + 0x1b4),0,0,0,0x3f800000);
      *(float *)(param_1 + 0x200) = fVar2;
      *(float *)(param_1 + 0x204) = fVar3;
      *(float *)(param_1 + 0x208) = fVar4;
      *(float *)(param_1 + 0x20c) = fVar5;
    }
  }
  return;
}

// 00498CE0  FUN_00498ce0  size=1440  [between]
void __thiscall FUN_00498ce0(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  undefined4 uVar6;
  ushort uVar7;
  float10 fVar8;
  undefined *puVar9;
  int iStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_68;
  float afStack_60 [4];
  undefined1 auStack_50 [48];
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  FUN_004066f0();
  uVar7 = 3;
  if (param_1[300] == 0xf00c0) {
    uVar7 = 1;
  }
  if (param_1[0x1ec] != 0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  }
  (**(code **)(*param_1 + 0x20))();
  if (uVar7 != 0) {
    uStack_134 = (uint)uVar7;
    iStack_158 = 0;
    do {
      sVar5 = (short)*(undefined4 *)((int)&DAT_01880b24 + iStack_158);
      uVar6 = *(undefined4 *)((int)&DAT_01880b28 + iStack_158);
      if (param_1[300] == 0xf00b0) {
        sVar5 = (short)*(undefined4 *)((int)&DAT_01880b3c + iStack_158);
        uVar6 = *(undefined4 *)((int)&DAT_01880b40 + iStack_158);
      }
      if (param_1[300] == 0xf00c0) {
        sVar5 = (short)*(undefined4 *)((int)&DAT_01880b54 + iStack_158);
        uVar6 = *(undefined4 *)((int)&DAT_01880b58 + iStack_158);
      }
      iVar2 = FUN_00a12210((int)sVar5);
      if (iVar2 != 0) {
        uStack_f0 = 0;
        fStack_70 = *(float *)(iVar2 + 0x40) - (float)param_1[0x10];
        uStack_ec = 0;
        uStack_e4 = 0;
        uStack_e8 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        fStack_68 = *(float *)(iVar2 + 0x48) - (float)param_1[0x12];
        uStack_a8 = 0;
        uStack_7c = 0xffffffff;
        uStack_ac = 0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_bc = 0;
        uStack_c0 = 0;
        uStack_c4 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_d4 = 0;
        uStack_d8 = 0;
        uStack_dc = 0;
        uStack_a4 = 0x3f800000;
        uStack_b8 = 0x3f800000;
        uStack_cc = 0x3f800000;
        uStack_e0 = 0x3f800000;
        uStack_88 = 0x3f800000;
        uStack_84 = 0x3f800000;
        uStack_80 = 0x3f800000;
        uStack_a0 = *(undefined4 *)(iVar2 + 0x40);
        uStack_9c = *(undefined4 *)(iVar2 + 0x44);
        uStack_98 = *(undefined4 *)(iVar2 + 0x48);
        iStack_94 = param_1[0x24];
        iStack_90 = param_1[0x25];
        iStack_8c = param_1[0x26];
        iVar3 = FUN_00a82090("Container Parts",uVar6,&uStack_f0);
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          fVar8 = (float10)FUN_00dde300(0x3f000000,0x3fe66666);
          fStack_11c = (float)fVar8;
          fVar8 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
          fStack_120 = (float)((float10)fStack_70 * (float10)3.0 * fVar8);
          fVar8 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
          fStack_118 = (float)((float10)fStack_68 * (float10)3.0 * fVar8);
          fVar8 = (float10)FUN_00dde300(0xc1f00000,0x41f00000);
          fStack_104 = (float)fVar8;
          fVar8 = (float10)FUN_00dde300(0xc1f00000,0x41f00000);
          afStack_60[0] = fStack_104;
          afStack_60[1] = 0.0;
          afStack_60[2] = (float)fVar8;
          FID_conflict__memcpy(auStack_50,(void *)(iVar2 + 0x10),0x40);
          fStack_130 = *(float *)(iVar2 + 0x40);
          uStack_12c = *(undefined4 *)(iVar2 + 0x44);
          fStack_128 = *(float *)(iVar2 + 0x48);
          fStack_124 = *(float *)(iVar2 + 0x4c);
          iVar2 = FUN_00c13920();
          if (iVar2 != 0) {
            piVar4 = (int *)FUN_00c13920();
            iVar2 = (**(code **)(*piVar4 + 0x28))(0);
            if ((iVar2 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
              puVar9 = &DAT_01be9db8;
              (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
              iVar2 = FUN_00dd6d80(puVar9);
              if (iVar2 != 0) {
                fStack_150 = (float)piVar4[0x10] - fStack_130;
                fStack_148 = (float)piVar4[0x12] - fStack_128;
                fStack_144 = (float)piVar4[0x13] - fStack_124;
                fStack_14c = 0.0;
                fVar1 = fStack_150 * fStack_150 + fStack_148 * fStack_148;
                if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                  FUN_00ddf460(&fStack_150,&fStack_150);
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  fStack_150 = 0.0;
                  fStack_14c = 1.0;
                  fStack_148 = 0.0;
                }
                fVar8 = (float10)FUN_00dde300(0x3f000000,0x3fe66666);
                fStack_14c = (float)fVar8;
                fVar8 = (float10)FUN_00dde300(0x3f666666,0x3f8ccccd);
                fStack_120 = (float)((float10)fStack_150 * (float10)8.0 * fVar8 +
                                    (float10)fStack_120);
                fVar8 = (float10)FUN_00dde300(0x3f666666,0x3f8ccccd);
                fStack_118 = (float)((float10)fStack_148 * (float10)8.0 * fVar8 +
                                    (float10)fStack_118);
                fStack_11c = fStack_11c + fStack_14c;
              }
            }
          }
          fStack_20 = fStack_130;
          uStack_1c = uStack_12c;
          fStack_18 = fStack_128;
          FUN_00497c20(auStack_50,&fStack_120,afStack_60,1,1);
          uStack_100 = 0;
          uStack_fc = 0x42200000;
          uStack_f8 = 0;
          if ((*(int *)(iVar3 + 0x1208) != 0) && (*(int *)(iVar3 + 0x7b0) != 0)) {
            (**(code **)(**(int **)(iVar3 + 0x7b0) + 200))(&uStack_100,&uStack_100,0);
          }
        }
      }
      iStack_158 = iStack_158 + 8;
      uStack_134 = uStack_134 - 1;
    } while (uStack_134 != 0);
  }
  iVar2 = FUN_00a7fce0(param_1[0x13c]);
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    FUN_00498ce0(param_2);
  }
  FUN_009fdde0();
  if (DAT_01885d68 != 1) {
    piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar4 = *piVar4 + -1;
    if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00499290  FUN_00499290  size=270  [between]
/* WARNING: Removing unreachable block (ram,0x0049935e) */

void __fastcall FUN_00499290(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar3 = FUN_00c13920();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar6);
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    sVar2 = FUN_00dde2d0(0,4);
    fVar5 = (float10)FUN_00dde300(0,0x42700000);
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0x3e4ccccd;
    *(float *)(param_1 + 0x920) =
         (float)((float10)(*(uint *)(param_1 + 0x4b0) & 0xf) * (float10)45.0 +
                fVar5 + (float10)(((float)(int)sVar2 + 10.0) * 60.0));
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (0.0 <= fVar1) {
    return;
  }
  FUN_00498010();
  return;
}

// 004993A0  FUN_004993a0  size=808  [between]
void __fastcall FUN_004993a0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [76];
  
  iVar1 = FUN_00c13920();
  if (iVar1 == 0) {
LAB_004993fb:
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 == 0) goto LAB_004993fb;
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar11 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar11);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  local_80 = *(float *)(uVar3 + 0x40);
  local_78 = *(float *)(uVar3 + 0x48);
  local_74 = *(float *)(uVar3 + 0x4c);
  local_7c = *(float *)(uVar3 + 0x44) + 2.0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    uVar12 = 0x3f800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &DAT_0163b5f4;
    FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
    FUN_004066f0();
    FUN_008f3c80();
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    *(undefined4 *)(param_1 + 0x1208) = 0;
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    *(undefined4 *)(param_1 + 0x1460) = 0;
    *(undefined4 *)(param_1 + 0x1464) = 0;
    *(undefined4 *)(param_1 + 0x1468) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00499545;
  fVar13 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar13;
  if ((fVar13 < 0.0) ||
     (fVar13 = *(float *)(param_1 + 0x1290), !NAN(fVar13) && 2.0 < fVar13 != (fVar13 == 2.0))) {
    FUN_00498010();
  }
LAB_00499545:
  if (uVar3 != 0) {
    uStack_8c = *(undefined4 *)(param_1 + 0x40);
    uStack_88 = *(undefined4 *)(param_1 + 0x44);
    uStack_84 = *(undefined4 *)(param_1 + 0x48);
    fVar4 = (float10)FUN_00a581b0(&uStack_8c,*(float *)(param_1 + 0x910) * 0.15,
                                  *(undefined4 *)(param_1 + 0x1290));
    *(float *)(param_1 + 0x1290) = (float)fVar4;
    fStack_70 = local_80 - *(float *)(param_1 + 0x40);
    fStack_6c = local_7c - *(float *)(param_1 + 0x44);
    fStack_68 = local_78 - *(float *)(param_1 + 0x48);
    fStack_64 = local_74 - *(float *)(param_1 + 0x4c);
    fVar13 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
    if (fVar13 < 0.0 == (fVar13 == 0.0)) {
      FUN_00ddf460(&fStack_70,&fStack_70);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      fStack_68 = 0.0;
    }
    local_80 = fStack_6c * 0.0 - fStack_68;
    local_7c = fStack_68 * 0.0 - fStack_70 * 0.0;
    local_78 = fStack_70 - fStack_6c * 0.0;
    fVar13 = *(float *)(param_1 + 0x910) * -0.13962634;
    fStack_60 = local_80;
    fStack_5c = local_7c;
    fStack_58 = local_78;
    D3DXMatrixRotationAxis(auStack_50,&fStack_60);
    D3DXMatrixMultiply(param_1 + 0x10,param_1 + 0x10,&fStack_5c);
    *(float *)(param_1 + 0x40) = fVar13;
    *(undefined4 *)(param_1 + 0x44) = unaff_EDI;
    *(undefined4 *)(param_1 + 0x48) = unaff_ESI;
  }
  return;
}

// 004996D0  BaContainerParts::vf1A4  size=50  [class]
void __thiscall BaContainerParts::vf1A4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x120c) == 0) {
    Bh0064::vf1A4(param_2,param_3);
    *(undefined4 *)(param_1 + 0x120c) = 1;
    FUN_00498010();
  }
  return;
}

// 00499710  FUN_00499710  size=232  [between]
void __fastcall FUN_00499710(int *param_1)

{
  int iVar1;
  
  param_1[0x893] = 0x42700000;
  if (param_1[0x187] == 0) {
    FUN_00a8d280();
    FUN_00aa4080(0x79,0,0x3e2aaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x479] = 0;
    *(undefined1 *)((int)param_1 + 0x11a5) = 0;
    param_1[0x484] = 0;
    param_1[0x446] = 0;
    FUN_00940b10();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00940b10();
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x40c] = 0x42700000;
    FUN_00494800(0x3f860a92,0x41000000);
  }
  return;
}

// 00499800  hkpCdPointCollector::hkpCdPointCollector  size=4451  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector(int param_1)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float unaff_ESI;
  float unaff_EDI;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  int iVar14;
  float *pfStack_3bc;
  float *pfStack_3b8;
  float fStack_3b4;
  float *pfStack_3b0;
  float *pfStack_3ac;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float *pfStack_398;
  float *pfStack_394;
  float fStack_390;
  undefined4 *puStack_38c;
  undefined4 *puStack_388;
  float fStack_384;
  float fStack_374;
  undefined1 auStack_36c [4];
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_348;
  undefined **ppuStack_340;
  float fStack_33c;
  float local_334;
  undefined4 *puStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [24];
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [20];
  undefined1 auStack_154 [8];
  undefined1 auStack_14c [44];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [44];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [164];
  
  local_368 = 0.9;
  if (*(int *)(param_1 + 0x22cc) != 0) {
    local_368 = 0.71999997;
  }
  iVar11 = *(int *)(param_1 + 0xa9c);
  local_334 = 1.4013e-45;
  *(undefined4 *)(param_1 + 0x1130) = 0;
  *(undefined4 *)(param_1 + 0x1138) = 0;
  *(undefined4 *)(param_1 + 0x1170) = 0;
  if (*(int *)(param_1 + 0x1118) == 0) {
    *(undefined4 *)(param_1 + 0x1178) = 0;
    *(undefined4 *)(param_1 + 0x1120) = 0;
    *(undefined4 *)(param_1 + 0x1128) = 0;
  }
  else {
    local_320 = 0;
    fVar1 = (float)(param_1 + 0x10);
    local_31c = 0;
    puStack_38c = &local_320;
    local_318 = 0x40b00000;
    fStack_390 = 6.758704e-39;
    puStack_388 = puStack_38c;
    fStack_384 = fVar1;
    D3DXVec3TransformNormal();
    fStack_32c = fStack_32c + *(float *)(param_1 + 0x40);
    uVar5 = *(uint *)(param_1 + 0x1210);
    fStack_328 = *(float *)(param_1 + 0x44) + fStack_328;
    fStack_324 = *(float *)(param_1 + 0x48) + fStack_324;
    if ((uVar5 & 1) != 0) {
      fStack_33c = *(float *)(param_1 + 0x2280) - fStack_32c;
      local_334 = *(float *)(param_1 + 0x2288) - fStack_324;
      fStack_390 = 6.758855e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1130) = (float)((float10)fStack_33c * fVar12 * (float10)fStack_374);
      *(float *)(param_1 + 0x1138) = (float)(fVar12 * (float10)local_334 * (float10)fStack_374);
      fStack_390 = 6.758947e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1170) =
           (float)(fVar12 * (float10)unaff_ESI * (float10)fStack_374 +
                  (float10)*(float *)(param_1 + 0x1170));
    }
    if ((uVar5 & 2) != 0) {
      fStack_390 = 6.759047e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1170) =
           (float)(fVar12 * (float10)unaff_ESI * (float10)fStack_374 +
                  (float10)*(float *)(param_1 + 0x1170));
    }
    *(undefined4 *)(param_1 + 0x1134) = 0;
    pfVar2 = (float *)(param_1 + 0x1120);
    fVar6 = SQRT(*(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128) +
                 *pfVar2 * *pfVar2 + *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124));
    fVar4 = *(float *)(param_1 + 0x1218) * fStack_374;
    if ((*(byte *)(param_1 + 0x11f0) & 8) != 0) {
      fVar4 = fVar4 + fVar4;
    }
    if (fVar4 < fVar6) {
      fVar4 = fVar4 / fVar6;
      *pfVar2 = fVar4 * *pfVar2;
      *(float *)(param_1 + 0x1128) = fVar4 * *(float *)(param_1 + 0x1128);
    }
    *pfVar2 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1130) * fStack_374 + *pfVar2;
    *(float *)(param_1 + 0x1128) =
         *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1138) * fStack_374 +
         *(float *)(param_1 + 0x1128);
    fStack_390 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1170) +
                 *(float *)(param_1 + 0x1178);
    pfStack_394 = (float *)0x499a38;
    fVar12 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0x1178) = (float)fVar12;
    pfStack_398 = &fStack_35c;
    fStack_35c = fStack_374 * *(float *)(param_1 + 0x1140);
    fStack_358 = *(float *)(param_1 + 0x1144) * fStack_374;
    fStack_354 = *(float *)(param_1 + 0x1148) * fStack_374;
    fStack_350 = fStack_374 * *(float *)(param_1 + 0x114c);
    fStack_39c = 6.759417e-39;
    pfStack_394 = pfStack_398;
    fStack_390 = fVar1;
    D3DXVec3TransformNormal();
    *pfVar2 = *(float *)(param_1 + 0x910) * local_368 + *pfVar2;
    *(float *)(param_1 + 0x1128) =
         *(float *)(param_1 + 0x910) * fStack_360 + *(float *)(param_1 + 0x1128);
    fStack_39c = *(float *)(param_1 + 0x1178) + *(float *)(param_1 + 0x1174);
    fStack_3a0 = 6.759497e-39;
    fVar13 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0x1178) = (float)fVar13;
    fVar12 = (float10)0.06981317;
    if ((*(byte *)(param_1 + 0x11f0) & 0x40) != 0) {
      fVar12 = (float10)0.15707964;
    }
    fVar12 = (float10)unaff_EDI * fVar12;
    if (fVar12 < fVar13) {
      *(float *)(param_1 + 0x1178) = (float)fVar12;
    }
    if ((float10)*(float *)(param_1 + 0x1178) < -fVar12) {
      *(float *)(param_1 + 0x1178) = (float)-fVar12;
    }
    fStack_39c = 6.759638e-39;
    fVar12 = (float10)FUN_00fdc1f0();
    *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
    *(float *)(param_1 + 0x1128) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1128));
    fStack_39c = 6.759687e-39;
    fVar12 = (float10)FUN_00fdc1f0();
    fStack_3a0 = 0.0;
    puStack_3a4 = auStack_168;
    *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
    puStack_3a8 = (undefined1 *)0x499b5e;
    fStack_39c = fVar1;
    D3DXMatrixInverse();
    puStack_3a8 = auStack_174;
    pfStack_3b0 = &fStack_384;
    fStack_3b4 = 6.759753e-39;
    pfStack_3ac = pfVar2;
    D3DXVec3TransformNormal();
    fVar12 = (float10)fStack_390;
    if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1140))) {
      fStack_3b4 = 6.759825e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      fVar12 = fVar12 * (float10)fStack_390;
      fStack_390 = (float)fVar12;
    }
    if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1140) < (float10)0)) {
      fStack_3b4 = 6.759899e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      fStack_390 = (float)(fVar12 * (float10)fStack_390);
    }
    fVar12 = (float10)(float)puStack_388;
    if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1148))) {
      fStack_3b4 = 6.759982e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      fVar12 = fVar12 * (float10)(float)puStack_388;
      puStack_388 = (undefined4 *)(float)fVar12;
    }
    if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1148) < (float10)0)) {
      fStack_3b4 = 6.760053e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      puStack_388 = (undefined4 *)(float)(fVar12 * (float10)(float)puStack_388);
    }
    if (*(int *)(param_1 + 0x1150) == 0) {
      fStack_3b4 = 6.760106e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      fStack_390 = (float)(fVar12 * (float10)fStack_390);
    }
    if (*(int *)(param_1 + 0x1154) == 0) {
      fStack_3b4 = 6.760154e-39;
      fVar12 = (float10)FUN_00fdc1f0();
      puStack_388 = (undefined4 *)(float)(fVar12 * (float10)(float)puStack_388);
    }
    pfStack_3b8 = &fStack_390;
    pfStack_3bc = pfVar2;
    fStack_3b4 = fVar1;
    D3DXVec3TransformNormal();
    if ((*(byte *)(param_1 + 0x11f0) & 0x20) != 0) {
      D3DXMatrixInverse(auStack_18c,0,fVar1);
      D3DXVec3TransformNormal(&puStack_3a8,pfVar2,auStack_198);
      fVar12 = (float10)fStack_3b4;
      if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1140))) {
        fVar12 = (float10)FUN_00fdc1f0();
        fVar12 = fVar12 * (float10)fStack_3b4;
        fStack_3b4 = (float)fVar12;
      }
      if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1140) < (float10)0)) {
        fVar12 = (float10)FUN_00fdc1f0();
        fStack_3b4 = (float)(fVar12 * (float10)fStack_3b4);
      }
      fVar12 = (float10)(float)pfStack_3ac;
      if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1148))) {
        fVar12 = (float10)FUN_00fdc1f0();
        fVar12 = fVar12 * (float10)(float)pfStack_3ac;
        pfStack_3ac = (float *)(float)fVar12;
      }
      if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1148) < (float10)0)) {
        fVar12 = (float10)FUN_00fdc1f0();
        pfStack_3ac = (float *)(float)(fVar12 * (float10)(float)pfStack_3ac);
      }
      if (*(int *)(param_1 + 0x1150) == 0) {
        fVar12 = (float10)FUN_00fdc1f0();
        fStack_3b4 = (float)(fVar12 * (float10)fStack_3b4);
      }
      if (*(int *)(param_1 + 0x1154) == 0) {
        fVar12 = (float10)FUN_00fdc1f0();
        pfStack_3ac = (float *)(float)(fVar12 * (float10)(float)pfStack_3ac);
      }
      D3DXVec3TransformNormal(pfVar2,&fStack_3b4,fVar1);
    }
    if (((float)pfStack_3ac < 0.7853982 != ((float)pfStack_3ac == 0.7853982)) &&
       (!NAN((float)pfStack_3ac) &&
        -0.7853982 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.7853982))) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
    }
    if (((float)pfStack_3ac <= 0.43633232) &&
       (!NAN((float)pfStack_3ac) &&
        -0.43633232 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.43633232))) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
    }
    if ((*(byte *)(param_1 + 0x1210) & 0x20) != 0) {
      if (((float)pfStack_3ac <= 0.7853982) &&
         (!NAN((float)pfStack_3ac) &&
          -0.7853982 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.7853982))) {
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
      }
      if (((float)pfStack_3ac <= 0.43633232) && (-0.43633232 <= (float)pfStack_3ac)) {
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
      }
    }
    if ((*(byte *)(param_1 + 0x1210) & 1) != 0) {
      fVar1 = *(float *)(param_1 + 0x2280) - fStack_35c;
      fVar4 = *(float *)(param_1 + 0x2288) - fStack_354;
      if (fVar4 * fVar4 + fVar1 * fVar1 < 1.44) {
        fVar12 = (float10)FUN_00fdc1f0();
        *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
        *(float *)(param_1 + 0x1128) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1128));
      }
      fVar12 = (float10)*(float *)(param_1 + 0x2280) - (float10)*(float *)(param_1 + 0x50);
      fVar1 = (float)fVar12;
      fVar13 = (float10)*(float *)(param_1 + 0x2288) - (float10)*(float *)(param_1 + 0x58);
      puStack_3a8 = (undefined1 *)(float)fVar13;
      fVar12 = (float10)fpatan(fVar12,fVar13);
      fVar13 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x1128));
      fVar12 = (float10)FUN_00ddba30((float)(fVar12 - fVar13));
      if ((fVar1 * fVar1 + (float)puStack_3a8 * (float)puStack_3a8 < 16.0) &&
         (fVar12 * fVar12 < (float10)2.467401 != (fVar12 * fVar12 == (float10)2.467401))) {
        fVar12 = (float10)FUN_00fdc1f0();
        *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
        *(float *)(param_1 + 0x1128) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1128));
      }
    }
    if ((*(byte *)(param_1 + 0x1210) & 0x10) != 0) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
      fVar12 = (float10)FUN_00fdc1f0();
      iVar11 = 0;
      *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
      *(float *)(param_1 + 0x1128) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1128));
    }
    if ((*(byte *)(param_1 + 0x1210) & 4) != 0) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1178) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1178));
      fVar12 = (float10)FUN_00fdc1f0();
      iVar11 = 0;
      *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
      *(float *)(param_1 + 0x1128) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1128));
    }
    fVar12 = (float10)0;
    if (0.0001 <= *(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128) +
                  *pfVar2 * *pfVar2 + *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124)) {
      fVar12 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x1128));
    }
    D3DXMatrixRotationY(auStack_14c,(float)fVar12);
    D3DXMatrixInverse(auStack_114,0,auStack_154);
    if (iVar11 != 0) {
      if (*(int *)(param_1 + 0x11a8) != 0) {
        FUN_004066f0();
        fStack_3a0 = 0.0;
        puStack_330 = &local_320;
        fStack_39c = 0.0;
        pfStack_398 = (float *)0x0;
        fStack_33c = 3.40282e+38;
        pfStack_3bc = (float *)0x0;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if ((0 < (int)fStack_32c) && (puStack_388 = (undefined4 *)0x0, 0 < (int)fStack_32c)) {
          iVar11 = 0;
          do {
            puVar7 = puStack_330;
            iVar8 = *(int *)((int)puStack_330 + iVar11 + 0x28);
            if (*(char *)(iVar8 + 0x18) == '\x02') {
              iVar10 = *(char *)(iVar8 + 0x10) + iVar8;
            }
            else {
              iVar10 = 0;
            }
            if (*(char *)(iVar8 + 0x18) == '\x01') {
              iVar8 = *(char *)(iVar8 + 0x10) + iVar8;
            }
            else {
              iVar8 = 0;
            }
            iVar14 = iVar11;
            if (((iVar10 == 0) && (iVar8 != 0)) &&
               (((byte)*(undefined4 *)(iVar8 + 0x2c) & 0x1f) != 0xb)) {
              FUN_0048aaf0();
              fVar1 = *(float *)((int)puVar7 + iVar11 + 0x1c);
              if (fVar1 < 0.0) {
                pfStack_3b0 = (float *)(*(float *)((int)puVar7 + iVar11 + 0x10) * fVar1);
                puStack_3a8 = (undefined1 *)(*(float *)((int)puVar7 + iVar11 + 0x18) * fVar1);
                puStack_3a4 = (undefined1 *)((float)puStack_3a4 * fVar1);
                pfStack_3ac = (float *)0x0;
                fVar1 = *pfVar2 * *pfVar2;
                if (0.0001 <= *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124) + fVar1 +
                              *(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128)) {
                  fVar12 = (float10)FUN_00ddbb50(((float)puStack_3a8 * *(float *)(param_1 + 0x1128)
                                                 + (float)pfStack_3b0 * *pfVar2 +
                                                   *(float *)(param_1 + 0x1124) * 0.0) /
                                                 (SQRT(*(float *)(param_1 + 0x1128) *
                                                       *(float *)(param_1 + 0x1128) +
                                                       *(float *)(param_1 + 0x1124) *
                                                       *(float *)(param_1 + 0x1124) + fVar1) *
                                                 SQRT((float)pfStack_3b0 * (float)pfStack_3b0 +
                                                      (float)puStack_3a8 * (float)puStack_3a8)));
                  fStack_384 = (float)fVar12;
                  if (((float10)1.5707964 < fVar12) && (fVar12 < (float10)2.7925267)) {
                    D3DXVec3TransformNormal(&fStack_360,&pfStack_3b0,auStack_120);
                    fStack_364 = fStack_364 * 0.2;
                    D3DXVec3TransformNormal(&pfStack_3bc,auStack_36c,auStack_16c);
                    fVar12 = (float10)fStack_384;
                  }
                  if (((float10)2.3561945 < fVar12) && (fVar12 < (float10)3.1415927)) {
                    *(float *)(param_1 + 0x11f4) =
                         *(float *)(param_1 + 0x11f4) - *(float *)(param_1 + 0x910) * 5.0;
                    fVar12 = (float10)fpatan((float10)(float)pfStack_3b0,(float10)(float)puStack_3a8
                                            );
                    D3DXMatrixRotationY(auStack_1a0,(float)fVar12);
                    D3DXMatrixInverse(auStack_a8,0,auStack_1a8);
                    D3DXVec3TransformNormal(&pfStack_394,pfVar2,auStack_b4);
                    fVar13 = (float10)FUN_00fdc1f0();
                    fVar12 = (float10)(float)pfStack_398 * fVar13;
                    if (*(int *)(param_1 + 0x22cc) == 0) {
                      fVar12 = fVar12 * fVar13;
                    }
                    pfStack_398 = (float *)(float)fVar12;
                    D3DXVec3TransformNormal(pfVar2,&fStack_3a0,auStack_1c0);
                  }
                }
                pfStack_3bc = (float *)0x1;
                fStack_3a0 = (float)pfStack_3b0 * *(float *)(param_1 + 0x121c) * (float)pfStack_3b8
                             + fStack_3a0;
                pfStack_398 = (float *)((float)puStack_3a8 * *(float *)(param_1 + 0x121c) *
                                        (float)pfStack_3b8 + (float)pfStack_398);
              }
            }
            iVar11 = iVar14 + 0x30;
            puStack_388 = (undefined4 *)((int)puStack_388 + 1);
          } while ((int)puStack_388 < (int)fStack_32c);
        }
        D3DXMatrixInverse(auStack_e0,0,param_1 + 0x10);
        D3DXVec3TransformNormal(&fStack_35c,&pfStack_3ac,auStack_ec);
        if (((*(float *)(param_1 + 0x1224) * 0.1 < *(float *)(param_1 + 0x1148)) &&
            (0.0 < fStack_348)) && (pfStack_3bc != (float *)0x0)) {
          D3DXVec3TransformNormal(&stack0xfffffc80,&stack0xfffffc80,param_1 + 0x10);
        }
        *pfVar2 = fStack_3a0 + *pfVar2;
        *(float *)(param_1 + 0x1124) = fStack_39c + *(float *)(param_1 + 0x1124);
        *(float *)(param_1 + 0x1128) = (float)pfStack_398 + *(float *)(param_1 + 0x1128);
        *(float *)(param_1 + 0x112c) = (float)pfStack_394 + *(float *)(param_1 + 0x112c);
        hkpCdPointCollector_4();
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      if (*(int *)(param_1 + 0x11b8) != 0) {
        FUN_004066f0();
        fStack_33c = 3.40282e+38;
        puStack_330 = &local_320;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if (0 < (int)fStack_32c) {
          pfStack_3bc = (float *)0x0;
          iVar11 = 0;
          do {
            pfVar9 = (float *)((int)puStack_330 + iVar11);
            fVar1 = pfVar9[10];
            if (*(char *)((int)fVar1 + 0x18) == '\x02') {
              iVar8 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar8 = 0;
            }
            if (*(char *)((int)fVar1 + 0x18) == '\x01') {
              iVar10 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar10 = 0;
            }
            if ((iVar8 != 0) && (iVar10 == 0)) {
              fVar1 = pfVar9[7];
              *pfVar9 = fVar1 * pfVar9[4] + *pfVar9;
              pfVar9[1] = fVar1 * pfVar9[5] + pfVar9[1];
              pfVar9[2] = fVar1 * pfVar9[6] + pfVar9[2];
              pfVar9[3] = fVar1 * pfVar9[7] + pfVar9[3];
              pfVar9[4] = -pfVar9[4];
              pfVar9[5] = -pfVar9[5];
              pfVar9[6] = -pfVar9[6];
              pfVar9[7] = pfVar9[7];
              fVar12 = (float10)pfVar9[7];
              if (fVar12 < (float10)0) {
                fStack_3a0 = (float)((float10)pfVar9[6] * fVar12);
                pfStack_398 = (float *)(float)-((float10)pfVar9[4] * fVar12);
                fVar13 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x1128));
                fVar12 = (float10)fpatan((float10)pfVar9[6] * fVar12,-((float10)pfVar9[4] * fVar12))
                ;
                fVar12 = (float10)FUN_00ddba30((float)(fVar13 - fVar12));
                if (((float10)1.5707964 < fVar12) || (fVar12 < (float10)-1.5707964)) {
                  *pfVar2 = *pfVar2 - fStack_3a0 * 0.04 * (float)pfStack_3b8;
                  *(float *)(param_1 + 0x1128) =
                       *(float *)(param_1 + 0x1128) - (float)pfStack_398 * 0.04 * (float)pfStack_3b8
                  ;
                }
                else {
                  *pfVar2 = fStack_3a0 * 0.04 * (float)pfStack_3b8 + *pfVar2;
                  *(float *)(param_1 + 0x1128) =
                       (float)pfStack_398 * 0.04 * (float)pfStack_3b8 + *(float *)(param_1 + 0x1128)
                  ;
                }
              }
            }
            iVar11 = iVar11 + 0x30;
            pfStack_3bc = (float *)((int)pfStack_3bc + 1);
          } while ((int)pfStack_3bc < (int)fStack_32c);
        }
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_32c = 0.0;
        if (-1 < (int)fStack_328) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))
                    (puStack_330,((uint)fStack_328 & 0x3fffffff) * 0x30);
        }
        puStack_330 = (undefined4 *)0x0;
        fStack_328 = -0.0;
        ppuStack_340 = vftable;
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      if (*(int *)(param_1 + 0x11c8) != 0) {
        FUN_004066f0();
        fStack_33c = 3.40282e+38;
        puStack_330 = &local_320;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if (0 < (int)fStack_32c) {
          pfStack_3bc = (float *)0x0;
          iVar11 = 0;
          do {
            pfVar9 = (float *)(iVar11 + (int)puStack_330);
            fVar1 = pfVar9[10];
            if (*(char *)((int)fVar1 + 0x18) == '\x02') {
              iVar8 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar8 = 0;
            }
            if (*(char *)((int)fVar1 + 0x18) == '\x01') {
              iVar10 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar10 = 0;
            }
            if ((iVar8 != 0) && (iVar10 == 0)) {
              fVar1 = pfVar9[7];
              *pfVar9 = fVar1 * pfVar9[4] + *pfVar9;
              pfVar9[1] = fVar1 * pfVar9[5] + pfVar9[1];
              pfVar9[2] = fVar1 * pfVar9[6] + pfVar9[2];
              pfVar9[3] = fVar1 * pfVar9[7] + pfVar9[3];
              pfVar9[4] = -pfVar9[4];
              pfVar9[5] = -pfVar9[5];
              pfVar9[6] = -pfVar9[6];
              pfVar9[7] = pfVar9[7];
              fVar1 = pfVar9[7];
              if (fVar1 < 0.0) {
                fVar4 = pfVar9[6];
                *pfVar2 = pfVar9[4] * fVar1 * 0.06 * (float)pfStack_3b8 + *pfVar2;
                *(float *)(param_1 + 0x1128) =
                     fVar4 * fVar1 * 0.06 * (float)pfStack_3b8 + *(float *)(param_1 + 0x1128);
              }
            }
            iVar11 = iVar11 + 0x30;
            pfStack_3bc = (float *)((int)pfStack_3bc + 1);
          } while ((int)pfStack_3bc < (int)fStack_32c);
        }
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_32c = 0.0;
        if (-1 < (int)fStack_328) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))
                    (puStack_330,((uint)fStack_328 & 0x3fffffff) * 0x30);
        }
        puStack_330 = (undefined4 *)0x0;
        fStack_328 = -0.0;
        ppuStack_340 = vftable;
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
            return;
          }
        }
      }
    }
  }
  return;
}

// 0049A9B0  FUN_0049a9b0  size=327  [between]
undefined4 __thiscall FUN_0049a9b0(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) || ((iVar5 == 0x1b0 || (iVar5 == 0x147)))) {
    return 0;
  }
  iVar5 = param_2[1];
  iVar4 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar4 = FUN_00a7c8a0();
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x4b0) & 0xff00f0) == 0x20080)) goto LAB_0049aa20;
  }
  iVar5 = 0;
LAB_0049aa20:
  param_1[0x2cc] = param_1[0x2cc] - iVar5;
  if (*param_2 == 0x111) {
    pcVar1 = *(code **)(*param_1 + 0x198);
    param_1[0x2cc] = -1;
    (*pcVar1)(iVar4,param_2,1);
  }
  if (*param_2 == 0x107) {
    (**(code **)(*param_1 + 0x198))(iVar4,param_2,1);
  }
  if (*param_2 == 0x10a) {
    (**(code **)(*param_1 + 0x198))(iVar4,param_2,1);
  }
  if (*param_2 == 0x109) {
    pcVar1 = *(code **)(*param_1 + 0x198);
    param_1[0x2cc] = -1;
    (*pcVar1)(iVar4,param_2,1);
  }
  if (*param_2 == 0x10a) {
    (**(code **)(*param_1 + 0x198))(iVar4,param_2,1);
  }
  if (*param_2 == 0x106) {
    (**(code **)(*param_1 + 0x198))(iVar4,param_2,1);
  }
  if (param_1[0x2cc] < 1) {
    uVar3 = FUN_009f8b40();
    FUN_00498ce0(uVar3);
    return 0;
  }
  return 1;
}

// 0049AB00  BaContainerParts::vf4C  size=313  [class]
void __fastcall BaContainerParts::vf4C(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  if (param_1[0x483] == 0) {
    FUN_00a5e650();
    Behavior::vf4C();
    if (param_1[0x186] == 1) {
      FUN_00499290();
      return;
    }
    if (param_1[0x186] == 2) {
      FUN_004993a0();
      return;
    }
  }
  else {
    if (param_1[0x1ec] != 0) {
      FUN_004066f0();
      (**(code **)(*param_1 + 0x20))();
      FUN_00a9d8a0();
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      }
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
        if (iVar3 != 0) {
          HkRemovePhysicsSystem::HkRemovePhysicsSystem();
          if ((int *)param_1[0x1ec] != (int *)0x0) {
            (**(code **)(*(int *)param_1[0x1ec] + 4))(1);
            param_1[0x1ec] = 0;
          }
        }
      }
      param_1[0x1ec] = 0;
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    fVar2 = (float)param_1[0x484];
    param_1[0x484] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x483] = 0;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AB1010  BaContainerParts::vf04  size=6  [class]
undefined * BaContainerParts::vf04(void)

{
  return &DAT_01b34d78;
}

// 00AB1020  BaContainerParts::vf24  size=7  [class]
float10 __fastcall BaContainerParts::vf24(int param_1)

{
  return (float10)*(float *)(param_1 + 0x910);
}

// 00AB9700  BaContainerParts::vf00  size=30  [class]
undefined4 __thiscall BaContainerParts::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_10();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

