// src/managers/ceventinfomanager/cEventInfoManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00985770..015ECAB0, 2 functions

#include "mgrr.h"
#include "cEventInfoManager.h"

// 00985770  cEventInfoManager::vf00  size=31  [class]
undefined4 * __thiscall cEventInfoManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015ECAB0  cEventInfoManager::cEventInfoManager  size=11  [class]
void cEventInfoManager::cEventInfoManager(void)

{
  PTR_vftable_0188dd28 = (undefined *)vftable;
  return;
}

