// src/misc/cCollectionLockedItemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098BBA0..0099D510, 5 functions

#include "mgrr.h"
#include "cCollectionLockedItemParts.h"

// 0098BBA0  cCollectionLockedItemParts::cCollectionLockedItemParts  size=55  [class]
undefined4 * __fastcall cCollectionLockedItemParts::cCollectionLockedItemParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  return param_1;
}

// 0098BBF0  cCollectionLockedItemParts::cCollectionLockedItemParts_2  size=101  [class]
undefined4 * cCollectionLockedItemParts::cCollectionLockedItemParts_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    puVar1[9] = 0;
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[3] = "cCollectionLockedItemParts";
    FUN_00d29ca0(0x5f,5);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0098BC60  cCollectionLockedItemParts::vf08  size=8  [class]
void cCollectionLockedItemParts::vf08(void)

{
  FUN_00cb2600(0);
  return;
}

// 0098BC70  cCollectionLockedItemParts::create  size=41  [class]
void __fastcall cCollectionLockedItemParts::create(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_00cb2710(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
  }
  return;
}

// 0099D510  cCollectionLockedItemParts::vf00  size=36  [class]
undefined4 * __thiscall cCollectionLockedItemParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

