// src/player/pl1500/Pl1500Knife.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A9C90..00ACFB40, 6 functions

#include "mgrr.h"
#include "Pl1500Knife.h"

// 008A9C90  Pl1500Knife::vf304  size=54  [class]
void __fastcall Pl1500Knife::vf304(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x930) == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if (((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) && (*(int *)(param_1 + 0x618) < 3)) {
      *(undefined4 *)(param_1 + 0x618) = 4;
    }
  }
  return;
}

// 008CF450  Pl1500Knife::vf300  size=15  [class]
void __fastcall Pl1500Knife::vf300(int param_1)

{
  if (*(int *)(param_1 + 0x930) == 0) {
    FUN_008c93c0();
    return;
  }
  return;
}

// 00AB4320  Pl1500Knife::Pl1500Knife  size=18  [class]
undefined4 * __fastcall Pl1500Knife::Pl1500Knife(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AB4340  Pl1500Knife::vf04  size=6  [class]
undefined * Pl1500Knife::vf04(void)

{
  return &DAT_01b35b94;
}

// 00ABA250  Pl1500Knife::destruct  size=30  [class]
undefined4 __thiscall Pl1500Knife::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ACFB40  Pl1500Knife::vf44  size=362  [class]
void __fastcall Pl1500Knife::vf44(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*(int *)(param_1 + 0xdb0) + 8))(0x3f800000,0,0);
  RayCastManager::getWork(param_1 + 0x1124);
  RayCastManager::getWork(param_1 + 0x1128);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1130) + 4);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  (*pcVar1)();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0xe60) + 4))();
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7b4);
  if (iVar2 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x28))((undefined4 *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  FUN_00910ac0(0);
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x1114) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x1114) = 0;
  FUN_00cd4630(param_1);
  Behavior::vf44();
  return;
}

