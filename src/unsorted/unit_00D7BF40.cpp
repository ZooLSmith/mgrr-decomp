// src/unsorted/unit_00D7BF40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7BF40..00D7BF40, 1 functions

#include "mgrr.h"

// 00D7BF40  FUN_00d7bf40  size=29  [run]
undefined4 FUN_00d7bf40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = lib::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>::
          StaticArray<BattleCollisionFilterImplement::LayerPair,1024>(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00d791e0();
  return 1;
}

