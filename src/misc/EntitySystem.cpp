// src/misc/EntitySystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A7F3B0..00A7F3B0, 1 functions

#include "types.h"

// 00A7F3B0  EntitySystem::addDatsuEntity  size=118  [class]
undefined4 __fastcall EntitySystem::addDatsuEntity(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x128) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(uint *)(param_1 + 0x104) <= *(uint *)(param_1 + 0x100)) {
    FUN_00dd5650(&DAT_01663ee8);
    if (*(int *)(param_1 + 0x128) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0xf8) + 8))(&stack0x00000004);
  if (*(int *)(param_1 + 0x128) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

