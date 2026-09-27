// src/unsorted/unit_00CA8620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA8620..00CA8620, 1 functions

#include "mgrr.h"

// 00CA8620  FUN_00ca8620  size=29  [run]
undefined4 FUN_00ca8620(int *param_1,int param_2)

{
  *param_1 = *param_1 + 1;
  if (param_2 < *param_1) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}

