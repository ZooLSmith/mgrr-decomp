// src/misc/MonQteObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B550..00AB77E0, 11 functions

#include "mgrr.h"
#include "MonQteObj.h"

// 0051B550  MonQteObj::vf4C  size=16  [class]
void MonQteObj::vf4C(void)

{
  Behavior::vf4C();
  BehaviorAppBase::thunk_vf64();
  return;
}

// 0051B560  MonQteObj::vf50  size=32  [class]
void __fastcall MonQteObj::vf50(int param_1)

{
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorAppBase::vf50();
  return;
}

// 0051B580  MonQteObj::thunk_vf54  size=5  [class]
void __fastcall MonQteObj::thunk_vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 0051B590  MonQteObj::thunk_vf19C  size=5  [class]
void __thiscall MonQteObj::thunk_vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 0051B5A0  MonQteObj::vf1A4  size=5  [class]
void MonQteObj::vf1A4(void)

{
  return;
}

// 0051E780  MonQteObj::vf40  size=558  [class]
undefined4 __fastcall MonQteObj::vf40(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = BehaviorAppBase::vf40();
  if (iVar4 == 0) {
    return 0;
  }
  FUN_009fd240();
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffeffffd;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  FUN_00dd7240();
  uVar8 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar8);
  local_c = 1;
  local_8 = 1;
  local_4 = 1;
  iVar4 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x7b4) = 0;
    uVar8 = FUN_00de3850(0,"_col.hkx",0);
    iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar4;
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x4f0);
      uVar5 = FUN_00de3ee0(uVar8);
      uVar8 = FUN_00de3cf0(uVar8);
      iVar4 = FUN_008f6410(uVar2,uVar8,uVar5);
      if (iVar4 != 0) {
        FUN_008f2cd0(0);
        FUN_008f1600(0x80000000);
        FUN_008f1600(0x40);
        FUN_008f1600(0x20);
      }
    }
    FUN_008f40f0(param_1);
    FUN_00410540(0x10,&DAT_01b7bd48);
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
    Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
    }
    *(undefined4 *)(param_1 + 0x874) = 10;
    *(undefined4 *)(param_1 + 0x870) = 10;
    *(undefined2 *)(param_1 + 0x1228) = 0;
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_00a1abe0(1);
    }
    iVar4 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_1 + 800);
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"damage"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    return 1;
  }
  return 0;
}

// 0051E9C0  MonQteObj::vf1B8  size=76  [class]
void __thiscall MonQteObj::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if ((*(int *)(param_1 + 0x4b0) == 0xf5010) || (*(int *)(param_1 + 0x4b0) == 0x201b7)) {
    if (0 < param_4) {
      do {
        *param_2 = 0x423a0;
        param_2 = param_2 + 3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else if (0 < param_4) {
    do {
      *param_2 = 0x42300;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    return;
  }
  return;
}

// 0052EBA0  MonQteObj::vf44  size=149  [class]
void __fastcall MonQteObj::vf44(int param_1)

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

// 0053B050  MonQteObj::vf48  size=156  [class]
void __fastcall MonQteObj::vf48(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined1 local_110 [268];
  
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar4;
  FUN_00538a90();
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
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
      goto LAB_0053b0c6;
    }
  }
  uVar3 = 0;
LAB_0053b0c6:
  FUN_004105d0();
  if (uVar3 != 0) {
    FUN_00b88d00(local_110);
  }
  BehaviorAppBase::vf48();
  return;
}

// 00AAED20  MonQteObj::vf04  size=6  [class]
undefined * MonQteObj::vf04(void)

{
  return &DAT_01b34f60;
}

// 00AB77E0  MonQteObj::vf00  size=30  [class]
undefined4 __thiscall MonQteObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_87();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

