// src/collision/CollisionIDAllocator.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D76E30..00D7AC30, 2 functions

#include "types.h"

// 00D76E30  CollisionIDAllocator::vf10  size=31  [class]
undefined4 * __thiscall CollisionIDAllocator::vf10(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7AC30  CollisionIDAllocator::CollisionIDAllocator  size=57  [class]
void __fastcall CollisionIDAllocator::CollisionIDAllocator(undefined4 *param_1)

{
  *param_1 = CollisionIDAllocatorImplement::vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

