// src/unsorted/unit_008D9F00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D9F00..008D9F00, 1 functions

#include "mgrr.h"

// 008D9F00  FUN_008d9f00  size=62  [run]
bool FUN_008d9f00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,param_1);
  if (iVar1 != 0) {
    DAT_01b35bf4 = lib::AllocatedArray<AnimationMapResource*>::AllocatedArray<AnimationMapResource*>
                             (param_1);
    return DAT_01b35bf4 != 0;
  }
  DAT_01b35bf4 = 0;
  return false;
}

