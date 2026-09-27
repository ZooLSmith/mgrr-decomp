// src/unsorted/unit_00A8A8B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8A8B0..00A8ADA0, 10 functions

#include "mgrr.h"

// 00A8A8B0  FUN_00a8a8b0  size=36  [run]
void __thiscall FUN_00a8a8b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_2;
    *(undefined4 *)(param_1 + 0xdc) = param_3;
  }
  return;
}

// 00A8A8E0  FUN_00a8a8e0  size=22  [run]
undefined4 __fastcall FUN_00a8a8e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xd8);
}

// 00A8A910  FUN_00a8a910  size=42  [run]
void __thiscall FUN_00a8a910(int param_1,undefined4 *param_2)

{
  FUN_00e26e90();
  *(undefined4 *)(param_1 + 0xe4) = *param_2;
  *(undefined4 *)(param_1 + 0xe8) = param_2[1];
  *(undefined4 *)(param_1 + 0xec) = param_2[2];
  return;
}

// 00A8A950  FUN_00a8a950  size=33  [run]
void __thiscall FUN_00a8a950(int param_1,undefined4 param_2)

{
  FUN_00e26e90();
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x1c))(param_2);
  return;
}

// 00A8A9B0  FUN_00a8a9b0  size=69  [run]
undefined4 __thiscall
FUN_00a8a9b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00e36390(param_1 + 0x98,param_3,param_2,param_4,param_5,param_6);
  return uVar2;
}

// 00A8AA00  FUN_00a8aa00  size=69  [run]
undefined4 __thiscall
FUN_00a8aa00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00e36450(param_1 + 0x98,param_3,param_2,param_4,param_5,param_6);
  return uVar2;
}

// 00A8AAA0  FUN_00a8aaa0  size=58  [run]
void FUN_00a8aaa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    Animation::Motion::Unit::setBlendRate(param_1,param_2,param_3,param_4);
  }
  return;
}

// 00A8AAE0  FUN_00a8aae0  size=36  [run]
void FUN_00a8aae0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return;
  }
  FUN_00e33780(param_1);
  return;
}

// 00A8AB10  FUN_00a8ab10  size=41  [run]
void FUN_00a8ab10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return;
  }
  FUN_00e33870(param_1,param_2);
  return;
}

// 00A8ADA0  FUN_00a8ada0  size=33  [run]
void __thiscall FUN_00a8ada0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a7c960(&param_2);
  *(undefined4 *)(param_1 + 0x670) = param_3;
  return;
}

