// src/unsorted/unit_005E6420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E6420..005E6420, 1 functions

#include "mgrr.h"

// 005E6420  FUN_005e6420  size=253  [run]
void __fastcall FUN_005e6420(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 local_170 [16];
  undefined1 local_160 [288];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  param_1[0x23e] = 1;
  if (param_1[0x12d] == 0x20030) {
    cVar3 = '\x03';
    FUN_00e5e0c0("em0030_se_dmg_exp_s",param_1,0xffffffff,0);
  }
  else {
    cVar3 = (param_1[0x12d] == 0x40050) + '\n';
  }
  FUN_004039a0(cVar3,param_1,0);
  if (param_1[0x1ed] == 0) {
    local_40 = param_1[0x10];
    local_3c = param_1[0x11];
    local_38 = param_1[0x12];
    local_34 = param_1[0x13];
  }
  else {
    piVar1 = (int *)FUN_00916d50(local_170);
    local_40 = *piVar1;
    local_3c = piVar1[1];
    local_38 = piVar1[2];
    local_34 = piVar1[3];
  }
  puVar4 = local_160;
  uVar2 = FUN_00e00b40(param_1[0x12d],puVar4);
  FUN_00a8c930(uVar2,puVar4);
  (**(code **)(*param_1 + 0x20))();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  return;
}

