// src/unsorted/unit_00E81F40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E81F40..00E81F40, 1 functions

#include "mgrr.h"

// 00E81F40  FUN_00e81f40  size=164  [run]
/* WARNING: Removing unreachable block (ram,0x00e81f95) */

float10 FUN_00e81f40(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  undefined4 local_8;
  
  fVar1 = (float)(param_1 * 10);
  if (param_1 * 10 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_8 = (uint)(longlong)ROUND(fVar1 * param_2);
  FUN_00ddba30(((float)(local_8 % 36000) / 36000.0) * 6.2831855 + param_3);
  fVar2 = (float10)FUN_00fdee60();
  return (float10)((float)fVar2 * param_4);
}

