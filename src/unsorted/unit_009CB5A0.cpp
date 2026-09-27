// src/unsorted/unit_009CB5A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CB5A0..009CB680, 3 functions

#include "types.h"

// 009CB5A0  FUN_009cb5a0  size=110  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cb5a0(undefined4 param_1)

{
  int iVar1;
  
  FUN_00e4aef0(param_1);
  _DAT_0188f4e0 = param_1;
  iVar1 = FUN_00fdbc60();
  if (iVar1 < 0) {
    FUN_00dfa6f0(DAT_0188f4e8);
    return;
  }
  if (10 < iVar1) {
    iVar1 = 10;
  }
  FUN_00dfa6f0((&DAT_0188f4e8)[iVar1]);
  return;
}

// 009CB610  FUN_009cb610  size=110  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cb610(undefined4 param_1)

{
  int iVar1;
  
  FUN_00e4aeb0(param_1);
  _DAT_0188f4e4 = param_1;
  iVar1 = FUN_00fdbc60();
  if (iVar1 < 0) {
    FUN_00dfa6f0(DAT_0188f4e8);
    return;
  }
  if (10 < iVar1) {
    iVar1 = 10;
  }
  FUN_00dfa6f0((&DAT_0188f4e8)[iVar1]);
  return;
}

// 009CB680  FUN_009cb680  size=83  [run]
void FUN_009cb680(undefined4 param_1)

{
  int iVar1;
  
  FUN_00e4aed0(param_1);
  iVar1 = FUN_00fdbc60();
  if (iVar1 < 0) {
    FUN_00dfa720(DAT_0188f4e8);
    return;
  }
  if (10 < iVar1) {
    iVar1 = 10;
  }
  FUN_00dfa720((&DAT_0188f4e8)[iVar1]);
  return;
}

