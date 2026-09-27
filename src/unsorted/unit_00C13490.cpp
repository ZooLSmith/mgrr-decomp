// src/unsorted/unit_00C13490.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C13490..00C13490, 1 functions

#include "types.h"

// 00C13490  FUN_00c13490  size=140  [run]
void FUN_00c13490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  FUN_00de3530();
  iVar1 = cObjReadManager::getDataAtSet(local_8,param_2,0);
  if (iVar1 != 0) {
    iVar1 = FUN_00de44b0(&DAT_0164518c,0);
    iVar2 = FUN_00de44b0(&DAT_01645174,0);
    iVar3 = FUN_00de44b0(&DAT_01645170,0);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      FUN_00fa4d00(iVar2,iVar3);
      return;
    }
    if (iVar1 != 0) {
      FUN_00fa25d0(iVar1);
    }
  }
  return;
}

