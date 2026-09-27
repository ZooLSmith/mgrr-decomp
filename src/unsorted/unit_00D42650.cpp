// src/unsorted/unit_00D42650.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D42650..00D42650, 1 functions

#include "types.h"

// 00D42650  FUN_00d42650  size=149  [run]
void __fastcall FUN_00d42650(int param_1)

{
  int iVar1;
  uint uVar2;
  float local_30 [4];
  float local_20 [7];
  
  iVar1 = FUN_00d9fa80(local_20,param_1 + 0x50);
  if (((iVar1 != 0) && (iVar1 = FUN_00d9fa80(local_30,param_1 + 0x60), iVar1 != 0)) &&
     (uVar2 = (uint)(local_20[0] <
                    (5.0 - (float)(*(uint *)(param_1 + 0x74) == 0) * 10.0) + local_30[0]),
     uVar2 != *(uint *)(param_1 + 0x74))) {
    if (uVar2 != 0) {
      FUN_00d3abd0();
      *(uint *)(param_1 + 0x74) = uVar2;
      return;
    }
    FUN_00cb71a0();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

