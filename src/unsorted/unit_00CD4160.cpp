// src/unsorted/unit_00CD4160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD4160..00CD4230, 2 functions

#include "mgrr.h"

// 00CD4160  FUN_00cd4160  size=181  [run]
undefined4 __fastcall FUN_00cd4160(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
    if (*(int *)(param_1 + 0x74) != 0) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (*(int *)(param_1 + 0x70) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
        *(undefined4 *)(param_1 + 0x78) = 3;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 0;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = DAT_01bea094 >> 0x12;
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),~uVar1 & 1,3);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    return 0;
  case 2:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x1c));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      return 0;
    }
    break;
  case 3:
    uVar3 = 1;
  }
  return uVar3;
}

// 00CD4230  FUN_00cd4230  size=333  [run]
void __fastcall FUN_00cd4230(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 3)))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 3)))))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 3)))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 3)))))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 3)))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x41a00000;
    *(undefined4 *)(iVar1 + 0x20) = 0x42c80000;
    return;
  }
  return;
}

