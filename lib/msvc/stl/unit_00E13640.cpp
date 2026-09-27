// lib/msvc/stl/unit_00E13640.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E13640..00E13690, 2 functions

#include "mgrr.h"

// 00E13640  std::locale::facet::vf00  size=31  [run]
undefined4 * __thiscall std::locale::facet::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E13690  std::ctype_base::vf00  size=31  [run]
undefined4 * __thiscall std::ctype_base::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = locale::facet::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

