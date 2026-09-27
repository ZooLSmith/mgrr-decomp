// src/unsorted/unit_00590FE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00590FE0..00590FE0, 1 functions

#include "types.h"

// 00590FE0  FUN_00590fe0  size=236  [run]
undefined4 __fastcall FUN_00590fe0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar5 = (int *)param_1[0x19f];
  piVar4 = piVar5 + param_1[0x1a1] * 0x54;
  do {
    if (piVar5 == piVar4) {
      return 0;
    }
    iVar2 = *piVar5;
    if (((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && ((iVar2 != 0x1b0 && (iVar2 != 0x147))))
       && (iVar2 = FUN_00a81330(), iVar2 != param_1[0x13c])) {
      if (iVar2 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      if (((iVar3 != 0) && ((*(byte *)(iVar3 + 0x4c0) & 0x10) != 0)) &&
         (((piVar5[0x23] & 0x200U) != 0 ||
          ((piVar5[0x3b] != 0 && (iVar2 = FUN_00a8e520(), iVar2 != 0)))))) {
        FUN_0043e160(piVar5);
        param_1[0x261] = 0x40400000;
        pcVar1 = *(code **)(*param_1 + 0x198);
        param_1[0x260] = 1;
        (*pcVar1)(iVar3,piVar5,0x100);
        return 1;
      }
    }
    piVar5 = piVar5 + 0x54;
  } while( true );
}

