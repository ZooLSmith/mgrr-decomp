// src/unsorted/unit_00E97B70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E97B70..00E97C00, 3 functions

#include "mgrr.h"

// 00E97B70  FUN_00e97b70  size=67  [run]
void FUN_00e97b70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 local_8;
  undefined1 local_4;
  
  FUN_00e94ef0(&local_8,param_2,param_3,param_4,param_5,param_2);
  *param_1 = local_8;
  *(undefined1 *)(param_1 + 1) = local_4;
  return;
}

// 00E97BC0  FUN_00e97bc0  size=53  [run]
void __fastcall FUN_00e97bc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (DAT_01dda6a0 != '\0') {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E97C00  FUN_00e97c00  size=146  [run]
undefined4 *
FUN_00e97c00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar3 = param_6;
  uVar2 = param_3;
  uVar1 = param_2;
  cVar4 = FUN_00e93500(param_2,param_3,param_6);
  if (cVar4 != '\0') {
    FUN_00e94d00(param_1,&param_2,&param_3,param_4,param_5,uVar3);
    return param_1;
  }
  FUN_00e94ef0(&local_8,uVar1,uVar2,param_4,param_5,local_8);
  *param_1 = local_8;
  *(undefined1 *)(param_1 + 1) = local_4;
  return param_1;
}

