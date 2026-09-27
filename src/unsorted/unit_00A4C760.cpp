// src/unsorted/unit_00A4C760.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4C760..00A4C980, 7 functions

#include "types.h"

// 00A4C760  FUN_00a4c760  size=8  [run]
void FUN_00a4c760(void)

{
  FUN_00a4bf00();
  return;
}

// 00A4C770  FUN_00a4c770  size=22  [run]
bool FUN_00a4c770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4bdf0(param_1);
  return iVar1 != 0;
}

// 00A4C790  FUN_00a4c790  size=90  [run]
undefined4 __fastcall FUN_00a4c790(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x5c);
  do {
    if ((*piVar1 != 0) && (piVar1[-1] != -1)) {
      switch(*piVar1) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_00a4c7b8_caseD_1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xf;
  } while (iVar2 < 8);
  if (((*(int *)(param_1 + 0xc) == 0) && (iVar2 = FUN_00a4bf00(), iVar2 != 0)) &&
     (*(int *)(param_1 + 0xc) == 0)) {
    return 1;
  }
switchD_00a4c7b8_caseD_1:
  return 0;
}

// 00A4C810  FUN_00a4c810  size=22  [run]
bool FUN_00a4c810(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4bf60(param_1);
  return iVar1 != 0;
}

// 00A4C830  FUN_00a4c830  size=67  [run]
int __thiscall FUN_00a4c830(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x50);
  while ((piVar2[3] == 0 || (*piVar2 != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xf;
    if (7 < iVar1) {
      return 0;
    }
  }
  iVar1 = param_1 + 0x34 + iVar1 * 0x3c;
  if ((iVar1 == 0) || (iVar1 = iVar1 + 8, iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// 00A4C890  FUN_00a4c890  size=160  [run]
undefined4 __fastcall FUN_00a4c890(int param_1)

{
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 4) = 3;
  return 1;
}

// 00A4C980  FUN_00a4c980  size=96  [run]
undefined4 __fastcall FUN_00a4c980(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  puVar3 = (uint *)(param_1 + 0x214);
  while (((uVar1 = *puVar3, uVar1 == 0xffffffff || ((int)uVar1 < 0x100)) ||
         (((uVar1 = uVar1 & 0xff, uVar1 != 0 &&
           (((uVar1 != 0x20 && (uVar1 != 0x40)) && (uVar1 != 0x60)))) &&
          (((uVar1 != 0x80 && (uVar1 != 0xa0)) && (uVar1 != 0xc0))))))) {
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (7 < uVar2) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(param_1 + 0x214 + uVar2 * 4);
}

