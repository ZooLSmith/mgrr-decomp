// src/unsorted/unit_009D20A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D20A0..009D21A0, 2 functions

#include "mgrr.h"

// 009D20A0  FUN_009d20a0  size=121  [run]
void FUN_009d20a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2[2];
  FUN_00a07e90(param_2);
  if ((*(byte *)(param_2[2] + 0x36c) & 1) == 0) {
    uVar2 = *(undefined4 *)(*param_2 + 0xac);
    FUN_00a113a0(uVar2);
    FUN_00a11460(uVar2);
    FUN_00a113f0(uVar2);
  }
  FUN_00f9d6e0(*(undefined4 *)(iVar1 + 0x360));
  FUN_00f9d760(*(uint *)(param_2[2] + 0x36c) >> 0xf & 1);
  FUN_00a168f0(param_1,param_2,0,0);
  FUN_00a07ea0(param_2);
  return;
}

// 009D21A0  FUN_009d21a0  size=41  [run]
void __fastcall FUN_009d21a0(int param_1)

{
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 4))();
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}

