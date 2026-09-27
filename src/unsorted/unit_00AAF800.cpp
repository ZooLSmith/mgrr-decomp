// src/unsorted/unit_00AAF800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAF800..00AAF800, 1 functions

#include "mgrr.h"

// 00AAF800  FUN_00aaf800  size=67  [run]
void __fastcall FUN_00aaf800(int param_1)

{
  if (*(int *)(param_1 + 0xe84) != 0) {
    *(undefined4 *)(param_1 + 0xe8c) = 0;
    if (*(int *)(param_1 + 0xe90) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xe84),0);
      *(undefined4 *)(param_1 + 0xe90) = 0;
    }
    *(undefined4 *)(param_1 + 0xe84) = 0;
    *(undefined4 *)(param_1 + 0xe88) = 0;
  }
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

