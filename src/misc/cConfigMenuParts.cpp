// src/misc/cConfigMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E6B0..0099E9F0, 7 functions

#include "types.h"

// 0098E6B0  cConfigMenuParts::cConfigMenuParts_3  size=18  [class]
undefined4 * __fastcall cConfigMenuParts::cConfigMenuParts_3(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 0098E6D0  cConfigMenuParts::vf08  size=1  [class]
void cConfigMenuParts::vf08(void)

{
  return;
}

// 0098E6E0  cConfigMenuParts::vf14  size=1  [class]
void cConfigMenuParts::vf14(void)

{
  return;
}

// 0098E700  cConfigMenuParts::vf00  size=36  [class]
undefined4 * __thiscall cConfigMenuParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0099E8B0  cConfigMenuParts::cConfigMenuParts  size=181  [class]
undefined4 * __fastcall cConfigMenuParts::cConfigMenuParts(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cConfigMenu::vftable;
  param_1[7] = 0;
  puVar1 = param_1 + 0x28;
  iVar2 = 0x10;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar1 = vftable;
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x133] = 0;
  param_1[0x139] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  param_1[0x138] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 1;
  param_1[0x13c] = cMessWindowCtrl::vftable;
  param_1[0x13d] = 0;
  *(undefined2 *)((int)param_1 + 0x4fa) = 0;
  param_1[0x13f] = 0;
  puVar1 = param_1 + 0x11c;
  iVar2 = 0x17;
  do {
    puVar1[-0x17] = *(undefined4 *)(((int)&DAT_01b779f0 - (int)param_1) + (int)puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}

// 0099E970  cConfigMenuParts::cConfigMenuParts_2  size=117  [class]
void __fastcall cConfigMenuParts::cConfigMenuParts_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cConfigMenu::vftable;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
    param_1[7] = 0;
  }
  FUN_00cfe0f0(0x15);
  param_1[0x13c] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x13d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13d])(1);
    param_1[0x13d] = 0;
  }
  param_1 = param_1 + 0x105;
  iVar1 = 0x10;
  do {
    param_1 = param_1 + -0xd;
    *param_1 = vftable;
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099E9F0  FUN_0099e9f0  size=68  [callgraph]
int FUN_0099e9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x500,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cConfigMenuParts::cConfigMenuParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cConfigMenu";
      FUN_00d29ca0(99,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

