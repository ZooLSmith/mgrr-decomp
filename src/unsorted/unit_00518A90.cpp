// src/unsorted/unit_00518A90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00518A90..00518E50, 13 functions

#include "mgrr.h"

// 00518A90  FUN_00518a90  size=25  [run]
undefined4 __fastcall FUN_00518a90(int param_1)

{
  if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
    return 1;
  }
  return 0;
}

// 00518AD0  FUN_00518ad0  size=37  [run]
undefined4 FUN_00518ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 00518B00  FUN_00518b00  size=37  [run]
undefined4 FUN_00518b00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 00518B30  FUN_00518b30  size=37  [run]
undefined4 FUN_00518b30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 00518B60  FUN_00518b60  size=37  [run]
undefined4 FUN_00518b60(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 00518B90  FUN_00518b90  size=37  [run]
undefined4 FUN_00518b90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 00518C90  FUN_00518c90  size=63  [run]
void __thiscall
FUN_00518c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0xa64) = 1;
  FUN_00a7c960(&param_2);
  *(undefined4 *)(param_1 + 0xa70) = param_4;
  *(undefined4 *)(param_1 + 0xa78) = param_3;
  *(undefined4 *)(param_1 + 0xa6c) = param_5;
  return;
}

// 00518D00  FUN_00518d00  size=28  [run]
void FUN_00518d00(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00518D20  FUN_00518d20  size=18  [run]
void FUN_00518d20(void)

{
  FUN_00a81330();
  FUN_00a7c8a0();
  return;
}

// 00518DA0  FUN_00518da0  size=24  [run]
undefined4 __fastcall FUN_00518da0(int param_1)

{
  if ((*(int *)(param_1 + 0x618) != 0) && (*(int *)(param_1 + 0x618) != 0xb)) {
    return 0;
  }
  return 1;
}

// 00518DC0  FUN_00518dc0  size=85  [run]
void __thiscall FUN_00518dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined4 *)(param_1 + 0x1434) = param_3;
  *(undefined4 *)(param_1 + 0x1440) = *param_4;
  *(undefined4 *)(param_1 + 0x1444) = param_4[1];
  *(undefined4 *)(param_1 + 0x1448) = param_4[2];
  *(undefined4 *)(param_1 + 0x144c) = param_4[3];
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  return;
}

// 00518E20  FUN_00518e20  size=26  [run]
void __fastcall FUN_00518e20(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1434) = 0xffffffff;
  return;
}

// 00518E50  FUN_00518e50  size=26  [run]
void __fastcall FUN_00518e50(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1804) = 0xffffffff;
  return;
}

