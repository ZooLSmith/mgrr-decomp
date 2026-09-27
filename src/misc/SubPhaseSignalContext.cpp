// src/misc/SubPhaseSignalContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46A50..00D46A70, 2 functions

#include "types.h"

// 00D46A50  SubPhaseSignalContext::vf00  size=6  [class]
undefined * SubPhaseSignalContext::vf00(void)

{
  return &DAT_01dc51cc;
}

// 00D46A70  SubPhaseSignalContext::vf04  size=31  [class]
undefined4 * __thiscall SubPhaseSignalContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = SignalContext::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

