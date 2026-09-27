// src/misc/ProgressFlagBase_Dlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C88EB0..015F03D0, 3 functions

#include "mgrr.h"
#include "ProgressFlagBase_Dlc.h"

// 00C88EB0  ProgressFlagBase_Dlc::vf00  size=39  [class]
undefined4 * __thiscall ProgressFlagBase_Dlc::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F03B0  ProgressFlagBase_Dlc::ProgressFlagBase_Dlc  size=20  [class]
void ProgressFlagBase_Dlc::ProgressFlagBase_Dlc(void)

{
  PTR_vftable_018abf60 = (undefined *)vftable;
  FUN_00dd7270();
  return;
}

// 015F03D0  ProgressFlagBase_Dlc::ProgressFlagBase_Dlc_2  size=20  [class]
void ProgressFlagBase_Dlc::ProgressFlagBase_Dlc_2(void)

{
  PTR_vftable_018abf90 = (undefined *)vftable;
  FUN_00dd7270();
  return;
}

