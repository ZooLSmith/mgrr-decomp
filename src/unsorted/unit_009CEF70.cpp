// src/unsorted/unit_009CEF70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CEF70..009CEF70, 1 functions

#include "types.h"

// 009CEF70  FUN_009cef70  size=33  [run]
bool FUN_009cef70(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & (&DAT_01bea09c)[param_1 >> 5]) != 0;
}

