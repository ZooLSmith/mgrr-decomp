// src/unsorted/unit_00C49C10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C49C10..00C49C40, 2 functions

#include "types.h"

// 00C49C10  FUN_00c49c10  size=44  [run]
void __fastcall FUN_00c49c10(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 00C49C40  FUN_00c49c40  size=85  [run]
void __fastcall FUN_00c49c40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    if (puVar2 != puVar2 + *(int *)(iVar1 + 8)) {
      do {
        FUN_00e5ca30(*puVar2,0x40400000);
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x54) + 4) +
                         *(int *)(*(int *)(param_1 + 0x54) + 8) * 4));
    }
    if (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x54) + 8) = 0;
    }
  }
  return;
}

