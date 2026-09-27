// src/unsorted/unit_00D7BE10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7BE10..00D7BE10, 1 functions

#include "types.h"

// 00D7BE10  FUN_00d7be10  size=118  [run]
byte FUN_00d7be10(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = FUN_00dd3500(0x40,param_1);
  if (iVar2 == 0) {
    DAT_01dc52ec = 0;
  }
  else {
    DAT_01dc52ec = BattleCollisionManagerImplement::MainUpdateForPauseSlot::MainUpdateForPauseSlot
                             (param_1);
  }
  bVar3 = DAT_01dc52ec != 0;
  bVar1 = CollisionUniqueIDAllocatorImplement::CollisionUniqueIDAllocatorImplement(param_1);
  iVar2 = FUN_00dd3500(0x30,param_1);
  if (iVar2 != 0) {
    DAT_01dc52e4 = lib::StaticArray<unsigned_int,1024>::StaticArray<unsigned_int,1024>(param_1);
    return DAT_01dc52e4 != 0 & bVar3 & bVar1;
  }
  DAT_01dc52e4 = 0;
  return 0;
}

