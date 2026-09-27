// src/unsorted/unit_00CCA9D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCA9D0..00CCA9D0, 1 functions

#include "types.h"

// 00CCA9D0  FUN_00cca9d0  size=148  [run]
void __fastcall FUN_00cca9d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    _memset((void *)(param_1 + 0x60),0,0x70);
    piVar4 = *(int **)(param_1 + 0x44);
    if (piVar4 != *(int **)(param_1 + 0x48)) {
      do {
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          piVar1 = (int *)(param_1 + 0x60 + piVar2[2] * 4);
          piVar2[0xb] = *(int *)(param_1 + 0x60 + piVar2[2] * 4);
          *piVar1 = *piVar1 + piVar2[3];
          (**(code **)(*piVar2 + 4))();
          iVar3 = FUN_00cae180(0);
          if (iVar3 != 0) {
            (**(code **)(*piVar2 + 8))(0x3c888889);
          }
        }
        piVar4 = (int *)piVar4[2];
      } while (piVar4 != *(int **)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

