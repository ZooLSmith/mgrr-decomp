// src/misc/cOptionMenuGraphicParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996A20..00996A70, 2 functions

#include "types.h"

// 00996A20  cOptionMenuGraphicParts::cOptionMenuGraphicParts  size=18  [class]
undefined4 * __fastcall cOptionMenuGraphicParts::cOptionMenuGraphicParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 00996A70  cOptionMenuGraphicParts::vf00  size=36  [class]
undefined4 * __thiscall cOptionMenuGraphicParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

