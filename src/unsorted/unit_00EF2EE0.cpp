// src/unsorted/unit_00EF2EE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF2EE0..00EF2F70, 3 functions

#include "mgrr.h"

// 00EF2EE0  FUN_00ef2ee0  size=65  [run]
undefined4 __fastcall FUN_00ef2ee0(int param_1)

{
  if (*(char *)(param_1 + 0x4d8) != '\0') {
    if (*(int *)(param_1 + 0x84) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x84) + 0x24) != 4) {
        FUN_009cca90(param_1,&DAT_016dc400);
        return 0;
      }
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dc3a8);
  }
  return 0;
}

// 00EF2F30  FUN_00ef2f30  size=61  [run]
undefined4 __fastcall FUN_00ef2f30(int param_1)

{
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9f40(param_1 + 0x4f0);
    FUN_00ea9f80(param_1 + 400);
    return 1;
  }
  return 0;
}

// 00EF2F70  FUN_00ef2f70  size=26  [run]
undefined4 __fastcall FUN_00ef2f70(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    uVar1 = FUN_00ea9e80();
    return uVar1;
  }
  return 0;
}

