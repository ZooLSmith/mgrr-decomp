// src/unsorted/unit_00D47550.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47550..00D47550, 1 functions

#include "types.h"

// 00D47550  FUN_00d47550  size=160  [run]
void __fastcall FUN_00d47550(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 0:
    FUN_00c1d5b0(0x6030,0);
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    return;
  case 1:
    iVar2 = FUN_00c1d6a0();
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
      return;
    }
    break;
  case 2:
    iVar2 = FUN_00c1d6f0();
    if (iVar2 != 0) {
      uVar1 = cFade::set(0,0xff000000,0xff000000,10,1,0,0x68);
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
      *(undefined4 *)(param_1 + 0x154) = uVar1;
      return;
    }
    break;
  case 3:
    iVar2 = FUN_00c1d6c0();
    if (iVar2 == 0) {
      FUN_00a4ad50(0x710,&DAT_01657afc,0x7010);
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    }
  }
  return;
}

