// src/unsorted/unit_00CBB8A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB8A0..00CBB8A0, 1 functions

#include "types.h"

// 00CBB8A0  FUN_00cbb8a0  size=58  [run]
/* WARNING: Removing unreachable block (ram,0x00cbb8c5) */

undefined4 FUN_00cbb8a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01dc0ecc;
  LOCK();
  DAT_01dc0ecc = param_1;
  UNLOCK();
  return uVar1;
}

