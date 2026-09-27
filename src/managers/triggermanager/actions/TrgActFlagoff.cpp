// src/managers/triggermanager/actions/TrgActFlagoff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87400..00C87400, 1 functions

#include "mgrr.h"

// 00C87400  Trigger::Act::FlagOff  size=108  [class]
undefined4 __fastcall Trigger::Act::FlagOff(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac6c8);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf58 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    puVar1 = (uint *)(DAT_018abf38 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
    if (DAT_018abf58 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    }
  }
  return 1;
}

