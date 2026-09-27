// src/unsorted/unit_005E8E10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8E10..005E8F90, 4 functions

#include "mgrr.h"

// 005E8E10  FUN_005e8e10  size=157  [run]
void __thiscall FUN_005e8e10(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0x24c] = (int)param_2;
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_0094bbd0(0x15e901d6,param_2[0x17]);
    if (iVar1 == 0) {
      FUN_00aa92c0(2);
    }
    (**(code **)(*param_1 + 0x28))(param_2[1]);
    if (*(int *)(param_1[0x24c] + 0x5c) == 0x12) {
      thunk_FUN_00c81bd0(0x3f,iVar1 != 0);
    }
    if ((DAT_018b9174 == 0x330) && (*param_2 == 5)) {
      param_1[0x14] = (int)((float)param_1[0x14] - 1.0);
      switchD_0080dbae::default();
      FUN_00d9c2d0(param_1 + 4);
    }
  }
  return;
}

// 005E8EB0  FUN_005e8eb0  size=138  [run]
void __fastcall FUN_005e8eb0(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (1 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x930) != 0) {
    iVar2 = FUN_0094bc80(0x15e901d6);
    if (iVar2 == 0) {
      FUN_00c81e40(0x4d);
    }
    FUN_00cc1250(0,*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x5c),0);
    FUN_00951d60(0x15e901d6,*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x5c));
    if (*(int *)(*(int *)(param_1 + 0x930) + 0x5c) == 0x12) {
      FUN_00c81e40(0x3f);
    }
  }
  return;
}

// 005E8F60  FUN_005e8f60  size=35  [run]
void __fastcall FUN_005e8f60(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xad0));
  }
  return;
}

// 005E8F90  FUN_005e8f90  size=45  [run]
void __fastcall FUN_005e8f90(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x9b5] = 0;
  return;
}

