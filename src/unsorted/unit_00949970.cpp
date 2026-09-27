// src/unsorted/unit_00949970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949970..00949B00, 11 functions

#include "mgrr.h"

// 00949970  FUN_00949970  size=41  [run]
void __thiscall FUN_00949970(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x44);
  return;
}

// 009499A0  FUN_009499a0  size=40  [run]
undefined4 __fastcall FUN_009499a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x1a] == 0) {
    (**(code **)(*param_1 + 0x40))();
  }
  piVar1 = param_1 + 0x1a;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    param_1[0x1a] = 0;
    return 0;
  }
  return 1;
}

// 009499E0  FUN_009499e0  size=56  [run]
undefined4 __fastcall FUN_009499e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar3 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x68) = iVar2;
      *(int *)(param_1 + 0x5c) = iVar1 - iVar2;
      if (iVar1 - iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return 1;
      }
    }
    else {
      *(int *)(param_1 + 0x68) = iVar1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 00949A20  FUN_00949a20  size=4  [run]
undefined4 __fastcall FUN_00949a20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}

// 00949A30  FUN_00949a30  size=7  [run]
int __fastcall FUN_00949a30(int param_1)

{
  return *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x5c);
}

// 00949A40  FUN_00949a40  size=17  [run]
undefined4 __fastcall FUN_00949a40(int param_1)

{
  if (DAT_01bea024 == 0xc) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x60);
}

// 00949A60  FUN_00949a60  size=19  [run]
void __thiscall FUN_00949a60(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5c);
  *piVar1 = *piVar1 - param_2;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

// 00949A80  FUN_00949a80  size=45  [run]
void __thiscall FUN_00949a80(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x17] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 < param_1[0x17]) {
    iVar1 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar1;
  }
  param_1[0x1a] = 0;
  return;
}

// 00949AB0  FUN_00949ab0  size=13  [run]
bool __fastcall FUN_00949ab0(int param_1)

{
  return 0 < *(int *)(param_1 + 0x5c);
}

// 00949AC0  FUN_00949ac0  size=53  [run]
void __thiscall FUN_00949ac0(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x17] = param_1[0x17] + param_2;
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 < param_1[0x17]) {
    iVar1 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar1;
  }
  if (param_1[0x1a] == 0) {
    (**(code **)(*param_1 + 0x40))();
  }
  return;
}

// 00949B00  FUN_00949b00  size=27  [run]
bool __fastcall FUN_00949b00(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  return iVar1 <= param_1[0x1a] + param_1[0x17];
}

