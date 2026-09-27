// src/unsorted/unit_00843CB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00843CB0..00843E70, 3 functions

#include "mgrr.h"

// 00843CB0  FUN_00843cb0  size=141  [run]
void __thiscall FUN_00843cb0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_1 + 0x1444) = param_3;
    *(undefined4 *)(param_1 + 0x1450) = *param_4;
    *(undefined4 *)(param_1 + 0x1454) = param_4[1];
    *(undefined4 *)(param_1 + 0x1458) = param_4[2];
    *(undefined4 *)(param_1 + 0x145c) = param_4[3];
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00a7c8a0();
    uVar1 = FUN_009f8b40();
    FUN_009f8ae0(uVar1);
    FUN_00a7c8a0();
    uVar1 = FUN_009f8b40();
    FUN_0091a980(uVar1);
  }
  return;
}

// 00843D40  FUN_00843d40  size=145  [run]
void __thiscall FUN_00843d40(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x14d0) = *param_2;
  *(undefined4 *)(param_1 + 0x14d4) = param_2[1];
  *(undefined4 *)(param_1 + 0x14d8) = param_2[2];
  *(undefined4 *)(param_1 + 0x14dc) = param_2[3];
  FUN_00a8caf0(7,0,0,0);
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1444) = 0xffffffff;
  FUN_00e5e0c0("em01a0_se_atk_throw_car",param_1,0xffffffff,0);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  return;
}

// 00843E70  FUN_00843e70  size=42  [run]
uint FUN_00843e70(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35ad4;
  (**(code **)(*param_1 + 4))(&DAT_01b35ad4);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

