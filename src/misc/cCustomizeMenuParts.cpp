// src/misc/cCustomizeMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F770..0098F7C0, 2 functions

#include "types.h"

// 0098F770  cCustomizeMenuParts::cCustomizeMenuParts  size=18  [class]
undefined4 * __fastcall cCustomizeMenuParts::cCustomizeMenuParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 0098F7C0  cCustomizeMenuParts::vf00  size=30  [class]
undefined4 __thiscall cCustomizeMenuParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

