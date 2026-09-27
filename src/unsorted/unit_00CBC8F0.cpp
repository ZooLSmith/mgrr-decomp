// src/unsorted/unit_00CBC8F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC8F0..00CBC9C0, 2 functions

#include "mgrr.h"

// 00CBC8F0  FUN_00cbc8f0  size=202  [run]
/* WARNING: Removing unreachable block (ram,0x00cbc916) */
/* WARNING: Removing unreachable block (ram,0x00cbc947) */
/* WARNING: Removing unreachable block (ram,0x00cbc976) */
/* WARNING: Removing unreachable block (ram,0x00cbc9a5) */

undefined4 FUN_00cbc8f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  DAT_01dc1274 = 1;
  UNLOCK();
  LOCK();
  DAT_01dc1278 = 0;
  UNLOCK();
  LOCK();
  DAT_01dc1280 = param_1;
  UNLOCK();
  uVar1 = DAT_018b56b0;
  LOCK();
  DAT_018b56b0 = param_2;
  UNLOCK();
  return uVar1;
}

// 00CBC9C0  FUN_00cbc9c0  size=155  [run]
/* WARNING: Removing unreachable block (ram,0x00cbc9e6) */
/* WARNING: Removing unreachable block (ram,0x00cbca16) */
/* WARNING: Removing unreachable block (ram,0x00cbca46) */

undefined4 FUN_00cbc9c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  DAT_01dc1274 = 0;
  UNLOCK();
  LOCK();
  DAT_01dc1278 = param_1;
  UNLOCK();
  uVar1 = DAT_01dc127c;
  LOCK();
  DAT_01dc127c = param_2;
  UNLOCK();
  return uVar1;
}

