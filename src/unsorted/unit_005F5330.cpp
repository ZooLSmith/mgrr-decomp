// src/unsorted/unit_005F5330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F5330..005F5630, 7 functions

#include "mgrr.h"

// 005F5330  FUN_005f5330  size=153  [run]
int __thiscall FUN_005f5330(int param_1,int param_2)

{
  FUN_00a7c960(param_2);
  FUN_00a7c960(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  return param_1;
}

// 005F5480  FUN_005f5480  size=92  [run]
void __thiscall
FUN_005f5480(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_1 + 0x12fc) = param_3;
    *(undefined4 *)(param_1 + 0x1308) = 0;
    *(undefined4 *)(param_1 + 0x1300) = param_4;
    *(undefined4 *)(param_1 + 0x1324) = param_6;
    *(undefined4 *)(param_1 + 0x130c) = 1;
    *(undefined4 *)(param_1 + 0x1304) = param_5;
  }
  return;
}

// 005F5510  FUN_005f5510  size=83  [run]
undefined4 FUN_005f5510(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_80 [128];
  
  uVar1 = 0;
  if (DAT_018b9174 == 0x230) {
    _sprintf_s(local_80,0x80,"%s_%s.mot",param_1,param_2);
    uVar1 = FUN_00de4550(local_80,0);
  }
  return uVar1;
}

// 005F5570  FUN_005f5570  size=83  [run]
undefined4 FUN_005f5570(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_80 [128];
  
  uVar1 = 0;
  if (DAT_018b9174 == 0x230) {
    _sprintf_s(local_80,0x80,"%s_%s_0_seq.bxm",param_1,param_2);
    uVar1 = FUN_00de4550(local_80,0);
  }
  return uVar1;
}

// 005F5610  FUN_005f5610  size=1  [run]
void FUN_005f5610(void)

{
  return;
}

// 005F5620  FUN_005f5620  size=1  [run]
void FUN_005f5620(void)

{
  return;
}

// 005F5630  FUN_005f5630  size=1  [run]
void FUN_005f5630(void)

{
  return;
}

