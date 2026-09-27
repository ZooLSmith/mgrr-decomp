// src/effect/EffectCall.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E002F0..00E002F0, 1 functions

#include "mgrr.h"

// 00E002F0  EffectCall::EffectCallSystem::callOnce  size=437  [class]
void EffectCall::EffectCallSystem::callOnce
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_b4 [4];
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  local_88 = *(undefined4 *)(param_4 + 0x94);
  local_9c = *(undefined4 *)(param_4 + 0xa8);
  local_90 = *(undefined4 *)(param_4 + 0x84);
  local_94 = *(undefined4 *)(param_4 + 0xac);
  local_98 = *(undefined4 *)(param_4 + 0x88);
  local_a0 = *(undefined4 *)(param_4 + 0x8c);
  local_a8 = *(undefined4 *)(param_4 + 0x98);
  local_b0 = *(undefined4 *)(param_4 + 0x9c);
  local_8c = *(undefined4 *)(param_4 + 0xa0);
  local_84 = *(undefined4 *)(param_4 + 0xa4);
  local_a4 = *(undefined4 *)(param_4 + 0x90);
  local_ac = param_4 + 0xb0;
  if (*(int *)(param_4 + 0x100) == 0) {
    FUN_009cf0e0();
  }
  if (param_6[1] == -1) {
    iVar1 = FUN_00f41b10(local_88,param_1,param_2,param_5,*param_6,param_3,0,local_90,local_98,
                         local_a0,local_a8,local_b0,local_8c,param_7,local_9c,local_84,local_a4,
                         local_94,local_ac,0);
    if (iVar1 != 0) {
      FUN_009ce390(param_1,param_2,*param_6,param_3);
      FUN_009335e0();
      local_78 = *param_6;
      local_80 = param_1;
      local_7c = param_2;
      FUN_00e08600(param_5);
      FUN_00932c20(&local_80);
      FUN_00e085e0();
      __security_check_cookie(local_14 ^ (uint)auStack_b4);
      return;
    }
  }
  else {
    FUN_00dd5650(&DAT_016ca620);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

