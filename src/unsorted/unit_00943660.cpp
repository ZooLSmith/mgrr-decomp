// src/unsorted/unit_00943660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00943660..00943660, 1 functions

#include "mgrr.h"

// 00943660  FUN_00943660  size=102  [run]
void __fastcall FUN_00943660(int param_1)

{
  int iVar1;
  
  if ((((DAT_01bea090 & 0x100000) != 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
     (*(undefined4 *)(param_1 + 0x89c) = 0x3f800000, *(int *)(param_1 + 0x8a0) < 1)) {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
  }
  FUN_0093da10();
  iVar1 = 0xc;
  do {
    FUN_00943400();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00942d90();
  FUN_009418f0();
  return;
}

