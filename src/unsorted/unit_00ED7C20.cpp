// src/unsorted/unit_00ED7C20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED7C20..00ED7CE0, 2 functions

#include "mgrr.h"

// 00ED7C20  FUN_00ed7c20  size=179  [run]
undefined4 __fastcall FUN_00ed7c20(int param_1)

{
  int iVar1;
  uint local_c;
  
  if (*(char *)(param_1 + 0x5c7) == '\0') {
    if ((*(uint *)(param_1 + 0x58c) != 0) &&
       (local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x528)),
       *(uint *)(param_1 + 0x58c) <= local_c)) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc;
    if (((*(float *)(param_1 + 0x5b0) !=
          *(float *)(*(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc)) ||
        (*(float *)(param_1 + 0x5b4) != *(float *)(iVar1 + 4))) ||
       (*(float *)(param_1 + 0x5b8) != *(float *)(iVar1 + 8))) {
      return 1;
    }
  }
  return 0;
}

// 00ED7CE0  FUN_00ed7ce0  size=261  [run]
void __fastcall FUN_00ed7ce0(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x580) != 0.0) {
    fVar1 = *(float *)(param_1 + 0x578) + *(float *)(param_1 + 0x580);
    *(float *)(param_1 + 0x578) = fVar1;
    if (1.0 < fVar1) {
      fVar1 = *(float *)(param_1 + 0x578);
      do {
        fVar1 = fVar1 - 1.0;
      } while (1.0 < fVar1);
      *(float *)(param_1 + 0x578) = fVar1;
    }
    if (*(float *)(param_1 + 0x578) < 0.0) {
      fVar1 = *(float *)(param_1 + 0x578);
      do {
        fVar1 = fVar1 + 1.0;
      } while (fVar1 < 0.0);
      *(float *)(param_1 + 0x578) = fVar1;
    }
  }
  if (*(float *)(param_1 + 0x584) == 0.0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x57c) + *(float *)(param_1 + 0x584);
  *(float *)(param_1 + 0x57c) = fVar1;
  if (1.0 < fVar1) {
    fVar1 = *(float *)(param_1 + 0x57c);
    do {
      fVar1 = fVar1 - 1.0;
    } while (1.0 < fVar1);
    *(float *)(param_1 + 0x57c) = fVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0x57c)) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x57c);
  do {
    fVar1 = fVar1 + 1.0;
  } while (fVar1 < 0.0);
  *(float *)(param_1 + 0x57c) = fVar1;
  return;
}

