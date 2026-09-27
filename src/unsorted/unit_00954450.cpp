// src/unsorted/unit_00954450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00954450..00954450, 1 functions

#include "mgrr.h"

// 00954450  FUN_00954450  size=74  [run]
int FUN_00954450(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = cItemPossessionBase::cItemPossessionBase(param_1,&local_20);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  return iVar1;
}

