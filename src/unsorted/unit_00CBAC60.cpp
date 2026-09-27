// src/unsorted/unit_00CBAC60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBAC60..00CBAC80, 3 functions

#include "types.h"

// 00CBAC60  FUN_00cbac60  size=15  [run]
void __fastcall FUN_00cbac60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cba930();
    return;
  }
  return;
}

// 00CBAC70  FUN_00cbac70  size=15  [run]
void __fastcall FUN_00cbac70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cba780();
    return;
  }
  return;
}

// 00CBAC80  FUN_00cbac80  size=152  [run]
void FUN_00cbac80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while (((&DAT_01dbfde0)[iVar1] == 0 || ((&DAT_01dbfd60)[iVar1] != param_2))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      iVar1 = 0;
      do {
        if ((&DAT_01dbfde0)[iVar1] == 0) {
          DAT_01dc0e04 = DAT_01dc0e04 + 1;
          (&DAT_01dbfd60)[iVar1] = param_2;
          (&DAT_01dbfda0)[iVar1] = param_1;
          (&DAT_01dbfd20)[iVar1] = param_3;
          (&DAT_01dbfde0)[iVar1] = 1;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
      return;
    }
  }
  if (0 < param_1) {
    (&DAT_01dbfda0)[iVar1] = (&DAT_01dbfda0)[iVar1] + param_1;
  }
  (&DAT_01dbfd20)[iVar1] = param_3;
  if (DAT_018b561c != iVar1) {
    return;
  }
  DAT_01dc0e08 = 1;
  return;
}

