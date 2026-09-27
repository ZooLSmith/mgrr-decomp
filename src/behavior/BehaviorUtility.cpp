// src/behavior/BehaviorUtility.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A86290..00A86290, 1 functions

#include "types.h"

// 00A86290  BehaviorUtility::checkRay  size=349  [class]
undefined4 BehaviorUtility::checkRay(int param_1,float *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_2c;
  int local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(float *)(param_1 + 0x500) = *param_2;
  pfVar1 = param_2 + 4;
  *(float *)(param_1 + 0x504) = param_2[1];
  *(float *)(param_1 + 0x508) = param_2[2];
  *(float *)(param_1 + 0x50c) = param_2[3];
  *(float *)(param_1 + 0x510) = *pfVar1;
  *(float *)(param_1 + 0x514) = param_2[5];
  *(float *)(param_1 + 0x518) = param_2[6];
  *(float *)(param_1 + 0x51c) = param_2[7];
  uVar4 = (uint)param_2[8] & 0x1f | (int)param_2[9] << 0x10;
  if (param_2[0xb] != 0.0) {
    uVar2 = RayCastMultiHitWork::RayCastMultiHitWork
                      (param_1 + 0x40,param_2,pfVar1,uVar4,"BehaviorUtility::checkRay");
    return uVar2;
  }
  if (param_2[0xc] == 0.0) {
    local_2c = 0;
    local_28[0] = 0;
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (param_1 + 0x10,param_1 + 0x20,&local_2c,local_28,param_2,pfVar1,uVar4,
                       "BehaviorUtility::checkRay");
    if (iVar3 == 0) {
      return 0;
    }
    if (local_2c != 0) {
      uVar4 = *(uint *)(local_2c + 0xc);
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)((-(uint)(uVar4 != 0) & uVar4) + 0x30);
      }
      if ((uVar4 & 0x40000000) != 0) {
        return 0;
      }
      uVar2 = FUN_00910a40(local_2c);
      FUN_00a83fd0(uVar2);
    }
    if (local_28[0] != 0) {
      *(int *)(param_1 + 4) = local_28[0];
    }
    return 1;
  }
  local_20 = *pfVar1 - *param_2;
  local_1c = param_2[5] - param_2[1];
  local_18 = param_2[6] - param_2[2];
  local_14 = param_2[7] - param_2[3];
  uVar2 = FUN_0090eea0(param_1 + 0x360,param_1 + 0x10,param_2,param_2[10],&local_20,uVar4,
                       "BehaviorUtility::checkRay");
  return uVar2;
}

