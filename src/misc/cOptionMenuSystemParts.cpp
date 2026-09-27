// src/misc/cOptionMenuSystemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996940..009969D0, 2 functions

#include "mgrr.h"
#include "cOptionMenuSystemParts.h"

// 00996940  cOptionMenuSystemParts::cOptionMenuSystemParts  size=48  [class]
undefined4 * __fastcall cOptionMenuSystemParts::cOptionMenuSystemParts(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 009969D0  cOptionMenuSystemParts::vf00  size=66  [class]
undefined4 * __thiscall cOptionMenuSystemParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::~cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

