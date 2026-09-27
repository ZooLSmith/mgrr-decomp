// src/managers/cradioinfomanager/cRadioInfoManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009857E0..015ECAC0, 2 functions

#include "mgrr.h"
#include "cRadioInfoManager.h"

// 009857E0  cRadioInfoManager::vf00  size=31  [class]
undefined4 * __thiscall cRadioInfoManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015ECAC0  cRadioInfoManager::cRadioInfoManager  size=11  [class]
void cRadioInfoManager::cRadioInfoManager(void)

{
  PTR_vftable_0188dd40 = (undefined *)vftable;
  return;
}

