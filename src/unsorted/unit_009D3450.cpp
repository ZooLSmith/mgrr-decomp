// src/unsorted/unit_009D3450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D3450..009D3F70, 6 functions

#include "mgrr.h"

// 009D3450  FUN_009d3450  size=46  [run]
void __thiscall FUN_009d3450(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0x80000000 >> ((byte)param_2 & 0x1f);
  puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}

// 009D3590  FUN_009d3590  size=120  [run]
undefined4 __thiscall FUN_009d3590(int param_1,int param_2,int *param_3)

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

// 009D3670  FUN_009d3670  size=120  [run]
undefined4 __thiscall FUN_009d3670(int param_1,int param_2,int *param_3)

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

// 009D3A90  FUN_009d3a90  size=21  [run]
void FUN_009d3a90(undefined4 param_1,undefined4 param_2)

{
  FUN_00f51070(param_1,8,param_2);
  return;
}

// 009D3B90  FUN_009d3b90  size=63  [run]
undefined4 __thiscall FUN_009d3b90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0xd4))(iVar1,param_2);
  return 1;
}

// 009D3F70  FUN_009d3f70  size=53  [run]
void __fastcall FUN_009d3f70(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

