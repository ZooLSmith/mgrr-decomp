// src/behavior/BehaviorUniqueAllocator.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8A780..00A9C990, 2 functions

#include "mgrr.h"
#include "BehaviorUniqueAllocator.h"

// 00A8A780  BehaviorUniqueAllocator::vf14  size=31  [class]
undefined4 * __thiscall BehaviorUniqueAllocator::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A9C990  BehaviorUniqueAllocator::BehaviorUniqueAllocator  size=25  [class]
void __fastcall BehaviorUniqueAllocator::BehaviorUniqueAllocator(undefined4 *param_1)

{
  *param_1 = BehaviorUniqueAllocatorImplement::vftable;
  FUN_00a9c8d0();
  *param_1 = vftable;
  return;
}

