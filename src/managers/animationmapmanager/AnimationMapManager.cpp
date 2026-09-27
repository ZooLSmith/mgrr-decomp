// src/managers/animationmapmanager/AnimationMapManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D73D0..008D9E00, 2 functions

#include "types.h"

// 008D73D0  AnimationMapManager::vf0C  size=31  [class]
undefined4 * __thiscall AnimationMapManager::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D9E00  AnimationMapManager::AnimationMapManager  size=30  [class]
void __fastcall AnimationMapManager::AnimationMapManager(undefined4 *param_1)

{
  *param_1 = AnimationMapManagerImplement::vftable;
  FUN_008d8180();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

