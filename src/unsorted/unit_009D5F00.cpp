// src/unsorted/unit_009D5F00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D5F00..009D6110, 10 functions

#include "types.h"

// 009D5F00  FUN_009d5f00  size=128  [run]
void FUN_009d5f00(void)

{
  int iVar1;
  
  if (DAT_01b78868 == 0) {
    DAT_01bea084 = DAT_01bea084 & 0xfffbffff;
  }
  else {
    DAT_01bea084 = DAT_01bea084 | 0x40000;
  }
  if ((DAT_01bea09c & 0x8000000) == 0) {
    FUN_00ec8050();
    FUN_00f40ef0(1);
    FUN_00f416f0();
    iVar1 = FUN_00f40f60();
    if (iVar1 != 0) {
      DAT_01bea084 = DAT_01bea084 | 0x200;
      FUN_00ec6ff0();
      return;
    }
    DAT_01bea084 = DAT_01bea084 & 0xfffffdff;
    FUN_00ec6ff0();
    return;
  }
  return;
}

// 009D5F80  FUN_009d5f80  size=24  [run]
void FUN_009d5f80(void)

{
  if ((DAT_01bea09c & 0x8000000) == 0) {
    FUN_00f40f20();
    return;
  }
  return;
}

// 009D5FA0  FUN_009d5fa0  size=52  [run]
undefined4 FUN_009d5fa0(void)

{
  int iVar1;
  
  if (DAT_01b7886c == 2) {
    FUN_00f40ea0();
    iVar1 = FUN_00f41af0();
    if (iVar1 != 0) {
      return 0;
    }
    DAT_01b7886c = 3;
  }
  return 1;
}

// 009D5FE0  FUN_009d5fe0  size=95  [run]
void FUN_009d5fe0(void)

{
  int iVar1;
  
  if (DAT_01b7886c != 3) {
    FUN_00dd5650(&DAT_01659bb8);
    if (DAT_01b7886c == 1) {
      FUN_00f43b80();
      DAT_01b7886c = 2;
    }
    do {
      if (DAT_01b7886c != 2) {
        return;
      }
      FUN_00f40ea0();
      iVar1 = FUN_00f41af0();
    } while (iVar1 != 0);
    DAT_01b7886c = 3;
  }
  return;
}

// 009D6040  FUN_009d6040  size=14  [run]
void FUN_009d6040(void)

{
  FUN_00f4e800();
  DAT_01ee5424 = 0;
  return;
}

// 009D6070  FUN_009d6070  size=42  [run]
void FUN_009d6070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (param_1,param_2,0,0,param_3,param_4,0x15,"EffectHitSystemProxy");
  return;
}

// 009D60A0  FUN_009d60a0  size=53  [run]
void FUN_009d60a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 2;
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (param_1 + 4,param_1 + 8,param_1 + 0xc,0,param_2,param_3,0x15,"EffectHitSystemProxy");
  return;
}

// 009D60E0  FUN_009d60e0  size=9  [run]
void __fastcall FUN_009d60e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 009D60F0  FUN_009d60f0  size=24  [run]
undefined4 __fastcall FUN_009d60f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008f7780(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x4f0);
}

// 009D6110  FUN_009d6110  size=35  [run]
bool __fastcall FUN_009d6110(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008f7780(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return false;
  }
  return *(int *)(iVar1 + 0x4b0) == 0x700000;
}

