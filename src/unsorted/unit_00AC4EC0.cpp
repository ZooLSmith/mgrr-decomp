// src/unsorted/unit_00AC4EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC4EC0..00AC4F70, 2 functions

#include "types.h"

// 00AC4EC0  FUN_00ac4ec0  size=174  [run]
void __thiscall FUN_00ac4ec0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0xa34) = param_2;
  *(undefined4 *)(param_1 + 0xa40) = *param_3;
  *(undefined4 *)(param_1 + 0xa44) = param_3[1];
  *(undefined4 *)(param_1 + 0xa48) = param_3[2];
  *(undefined4 *)(param_1 + 0xa4c) = param_3[3];
  *(undefined4 *)(param_1 + 0xa50) = param_4;
  iVar1 = FUN_00a7f710("loverBand",0x40002);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7f290(iVar1);
    FUN_00a7c960(uVar2);
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 4;
    FUN_00a7c8a0(4,0,0,0);
    FUN_00a8caf0(uVar2,uVar3,uVar4,uVar5);
    return;
  }
  FUN_00a82090();
  return;
}

// 00AC4F70  FUN_00ac4f70  size=21  [run]
void __fastcall FUN_00ac4f70(int param_1)

{
  *(undefined4 *)(param_1 + 0xa34) = 0xffffffff;
  FUN_00a7c950();
  return;
}

