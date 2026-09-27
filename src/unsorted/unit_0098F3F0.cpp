// src/unsorted/unit_0098F3F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F3F0..0098F690, 5 functions

#include "mgrr.h"

// 0098F3F0  FUN_0098f3f0  size=63  [run]
undefined4 FUN_0098f3f0(undefined4 param_1)

{
  switch(param_1) {
  case 8:
    return 4;
  case 9:
  case 0x14:
    return 3;
  case 10:
    return 0;
  case 0xb:
    return 1;
  case 0xc:
    return 2;
  default:
    return 9;
  case 0x15:
    return 0xffffffff;
  }
}

// 0098F460  FUN_0098f460  size=124  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0098f460(int param_1)

{
  byte bVar1;
  
  DAT_01bea064 = DAT_01bea064 & 0xffffefff;
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x38))(1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  bVar1 = 0;
  do {
    FUN_00e9d6a0(*(undefined4 *)(param_1 + (char)bVar1 * 4));
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xe);
  FUN_00ce1ba0();
  _DAT_01b391f0 = 0;
  return;
}

// 0098F4E0  FUN_0098f4e0  size=47  [run]
undefined4 __fastcall FUN_0098f4e0(int param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + (char)bVar2 * 4));
    if (iVar1 == 0) {
      return 0;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0xe);
  return 1;
}

// 0098F5D0  FUN_0098f5d0  size=34  [run]
void __thiscall FUN_0098f5d0(int param_1,undefined4 param_2)

{
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),param_2);
  return;
}

// 0098F690  FUN_0098f690  size=165  [run]
void __fastcall FUN_0098f690(int param_1)

{
  if (DAT_01dc1418 != '\0') {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x6c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x68),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 100),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),1);
    return;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x6c),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x68),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 100),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),0);
  return;
}

