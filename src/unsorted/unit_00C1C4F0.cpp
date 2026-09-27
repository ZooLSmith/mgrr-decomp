// src/unsorted/unit_00C1C4F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1C4F0..00C1C560, 4 functions

#include "types.h"

// 00C1C4F0  FUN_00c1c4f0  size=43  [run]
void __fastcall FUN_00c1c4f0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = FUN_00cc0a10();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = cCountDisp::cCountDisp();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

// 00C1C520  FUN_00c1c520  size=48  [run]
void __fastcall FUN_00c1c520(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00C1C550  FUN_00c1c550  size=14  [run]
undefined4 __fastcall FUN_00c1c550(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  }
  return 0;
}

// 00C1C560  FUN_00c1c560  size=15  [run]
undefined4 __fastcall FUN_00c1c560(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
  }
  return 0xffffffff;
}

