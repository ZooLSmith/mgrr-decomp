// src/misc/EmSetCorps.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9F000..00C9F000, 1 functions

#include "types.h"

// 00C9F000  EmSetCorps::setAddedKillCount  size=81  [class]
void __thiscall EmSetCorps::setAddedKillCount(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((((-1 < (int)param_2) && (param_2 < 0x10)) && (-1 < (int)param_3)) &&
     ((param_3 < 0x10 &&
      (iVar1 = param_3 * 0x40 + 0x70 + param_2 * 0x660 + param_1, *(int *)(iVar1 + 4) == param_4))))
  {
    if (*(int *)(iVar1 + 0x34) != 0) {
      FUN_00dd5650(&DAT_016b1c0c);
    }
    *(undefined4 *)(iVar1 + 0x34) = 1;
  }
  return;
}

