// src/misc/BaContainer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0047EFD0..00AB96D0, 9 functions

#include "mgrr.h"
#include "BaContainer.h"

// 0047EFD0  BaContainer::vf4C  size=5  [class]
void __fastcall BaContainer::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 0047EFE0  BaContainer::thunk_vf50  size=5  [class]
void __fastcall BaContainer::thunk_vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 004853B0  BaContainer::vf40  size=110  [class]
void __fastcall BaContainer::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
  FUN_00410540(8,&DAT_01b7bd48);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),9);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
    }
  }
  *(undefined4 *)(param_1 + 0xb30) = 100;
  *(undefined4 *)(param_1 + 0x9f8) = 1;
  return;
}

// 0048DCC0  BaContainer::vf44  size=135  [class]
void __fastcall BaContainer::vf44(int param_1)

{
  int iVar1;
  
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
  BehaviorBgBase::vf44();
  return;
}

// 0048DD50  BaContainer::vf19C  size=179  [class]
void __thiscall BaContainer::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0049B4E0  BaContainer::vf48  size=16  [class]
void BaContainer::vf48(void)

{
  FUN_0049b0f0();
  BehaviorBgBase::vf48();
  return;
}

// 00AB0F40  BaContainer::BaContainer  size=18  [class]
undefined4 * __fastcall BaContainer::BaContainer(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0F60  BaContainer::vf04  size=6  [class]
undefined * BaContainer::vf04(void)

{
  return &DAT_01b34d74;
}

// 00AB96D0  BaContainer::vf00  size=43  [class]
undefined4 __thiscall BaContainer::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

