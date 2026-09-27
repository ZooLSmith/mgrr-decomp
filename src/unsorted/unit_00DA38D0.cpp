// src/unsorted/unit_00DA38D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DA38D0..00DA39C0, 7 functions

#include "types.h"

// 00DA38D0  FUN_00da38d0  size=51  [run]
void __fastcall FUN_00da38d0(int param_1)

{
  D3DXMatrixMultiply(param_1 + 0x200,param_1 + 0xb0,param_1 + 0x10);
  D3DXMatrixMultiply(param_1 + 0x240,param_1 + 0x50,param_1 + 0x130);
  return;
}

// 00DA3910  FUN_00da3910  size=45  [run]
void __fastcall FUN_00da3910(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x200);
  puVar3 = (undefined4 *)(param_1 + 0x280);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xb0);
  puVar3 = (undefined4 *)(param_1 + 0x170);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00DA3940  FUN_00da3940  size=51  [run]
void __fastcall FUN_00da3940(int param_1)

{
  D3DXMatrixMultiply(param_1 + 0x200,param_1 + 0xb0,param_1 + 0x10);
  D3DXMatrixMultiply(param_1 + 0x240,param_1 + 0x50,param_1 + 0x130);
  return;
}

// 00DA3980  FUN_00da3980  size=9  [run]
int __fastcall FUN_00da3980(int param_1)

{
  return param_1 + 0x200;
}

// 00DA3990  FUN_00da3990  size=9  [run]
int __fastcall FUN_00da3990(int param_1)

{
  return param_1 + 0x240;
}

// 00DA39A0  FUN_00da39a0  size=9  [run]
int __fastcall FUN_00da39a0(int param_1)

{
  return param_1 + 0x280;
}

// 00DA39C0  FUN_00da39c0  size=170  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00da39c0(int param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((DAT_01dc5f64 != 0) && (param_4 < DAT_01dc5f68)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return (undefined4 *)0x0;
  }
  (**(code **)(DAT_01dc5f60 + 4))();
  _DAT_01dc5f8c = *param_2;
  _DAT_01dc5f90 = param_2[1];
  _DAT_01dc5f94 = param_2[2];
  DAT_01dc5f98 = *param_3;
  DAT_01dc5f9c = param_3[1];
  DAT_01dc5fa0 = param_3[2];
  DAT_01dc5f68 = param_4;
  DAT_01dc5f69 = 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return &DAT_01dc5f60;
}

