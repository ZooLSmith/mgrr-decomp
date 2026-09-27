// src/misc/ProgressFlagBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C88E50..015F0390, 2 functions

#include "mgrr.h"
#include "ProgressFlagBase.h"

// 00C88E50  ProgressFlagBase::vf00  size=39  [class]
undefined4 * __thiscall ProgressFlagBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F0390  ProgressFlagBase::ProgressFlagBase  size=20  [class]
void ProgressFlagBase::ProgressFlagBase(void)

{
  PTR_vftable_018abf30 = (undefined *)vftable;
  FUN_00dd7270();
  return;
}

