// src/unsorted/unit_00CBC3E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC3E0..00CBC480, 2 functions

#include "types.h"

// 00CBC3E0  FUN_00cbc3e0  size=154  [run]
void FUN_00cbc3e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_01dc1238)[uVar2]) {
      (&DAT_01dc1224)[uVar2] = param_1;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  uVar3 = 0;
  uVar2 = 0xffffffff;
  do {
    if ((&DAT_01dc1238)[uVar3] == 0) {
      if (uVar2 == 0xffffffff) {
        uVar2 = uVar3;
      }
    }
    else {
      uVar4 = uVar3;
      if ((&DAT_01dc1224)[uVar3] == param_1) break;
    }
    uVar4 = uVar2;
    uVar3 = uVar3 + 1;
    uVar2 = uVar4;
  } while (uVar3 < 5);
  if (uVar4 != 0xffffffff) {
    (&DAT_01dc124c)[uVar4] = param_2;
    (&DAT_01dc1224)[uVar4] = param_1;
    (&DAT_01dc4e60)[uVar4 * 4] = *(undefined4 *)(param_1 + 0x40);
    (&DAT_01dc4e64)[uVar4 * 4] = *(undefined4 *)(param_1 + 0x44);
    (&DAT_01dc4e68)[uVar4 * 4] = *(undefined4 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    (&DAT_01dc1260)[uVar4] = 1;
    (&DAT_01dc4e6c)[uVar4 * 4] = uVar1;
  }
  return;
}

// 00CBC480  FUN_00cbc480  size=157  [run]
void FUN_00cbc480(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_01dc1238)[uVar2]) {
      (&DAT_01dc1224)[uVar2] = param_1;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  uVar3 = 0;
  uVar2 = 0xffffffff;
  do {
    if ((&DAT_01dc1238)[uVar3] == 0) {
      if (uVar2 == 0xffffffff) {
        uVar2 = uVar3;
      }
    }
    else {
      uVar4 = uVar3;
      if ((&DAT_01dc1224)[uVar3] == param_1) break;
    }
    uVar4 = uVar2;
    uVar3 = uVar3 + 1;
    uVar2 = uVar4;
  } while (uVar3 < 5);
  if (uVar4 != 0xffffffff) {
    (&DAT_01dc1224)[uVar4] = param_1;
    (&DAT_01dc124c)[uVar4] = 0;
    (&DAT_01dc4e60)[uVar4 * 4] = *param_2;
    (&DAT_01dc4e64)[uVar4 * 4] = param_2[1];
    (&DAT_01dc4e68)[uVar4 * 4] = param_2[2];
    uVar1 = param_2[3];
    (&DAT_01dc1260)[uVar4] = 1;
    (&DAT_01dc4e6c)[uVar4 * 4] = uVar1;
  }
  return;
}

