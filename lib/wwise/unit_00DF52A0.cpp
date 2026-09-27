// lib/wwise/unit_00DF52A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DF52A0..00DF52A0, 1 functions

#include "types.h"

// 00DF52A0  AK::StreamMgr::IAkIOHookBlocking::vf00  size=31  [run]
undefined4 * __thiscall AK::StreamMgr::IAkIOHookBlocking::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = IAkLowLevelIOHook::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

