// src/unsorted/unit_00A8C2E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8C2E0..00A8C760, 16 functions

#include "mgrr.h"

// 00A8C2E0  FUN_00a8c2e0  size=59  [run]
void __fastcall FUN_00a8c2e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(4,&DAT_01b7bd48);
  if (iVar1 != 0) {
    uVar2 = FUN_00d82640();
    *(undefined4 *)(param_1 + 0x7cc) = uVar2;
    lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>_2();
    return;
  }
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>_2();
  return;
}

// 00A8C320  FUN_00a8c320  size=30  [run]
undefined4 __thiscall FUN_00a8c320(undefined4 param_1,byte param_2)

{
  FUN_00d82650();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A8C340  FUN_00a8c340  size=33  [run]
void __fastcall FUN_00a8c340(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  return;
}

// 00A8C370  FUN_00a8c370  size=63  [run]
void __thiscall FUN_00a8c370(int param_1,undefined4 param_2)

{
  int *piVar1;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x7a4) + 8))(&param_2);
  FUN_00d77200();
  *(undefined4 *)(unaff_retaddr + 0x374) = param_2;
  piVar1 = (int *)FUN_00d773c0();
  (**(code **)(*piVar1 + 8))(unaff_retaddr);
  return;
}

// 00A8C3B0  FUN_00a8c3b0  size=77  [run]
void __thiscall FUN_00a8c3b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x7ac) + 8))(&param_2);
  FUN_00d77200();
  *(undefined4 *)(unaff_retaddr + 0x374) = param_2;
  *(undefined4 *)(unaff_retaddr + 0x380) = param_3;
  piVar1 = (int *)FUN_00d773c0();
  (**(code **)(*piVar1 + 8))(unaff_retaddr);
  return;
}

// 00A8C400  FUN_00a8c400  size=28  [run]
void __fastcall FUN_00a8c400(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a8c417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))();
    return;
  }
  return;
}

// 00A8C420  FUN_00a8c420  size=42  [run]
void __thiscall FUN_00a8c420(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe0))(param_2,param_3,0,0);
  }
  return;
}

// 00A8C480  FUN_00a8c480  size=16  [run]
void __fastcall FUN_00a8c480(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3c70();
    return;
  }
  return;
}

// 00A8C4B0  FUN_00a8c4b0  size=18  [run]
void __fastcall FUN_00a8c4b0(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f2b00();
    return;
  }
  return;
}

// 00A8C500  FUN_00a8c500  size=18  [run]
void __fastcall FUN_00a8c500(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f30e0();
    return;
  }
  return;
}

// 00A8C570  FUN_00a8c570  size=54  [run]
undefined4 __thiscall FUN_00a8c570(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(param_2,param_3);
    return param_2;
  }
  FUN_00910a40(0);
  return param_2;
}

// 00A8C5F0  FUN_00a8c5f0  size=79  [run]
void __thiscall
FUN_00a8c5f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c4) != 0) {
    uVar1 = FUN_00a8b0f0(param_2,param_3,param_4,param_5,param_6,0xffffffff);
    if ((int *)**(int **)(param_1 + 0x7c4) != (int *)0x0) {
      (**(code **)(*(int *)**(int **)(param_1 + 0x7c4) + 8))(uVar1);
    }
  }
  return;
}

// 00A8C640  FUN_00a8c640  size=106  [run]
void __thiscall
FUN_00a8c640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c4) != 0) {
    if (*(int *)(param_1 + 0x330) == -0xe0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_00a07310(param_7);
    }
    uVar1 = FUN_00a8b0f0(param_2,param_3,param_4,param_5,param_6,uVar1);
    if ((int *)**(int **)(param_1 + 0x7c4) != (int *)0x0) {
      (**(code **)(*(int *)**(int **)(param_1 + 0x7c4) + 8))(uVar1);
    }
  }
  return;
}

// 00A8C6B0  FUN_00a8c6b0  size=11  [run]
void FUN_00a8c6b0(void)

{
  FUN_008d7d70();
  return;
}

// 00A8C720  FUN_00a8c720  size=50  [run]
void __thiscall FUN_00a8c720(int param_1,undefined2 param_2,undefined2 param_3)

{
  _param_2 = CONCAT22(param_3,param_2);
  *(undefined4 *)(*(int *)(param_1 + 0x788) + *(int *)(param_1 + 0x78c) * 4) = _param_2;
  *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
  return;
}

// 00A8C760  FUN_00a8c760  size=66  [run]
bool __thiscall FUN_00a8c760(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)((param_2 >> 0x1f & 0x1fU) + param_2) >> 5;
  if (1 < iVar1) {
    return false;
  }
  return (1 << ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x790 + iVar1 * 4)) != 0;
}

