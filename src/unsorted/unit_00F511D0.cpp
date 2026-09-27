// src/unsorted/unit_00F511D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F511D0..00F51200, 2 functions

#include "types.h"

// 00F511D0  FUN_00f511d0  size=47  [run]
int FUN_00f511d0(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = 0;
  uVar4 = 0;
  do {
    puVar3 = &DAT_018d74e0;
    uVar2 = 0;
    do {
      if (*puVar3 == uVar4) goto LAB_00f511f4;
      uVar2 = uVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (uVar2 < 0x100);
    puVar3 = (uint *)0x0;
LAB_00f511f4:
    iVar1 = iVar1 + puVar3[2];
    uVar4 = uVar4 + 1;
    if (0xf < uVar4) {
      return iVar1;
    }
  } while( true );
}

// 00F51200  FUN_00f51200  size=47  [run]
int FUN_00f51200(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = 0;
  uVar4 = 0;
  do {
    puVar3 = &DAT_018d74e0;
    uVar2 = 0;
    do {
      if (*puVar3 == uVar4) goto LAB_00f51224;
      uVar2 = uVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (uVar2 < 0x100);
    puVar3 = (uint *)0x0;
LAB_00f51224:
    iVar1 = iVar1 + puVar3[3];
    uVar4 = uVar4 + 1;
    if (0xf < uVar4) {
      return iVar1;
    }
  } while( true );
}

