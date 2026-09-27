// src/misc/cCustomizeMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F770..009A02B0, 3 functions

#include "mgrr.h"
#include "cCustomizeMenuParts.h"

// 0098F770  cCustomizeMenuParts::cCustomizeMenuParts  size=18  [class]
undefined4 * __fastcall cCustomizeMenuParts::cCustomizeMenuParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  return param_1;
}

// 0098F7C0  cCustomizeMenuParts::vf00  size=30  [class]
undefined4 __thiscall cCustomizeMenuParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A02B0  cCustomizeMenuParts::cCustomizeMenuParts  size=187  [class]
undefined4 * __fastcall cCustomizeMenuParts::cCustomizeMenuParts(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cCustomizeMenu::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[7] = cCustomizePointDisp::vftable;
  param_1[0x19] = cMessWindowCtrl::vftable;
  param_1[0x1a] = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1c] = 0;
  puVar2 = param_1 + 0x1d;
  iVar1 = 6;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    *puVar2 = vftable;
    puVar2 = puVar2 + 0x1f;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined4 *)((int)param_1 + 0x426) = 0;
  *(undefined2 *)((int)param_1 + 0x42a) = 0;
  param_1[0x106] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x107) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x41e) = 0xff;
  param_1[0x111] = 0xffffffff;
  param_1[0x112] = 0xffffffff;
  param_1[0x113] = 0xffffffff;
  param_1[0x114] = 0xffffffff;
  param_1[0x115] = 0xffffffff;
  param_1[0x116] = 0xffffffff;
  param_1[0x117] = 0xffffffff;
  param_1[0x118] = 0;
  param_1[0x11a] = 0;
  return param_1;
}

