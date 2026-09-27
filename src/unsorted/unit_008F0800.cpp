// src/unsorted/unit_008F0800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F0800..008F09C0, 7 functions

#include "types.h"

// 008F0800  FUN_008f0800  size=74  [run]
void __fastcall FUN_008f0800(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_0091d200(*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

// 008F0850  FUN_008f0850  size=74  [run]
void __fastcall FUN_008f0850(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        lib::Array<EntityHandle>::Array<EntityHandle>_5
                  (*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

// 008F08A0  FUN_008f08a0  size=74  [run]
void __fastcall FUN_008f08a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917ae0(*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

// 008F08F0  FUN_008f08f0  size=53  [run]
void __thiscall FUN_008f08f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  FUN_00917b10(*(undefined4 *)(*(int *)(iVar1 + 8) + param_2 * 4));
  return;
}

// 008F0930  FUN_008f0930  size=57  [run]
void __thiscall FUN_008f0930(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  FUN_00917b40(*(undefined4 *)(*(int *)(iVar1 + 8) + param_2 * 4),param_3);
  return;
}

// 008F0970  FUN_008f0970  size=74  [run]
void __fastcall FUN_008f0970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917b70(*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

// 008F09C0  FUN_008f09c0  size=74  [run]
void __fastcall FUN_008f09c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_00917ba0(*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = (**(code **)(*param_1 + 0x1c))();
      } while (iVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

