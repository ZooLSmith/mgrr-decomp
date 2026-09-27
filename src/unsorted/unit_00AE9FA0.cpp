// src/unsorted/unit_00AE9FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AE9FA0..00AEA3C0, 12 functions

#include "mgrr.h"

// 00AE9FA0  FUN_00ae9fa0  size=1  [run]
void FUN_00ae9fa0(void)

{
  return;
}

// 00AE9FC0  FUN_00ae9fc0  size=84  [run]
void __fastcall FUN_00ae9fc0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (param_1[0x187] != 0x1c) {
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  return;
}

// 00AEA040  FUN_00aea040  size=1  [run]
void FUN_00aea040(void)

{
  return;
}

// 00AEA060  FUN_00aea060  size=58  [run]
undefined4 __fastcall FUN_00aea060(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x878) = 0x41200000;
      *(undefined4 *)(param_1 + 0x87c) = 0xbf800000;
      return 1;
    }
  }
  return 0;
}

// 00AEA0A0  FUN_00aea0a0  size=16  [run]
void FUN_00aea0a0(void)

{
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 00AEA0C0  FUN_00aea0c0  size=16  [run]
void FUN_00aea0c0(void)

{
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 00AEA0D0  FUN_00aea0d0  size=49  [run]
void __fastcall FUN_00aea0d0(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) == 0) && (600.0 < *(float *)(param_1 + 0x878))) {
    FUN_00a8cb50(2);
    FUN_00a8cb60(0);
  }
  return;
}

// 00AEA110  FUN_00aea110  size=135  [run]
void __fastcall FUN_00aea110(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    uVar2 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x21d] = 0x432a0000;
    param_1[0x21c] = 0;
  }
  else if (iVar1 == 1) {
    if (215.0 < (float)param_1[0x21e]) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if ((iVar1 == 2) && (600.0 < (float)param_1[0x21e])) {
    FUN_00a8cb50(2);
    FUN_00a8cb60(0);
    return;
  }
  return;
}

// 00AEA1F0  FUN_00aea1f0  size=130  [run]
void __fastcall FUN_00aea1f0(int param_1)

{
  undefined4 local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x618) != 1) {
    FUN_00d9fa80(&local_20,param_1 + 0x50);
    FUN_00f95eb0(local_20,local_1c,0x41a00000,0xffffffff);
    FUN_00f96580(local_20,local_1c + 20.0,0x41700000,0xffffffff,1,"DATSU!");
  }
  return;
}

// 00AEA310  FUN_00aea310  size=123  [run]
void __fastcall FUN_00aea310(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) | 2;
  FUN_00a9e290(&DAT_016a04c8,0,0,0x3f800000,0x8100000,0,0x3f800000);
  iVar1 = FUN_00a12210(0x16);
  if (iVar1 != 0) {
    iVar1 = FUN_00a12210(0x16);
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0x17);
  if (iVar1 != 0) {
    iVar1 = FUN_00a12210(0x17);
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  return;
}

// 00AEA390  FUN_00aea390  size=44  [run]
void FUN_00aea390(void)

{
  FUN_00a9e290(&DAT_016a04d0,0,0,0x3f800000,0x8000000,0,0x3f800000);
  return;
}

// 00AEA3C0  FUN_00aea3c0  size=44  [run]
void FUN_00aea3c0(void)

{
  FUN_00a9e290(&DAT_016a04d8,0,0,0x3f800000,0x8100000,0,0x3f800000);
  return;
}

