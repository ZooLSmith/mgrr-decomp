// src/unsorted/unit_00A8CD60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8CD60..00A8CD80, 2 functions

#include "mgrr.h"

// 00A8CD60  FUN_00a8cd60  size=32  [run]
bool FUN_00a8cd60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a10040(param_2);
  return iVar1 - 1U < 2;
}

// 00A8CD80  FUN_00a8cd80  size=28  [run]
bool FUN_00a8cd80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a10040(param_2);
  return iVar1 == param_3;
}

