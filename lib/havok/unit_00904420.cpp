// lib/havok/unit_00904420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00904420..00904440, 2 functions

#include "types.h"

// 00904420  HkPhysicsSystemContainer::HkPhysicsSystemContainer_2  size=17  [run]
void __fastcall HkPhysicsSystemContainer::HkPhysicsSystemContainer_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00904440  HkPhysicsSystemContainer::HkPhysicsSystemContainer_3  size=38  [run]
void __fastcall HkPhysicsSystemContainer::HkPhysicsSystemContainer_3(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    FUN_011980a0(param_1[2]);
    param_1[1] = 0;
  }
  return;
}

