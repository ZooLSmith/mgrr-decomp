// src/unsorted/unit_00957FD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00957FD0..00957FD0, 1 functions

#include "types.h"

// 00957FD0  FUN_00957fd0  size=96  [run]
undefined4 __thiscall FUN_00957fd0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 4);
    do {
      piVar1 = (int *)*piVar2;
      if ((*piVar1 == param_3) && ((param_4 == 0x7fffffff || (piVar1[9] == param_4)))) {
        *param_2 = piVar1[4];
        param_2[1] = piVar1[5];
        param_2[2] = piVar1[6];
        param_2[3] = piVar1[7];
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return 0;
}

