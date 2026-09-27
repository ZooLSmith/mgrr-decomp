// src/unsorted/unit_00A48DB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A48DB0..00A48F80, 6 functions

#include "mgrr.h"

// 00A48DB0  FUN_00a48db0  size=46  [run]
void __fastcall FUN_00a48db0(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0xd) {
    FUN_00e5f8c0(param_1);
    FUN_00e51d60(param_1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00A48E30  FUN_00a48e30  size=69  [run]
void __fastcall FUN_00a48e30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != -1) {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 5)) {
      FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x2c));
      FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x28) = 0xd;
  }
  return;
}

// 00A48E90  FUN_00a48e90  size=71  [run]
void __fastcall FUN_00a48e90(int param_1)

{
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

// 00A48EE0  FUN_00a48ee0  size=49  [run]
undefined4 __fastcall FUN_00a48ee0(int param_1)

{
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x28) = 0x13;
  return 1;
}

// 00A48F20  FUN_00a48f20  size=83  [run]
undefined4 __fastcall FUN_00a48f20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar1 = FUN_00e9cf60(*(int *)(param_1 + 0x30)), iVar1 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}

// 00A48F80  FUN_00a48f80  size=113  [run]
void __thiscall FUN_00a48f80(int param_1,char *param_2,size_t param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) == -3) {
    _sprintf_s(param_2,param_3,"");
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x24) & 0xff;
  uVar1 = (int)*(uint *)(param_1 + 0x24) >> 8 & 0xff;
  if (param_4 == 0) {
    _sprintf_s(param_2,param_3,"st%x\\r%x%02x.dat",uVar1,uVar1,uVar2);
    return;
  }
  _sprintf_s(param_2,param_3,"st%x\\r%x%02x.dtt",uVar1,uVar1,uVar2);
  return;
}

