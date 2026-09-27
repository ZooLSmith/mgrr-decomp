// src/unsorted/unit_004D1750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D1750..004D18C0, 2 functions

#include "types.h"

// 004D1750  FUN_004d1750  size=363  [run]
void FUN_004d1750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [316];
  
  local_170 = *(undefined4 *)(param_1 + 0xd0);
  local_16c = *(undefined4 *)(param_1 + 0xd4);
  local_168 = *(undefined4 *)(param_1 + 0xd8);
  local_164 = *(undefined4 *)(param_1 + 0xdc);
  local_1a0 = *(float *)(param_1 + 0xb0);
  local_19c = *(float *)(param_1 + 0xb4);
  local_198 = *(float *)(param_1 + 0xb8);
  local_194 = *(float *)(param_1 + 0xbc);
  FUN_00d993f0(&local_170,&local_1a0);
  iVar1 = FUN_00a12210(0);
  local_190 = *(undefined4 *)(iVar1 + 0x40);
  local_18c = *(undefined4 *)(iVar1 + 0x44);
  local_188 = *(undefined4 *)(iVar1 + 0x48);
  local_184 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12210(0xc);
  local_180 = *(undefined4 *)(iVar1 + 0x40);
  local_17c = *(undefined4 *)(iVar1 + 0x44);
  local_178 = *(undefined4 *)(iVar1 + 0x48);
  local_174 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00d97610(local_150,&local_190,&local_180,local_140);
  if (iVar1 == 0) {
    local_160 = local_1a0 * -1.0;
    local_15c = local_19c * -1.0;
    local_158 = local_198 * -1.0;
    local_154 = local_194 * -1.0;
    FUN_00d93a90(&local_170,&local_160);
    iVar1 = FUN_00d97610(local_150,&local_190,&local_180,local_140);
    if (iVar1 == 0) {
      return;
    }
  }
  uVar2 = FUN_00e01ca0();
  FUN_00e013e0(0x20110,0xf8,local_150,uVar2);
  return;
}

// 004D18C0  FUN_004d18c0  size=437  [run]
undefined4 __fastcall FUN_004d18c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_164;
  undefined1 auStack_160 [348];
  
  local_164 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar1 = FUN_00a8e520();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[0x231] != -1) {
    FUN_00c52700(param_1[0x231],1);
  }
  FUN_00ac2080(0);
  piVar4 = (int *)param_1[0x19f];
  piVar3 = piVar4 + param_1[0x1a1] * 0x54;
  if (piVar4 != piVar3) {
    while (((((iVar1 = *piVar4, iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)) ||
            ((iVar1 == 0x1b0 || (iVar1 == 0x147)))) ||
           (((iVar1 = FUN_00a81330(), iVar1 == 0 || (iVar1 == param_1[0x13c])) ||
            (((param_1[0x231] != -1 &&
              (iVar1 = FUN_00c5fb10(param_1[0x13c],piVar4 + 0x28,param_1[0x231],0,0), iVar1 == 0))
             || (iVar1 = FUN_00a98220(piVar4), iVar1 == 0))))))) {
      piVar4 = piVar4 + 0x54;
      if (piVar4 == piVar3) {
        return 0;
      }
    }
    local_164 = 1;
    FUN_00a8e5d0(param_1,piVar4,0);
    iVar1 = *param_1;
    uVar2 = FUN_00a7c8a0(piVar4,0x100);
    (**(code **)(iVar1 + 0x198))(uVar2);
    if ((*(byte *)((int)piVar4 + 0x92) & 1) == 0) {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        FUN_004cb9a0(0x35);
        FUN_00e020f0(param_1[0x13c]);
        FUN_00a963e0(auStack_160);
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c8a0();
        iVar1 = FUN_004b7e20(uVar2);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x11e8) = 0x41700000;
        }
      }
    }
  }
  return local_164;
}

