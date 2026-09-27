// src/unsorted/unit_009D4690.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D4690..009D4690, 1 functions

#include "types.h"

// 009D4690  FUN_009d4690  size=117  [run]
undefined8 __thiscall
FUN_009d4690(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  lVar1 = *param_1;
  bVar2 = CONCAT44(param_5,param_4) == lVar1;
  if (bVar2) {
    *param_1 = CONCAT44(param_3,param_2);
  }
  else {
    param_5 = (undefined4)((ulonglong)lVar1 >> 0x20);
  }
  UNLOCK();
  return CONCAT44(param_5,(uint)bVar2);
}

