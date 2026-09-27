// src/unsorted/unit_009CF4F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF4F0..009CF650, 4 functions

#include "mgrr.h"

// 009CF4F0  FUN_009cf4f0  size=43  [run]
void FUN_009cf4f0(int *param_1)

{
  if ((*(uint *)(param_1[1] + 0x40) & 0x80000) != 0) {
    *(undefined4 *)(*param_1 + 0x28) = 1;
    *(undefined4 *)(*param_1 + 0x2c) = 1;
    return;
  }
  *(undefined4 *)(*param_1 + 0x28) = 0;
  *(undefined4 *)(*param_1 + 0x2c) = 0;
  return;
}

// 009CF5C0  FUN_009cf5c0  size=9  [run]
undefined4 FUN_009cf5c0(void)

{
  return 0;
}

// 009CF640  FUN_009cf640  size=6  [run]
undefined4 FUN_009cf640(void)

{
  return 1;
}

// 009CF650  FUN_009cf650  size=3  [run]
undefined4 FUN_009cf650(void)

{
  return 0;
}

