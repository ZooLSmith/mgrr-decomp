// src/unsorted/unit_015F15F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 015F15F0..015F1610, 2 functions

#include "types.h"

// 015F15F0  FUN_015f15f0  size=10  [run]
void FUN_015f15f0(void)

{
  Hw::cTexture::cTexture_5();
  return;
}

// 015F1610  FUN_015f1610  size=43  [run]
void FUN_015f1610(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 5;
  puVar1 = &DAT_01edc0d8;
  do {
    puVar1 = puVar1 + -0x388;
    FUN_00401070(puVar1,0x1c,0x20,Hw::cTexture::cTexture_5);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

