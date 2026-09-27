// src/managers/triggermanager/actions/TrgActFlagOnDlc2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C88BD0..00C88BD0, 1 functions

#include "mgrr.h"

// 00C88BD0  Trigger::Act::FLAG_ON_DLC2  size=106  [class]
undefined4 __fastcall Trigger::Act::FLAG_ON_DLC2(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acc64);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    puVar1 = (uint *)(DAT_018abf68 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    if (DAT_018abf88 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    }
  }
  return 1;
}

