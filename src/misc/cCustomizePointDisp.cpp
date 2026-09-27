// src/misc/cCustomizePointDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F740..009A09E0, 3 functions

#include "mgrr.h"
#include "cCustomizePointDisp.h"

// 0098F740  cCustomizePointDisp::cCustomizePointDisp  size=18  [class]
undefined4 * __fastcall cCustomizePointDisp::cCustomizePointDisp(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  return param_1;
}

// 0098F7A0  cCustomizePointDisp::vf00  size=30  [class]
undefined4 __thiscall cCustomizePointDisp::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A09E0  cCustomizePointDisp::cCustomizePointDisp  size=231  [class]
undefined4 * __fastcall cCustomizePointDisp::cCustomizePointDisp(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cCustomizeSelMenu::vftable;
  param_1[7] = cMessWindowCtrl::vftable;
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[0xb] = vftable;
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  Hw::cTexture::cTexture();
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)((int)param_1 + 0x31a) = 0xff;
  *(undefined1 *)(param_1 + 199) = 0;
  param_1[0xd7] = 0x14;
  param_1[0xd6] = 0x14;
  param_1[0xca] = 0xffffffff;
  param_1[0xcb] = 0xffffffff;
  param_1[0xcc] = 0xffffffff;
  param_1[0xcd] = 0xffffffff;
  param_1[0xce] = 0xffffffff;
  param_1[0xcf] = 0xffffffff;
  param_1[0xd0] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xd1) = 0xffff;
  param_1[0xda] = 0xffffffff;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x87] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  return param_1;
}

