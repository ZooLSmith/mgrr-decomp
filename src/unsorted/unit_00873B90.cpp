// src/unsorted/unit_00873B90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00873B90..00873B90, 1 functions

#include "mgrr.h"

// 00873B90  FUN_00873b90  size=1388  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00873b90(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0.0;
  local_7c = 0.0;
  local_80 = 0.0;
  pfVar1 = (float *)(param_1 + 0xb0);
  local_84 = 0;
  local_88 = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_98 = 0.0;
  local_9c = 0.0;
  local_64 = 0x3f800000;
  local_78 = 1.0;
  local_8c = 1.0;
  local_a0 = 1.0;
  FUN_00db6410(&local_a0,param_1 + 0x70,pfVar1,param_1 + 0xc0);
  pfVar2 = (float *)(param_1 + 0x80);
  local_f0 = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
  local_ec = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar6 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
  local_d4 = local_88 / fVar6;
  local_d8 = local_78 / fVar6;
  fVar4 = (float10)FUN_00ddbaa0(-(local_98 / fVar6));
  fVar5 = (float10)fpatan((float10)local_d4,(float10)local_d8);
  *pfVar2 = (float)fVar5;
  *(float *)(param_1 + 0x84) = (float)fVar4;
  fVar4 = (float10)fpatan((float10)local_9c / (float10)local_ec,
                          (float10)local_a0 / (float10)local_f0);
  *(float *)(param_1 + 0x88) = (float)fVar4;
  *(float *)(param_1 + 0xa0) = *pfVar2;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x84);
  *(float *)(param_1 + 0x90) = *pfVar2;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8c);
  local_f0 = 1.0;
  local_ec = 0.0;
  local_e8 = 0.0;
  FUN_00ddc1d0(local_50,pfVar2,5);
  D3DXVec3TransformNormal(&local_d0,&local_f0,local_50);
  FUN_00ddc1d0(auStack_5c,pfVar2,5);
  D3DXVec3TransformNormal(&fStack_bc,&stack0xffffff04,auStack_5c);
  fVar6 = *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + local_e8 * fVar6;
  *(float *)(param_1 + 100) = fStack_e4 * fVar6 + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x68) = fStack_e0 * fVar6 + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x6c) = fStack_dc * fVar6 + *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0xf8);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fStack_c8 * fVar6;
  *(float *)(param_1 + 100) = fStack_c4 * fVar6 + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x68) = fStack_c0 * fVar6 + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x6c) = fStack_bc * fVar6 + *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0xf4);
  local_74 = fStack_e4 * fVar6 + *(float *)(param_1 + 0xb4);
  *pfVar1 = fVar6 * local_e8 + *pfVar1;
  *(float *)(param_1 + 0xb4) = local_74;
  *(float *)(param_1 + 0xb8) = fStack_e0 * fVar6 + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xbc) = fStack_dc * fVar6 + *(float *)(param_1 + 0xbc);
  fVar6 = *(float *)(param_1 + 0xf8);
  *pfVar1 = fVar6 * fStack_c8 + *pfVar1;
  *(float *)(param_1 + 0xb4) = fStack_c4 * fVar6 + *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0xb8) = fStack_c0 * fVar6 + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xbc) = fStack_bc * fVar6 + *(float *)(param_1 + 0xbc);
  _DAT_01d61aa0 = *pfVar1;
  _DAT_01d61aa4 = *(undefined4 *)(param_1 + 0xb4);
  _DAT_01d61aa8 = *(undefined4 *)(param_1 + 0xb8);
  _DAT_01d61aac = *(undefined4 *)(param_1 + 0xbc);
  local_d8 = *pfVar1 - *(float *)(param_1 + 0x70);
  local_d4 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0x74);
  local_d0 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0x78);
  fStack_cc = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0x7c);
  if (((local_d8 != 0.0) || (local_d4 != 0.0)) || (local_d0 != 0.0)) {
    fVar6 = local_d0 * local_d0 + local_d8 * local_d8 + local_d4 * local_d4;
    if (fVar6 < 0.0 == (fVar6 == 0.0)) {
      FUN_00ddf460(&local_d8,&local_d8);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_d0 = 0.0;
    }
  }
  fStack_c8 = local_d4 * fStack_e0 - local_d0 * fStack_e4;
  fStack_c4 = local_d0 * local_e8 - fStack_e0 * local_d8;
  fStack_c0 = local_d8 * fStack_e4 - local_d4 * local_e8;
  FUN_00db6410(&fStack_b8,param_1 + 0x70,pfVar1,param_1 + 0xc0);
  fVar6 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
  fVar7 = SQRT(local_a0 * local_a0 + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4);
  fVar3 = SQRT(local_90 * local_90 + local_98 * local_98 + local_94 * local_94);
  local_f0 = local_a0 / fVar3;
  local_ec = local_90 / fVar3;
  fVar4 = (float10)FUN_00ddbaa0(-(fStack_b0 / fVar3));
  fVar5 = (float10)fpatan((float10)local_f0,(float10)local_ec);
  *pfVar2 = (float)fVar5;
  *(float *)(param_1 + 0x84) = (float)fVar4;
  fVar4 = (float10)fpatan((float10)fStack_b4 / (float10)fVar7,(float10)fStack_b8 / (float10)fVar6);
  *(float *)(param_1 + 0x88) = (float)fVar4;
  *(float *)(param_1 + 0xa0) = *pfVar2;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x84);
  return;
}

