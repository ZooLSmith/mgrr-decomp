// src/unsorted/unit_00CC0A30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC0A30..00CC0AA0, 3 functions

#include "types.h"

// 00CC0A30  FUN_00cc0a30  size=67  [run]
void __thiscall
FUN_00cc0a30(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 == -1) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0x30);
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

// 00CC0A80  FUN_00cc0a80  size=17  [run]
undefined4 __fastcall FUN_00cc0a80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x180);
  }
  return uVar1;
}

// 00CC0AA0  FUN_00cc0aa0  size=34  [run]
undefined4 __fastcall FUN_00cc0aa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1f0) != 9 || (*(int *)(iVar1 + 0x18c) != 1)))) {
    return 0;
  }
  return 1;
}

