// src/unsorted/unit_00D4AC40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AC40..00D4AD40, 5 functions

#include "mgrr.h"

// 00D4AC40  FUN_00d4ac40  size=12  [run]
undefined4 __fastcall FUN_00d4ac40(undefined4 param_1)

{
  FUN_00de3530();
  return param_1;
}

// 00D4AC50  FUN_00d4ac50  size=91  [run]
void __fastcall FUN_00d4ac50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_14 [20];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    _sprintf_s(local_14,0x14,"ph7/p715.dat");
    iVar1 = FUN_00dec390(local_14);
    if (iVar1 != 0) {
      uVar2 = FUN_00e9e570(2,local_14,&DAT_01b7ddc0,0,0);
      *(undefined4 *)(param_1 + 8) = uVar2;
    }
    *(uint *)(param_1 + 0xc) = (uint)(*(int *)(param_1 + 8) != 0);
  }
  return;
}

// 00D4ACB0  FUN_00d4acb0  size=59  [run]
void __fastcall FUN_00d4acb0(int param_1)

{
  FUN_00e51db0(param_1,1);
  FUN_00de3540(0,0);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00D4ACF0  FUN_00d4acf0  size=71  [run]
void __fastcall FUN_00d4acf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 8));
      FUN_00de3540(uVar2,uVar3);
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_00e51d80(param_1,1);
    }
  }
  return;
}

// 00D4AD40  FUN_00d4ad40  size=12  [run]
bool FUN_00d4ad40(void)

{
  int iVar1;
  
  iVar1 = FUN_00de3560();
  return iVar1 != 0;
}

