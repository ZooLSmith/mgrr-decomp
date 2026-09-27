// src/unsorted/unit_00412EF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00412EF0..00412EF0, 1 functions

#include "mgrr.h"

// 00412EF0  FUN_00412ef0  size=33  [run]
bool FUN_00412ef0(int param_1,uint param_2)

{
  return (0x80000000U >> ((byte)param_2 & 0x1f) & *(uint *)(param_1 + (param_2 >> 5) * 4)) != 0;
}

