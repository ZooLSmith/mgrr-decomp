// src/unsorted/unit_00AA5420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA5420..00AA5420, 1 functions

#include "mgrr.h"

// 00AA5420  FUN_00aa5420  size=200  [run]
undefined4 __fastcall FUN_00aa5420(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    FUN_00e08640(3);
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x694) = 0x3e4ccccd;
      *(undefined4 *)(param_1 + 0x698) = 0x40400000;
      *(undefined4 *)(param_1 + 0x69c) = 0x40000000;
      *(undefined4 *)(param_1 + 0x6a4) = 0x3f666666;
      *(undefined4 *)(param_1 + 0x6a8) = 0x3f99999a;
      *(undefined4 *)(param_1 + 0x6ac) = 0x3f8ccccd;
      *(undefined1 *)(param_1 + 0x6b0) = 1;
      return 1;
    }
  }
  return 0;
}

