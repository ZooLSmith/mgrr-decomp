// src/managers/triggermanager/actions/TrgActFunction.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EE60..00C7EE60, 1 functions

#include "mgrr.h"

// 00C7EE60  Trigger::Act::FUNCTION  size=158  [class]
undefined4 __thiscall Trigger::Act::FUNCTION(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016aa8d8);
      return 0;
    }
    piVar1 = (int *)FUN_00a6dd90();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x30))();
    if (piVar1 == (int *)0x0) {
      FUN_00dd5650(&DAT_016aa89c);
      return 0;
    }
    iVar4 = iVar4 + 8;
    iVar2 = (**(code **)(*piVar1 + 0x30))(iVar4);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016aa864,iVar4);
      return 0;
    }
  }
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    FUN_00dd5650(&DAT_016aa838);
    return 0;
  }
  uVar3 = (**(code **)(param_1 + 8))(param_2);
  return uVar3;
}

