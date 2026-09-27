// src/misc/cItemPossessionCure.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094DAE0..0094DB00, 3 functions

#include "types.h"

// 0094DAE0  cItemPossessionCure::vf00  size=6  [class]
char * cItemPossessionCure::vf00(void)

{
  return "cItemPossessionCure";
}

// 0094DAF0  FUN_0094daf0  size=6  [between]
char * FUN_0094daf0(void)

{
  return "cItemPossessionBase";
}

// 0094DB00  cItemPossessionCure::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionCure::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

