// src/unsorted/unit_00EC45D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC45D0..00EC4840, 6 functions

#include "mgrr.h"

// 00EC45D0  FUN_00ec45d0  size=108  [run]
void FUN_00ec45d0(void)

{
  DAT_01eddb74 = &DAT_01eddb78;
  FUN_009ce580();
  DAT_01eddb60 = 0;
  DAT_01eddb4c = 0;
  DAT_01eddb38 = 0;
  DAT_01eddb64 = 0;
  DAT_01eddb50 = 0;
  DAT_01eddb3c = 0;
  DAT_01eddb68 = 0;
  DAT_01eddb54 = 0;
  DAT_01eddb40 = 0;
  DAT_01eddb6c = 0;
  DAT_01eddb58 = 0;
  DAT_01eddb44 = 0;
  DAT_01eddb70 = 0;
  DAT_01eddb5c = 0;
  DAT_01eddb48 = 0;
  DAT_01eddb34 = 0;
  DAT_01eddb30 = 0;
  DAT_01eddb2c = 0;
  return;
}

// 00EC4720  FUN_00ec4720  size=79  [run]
undefined4 __thiscall FUN_00ec4720(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_00de3540(param_3,param_4);
  *(undefined4 *)(param_1 + 8) = param_2;
  iVar1 = FUN_00de3d80(0,"header.bxm");
  if ((iVar1 != 0) && (iVar1 = FUN_00e062b0(iVar1,0), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// 00EC4790  FUN_00ec4790  size=1  [run]
void FUN_00ec4790(void)

{
  return;
}

// 00EC47A0  FUN_00ec47a0  size=1  [run]
void FUN_00ec47a0(void)

{
  return;
}

// 00EC47C0  FUN_00ec47c0  size=11  [run]
void FUN_00ec47c0(void)

{
  DAT_01eddb24 = &DAT_018d62d8;
  return;
}

// 00EC4840  FUN_00ec4840  size=8  [run]
void FUN_00ec4840(void)

{
  FUN_00e085e0();
  return;
}

