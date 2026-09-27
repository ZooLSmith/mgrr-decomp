// lib/havok/unit_00546550.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00546550..00546550, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00546550  hkpAllCdPointCollector::hkpAllCdPointCollector_41  size=658  [run]
undefined4 __thiscall
hkpAllCdPointCollector::hkpAllCdPointCollector_41
          (int param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1c4;
  undefined1 local_1c0 [16];
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  undefined4 local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  local_200 = *(float *)(param_1 + 0x40);
  local_204 = 1;
  local_1f8 = *(float *)(param_1 + 0x48);
  local_1f4 = *(float *)(param_1 + 0x4c);
  local_1fc = *(float *)(param_1 + 0x44) + 1.0;
  iVar4 = FUN_009f8b40();
  pcVar9 = "em01c0";
  local_1ac = 0x7f7fffee;
  uVar7 = iVar4 << 0x10 | 0x1e;
  local_1a0 = local_190;
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  uVar8 = uVar7;
  uVar5 = FUN_00a8b8a0(local_1c0,param_3);
  iVar4 = FUN_0090eea0(&local_1b0,param_2,&local_200,0x3f400000,uVar5,uVar8,pcVar9);
  if (iVar4 == 0) {
    pfVar6 = (float *)FUN_00a8b8a0(local_1c0,param_3);
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6 + local_200;
    param_2[1] = fVar1 + local_1fc;
    param_2[2] = fVar2 + local_1f8;
    param_2[3] = fVar3 + local_1f4;
    local_1e4 = param_3 * param_3;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x40) - *param_2;
    fVar3 = *(float *)(param_1 + 0x44) - param_2[1];
    fVar2 = *(float *)(param_1 + 0x48) - param_2[2];
    local_1e4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
  }
  pcVar9 = "em01c0";
  local_1c4 = -param_3;
  uVar5 = FUN_00a8b8a0(local_1c0,local_1c4);
  iVar4 = FUN_0090eea0(&local_1b0,&local_1e0,&local_200,0x3f400000,uVar5,uVar7,pcVar9);
  if (iVar4 == 0) {
    pfVar6 = (float *)FUN_00a8b8a0(local_1c0,local_1c4);
    local_1e0 = *pfVar6 + local_200;
    local_1dc = pfVar6[1] + local_1fc;
    local_1d8 = pfVar6[2] + local_1f8;
    local_1d4 = pfVar6[3] + local_1f4;
    param_3 = param_3 * param_3;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x40) - local_1e0;
    fVar3 = *(float *)(param_1 + 0x44) - local_1dc;
    fVar2 = *(float *)(param_1 + 0x48) - local_1d8;
    param_3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  }
  if (param_3 <= local_1e4) {
    if ((local_1e4 == param_3) && (param_4 == 0)) {
      local_204 = 0;
      *param_2 = local_1e0;
      param_2[1] = local_1dc;
      param_2[2] = local_1d8;
      param_2[3] = local_1d4;
    }
  }
  else {
    local_204 = 0;
    *param_2 = local_1e0;
    param_2[1] = local_1dc;
    param_2[2] = local_1d8;
    param_2[3] = local_1d4;
  }
  local_1b0 = vftable;
  local_19c = 0;
  if (-1 < (int)local_198) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
  }
  return local_204;
}

