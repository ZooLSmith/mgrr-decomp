// src/unsorted/unit_00963140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00963140..009633C0, 2 functions

#include "types.h"

// 00963140  FUN_00963140  size=68  [run]
void __fastcall FUN_00963140(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar5 = 0x4e21;
  if (0 < *(int *)(param_1 + 0xfc)) {
    iVar3 = *(int *)(param_1 + 0xfc);
    piVar2 = (int *)(param_1 + 0x40);
    do {
      iVar1 = *piVar2;
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0x118) = iVar5;
  *(int *)(param_1 + 0x114) = iVar4;
  return;
}

// 009633C0  FUN_009633c0  size=171  [run]
void __fastcall FUN_009633c0(undefined4 *param_1)

{
  undefined4 local_14;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = local_14;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = local_14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = local_14;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_14;
  param_1[0x1a] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}

