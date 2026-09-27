// src/unsorted/unit_00C77FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77FC0..00C77FC0, 1 functions

#include "mgrr.h"

// 00C77FC0  FUN_00c77fc0  size=161  [run]
undefined4 FUN_00c77fc0(uint3 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_4;
  
  local_4 = (uint)*param_1;
  iVar1 = __stricmp("Id:",(char *)&local_4);
  if (iVar1 != 0) {
    uVar3 = FUN_00e03ea0(param_1);
    FUN_00a18df0(param_2,uVar3);
    return 1;
  }
  iVar1 = 3;
  do {
    if (*(char *)(iVar1 + (int)param_1) != ' ') {
      iVar1 = (int)param_1 + iVar1;
      goto LAB_00c78003;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
LAB_00c78003:
  iVar2 = FUN_009fde60(iVar1);
  if (iVar2 == -1) {
    FUN_00dd5650(&DAT_016a89d0,iVar1);
    return 0;
  }
  FUN_00a814d0(param_2,iVar2);
  return 1;
}

