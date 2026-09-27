// src/unsorted/unit_00AA4BE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA4BE0..00AA4D20, 5 functions

#include "types.h"

// 00AA4BE0  FUN_00aa4be0  size=105  [run]
bool __thiscall FUN_00aa4be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00aa30d0(param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  iVar1 = 0x12;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)(param_1 + 0xe4);
  iVar1 = 0x80;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  iVar1 = FUN_00dd7240();
  return iVar1 != 0;
}

// 00AA4C50  FUN_00aa4c50  size=56  [run]
void __fastcall FUN_00aa4c50(int param_1)

{
  FUN_00dd7270();
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00AA4CB0  FUN_00aa4cb0  size=59  [run]
void __fastcall FUN_00aa4cb0(int param_1)

{
  FUN_00dd7270();
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x28),0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00AA4CF0  FUN_00aa4cf0  size=42  [run]
void FUN_00aa4cf0(void)

{
  int iVar1;
  
  FUN_00aa1170();
  iVar1 = FUN_00f98a40();
  FUN_00a98ae0(&LAB_00a98c30,5 - (uint)(iVar1 != 0),0,0xf);
  return;
}

// 00AA4D20  FUN_00aa4d20  size=46  [run]
undefined4 __thiscall FUN_00aa4d20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x20))) {
    uVar1 = FUN_00a98940(param_2,param_3,*(undefined4 *)(param_1 + 4),param_4);
    return uVar1;
  }
  return 0;
}

