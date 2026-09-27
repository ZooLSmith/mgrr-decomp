// src/collision/CollisionUniqueIDAllocatorImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77B20..00D79720, 3 functions

#include "mgrr.h"
#include "CollisionUniqueIDAllocatorImplement.h"

// 00D77B20  CollisionUniqueIDAllocatorImplement::vf04  size=55  [class]
undefined4 * __thiscall CollisionUniqueIDAllocatorImplement::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = CollisionUniqueIDAllocator::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D77B60  CollisionUniqueIDAllocatorImplement::vf00  size=49  [class]
int __fastcall CollisionUniqueIDAllocatorImplement::vf00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return iVar1;
}

// 00D79720  CollisionUniqueIDAllocatorImplement::CollisionUniqueIDAllocatorImplement  size=88  [class]
bool CollisionUniqueIDAllocatorImplement::CollisionUniqueIDAllocatorImplement(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x30,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = param_1;
    puVar1[8] = 0;
    puVar1[10] = 1;
    FUN_00dd7240();
    DAT_01dc52e8 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01dc52e8 = (undefined4 *)0x0;
  return false;
}

