// src/unsorted/unit_008F3BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F3BF0..008F3C80, 4 functions

#include "mgrr.h"

// 008F3BF0  FUN_008f3bf0  size=60  [run]
void __fastcall FUN_008f3bf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F3C30  FUN_008f3c30  size=61  [run]
void __fastcall FUN_008f3c30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F3C70  FUN_008f3c70  size=8  [run]
void FUN_008f3c70(void)

{
  FUN_008f3970(0);
  return;
}

// 008F3C80  FUN_008f3c80  size=8  [run]
void FUN_008f3c80(void)

{
  FUN_008f3970(1);
  return;
}

