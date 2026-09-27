// src/unsorted/unit_009E5D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E5D90..009E5D90, 1 functions

#include "types.h"

// 009E5D90  FUN_009e5d90  size=228  [run]
void __thiscall FUN_009e5d90(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)((int)param_1 + 0x54) = *param_3;
  *(undefined4 *)((int)param_1 + 0x58) = param_3[1];
  *(undefined4 *)((int)param_1 + 0x5c) = param_3[3];
  *(undefined4 *)((int)param_1 + 0x48) = param_2[0x12];
  *(undefined4 *)((int)param_1 + 0x60) = param_2[0xd];
  *(undefined4 *)((int)param_1 + 100) = param_2[0x13];
  if ((void *)param_2[0xe] == (void *)0x0) {
    local_20 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
    FUN_00de2bc0(param_1,&local_20,param_2 + 4,&local_20,0x3f800000,0x40490fdb);
    *(undefined4 *)((int)param_1 + 0x30) = *param_2;
    *(undefined4 *)((int)param_1 + 0x34) = param_2[1];
    *(undefined4 *)((int)param_1 + 0x38) = param_2[2];
  }
  else {
    FID_conflict__memcpy(param_1,(void *)param_2[0xe],0x40);
  }
  if (((param_2[0xc] & 0x80000000) != 0) && ((param_3[2] & 0x80000000) == 0)) {
    if (param_2[8] == 0) {
      return;
    }
    uVar1 = FUN_00a7c8a0();
    FUN_004fc8e0(&local_20,uVar1,3);
  }
  *(undefined4 *)((int)param_1 + 0x40) = param_2[0xf];
  *(undefined2 *)((int)param_1 + 0x50) = *(undefined2 *)(param_2 + 9);
  *(undefined4 *)((int)param_1 + 0x44) = param_2[8];
  return;
}

