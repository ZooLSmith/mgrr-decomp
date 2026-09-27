// src/unsorted/unit_006042F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006042F0..006042F0, 1 functions

#include "mgrr.h"

// 006042F0  FUN_006042f0  size=114  [run]
void __thiscall FUN_006042f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb58) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb40));
  }
  FUN_00a8ca50(1,0,0);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xb60) = 0;
  }
  else {
    FUN_00aa92c0(1);
    *(undefined4 *)(param_1 + 0xb60) = 1;
    uVar1 = FUN_00cc1360();
    *(undefined4 *)(param_1 + 0xb64) = uVar1;
  }
  if (*(int *)(param_1 + 0xb58) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb40));
  }
  return;
}

