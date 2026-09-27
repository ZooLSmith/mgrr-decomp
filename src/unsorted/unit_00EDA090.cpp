// src/unsorted/unit_00EDA090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDA090..00EDA090, 1 functions

#include "mgrr.h"

// 00EDA090  FUN_00eda090  size=33  [run]
bool __fastcall FUN_00eda090(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x480);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return iVar1 == 4;
  }
  return true;
}

