// src/unsorted/unit_00E9C6F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9C6F0..00E9C6F0, 1 functions

#include "types.h"

// 00E9C6F0  FUN_00e9c6f0  size=79  [run]
undefined4 __thiscall FUN_00e9c6f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x74) != 0) {
    piVar3 = *(int **)(param_1 + 0x6c);
    do {
      iVar1 = *(int *)(*piVar3 + 0x4c);
      if ((iVar1 != 0) && (*(int *)(*piVar3 + 0x38) == param_2)) {
        switch(iVar1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x74));
  }
  return 1;
}

