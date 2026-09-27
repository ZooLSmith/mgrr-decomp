// lib/wwise/unit_00DF5A20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DF5A20..00DF5A20, 1 functions

#include "mgrr.h"

// 00DF5A20  AK::StreamMgr::IAkIOHookDeferred::vf00  size=31  [run]
undefined4 * __thiscall AK::StreamMgr::IAkIOHookDeferred::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = IAkLowLevelIOHook::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

