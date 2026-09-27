// src/unsorted/unit_00F40C20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F40C20..00F41070, 15 functions

#include "types.h"

// 00F40C20  FUN_00f40c20  size=14  [run]
bool FUN_00f40c20(int param_1)

{
  return param_1 < 0x100;
}

// 00F40C30  FUN_00f40c30  size=20  [run]
bool FUN_00f40c30(int param_1)

{
  return param_1 - 0x8000U < 0x14;
}

// 00F40DF0  FUN_00f40df0  size=1  [run]
void FUN_00f40df0(void)

{
  return;
}

// 00F40E20  FUN_00f40e20  size=1  [run]
void FUN_00f40e20(void)

{
  return;
}

// 00F40E50  FUN_00f40e50  size=1  [run]
void FUN_00f40e50(void)

{
  return;
}

// 00F40EA0  FUN_00f40ea0  size=38  [run]
void __fastcall FUN_00f40ea0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1ef8) = 1;
  (**(code **)(**(int **)(param_1 + 0x1e70) + 0x10))();
  *(undefined4 *)(param_1 + 0x1ef8) = 0;
  return;
}

// 00F40ED0  FUN_00f40ed0  size=19  [run]
void __thiscall FUN_00f40ed0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0xc4) = param_2;
  return;
}

// 00F40EF0  FUN_00f40ef0  size=19  [run]
void __thiscall FUN_00f40ef0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 200) = param_2;
  return;
}

// 00F40F20  FUN_00f40f20  size=13  [run]
void __fastcall FUN_00f40f20(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f40f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1e70) + 0x18))();
  return;
}

// 00F40F40  FUN_00f40f40  size=19  [run]
void __fastcall FUN_00f40f40(int param_1)

{
  InterlockedIncrement((LONG *)(*(int *)(param_1 + 0x1e70) + 0xcc));
  return;
}

// 00F40F60  FUN_00f40f60  size=13  [run]
undefined4 __fastcall FUN_00f40f60(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0xcc);
}

// 00F40F90  FUN_00f40f90  size=85  [run]
int __fastcall FUN_00f40f90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_c;
  
  piVar1 = (int *)(param_1 + 0x1f28);
  do {
    iVar2 = *piVar1;
    local_c = iVar2 + -1;
    if (local_c < 0) {
      FUN_00ec4790(&DAT_016df9e4);
      local_c = 0;
    }
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = local_c;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00F40FF0  FUN_00f40ff0  size=62  [run]
int __thiscall FUN_00f40ff0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x1ed4);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00F41030  FUN_00f41030  size=62  [run]
int __thiscall FUN_00f41030(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x1f78);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00F41070  FUN_00f41070  size=7  [run]
undefined4 __fastcall FUN_00f41070(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f78);
}

