// src/unsorted/unit_00D8A8C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8A8C0..00D8AAF0, 6 functions

#include "types.h"

// 00D8A8C0  FUN_00d8a8c0  size=109  [run]
undefined4 FUN_00d8a8c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00dd3500(1,&DAT_01b7c168);
  if (iVar1 == 0) {
    DAT_01dc53d0 = 0;
    return 1;
  }
  iVar2 = FUN_00dd3500(0x414,&DAT_01b7c168);
  if (iVar2 != 0) {
    DAT_01dc53d4 = lib::StaticArray<Signal*,256>::StaticArray<Signal*,256>();
    DAT_01dc53d0 = iVar1;
    return 1;
  }
  DAT_01dc53d0 = iVar1;
  DAT_01dc53d4 = 0;
  return 1;
}

// 00D8A930  thunk_FUN_00d8a8c0  size=5  [run]
undefined4 thunk_FUN_00d8a8c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00dd3500(1,&DAT_01b7c168);
  if (iVar1 == 0) {
    DAT_01dc53d0 = 0;
    return 1;
  }
  iVar2 = FUN_00dd3500(0x414,&DAT_01b7c168);
  if (iVar2 != 0) {
    DAT_01dc53d4 = lib::StaticArray<Signal*,256>::StaticArray<Signal*,256>();
    DAT_01dc53d0 = iVar1;
    return 1;
  }
  DAT_01dc53d0 = iVar1;
  DAT_01dc53d4 = 0;
  return 1;
}

// 00D8A950  FUN_00d8a950  size=37  [run]
bool __fastcall FUN_00d8a950(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return iVar1 <= *(int *)(param_1 + 0x17c);
}

// 00D8A980  FUN_00d8a980  size=37  [run]
bool __fastcall FUN_00d8a980(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return iVar1 <= *(int *)(param_1 + 0x184);
}

// 00D8AA70  FUN_00d8aa70  size=128  [run]
/* WARNING: Removing unreachable block (ram,0x00d8aaa6) */
/* WARNING: Removing unreachable block (ram,0x00d8aab6) */

void FUN_00d8aa70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    if (DAT_01dc5518 == 0) {
      return;
    }
    iVar1 = *(int *)(DAT_01dc5518 + 0x114);
    LOCK();
    UNLOCK();
    iVar3 = DAT_01dc5518 + 0x10;
    if (iVar3 == 0) break;
    iVar2 = *(int *)(DAT_01dc5518 + 0x100);
    DAT_01dc5518 = iVar1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x370) != 0)) {
      FUN_00a1cd90(&DAT_01dc5520,iVar2,iVar3);
    }
  }
  DAT_01dc5518 = iVar1;
  return;
}

// 00D8AAF0  FUN_00d8aaf0  size=72  [run]
void __thiscall FUN_00d8aaf0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 100;
  uVar2 = 100;
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x188) = 200;
      *(undefined4 *)(param_1 + 0x180) = 200;
      return;
    }
    if (param_2 == 2) {
      uVar1 = 400;
      uVar2 = 400;
    }
  }
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  return;
}

