// src/unsorted/unit_00A91A00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A91A00..00A91A00, 1 functions

#include "types.h"

// 00A91A00  FUN_00a91a00  size=95  [run]
void __fastcall FUN_00a91a00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 != *(int *)(iVar1 + 8) * 0x50 + iVar2) {
      do {
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          FUN_00a805f0();
        }
        iVar2 = iVar2 + 0x50;
      } while (iVar2 != *(int *)(*param_1 + 8) * 0x50 + *(int *)(*param_1 + 4));
    }
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
  }
  return;
}

