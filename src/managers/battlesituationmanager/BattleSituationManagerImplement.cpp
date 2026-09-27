// src/managers/battlesituationmanager/BattleSituationManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D76A20..00D76D10, 9 functions

#include "types.h"

// 00D76A20  FUN_00d76a20  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00d76a20(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01dc52dc & 1) == 0) {
    _DAT_01dc52dc = _DAT_01dc52dc | 1;
    DAT_01dc52d8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dc52d8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dc52d8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<BattleSituationResource::Unit>::
          AllocatedArray<BattleSituationResource::Unit>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00D76A90  BattleSituationManagerImplement::BattleSituationManagerImplement  size=214  [class]
undefined4 * __thiscall
BattleSituationManagerImplement::BattleSituationManagerImplement
          (undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 local_78;
  int local_74;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  local_78 = 0;
  iVar2 = FUN_00a54ae0(&local_78,&DAT_01be91dc,"situation.bxm");
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00dd3500(8,param_2);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = param_2;
      puVar3[1] = 0;
    }
    param_1[2] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
      FUN_00e91420(iVar2);
      cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
      FUN_00d76a20(&stack0xffffff84,"situation",param_1[2]);
      if (cVar1 != '\0') {
        (**(code **)(unaff_EBX + 0x14))(&DAT_0164a448,0);
      }
      cXml::cXml_5();
    }
  }
  return param_1;
}

// 00D76B70  FUN_00d76b70  size=27  [between]
void __fastcall FUN_00d76b70(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00D76B90  BattleSituationManagerImplement::vf04  size=1  [class]
void BattleSituationManagerImplement::vf04(void)

{
  return;
}

// 00D76BA0  BattleSituationManagerImplement::vf08  size=1  [class]
void BattleSituationManagerImplement::vf08(void)

{
  return;
}

// 00D76BB0  FUN_00d76bb0  size=47  [between]
int __thiscall FUN_00d76bb0(int param_1,byte param_2)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D76BE0  BattleSituationManagerImplement::vf00  size=68  [class]
undefined4 __thiscall
BattleSituationManagerImplement::vf00
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_009c4bf0();
  uVar1 = FUN_00d73290(param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  return uVar1;
}

// 00D76C70  BattleSituationManagerImplement::vf0C  size=84  [class]
undefined4 * __thiscall BattleSituationManagerImplement::vf0C(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = vftable;
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    FUN_00dd4920(iVar1);
    param_1[2] = 0;
  }
  *param_1 = BattleSituationManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D76D10  FUN_00d76d10  size=62  [callgraph]
bool FUN_00d76d10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xc,param_1);
  if (iVar1 != 0) {
    DAT_01dc5264 = BattleSituationManagerImplement::BattleSituationManagerImplement(param_1);
    return DAT_01dc5264 != 0;
  }
  DAT_01dc5264 = 0;
  return false;
}

