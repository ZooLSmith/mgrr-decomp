// src/collision/CollisionUniqueIDAllocator.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D76ED0..00D77AF0, 2 functions

#include "types.h"

// 00D76ED0  CollisionUniqueIDAllocator::vf04  size=31  [class]
undefined4 * __thiscall CollisionUniqueIDAllocator::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D77AF0  CollisionUniqueIDAllocator::CollisionUniqueIDAllocator  size=35  [class]
void __fastcall CollisionUniqueIDAllocator::CollisionUniqueIDAllocator(undefined4 *param_1)

{
  *param_1 = CollisionUniqueIDAllocatorImplement::vftable;
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

