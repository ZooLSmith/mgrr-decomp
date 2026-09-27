// src/unsorted/unit_00C96200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C96200..00C96200, 1 functions

#include "mgrr.h"

// 00C96200  FUN_00c96200  size=200  [run]
void __fastcall FUN_00c96200(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [68];
  
  local_58 = local_48;
  local_5c = 0;
  local_54 = 0x10;
  local_50 = 0;
  local_4c = 0;
  iVar2 = FUN_00c77fc0(*(undefined4 *)(param_1 + 0x10),&local_5c);
  if ((iVar2 != 0) && (0 < local_50)) {
    iVar2 = 0;
    do {
      FUN_00a7c930();
      local_60 = 0;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
        iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) * 8;
        if (iVar1 != 0) {
          FUN_00a7c940(local_64);
          *(undefined4 *)(iVar1 + 4) = local_60;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_50);
  }
  if ((local_58 != (undefined1 *)0x0) && (local_50 = 0, local_4c != 0)) {
    FUN_00dd48d0(local_58,0);
  }
  return;
}

