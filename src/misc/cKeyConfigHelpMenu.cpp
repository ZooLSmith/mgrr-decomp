// src/misc/cKeyConfigHelpMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E390..0098E5E0, 4 functions

#include "mgrr.h"
#include "cKeyConfigHelpMenu.h"

// 0098E390  cKeyConfigHelpMenu::cKeyConfigHelpMenu  size=42  [class]
undefined4 * __fastcall cKeyConfigHelpMenu::cKeyConfigHelpMenu(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[0x20] = 0;
  *param_1 = vftable;
  param_1[0x1f] = 0;
  FUN_00cb2630(1);
  return param_1;
}

// 0098E3D0  cKeyConfigHelpMenu::vf00  size=36  [class]
undefined4 * __thiscall cKeyConfigHelpMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0098E460  cKeyConfigHelpMenu::vf08  size=377  [class]
void __fastcall cKeyConfigHelpMenu::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  puVar2 = (undefined4 *)(param_1 + 0x20);
  uVar1 = FUN_00cb25d0(10);
  *puVar2 = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00cb25d0(0x1c);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_00cb25d0(0x1d);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  FUN_00ce4dc0(0,1);
  FUN_00cb2600(1);
  puVar3 = &DAT_01b77e60;
  do {
    uVar1 = FUN_00cc7280(*puVar3);
    FUN_00cb2ce0(*puVar2,uVar1);
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)puVar3 < 0x1b77eb9);
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x80));
  return;
}

// 0098E5E0  cKeyConfigHelpMenu::create  size=139  [class]
void __fastcall cKeyConfigHelpMenu::create(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x7c) == 1) {
    fVar1 = (float10)FUN_00cacf20();
    fVar1 = fVar1 + (float10)*(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x80) = (float)fVar1;
    fVar2 = (float10)1;
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
LAB_0098e611:
      *(float *)(param_1 + 0x80) = (float)fVar2;
      *(undefined4 *)(param_1 + 0x7c) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x7c) != 3) goto LAB_0098e656;
    fVar1 = (float10)FUN_00cacf20();
    fVar1 = (float10)*(float *)(param_1 + 0x80) - fVar1;
    *(float *)(param_1 + 0x80) = (float)fVar1;
    fVar2 = (float10)0;
    if (fVar1 <= fVar2) goto LAB_0098e611;
  }
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x80));
LAB_0098e656:
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),DAT_01dc1418);
  return;
}

