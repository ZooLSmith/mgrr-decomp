// src/unsorted/unit_009968D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009968D0..00996910, 2 functions

#include "mgrr.h"

// 009968D0  FUN_009968d0  size=56  [run]
bool FUN_009968d0(int param_1)

{
  param_1 = param_1 + 0x14;
  return (1 << ((byte)param_1 & 0x1f) &
         (&DAT_01b6f3a0)[(int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5]) != 0;
}

// 00996910  FUN_00996910  size=46  [run]
void FUN_00996910(int param_1)

{
  param_1 = param_1 + 0x14;
  (&DAT_01b6f3a0)[(int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5] =
       (&DAT_01b6f3a0)[(int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5] |
       1 << ((byte)param_1 & 0x1f);
  return;
}

