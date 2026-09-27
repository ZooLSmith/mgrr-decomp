// src/unsorted/unit_0085BE10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085BE10..0085C530, 11 functions

#include "mgrr.h"

// 0085BE10  FUN_0085be10  size=53  [run]
bool __thiscall FUN_0085be10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd0) + *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xb8) == 0) {
    return true;
  }
  iVar1 = FUN_00e36060(param_2);
  return iVar1 != 0;
}

// 0085BF90  FUN_0085bf90  size=31  [run]
undefined4 FUN_0085bf90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 0085C0C0  FUN_0085c0c0  size=29  [run]
undefined4 __fastcall FUN_0085c0c0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      return *(undefined4 *)(*param_1 + 0x34);
    }
  }
  return 0;
}

// 0085C0E0  FUN_0085c0e0  size=71  [run]
undefined4 FUN_0085c0e0(void)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x80000000) != 0) {
    return 0;
  }
  iVar1 = FUN_00b7cda0();
  if (iVar1 != 1) {
    iVar1 = FUN_00bc32b0();
    if ((iVar1 == 0) && (iVar1 = FUN_00bda140(), iVar1 == 0)) {
      return 1;
    }
    return 0;
  }
  return 2;
}

// 0085C1B0  FUN_0085c1b0  size=35  [run]
void FUN_0085c1b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  return;
}

// 0085C270  FUN_0085c270  size=36  [run]
void FUN_0085c270(void)

{
  DAT_01dc08bc = 1;
  DAT_01dc08c0 = 0;
  FUN_00e5e050("core_se_btl_char_datsu_in",0);
  return;
}

// 0085C2A0  FUN_0085c2a0  size=26  [run]
void FUN_0085c2a0(void)

{
  DAT_01dc08c0 = 1;
  FUN_00e5e050("core_se_btl_char_datsu_out",0);
  return;
}

// 0085C300  FUN_0085c300  size=68  [run]
void __fastcall FUN_0085c300(int *param_1)

{
  if (param_1[0xaea] == 0) {
    (**(code **)(*param_1 + 0x3e0))(0xb5,param_1 + 0xabc);
  }
  param_1[0xaea] = 1;
  param_1[0xaeb] = 0x43960000;
  param_1[0xaec] = 0;
  return;
}

// 0085C430  FUN_0085c430  size=42  [run]
void __thiscall FUN_0085c430(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x3e60);
  param_2[1] = *(undefined4 *)(param_1 + 0x3e64);
  param_2[2] = *(undefined4 *)(param_1 + 0x3e68);
  param_2[3] = *(undefined4 *)(param_1 + 0x3e6c);
  return;
}

// 0085C460  FUN_0085c460  size=42  [run]
void __thiscall FUN_0085c460(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x3e70);
  param_2[1] = *(undefined4 *)(param_1 + 0x3e74);
  param_2[2] = *(undefined4 *)(param_1 + 0x3e78);
  param_2[3] = *(undefined4 *)(param_1 + 0x3e7c);
  return;
}

// 0085C530  FUN_0085c530  size=27  [run]
undefined4 __fastcall FUN_0085c530(int param_1)

{
  if ((*(int *)(param_1 + 0x5430) != 0) && (*(int *)(param_1 + 0x542c) != 0)) {
    return 1;
  }
  return 0;
}

