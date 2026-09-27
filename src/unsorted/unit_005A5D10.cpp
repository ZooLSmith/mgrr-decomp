// src/unsorted/unit_005A5D10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005A5D10..005A5D10, 1 functions

#include "types.h"

// 005A5D10  FUN_005a5d10  size=348  [run]
void __thiscall FUN_005a5d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  undefined4 uVar2;
  uint local_330 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310;
  int local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_1c4;
  undefined2 local_1b6;
  float local_1a0;
  float local_19c;
  
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_1c4 = 0x3f7f7cee;
  local_220 = 0x82;
  fVar1 = (float10)FUN_00dde300(0xbae4c388,0x3ae4c388);
  local_1a0 = (float)fVar1;
  fVar1 = (float10)FUN_00dde300(0xbae4c388,0x3ae4c388);
  local_19c = (float)fVar1;
  uVar2 = 0x43480000;
  fVar1 = (float10)FUN_00dde300(0,0x3f000000);
  FUN_00416e30(param_2,param_3,param_4,(float)(fVar1 + (float10)1.5),uVar2);
  local_294 = local_294 | 0x10000000;
  local_31c = 0xf;
  local_314 = 0xf;
  local_310 = 0;
  local_318 = 0x96;
  local_30c = FUN_00a81330();
  if (local_30c != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  local_330[0] = local_330[0] | 4;
  local_1b6 = 3;
  local_320 = 0xb9;
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(int *)(param_1 + 0xa28) = *(int *)(param_1 + 0xa28) + -1;
  return;
}

