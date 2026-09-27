// src/unsorted/unit_005D9140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D9140..005D9140, 1 functions

#include "types.h"

// 005D9140  FUN_005d9140  size=45  [run]
void __fastcall FUN_005d9140(int param_1)

{
  if (*(int *)(param_1 + 0x150) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (*(int *)(param_1 + 0x150) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  return;
}

