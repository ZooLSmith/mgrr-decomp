// src/unsorted/unit_00D48D60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48D60..00D48D60, 1 functions

#include "mgrr.h"

// 00D48D60  FUN_00d48d60  size=125  [run]
void FUN_00d48d60(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0xf5010;
  uVar3 = FUN_00e03ea0("emblem",0xf5010);
  iVar4 = FUN_00a18d70(uVar3,uVar8);
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
     (iVar7 = 0, 0 < *(short *)(iVar4 + 0x324))) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar4 + 800);
      iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_01640d84), iVar5 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(iVar4 + 0x324));
  }
  return;
}

