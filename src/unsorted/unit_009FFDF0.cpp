// src/unsorted/unit_009FFDF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009FFDF0..009FFDF0, 1 functions

#include "mgrr.h"

// 009FFDF0  FUN_009ffdf0  size=1212  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_009ffdf0(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_2c = _DAT_01be8ea4;
  iVar1 = *(int *)(param_1 + 0xaf0);
  if (iVar1 == 0) {
    return 0;
  }
  local_40 = *(float *)(iVar1 + 0x50);
  local_3c = *(float *)(iVar1 + 0x54);
  local_38 = *(float *)(iVar1 + 0x58);
  local_34 = *(float *)(iVar1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0xaf4);
  if (iVar1 != 0) {
    local_40 = *(float *)(iVar1 + 0x50);
    local_3c = *(float *)(iVar1 + 0x54);
    local_38 = *(float *)(iVar1 + 0x58);
    local_34 = *(float *)(iVar1 + 0x5c);
  }
  if (DAT_01be8ea0 == 1) {
    local_40 = local_40 - _DAT_01be8eb0;
    local_3c = local_3c - _DAT_01be8eb4;
    local_38 = local_38 - _DAT_01be8eb8;
    local_34 = local_34 - _DAT_01be8ebc;
  }
  else if (DAT_01be8ea0 == 2) {
    local_40 = _DAT_01be8eb0 - local_40;
    local_3c = _DAT_01be8eb4 - local_3c;
    local_38 = _DAT_01be8eb8 - local_38;
    local_34 = _DAT_01be8ebc - local_34;
  }
  else {
    local_34 = _DAT_01be8ebc;
    local_40 = _DAT_01be8eb0;
    local_38 = _DAT_01be8eb8;
    local_3c = _DAT_01be8eb4;
    if (DAT_01be8ea0 != 3) {
      return 0;
    }
  }
  fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  if (0.0 < fVar2) {
    if (fVar2 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_3c = 1.0;
      local_40 = 0.0;
    }
    else {
      FUN_00ddf460(&local_40,&local_40);
    }
    local_40 = local_40 * local_2c;
    local_3c = local_3c * local_2c;
    local_38 = local_38 * local_2c;
    local_34 = local_34 * local_2c;
    fVar2 = ABS(local_38) * 0.4;
    local_2c = ABS(local_38) * -0.4;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x9d0) = 1;
      *(undefined4 *)(param_1 + 0x9d4) = 0xfff;
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      *(undefined4 *)(param_1 + 0x9e4) = 0;
      *(undefined4 *)(param_1 + 0x9e8) = 0;
      *(float *)(param_1 + 0x9ec) = local_34;
      *(float *)(param_1 + 0x9f0) = local_40;
      *(float *)(param_1 + 0x9f4) = fVar2;
      *(float *)(param_1 + 0x9f8) = local_38;
      *(float *)(param_1 + 0x9fc) = local_34;
      *(undefined4 *)(param_1 + 0xa00) = 0;
      *(undefined4 *)(param_1 + 0xa04) = 0x3ba3d70a;
      local_30 = local_40;
      local_28 = local_38;
      local_24 = local_34;
      fVar3 = (float10)FUN_00dde300(0x40a00000,0x41000000);
      *(float *)(param_1 + 0xa08) = (float)fVar3;
      *(undefined4 *)(param_1 + 0xa0c) = 0x3f000000;
      *(undefined4 *)(param_1 + 0xa10) = 0x3e32b8c2;
      fVar3 = (float10)FUN_00dde300(0x40a00000,0x41200000);
      *(float *)(param_1 + 0xa14) = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0x3eb2b8c2,0x3f32b8c2);
      *(float *)(param_1 + 0xa4c) = (float)fVar3;
      *(undefined4 *)(param_1 + 0xa58) = 2;
      *(undefined4 *)(param_1 + 0xa50) = 0;
      *(undefined4 *)(param_1 + 0xa54) = 0;
      *(undefined4 *)(param_1 + 0xa18) = 0;
      *(undefined4 *)(param_1 + 0xa20) = 0;
      *(undefined4 *)(param_1 + 0xa24) = 0;
      *(undefined4 *)(param_1 + 0xa28) = 0;
      *(float *)(param_1 + 0xa2c) = local_24;
      *(undefined4 *)(param_1 + 0xa30) = 0;
      *(undefined4 *)(param_1 + 0xa34) = 0;
      *(undefined4 *)(param_1 + 0xa38) = 0;
      *(float *)(param_1 + 0xa3c) = local_24;
      *(undefined4 *)(param_1 + 0xa60) = 1;
      *(undefined4 *)(param_1 + 0xa64) = 0xfff;
      *(undefined4 *)(param_1 + 0xa40) = 0;
      *(undefined4 *)(param_1 + 0xa48) = 0;
      *(undefined4 *)(param_1 + 0xa70) = 0;
      *(undefined4 *)(param_1 + 0xa74) = 0;
      *(undefined4 *)(param_1 + 0xa78) = 0;
      *(float *)(param_1 + 0xa7c) = local_24;
      *(float *)(param_1 + 0xa80) = local_30;
      *(float *)(param_1 + 0xa84) = local_2c;
      *(float *)(param_1 + 0xa88) = local_28;
      *(float *)(param_1 + 0xa8c) = local_24;
      *(undefined4 *)(param_1 + 0xa90) = 0;
      *(undefined4 *)(param_1 + 0xa94) = 0x3ba3d70a;
      *(undefined4 *)(param_1 + 0xa98) = 0x40a00000;
      *(undefined4 *)(param_1 + 0xa9c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xaa0) = 0x3e32b8c2;
      *(undefined4 *)(param_1 + 0xaa4) = 0x41700000;
      fVar3 = (float10)FUN_00dde300(0x3e860a92,0x3edf66f3);
      *(float *)(param_1 + 0xadc) = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0x3d8efa35,0x3dd67750);
      *(float *)(param_1 + 0xae0) = (float)fVar3;
      *(undefined4 *)(param_1 + 0xae8) = 0;
      *(undefined4 *)(param_1 + 0xae4) = 0;
      *(undefined4 *)(param_1 + 0xaa8) = 0;
      *(undefined4 *)(param_1 + 0xab0) = 0;
      *(undefined4 *)(param_1 + 0xab4) = 0;
      *(undefined4 *)(param_1 + 0xab8) = 0;
      *(float *)(param_1 + 0xabc) = local_24;
      *(undefined4 *)(param_1 + 0xac0) = 0;
      *(undefined4 *)(param_1 + 0xac4) = 0;
      *(undefined4 *)(param_1 + 0xac8) = 0;
      *(float *)(param_1 + 0xacc) = local_24;
      *(undefined4 *)(param_1 + 0xad0) = 0;
      *(undefined4 *)(param_1 + 0xad8) = 0;
      return 1;
    }
    *(float *)(param_1 + 0x9f0) = local_40;
    *(float *)(param_1 + 0x9f4) = fVar2;
    *(float *)(param_1 + 0x9f8) = local_38;
    *(float *)(param_1 + 0x9fc) = local_34;
    *(float *)(param_1 + 0xa80) = local_40;
    *(float *)(param_1 + 0xa84) = local_2c;
    *(float *)(param_1 + 0xa88) = local_38;
    *(float *)(param_1 + 0xa8c) = local_34;
    return 1;
  }
  return 0;
}

