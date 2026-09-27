// lib/havok/unit_01284410.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01284410..01284680, 12 functions

#include "types.h"

// 01284410  FUN_01284410  size=17  [run]
void __fastcall FUN_01284410(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0128441f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xe0) + 0x24))();
  return;
}

// 01284450  FUN_01284450  size=25  [run]
void FUN_01284450(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b8c,param_1,param_2);
  return;
}

// 01284470  FUN_01284470  size=21  [run]
void FUN_01284470(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b8c,param_1);
  return;
}

// 012844B0  FUN_012844b0  size=26  [run]
void FUN_012844b0(undefined4 param_1,undefined1 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b8c,param_1,param_2);
  return;
}

// 012844D0  FUN_012844d0  size=51  [run]
undefined4 * __thiscall FUN_012844d0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_01010c40(&PTR_vftable_018e9b8c,param_2);
  }
  return param_1;
}

// 01284530  FUN_01284530  size=31  [run]
void __thiscall FUN_01284530(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01284560  FUN_01284560  size=9  [run]
void FUN_01284560(void)

{
  FUN_01010120();
  return;
}

// 01284590  FUN_01284590  size=15  [run]
int __thiscall FUN_01284590(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 012845B0  FUN_012845b0  size=32  [run]
void __thiscall FUN_012845b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01284620  FUN_01284620  size=25  [run]
void __thiscall FUN_01284620(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01284640  FUN_01284640  size=52  [run]
undefined4 __thiscall FUN_01284640(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x20);
    return uVar3;
  }
  return 0;
}

// 01284680  FUN_01284680  size=26  [run]
void __thiscall FUN_01284680(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

