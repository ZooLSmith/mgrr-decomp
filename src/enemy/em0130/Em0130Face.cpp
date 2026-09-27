// src/enemy/em0130/Em0130Face.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006066D0..00ABA540, 7 functions

#include "mgrr.h"
#include "Em0130Face.h"

// 006066D0  Em0130Face::vf44  size=16  [class]
void Em0130Face::vf44(void)

{
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 006066E0  Em0130Face::vf4C  size=18  [class]
void __fastcall Em0130Face::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x006066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00606700  Em0130Face::thunk_vf50  size=5  [class]
void __fastcall Em0130Face::thunk_vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 00608A30  Em0130Face::startup  size=172  [class]
undefined4 __fastcall Em0130Face::startup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = Behavior::startup();
  if (iVar2 != 0) {
    uVar3 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar3);
    pcVar1 = *(code **)(*param_1 + 0x1c);
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    (*pcVar1)();
    cModelBase::setRootPartsNo(3);
    uStack_c = 1;
    uStack_8 = 1;
    uStack_4 = 1;
    iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_c);
    if (iVar2 != 0) {
      param_1[0xd9] = param_1[0xd9] | 0x100000;
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      return 1;
    }
  }
  return 0;
}

// 00AA6F40  Em0130Face::Em0130Face  size=18  [class]
undefined4 * __fastcall Em0130Face::Em0130Face(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6F60  Em0130Face::vf04  size=6  [class]
undefined * Em0130Face::vf04(void)

{
  return &DAT_01b3551c;
}

// 00ABA540  Em0130Face::destruct  size=105  [class]
undefined4 * __thiscall Em0130Face::destruct(undefined4 *param_1,byte param_2)

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

