// src/managers/triggermanager/actions/TrgActDel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C96CB0..00C96CB0, 1 functions

#include "mgrr.h"

// 00C96CB0  Trigger::Act::DEL  size=255  [class]
undefined4 __fastcall Trigger::Act::DEL(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016b11c4);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1198);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar1 = FUN_00c77fc0(iVar1,&local_54);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1168);
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar1 = 0;
  uVar2 = 1;
  if (0 < local_48) {
    do {
      if (*(int *)(local_50 + iVar1 * 4) == 0) {
        FUN_00dd5650(&DAT_016b1168);
        uVar2 = 0;
      }
      else {
        FUN_00a805f0();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar2;
}

