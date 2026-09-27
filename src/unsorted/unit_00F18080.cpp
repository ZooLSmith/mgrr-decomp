// src/unsorted/unit_00F18080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F18080..00F18080, 1 functions

#include "types.h"

// 00F18080  FUN_00f18080  size=109  [run]
void __fastcall FUN_00f18080(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  *(short *)(param_1 + 0x452) = *(short *)(param_1 + 0x452) + 1;
  if ((*(short *)(param_1 + 0x452) < *(short *)(param_1 + 0x450)) &&
     (*(short *)(param_1 + 0x450) != 0)) {
    return;
  }
  *(undefined2 *)(param_1 + 0x452) = 0;
  FUN_00ed8680();
  return;
}

