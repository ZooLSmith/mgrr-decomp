// src/managers/triggermanager/conditions/TrgCondEnmGroupEntityCount.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C190..00C7C190, 1 functions

#include "mgrr.h"

// 00C7C190  Trigger::Cond::ENM_GROUP_ENTITY_COUNT  size=163  [class]
bool __fastcall Trigger::Cond::ENM_GROUP_ENTITY_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9ad4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a9a94);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c196a0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
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

