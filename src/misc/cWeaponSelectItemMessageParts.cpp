// src/misc/cWeaponSelectItemMessageParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00991FE0..00992120, 4 functions

#include "types.h"

// 00991FE0  cWeaponSelectItemMessageParts::cWeaponSelectItemMessageParts  size=35  [class]
undefined4 * __fastcall
cWeaponSelectItemMessageParts::cWeaponSelectItemMessageParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00992020  cWeaponSelectItemMessageParts::vf00  size=36  [class]
undefined4 * __thiscall cWeaponSelectItemMessageParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009920B0  cWeaponSelectItemMessageParts::vf08  size=105  [class]
void __fastcall cWeaponSelectItemMessageParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_00cb2fe0(*(undefined4 *)(param_1 + 0x20),0);
  FUN_00cb2fe0(*(undefined4 *)(param_1 + 0x24),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
  FUN_00cb2600(0);
  FUN_00cb2630(1);
  FUN_00ce4d70(0xb);
  return;
}

// 00992120  cWeaponSelectItemMessageParts::vf14  size=568  [class]
void __fastcall cWeaponSelectItemMessageParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_ac;
  float local_a8 [16];
  int local_68;
  float local_64;
  undefined1 local_54 [64];
  int local_14;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = FUN_00cad7e0();
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x34),0,0xffffffff);
        FUN_00ce4d70(0xb);
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        if (*(int *)(param_1 + 0x34) != 0) {
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),0);
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
        if (*(int *)(param_1 + 0x38) != 0) {
          FUN_00cf97d0(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x38),0);
        }
        if (*(int *)(param_1 + 0x3c) != 0) {
          FUN_00cf97d0(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x3c),0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        FUN_00cb2600(*(undefined4 *)(param_1 + 0x28));
        return;
      }
      if (*(int *)(param_1 + 0x30) != 1) goto LAB_00992344;
      FUN_00988d40();
      FUN_00988d40();
      FUN_00d29cc0(*(undefined4 *)(param_1 + 0x20),local_a8);
      FUN_00d29cc0(*(undefined4 *)(param_1 + 0x24),local_54);
      fVar1 = 0.0;
      local_ac = 0.0;
      iVar3 = 0;
      if (0 < local_68) {
        do {
          fVar2 = local_a8[iVar3] - local_64;
          if (fVar2 < fVar1 == (fVar2 == fVar1)) {
            fVar1 = fVar2;
          }
          iVar3 = iVar3 + 1;
          local_ac = fVar1;
        } while (iVar3 < local_68);
      }
      iVar3 = 0;
      if (0 < local_14) {
        do {
          fVar1 = local_a8[iVar3] - local_64;
          if (fVar1 < local_ac == (fVar1 == local_ac)) {
            local_ac = fVar1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_14);
      }
      iVar3 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x20));
      fVar1 = *(float *)(iVar3 + 0x10) * local_ac * -0.5;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x20),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),fVar1);
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x34),0,0xffffffff);
        FUN_00ce4d70(0xb);
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
      }
      if (*(int *)(param_1 + 0x3c) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_00992344:
  FUN_00cb2600(*(undefined4 *)(param_1 + 0x28));
  return;
}

