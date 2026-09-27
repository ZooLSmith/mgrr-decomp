// src/collision/BoundingVolumeBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A66710..00A66D30, 2 functions

#include "types.h"

// 00A66710  BoundingVolumeBase::vf00  size=6  [class]
undefined * BoundingVolumeBase::vf00(void)

{
  return &DAT_01be99d0;
}

// 00A66D30  BoundingVolumeBase::vf04  size=31  [class]
undefined4 * __thiscall BoundingVolumeBase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

