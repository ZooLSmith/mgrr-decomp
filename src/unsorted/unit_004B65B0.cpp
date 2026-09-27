// src/unsorted/unit_004B65B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B65B0..004B6770, 7 functions

#include "mgrr.h"

// 004B65B0  FUN_004b65b0  size=64  [run]
void __thiscall FUN_004b65b0(int param_1,undefined4 param_2)

{
  short *psVar1;
  
  *(undefined4 *)(param_1 + 0x1238) = param_2;
  psVar1 = &DAT_0163ee78;
  do {
    FUN_00a33520((short)param_2 == *psVar1,0x160,*psVar1);
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x163ee82);
  return;
}

// 004B65F0  FUN_004b65f0  size=113  [run]
void FUN_004b65f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 != 0) {
    FUN_004b65b0(3);
    return;
  }
  iVar1 = FUN_00a8c760(0x35);
  if (iVar1 != 0) {
    FUN_004b65b0(4);
    return;
  }
  iVar1 = FUN_00a8c760(0x36);
  if (iVar1 != 0) {
    FUN_004b65b0(5);
    return;
  }
  iVar1 = FUN_00a8c760(0x37);
  if (iVar1 != 0) {
    FUN_004b65b0(6);
    return;
  }
  iVar1 = FUN_00a8c760(0x38);
  if (iVar1 != 0) {
    FUN_004b65b0(8);
  }
  return;
}

// 004B6710  FUN_004b6710  size=1  [run]
void FUN_004b6710(void)

{
  return;
}

// 004B6720  FUN_004b6720  size=23  [run]
void FUN_004b6720(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 004B6740  FUN_004b6740  size=1  [run]
void FUN_004b6740(void)

{
  return;
}

// 004B6750  FUN_004b6750  size=23  [run]
void FUN_004b6750(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 004B6770  FUN_004b6770  size=1  [run]
void FUN_004b6770(void)

{
  return;
}

