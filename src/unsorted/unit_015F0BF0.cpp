// src/unsorted/unit_015F0BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 015F0BF0..015F0D40, 11 functions

#include "types.h"

// 015F0BF0  FUN_015f0bf0  size=31  [run]
void FUN_015f0bf0(void)

{
  if (DAT_01dd0590 != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
    DAT_01dd0590 = 0;
  }
  return;
}

// 015F0C10  FUN_015f0c10  size=1  [run]
void FUN_015f0c10(void)

{
  return;
}

// 015F0C20  FUN_015f0c20  size=39  [run]
void FUN_015f0c20(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd0820 + 0xc))();
  if (iVar1 != 0) {
    FUN_00de4c10();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 015F0C50  FUN_015f0c50  size=49  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f0c50(void)

{
  if (DAT_018cde28 != 0) {
    FUN_01297c59(DAT_018cde28);
    DAT_018cde28 = 0;
  }
  _DAT_018cde34 = 0xffffffff;
  DAT_018cde24 = 0;
  return;
}

// 015F0C90  FUN_015f0c90  size=61  [run]
void FUN_015f0c90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x17;
  puVar2 = &DAT_01dd4804;
  do {
    if (puVar2[-5] != 0) {
      FUN_01297c59(puVar2[-5]);
      puVar2[-5] = 0;
    }
    iVar1 = iVar1 + -1;
    puVar2[-6] = 0;
    puVar2[-2] = 0xffffffff;
    puVar2 = puVar2 + -5;
  } while (-1 < iVar1);
  return;
}

// 015F0CD0  FUN_015f0cd0  size=10  [run]
void FUN_015f0cd0(void)

{
  FUN_00dea110();
  return;
}

// 015F0CE0  FUN_015f0ce0  size=39  [run]
void FUN_015f0ce0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 015F0D10  FUN_015f0d10  size=10  [run]
void FUN_015f0d10(void)

{
  FUN_00dd7270();
  return;
}

// 015F0D20  FUN_015f0d20  size=10  [run]
void FUN_015f0d20(void)

{
  FUN_00dd7270();
  return;
}

// 015F0D30  FUN_015f0d30  size=10  [run]
void FUN_015f0d30(void)

{
  FUN_00dd7270();
  return;
}

// 015F0D40  FUN_015f0d40  size=51  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f0d40(void)

{
  if (DAT_01dd4d00 != 0) {
    FUN_00dd48d0(DAT_01dd4d00,0);
  }
  DAT_01dd4d00 = 0;
  _DAT_01dd4d04 = 0;
  _DAT_01dd4d08 = 0;
  return;
}

