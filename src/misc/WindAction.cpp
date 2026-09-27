// src/misc/WindAction.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD2290..00DD2300, 2 functions

#include "types.h"

// 00DD2290  WindAction::vf00  size=31  [class]
undefined4 * __thiscall WindAction::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DD2300  WindAction::WindAction  size=48  [class]
void __fastcall WindAction::WindAction(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = WindActionImplement::vftable;
  piVar1 = (int *)FUN_008dfea0();
  (**(code **)(*piVar1 + 0x14))(0);
  param_1[5] = 0;
  FUN_00900ca0();
  *param_1 = vftable;
  return;
}

