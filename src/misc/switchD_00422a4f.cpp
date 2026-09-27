// src/misc/switchD_00422a4f.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00422DB9..00422DB9, 1 functions

#include "types.h"

// 00422DB9  switchD_00422a4f::caseD_6  size=156  [class]
undefined4 switchD_00422a4f::caseD_6(void)

{
  code *pcVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  float10 in_ST0;
  undefined4 uVar3;
  
  if (unaff_EDI == 0) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x15;
  }
  FUN_00aa4080(uVar3,0,0x3d088889,(float)in_ST0,0,0xbf800000,(float)in_ST0);
  FUN_00a96070(0,0x8000000,1);
  pcVar1 = *(code **)(*unaff_ESI + 0x1d4);
  unaff_ESI[0x440] = 7;
  (*pcVar1)(0);
  unaff_ESI[0x225] = 0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    return 1;
  }
  return 0;
}

