// src/ui/cUIDrawMask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3DC0..00CFB4D0, 4 functions

#include "types.h"

// 00CB3DC0  cUIDrawMask::vf18  size=14  [class]
void cUIDrawMask::vf18(void)

{
  FUN_00dd5650(&DAT_016b731c);
  return;
}

// 00CC7500  cUIDrawMask::vf08  size=6  [class]
undefined4 cUIDrawMask::vf08(void)

{
  return 5;
}

// 00CC7510  cUIDrawMask::vf00  size=31  [class]
undefined4 * __thiscall cUIDrawMask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CFB4D0  cUIDrawMask::vf14  size=742  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cUIDrawMask::vf14(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  local_60 = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    if ((*param_2 != 0) &&
       (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar3 != (undefined4 *)0x0)) {
      cUIPrimWorkBase::cUIPrimWorkBase();
      *puVar3 = cUIPrimWork::vftable;
      local_94 = param_3[0x1a];
      if (local_94 == 0.0) {
        if (*(int *)(local_60 + 0xc) == 0) {
          local_94 = (float)((uint)(*(int *)(local_60 + 8) != 0) * 2 + 1);
        }
        else {
          local_94 = (float)((uint)(*(int *)(local_60 + 8) != 0) * 2 + 6);
        }
      }
      fVar1 = param_3[0x1b];
      pfVar5 = param_3;
      pfVar6 = local_50;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      FUN_00cacde0(local_50,fVar1);
      fVar1 = param_3[0x1b];
      puVar3[0x47] = fVar1;
      puVar3[0x49] = (uint)(fVar1 == 4.2039e-45);
      if (puVar3[0x19] != 0) {
        FUN_00dd5650(&DAT_016b79e8);
      }
      puVar3[0x1e] = local_94;
      puVar3[0x1c] = 0;
      puVar3[0x38] = 0;
      FID_conflict__memcpy(puVar3 + 8,local_50,0x40);
      puVar3[0x15] = (float)puVar3[0x15] - 1.0;
      if (puVar3[1] != 0) {
        FUN_00f99d30();
      }
      if (puVar3[2] != 0) {
        FUN_00f99a40();
      }
      puVar3[0x39] = 0;
      FUN_00a30800(puVar3,0x67,param_3[0x1c]);
    }
    return;
  }
  pfVar5 = param_3;
  pfVar6 = local_50;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  fVar1 = local_50[2] * local_50[2] + local_50[0] * local_50[0] + local_50[1] * local_50[1];
  local_5c = SQRT(fVar1);
  fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  local_58 = SQRT(fVar2);
  local_90 = local_50[0];
  local_8c = local_50[1];
  local_88 = local_50[2];
  local_84 = local_50[3];
  local_80 = local_40;
  local_7c = local_3c;
  local_78 = local_38;
  local_74 = local_34;
  local_70 = local_30;
  local_6c = local_2c;
  local_68 = local_28;
  local_64 = local_24;
  if (fVar1 <= 0.0) {
    local_90 = 0.0;
    local_88 = 0.0;
    local_8c = 1.0;
  }
  if (!NAN(fVar2) && fVar2 < 0.0 != (fVar2 == 0.0)) {
    local_80 = 0.0;
    local_78 = 0.0;
    local_7c = 1.0;
  }
  fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    local_70 = 0.0;
    local_68 = 0.0;
    local_6c = 1.0;
  }
  FUN_00ddf460(&local_90,&local_90);
  FUN_00ddf460(&local_80,&local_80);
  FUN_00ddf460(&local_70,&local_70);
  _DAT_01dc2cf0 = param_3[0xc];
  _DAT_01dc2cf4 = param_3[0xd];
  _DAT_01dc2cf8 = *(float *)(param_1 + 0x18) * local_5c;
  _DAT_01dc2cfc = *(float *)(param_1 + 0x1c) * local_58;
  if (*(int *)(param_1 + 0x10) == 1) {
    _DAT_01dc2cf0 = _DAT_01dc2cf0 - _DAT_01dc2cf8 * 0.5;
  }
  else if (*(int *)(param_1 + 0x10) == 2) {
    _DAT_01dc2cf0 = _DAT_01dc2cf0 - _DAT_01dc2cf8;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    _DAT_01dc2cf4 = _DAT_01dc2cf4 - _DAT_01dc2cfc * 0.5;
  }
  else if (*(int *)(param_1 + 0x14) == 2) {
    _DAT_01dc2cf4 = _DAT_01dc2cf4 - _DAT_01dc2cfc;
  }
  return;
}

