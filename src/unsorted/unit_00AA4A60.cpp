// src/unsorted/unit_00AA4A60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA4A60..00AA4A90, 2 functions

#include "types.h"

// 00AA4A60  FUN_00aa4a60  size=43  [run]
void FUN_00aa4a60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e01ca0();
  FUN_00e00fb0(param_1,param_2,uVar1);
  return;
}

// 00AA4A90  FUN_00aa4a90  size=35  [run]
undefined4 __fastcall FUN_00aa4a90(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x7d8) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x7d8) + 0x810), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x34) != 0)) {
    return 1;
  }
  return 0;
}

