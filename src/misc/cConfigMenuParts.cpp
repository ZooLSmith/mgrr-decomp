// src/misc/cConfigMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E6B0..0098E700, 3 functions

#include "mgrr.h"
#include "cConfigMenuParts.h"

// 0098E6B0  cConfigMenuParts::cConfigMenuParts  size=18  [class]
undefined4 * __fastcall cConfigMenuParts::cConfigMenuParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  return param_1;
}

// 0098E6D0  cConfigMenuParts::vf08  size=1  [class]
void cConfigMenuParts::vf08(void)

{
  return;
}

// 0098E700  cConfigMenuParts::vf00  size=36  [class]
undefined4 * __thiscall cConfigMenuParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

