// src/unsorted/unit_0094D9A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094D9A0..0094DA00, 3 functions

#include "types.h"

// 0094D9A0  FUN_0094d9a0  size=9  [run]
bool __fastcall FUN_0094d9a0(int param_1)

{
  return *(int *)(param_1 + 0x68) == 0;
}

// 0094D9B0  FUN_0094d9b0  size=71  [run]
void __fastcall FUN_0094d9b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  param_1[0x17] = param_1[0x17] + 1;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x17]) {
    iVar2 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(1,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094DA00  FUN_0094da00  size=81  [run]
void __thiscall FUN_0094da00(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  param_1[0x17] = param_1[0x17] + param_2;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x17]) {
    iVar2 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(param_2,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

