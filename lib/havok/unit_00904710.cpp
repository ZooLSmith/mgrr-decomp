// lib/havok/unit_00904710.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00904710..00904710, 1 functions

#include "mgrr.h"
#include "HkPhysicsSystemContainer.h"

// 00904710  HkPhysicsSystemContainer::vf00  size=58  [run]
undefined4 * __thiscall HkPhysicsSystemContainer::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    FUN_011980a0(param_1[2]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

