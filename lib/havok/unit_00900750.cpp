// lib/havok/unit_00900750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00900750..00900770, 3 functions

#include "types.h"

// 00900750  HkRemovePhantom::vf18  size=3  [run]
undefined4 __fastcall HkRemovePhantom::vf18(undefined4 param_1)

{
  return param_1;
}

// 00900760  HkRemovePhantom::vf14  size=3  [run]
undefined4 __fastcall HkRemovePhantom::vf14(undefined4 param_1)

{
  return param_1;
}

// 00900770  HkRemovePhantom::vf00  size=31  [run]
undefined4 * __thiscall HkRemovePhantom::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = HkRemoveContainer::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

