// src/misc/cOptionMenuGraphicParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996A20..009A8AA0, 3 functions

#include "mgrr.h"
#include "cOptionMenuGraphicParts.h"

// 00996A20  cOptionMenuGraphicParts::cOptionMenuGraphicParts  size=18  [class]
undefined4 * __fastcall cOptionMenuGraphicParts::cOptionMenuGraphicParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  return param_1;
}

// 00996A70  cOptionMenuGraphicParts::vf00  size=36  [class]
undefined4 * __thiscall cOptionMenuGraphicParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A8AA0  cOptionMenuGraphicParts::cOptionMenuGraphicParts  size=229  [class]
undefined4 * __fastcall cOptionMenuGraphicParts::cOptionMenuGraphicParts(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cOptionMenu::vftable;
  param_1[7] = cMessWindowCtrl::vftable;
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[0xd] = cOptionMenuSystemParts::vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[0xcc] = vftable;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x15c] = 0;
  *(undefined2 *)(param_1 + 0x14f) = 0;
  param_1[0x150] = 0;
  param_1[0x15d] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x158] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x159] = 1;
  return param_1;
}

