// src/misc/StateMachineContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B79B20..00D821A0, 3 functions

#include "mgrr.h"
#include "StateMachineContext.h"

// 00B79B20  StateMachineContext::vf00  size=6  [class]
undefined * StateMachineContext::vf00(void)

{
  return &DAT_01dc53c0;
}

// 00B79B40  StateMachineContext::vf04  size=31  [class]
undefined4 * __thiscall StateMachineContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D821A0  StateMachineContext::StateMachineContext  size=23  [class]
void __thiscall StateMachineContext::StateMachineContext(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[1] = param_2;
  return;
}

