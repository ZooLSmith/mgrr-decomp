// src/unsorted/unit_00410B60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00410B60..00410CE0, 6 functions

#include "mgrr.h"

// 00410B60  FUN_00410b60  size=29  [run]
void __fastcall FUN_00410b60(undefined4 param_1)

{
  FUN_00983fd0(param_1);
  FUN_00a92ef0();
  BehaviorBgBase::vf44();
  return;
}

// 00410B80  FUN_00410b80  size=83  [run]
void __fastcall FUN_00410b80(int param_1)

{
  int iVar1;
  
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x818) = 1;
    if (*(int *)(param_1 + 0x674) != 0) {
      *(undefined4 *)(param_1 + 0x618) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x618) == 1) {
    iVar1 = FUN_00a950a0(0,0x42380000);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
  }
  return;
}

// 00410C20  FUN_00410c20  size=128  [run]
undefined4 __fastcall FUN_00410c20(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 != 0) {
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      FUN_00987dd0(param_1);
      *(undefined2 *)(param_1 + 0x81c) = 3;
      *(undefined4 *)(param_1 + 0x820) = 0;
      return 1;
    }
  }
  return 0;
}

// 00410CA0  FUN_00410ca0  size=27  [run]
void __fastcall FUN_00410ca0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  return;
}

// 00410CC0  FUN_00410cc0  size=27  [run]
void __fastcall FUN_00410cc0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  return;
}

// 00410CE0  FUN_00410ce0  size=59  [run]
void __fastcall FUN_00410ce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  Bm0201::thunk_vf48();
  iVar1 = *(int *)(param_1 + 0x63c);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x40 + iVar2) {
    iVar3 = *(int *)(iVar1 + 8) * 0x40 + iVar2;
    do {
      iVar2 = iVar2 + 0x40;
    } while (iVar2 != iVar3);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}

