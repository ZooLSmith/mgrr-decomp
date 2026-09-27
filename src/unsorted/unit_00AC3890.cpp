// src/unsorted/unit_00AC3890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC3890..00AC3890, 1 functions

#include "types.h"

// 00AC3890  FUN_00ac3890  size=51  [run]
void FUN_00ac3890(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x30,&DAT_01b7bd48);
  if (iVar1 != 0) {
    DAT_01be9bf4 = lib::StaticArray<BehaviorData*,2048>::StaticArray<BehaviorData*,2048>();
    BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement();
    return;
  }
  DAT_01be9bf4 = 0;
  BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement();
  return;
}

