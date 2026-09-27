// src/unsorted/unit_0099A7F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A7F0..0099A7F0, 1 functions

#include "types.h"

// 0099A7F0  FUN_0099a7f0  size=83  [run]
uint * __thiscall FUN_0099a7f0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  iVar4 = param_1[1] * 8 + 8;
  puVar2 = param_1 + 3;
  if (*param_1 != 0) {
    do {
      if (*puVar2 == uVar1) {
        return puVar2;
      }
      if (param_1[2] == 0) {
        iVar4 = puVar2[1] * 8 + 8;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (uint *)((int)puVar2 + iVar4);
    } while (uVar3 < *param_1);
  }
  return (uint *)0x0;
}

