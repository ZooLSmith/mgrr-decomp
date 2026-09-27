// src/unsorted/unit_00C83A60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C83A60..00C83D40, 5 functions

#include "mgrr.h"

// 00C83A60  FUN_00c83a60  size=120  [run]
undefined4 __thiscall FUN_00c83a60(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00C83B60  FUN_00c83b60  size=26  [run]
void FUN_00c83b60(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,5,param_2,&stack0x0000000c);
  return;
}

// 00C83B80  FUN_00c83b80  size=42  [run]
uint FUN_00c83b80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b354f0;
  (**(code **)(*param_1 + 4))(&DAT_01b354f0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00C83BB0  FUN_00c83bb0  size=42  [run]
uint FUN_00c83bb0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b354d8;
  (**(code **)(*param_1 + 4))(&DAT_01b354d8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00C83D40  FUN_00c83d40  size=43  [run]
void __fastcall FUN_00c83d40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

