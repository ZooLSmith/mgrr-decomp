// src/managers/clightmanager/cLightManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A40BC0..00A40BD0, 2 functions

#include "types.h"

// 00A40BC0  cLightManager::vf00  size=6  [class]
undefined ** cLightManager::vf00(void)

{
  return &PTR_s_cLightManager_0189f680;
}

// 00A40BD0  cLightManager::vf04  size=30  [class]
undefined4 __thiscall cLightManager::vf04(undefined4 param_1,byte param_2)

{
  cObject::cObject_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

