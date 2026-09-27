// src/unsorted/unit_00DECCE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DECCE0..00DECD70, 2 functions

#include "mgrr.h"

// 00DECCE0  FUN_00decce0  size=18  [run]
void FUN_00decce0(void *param_1)

{
  _memset(param_1,0,0x3c);
  return;
}

// 00DECD70  FUN_00decd70  size=37  [run]
void __fastcall FUN_00decd70(int param_1)

{
  if (*(ulong *)(param_1 + 4) != 0) {
    AK::SoundEngine::UnloadBank(*(ulong *)(param_1 + 4),(long *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

