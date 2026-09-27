// src/unsorted/unit_00C960F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C960F0..00C960F0, 1 functions

#include "mgrr.h"

// 00C960F0  FUN_00c960f0  size=150  [run]
void __fastcall FUN_00c960f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar1 = FUN_00c77fc0(*(undefined4 *)(param_1 + 0x10),&local_54);
  if ((iVar1 != 0) && (iVar1 = 0, 0 < local_48)) {
    do {
      uVar2 = FUN_00a7c7f0();
      if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
        if (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) * 4 != 0) {
          FUN_00a7c940(uVar2);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return;
}

