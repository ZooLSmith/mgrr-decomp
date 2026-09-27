// src/managers/triggermanager/conditions/TrgCondEnmCount.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A1C0..00C7A1C0, 1 functions

#include "mgrr.h"

// 00C7A1C0  Trigger::Cond::ENM_COUNT  size=133  [class]
bool __fastcall Trigger::Cond::ENM_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a8eb4);
  }
  else {
    iVar1 = FUN_00c18cc0(*(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00c198f0(*(undefined4 *)(param_1 + 0x18));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

