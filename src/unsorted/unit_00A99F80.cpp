// src/unsorted/unit_00A99F80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A99F80..00A9A080, 3 functions

#include "mgrr.h"

// 00A99F80  FUN_00a99f80  size=58  [run]
undefined4 __fastcall FUN_00a99f80(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x18;
  FUN_00a0bb60(0x3f4ccccd);
  FUN_00a0bad0(0x3f800000);
  return 1;
}

// 00A99FD0  FUN_00a99fd0  size=161  [run]
int * FUN_00a99fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a82090(param_4,param_2,param_3);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9c34;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c34);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c7f0();
          FUN_00a7c940(uVar3);
          FUN_00a7c960(&param_1);
          FUN_00a7c8a0();
          uVar3 = FUN_009f8b40();
          FUN_009f8ae0(uVar3);
          uVar3 = FUN_00a7c8a0();
          FUN_009f8a10(uVar3);
          return piVar2;
        }
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

// 00A9A080  FUN_00a9a080  size=83  [run]
void __fastcall FUN_00a9a080(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x674) = 1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x3c) == 0) {
      puVar1 = (undefined4 *)FUN_009f8b60();
      uVar3 = *puVar1;
      iVar2 = *(int *)(param_1 + 0x588);
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x40);
    }
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 != 0) {
    uVar3 = FUN_009f8b40();
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = uVar3;
  }
  return;
}

