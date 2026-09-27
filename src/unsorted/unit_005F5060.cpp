// src/unsorted/unit_005F5060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F5060..005F5060, 1 functions

#include "mgrr.h"

// 005F5060  FUN_005f5060  size=58  [run]
void __fastcall FUN_005f5060(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0) || (*(char *)(param_1 + 0xdb5) != '\0')) {
    *(undefined1 *)(param_1 + 0xdbe) = 0;
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

