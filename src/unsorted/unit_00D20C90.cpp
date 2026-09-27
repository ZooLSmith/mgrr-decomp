// src/unsorted/unit_00D20C90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D20C90..00D20CF0, 2 functions

#include "types.h"

// 00D20C90  FUN_00d20c90  size=86  [run]
undefined4 __fastcall FUN_00d20c90(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_009832c0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar1 != (undefined4 *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 4)) {
    do {
      FUN_00d12710(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 4));
  }
  return 1;
}

// 00D20CF0  FUN_00d20cf0  size=23  [run]
undefined4 FUN_00d20cf0(void)

{
  undefined4 uVar1;
  
  if (DAT_01dc0730 == 0) {
    return 0;
  }
  uVar1 = FUN_00d20c90();
  return uVar1;
}

