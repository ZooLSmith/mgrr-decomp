// src/unsorted/unit_00DECA40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DECA40..00DECB90, 8 functions

#include "mgrr.h"

// 00DECA40  FUN_00deca40  size=38  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00deca40(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00DECA70  FUN_00deca70  size=36  [run]
void __fastcall FUN_00deca70(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DECAA0  FUN_00decaa0  size=42  [run]
void __fastcall FUN_00decaa0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
                    /* WARNING: Could not recover jumptable at 0x00decac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DECAD0  FUN_00decad0  size=21  [run]
undefined4 * __fastcall FUN_00decad0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DECAF0  FUN_00decaf0  size=36  [run]
void __fastcall FUN_00decaf0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DECB20  FUN_00decb20  size=27  [run]
void __fastcall FUN_00decb20(undefined4 param_1,size_t param_2,wchar_t *param_3,wchar_t *param_4)

{
  FID_conflict___vswprintf_p_l(param_3,param_2,param_4,(_locale_t)0x0,&stack0x0000000c);
  return;
}

// 00DECB40  FUN_00decb40  size=70  [run]
void __fastcall FUN_00decb40(undefined4 *param_1)

{
  param_1[2] = 0x100;
  param_1[4] = 0x100;
  param_1[3] = 0x200;
  param_1[5] = 0x200;
  *param_1 = 0x40;
  param_1[1] = 0x80;
  param_1[6] = 0x20000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x1010101;
  param_1[10] = 0x1010101;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  return;
}

// 00DECB90  FUN_00decb90  size=1  [run]
void FUN_00decb90(void)

{
  return;
}

