// src/managers/triggermanager/actions/TrgActPos.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C96DB0..00C96DB0, 1 functions

#include "mgrr.h"

// 00C96DB0  Trigger::Act::POS  size=464  [class]
undefined4 __fastcall Trigger::Act::POS(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_98;
  int local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [76];
  
  iVar4 = *(int *)(param_1 + 4);
  local_94 = iVar4;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b12bc);
    return 0;
  }
  iVar1 = FUN_00c78580(*(undefined4 *)(iVar4 + 8),&local_90);
  if (iVar1 != 0) {
    local_80 = local_90;
    local_60 = local_50;
    local_7c = local_8c;
    iVar4 = iVar4 + 0x10;
    local_78 = local_88;
    local_64 = 0;
    local_74 = 0x3f800000;
    local_5c = 0x10;
    local_58 = 0;
    local_54 = 0;
    iVar1 = FUN_00c77fc0(iVar4,&local_64);
    if (iVar1 != 0) {
      uVar3 = 1;
      local_98 = 0;
      if (0 < local_58) {
        do {
          if (*(int *)(local_60 + local_98 * 4) == 0) {
            FUN_00dd5650(&DAT_016b1228,iVar4);
            uVar3 = 0;
          }
          else {
            piVar2 = (int *)FUN_00a7c8a0();
            if (piVar2 == (int *)0x0) {
              FUN_00dd5650(&DAT_016b11ec,iVar4);
              uVar3 = 0;
            }
            else {
              local_90 = 0;
              local_8c = *(float *)(local_94 + 0xc) * 0.017453292;
              local_88 = 0;
              local_84 = 0x3f800000;
              (**(code **)(*piVar2 + 0x6c))(&local_80);
              (**(code **)(*piVar2 + 0x88))(&local_94);
            }
          }
          local_98 = local_98 + 1;
        } while (local_98 < local_58);
      }
      if ((local_60 != (undefined1 *)0x0) && (local_58 = 0, local_54 != 0)) {
        FUN_00dd48d0(local_60,0);
      }
      return uVar3;
    }
    FUN_00dd5650(&DAT_016b125c,iVar4);
    if ((local_60 != (undefined1 *)0x0) && (local_58 = 0, local_54 != 0)) {
      FUN_00dd48d0(local_60,0);
    }
    return 0;
  }
  FUN_00dd5650(&DAT_016b1290,*(undefined4 *)(iVar4 + 8));
  return 0;
}

