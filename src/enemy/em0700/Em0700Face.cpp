// src/enemy/em0700/Em0700Face.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0860..00AB75F0, 7 functions

#include "types.h"

// 005B0860  Em0700Face::vf40  size=101  [class]
bool __fastcall Em0700Face::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return false;
  }
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
  return iVar2 != 0;
}

// 005B08D0  Em0700Face::vf44  size=16  [class]
void Em0700Face::vf44(void)

{
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 005B08E0  Em0700Face::vf4C  size=5  [class]
void __fastcall Em0700Face::vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}

// 005B08F0  Em0700Face::vf50  size=5  [class]
void __fastcall Em0700Face::vf50(int param_1)

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

// 00AA66B0  Em0700Face::Em0700Face  size=18  [class]
undefined4 * __fastcall Em0700Face::Em0700Face(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA66D0  Em0700Face::vf04  size=6  [class]
undefined * Em0700Face::vf04(void)

{
  return &DAT_01b351c4;
}

// 00AB75F0  Em0700Face::vf00  size=105  [class]
undefined4 * __thiscall Em0700Face::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

