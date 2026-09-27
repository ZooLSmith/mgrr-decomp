// src/unsorted/unit_00CEB110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEB110..00CEB110, 1 functions

#include "mgrr.h"

// 00CEB110  FUN_00ceb110  size=118  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ceb110(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  if ((_DAT_01dc5050 & 1) == 0) {
    _DAT_01dc5050 = _DAT_01dc5050 | 1;
    _DAT_01dc5040 = 0;
    _DAT_01dc5044 = 0;
    _DAT_01dc5048 = 0;
  }
  uVar2 = _DAT_01dc5048;
  uVar1 = _DAT_01dc5044;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = _DAT_01dc5040;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar2;
    return;
  }
  return;
}

