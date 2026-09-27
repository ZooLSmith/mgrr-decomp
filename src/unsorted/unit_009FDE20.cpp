// src/unsorted/unit_009FDE20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009FE920..009FE950, 2 functions

#include "mgrr.h"

// 009FE920  FUN_009fe920  size=38  [run]
void FUN_009fe920(undefined4 param_1)

{
  undefined1 local_14 [20];
  
  FUN_009fe180(local_14,0x14,param_1,0);
  FUN_00dec390(local_14);
  return;
}

// 009FE950  FUN_009fe950  size=107  [run]
undefined4 __thiscall FUN_009fe950(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = (uint *)FUN_00de44b0(&DAT_0165c264,0);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *puVar2;
    uVar4 = 0;
    *param_1 = uVar1;
    param_1[1] = (uint)(puVar2 + 1);
    if (uVar1 != 0) {
      iVar3 = 0;
      puVar2 = param_1 + 2;
      do {
        *puVar2 = param_1[1] + 0x18 + iVar3;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + 0x58;
      } while (uVar4 < *param_1);
    }
    param_1[0x42] = *(uint *)(param_2 + 4);
    return 1;
  }
  return 0;
}

