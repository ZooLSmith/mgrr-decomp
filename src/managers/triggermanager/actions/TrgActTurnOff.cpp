// src/managers/triggermanager/actions/TrgActTurnOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C967C0..00C967C0, 1 functions

#include "mgrr.h"

// 00C967C0  Trigger::Act::TURN_OFF  size=266  [class]
undefined4 __fastcall Trigger::Act::TURN_OFF(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016b0f70);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_00c77fc0(iVar1,&local_54);
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar4 = 1;
    if (0 < local_48) {
      do {
        if (*(int *)(local_50 + iVar2 * 4) == 0) {
          FUN_00dd5650(&DAT_016b0efc,iVar1);
          uVar4 = 0;
        }
        else {
          piVar3 = (int *)FUN_00a7c8a0();
          if (piVar3 == (int *)0x0) {
            FUN_00dd5650(&DAT_016b0ebc,iVar1);
            uVar4 = 0;
          }
          else {
            (**(code **)(*piVar3 + 0x20))();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_48);
    }
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return uVar4;
  }
  FUN_00dd5650(&DAT_016b0f3c,iVar1);
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return 0;
}

