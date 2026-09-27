// src/misc/cCustomizePointDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F740..009A09E0, 4 functions

#include "mgrr.h"
#include "cCustomizePointDisp.h"

// 0098F740  cCustomizePointDisp::cCustomizePointDisp  size=18  [class]
undefined4 * __fastcall cCustomizePointDisp::cCustomizePointDisp(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 0098F7A0  cCustomizePointDisp::vf00  size=30  [class]
undefined4 __thiscall cCustomizePointDisp::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A02B0  cCustomizePointDisp::cCustomizePointDisp_3  size=187  [class]
undefined4 * __fastcall cCustomizePointDisp::cCustomizePointDisp_3(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cCustomizeMenu::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[7] = vftable;
  param_1[0x19] = cMessWindowCtrl::vftable;
  param_1[0x1a] = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1c] = 0;
  puVar2 = param_1 + 0x1d;
  iVar1 = 6;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar2 = cCustomizeMenuParts::vftable;
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

// 009A09E0  cCustomizePointDisp::cCustomizePointDisp_2  size=231  [class]
undefined4 * __fastcall cCustomizePointDisp::cCustomizePointDisp_2(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cCustomizeSelMenu::vftable;
  param_1[7] = cMessWindowCtrl::vftable;
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0xb] = vftable;
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  Hw::cTexture::cTexture_6();
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

