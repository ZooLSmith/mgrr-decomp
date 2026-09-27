// src/enemy/emc070/Emc070Gun.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0079C090..00AB9E70, 6 functions

#include "mgrr.h"
#include "Emc070Gun.h"

// 0079C090  Emc070Gun::vf44  size=23  [class]
void Emc070Gun::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a8c820();
  BehaviorWeapon::vf44();
  return;
}

// 007A3D40  Emc070Gun::startup  size=358  [class]
undefined4 __fastcall Emc070Gun::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = BehaviorWeapon::startup();
  if (iVar3 != 0) {
    uVar6 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar6);
    local_20 = 1;
    local_1c = 1;
    local_18 = 1;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_20);
    if (iVar3 != 0) {
      FUN_00410540(8,&DAT_01b7bd48);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
      uVar6 = FUN_00a8d2a0();
      puVar4 = (undefined4 *)FUN_009f8b60();
      iVar3 = CollisionSphere::CollisionSphere(2,*puVar4,0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
        *(undefined4 *)(iVar3 + 0x510) = 0x3ecccccd;
        local_20 = 0;
        local_18 = 0;
        local_1c = 0x3ecccccd;
        FUN_00d77c90(&local_20);
        _strncpy_s((char *)(iVar3 + 0x394),0x20,"Emc070Gun",0x1f);
        FUN_00a93a00(iVar3,uVar6);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      iVar3 = 0;
      local_24 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
          if (iVar5 != 0) {
            iVar5 = FUN_00fdbbd0(iVar5,&DAT_0163d9a8);
            if (iVar5 != 0) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          local_24 = local_24 + 1;
          iVar3 = iVar3 + 0x70;
        } while (local_24 < *(short *)(param_1 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x8c0) = 0;
      return 1;
    }
  }
  return 0;
}

// 007AE770  Emc070Gun::vf48  size=16  [class]
void Emc070Gun::vf48(void)

{
  BehaviorDebrisActor::vf48();
  FUN_007ae290();
  return;
}

// 00AB2990  Emc070Gun::Emc070Gun  size=49  [class]
undefined4 * __fastcall Emc070Gun::Emc070Gun(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB29D0  Emc070Gun::vf04  size=6  [class]
undefined * Emc070Gun::vf04(void)

{
  return &DAT_01b358ec;
}

// 00AB9E70  Emc070Gun::destruct  size=105  [class]
undefined4 * __thiscall Emc070Gun::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

