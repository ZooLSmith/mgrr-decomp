// src/misc/cChapterResultParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A770..00CDAFD0, 4 functions

#include "types.h"

// 0099A770  cChapterResultParts::cChapterResultParts_3  size=45  [class]
void __fastcall cChapterResultParts::cChapterResultParts_3(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099A7A0  cChapterResultParts::vf00  size=66  [class]
undefined4 * __thiscall cChapterResultParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0099A9C0  cChapterResultParts::cChapterResultParts  size=112  [class]
void __fastcall cChapterResultParts::cChapterResultParts(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cChapterSelectMenuParts::vftable;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xdb])(1);
    param_1[0xdb] = 0;
  }
  FUN_00cfe0f0(0x13);
  Hw::cTexture::cTexture_5();
  param_1[7] = vftable;
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 00CDAFD0  cChapterResultParts::cChapterResultParts_2  size=567  [class]
void __fastcall cChapterResultParts::cChapterResultParts_2(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[7] = cCustomObjCtrlManager::vftable;
  param_1[0xe] = cCustomObjCtrlManager::vftable;
  param_1[0x15] = cCustomObjCtrlManager::vftable;
  param_1[0x1c] = cCustomObjCtrlManager::vftable;
  param_1[0x23] = cCustomObjCtrlManager::vftable;
  param_1[0x2a] = cCustomObjCtrlManager::vftable;
  param_1[0x31] = cCustomObjCtrlManager::vftable;
  param_1[0x38] = cCustomObjCtrlManager::vftable;
  param_1[0x3f] = cCustomObjCtrlManager::vftable;
  *(undefined2 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((int)param_1 + 0x246) = 1;
  param_1[0x92] = 0;
  param_1[0x93] = 0xffffffff;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xb6] = 5;
  bVar1 = 0;
  do {
    bVar2 = bVar1 + 1;
    param_1[(char)bVar1 + 0xc2] = 0;
    param_1[(char)bVar1 + 0xcb] = 0;
    bVar1 = bVar2;
  } while (bVar2 < 9);
  return;
}

