// src/unsorted/unit_00F4C3A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4C3A0..00F4C420, 2 functions

#include "mgrr.h"

// 00F4C3A0  FUN_00f4c3a0  size=57  [run]
undefined4 FUN_00f4c3a0(void)

{
  undefined4 uVar1;
  
  if (DAT_01ee6570 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ee6558);
    uVar1 = cEffectData::requestCounterDown_2();
    if (DAT_01ee6570 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ee6558);
    }
    return uVar1;
  }
  uVar1 = cEffectData::requestCounterDown_2();
  return uVar1;
}

// 00F4C420  FUN_00f4c420  size=12  [run]
undefined4 __fastcall FUN_00f4c420(undefined4 param_1)

{
  FUN_00ec75e0();
  return param_1;
}

