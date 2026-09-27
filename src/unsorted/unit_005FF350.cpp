// src/unsorted/unit_005FF350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FF350..005FF350, 1 functions

#include "types.h"

// 005FF350  FUN_005ff350  size=187  [run]
void __thiscall FUN_005ff350(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 4) {
    *(undefined4 *)(param_1 + 0x78c) = 0;
    iVar1 = FUN_00dd3580(0x100,&DAT_01b7bd48);
    *(int *)(param_1 + 0x788) = iVar1;
    if (iVar1 != 0) {
      if (param_2 == 5) {
        FUN_00a8c720(0x11,0x16);
        FUN_00a8c720(0x12,0x17);
        FUN_00a8c720(0x13,0x18);
        FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
        return;
      }
      FUN_00a8c720(6,10);
      FUN_00a8c720(7,0xb);
      FUN_00a8c720(8,0xc);
      FUN_00a8c720(9,0xd);
      FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
    }
  }
  return;
}

