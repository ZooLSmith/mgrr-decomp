// lib/havok/unit_00D87BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D87BA0..00D87BA0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00D87BA0  hkpAllCdPointCollector::hkpAllCdPointCollector_36  size=999  [run]
undefined4 __thiscall
hkpAllCdPointCollector::hkpAllCdPointCollector_36
          (int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float *pfVar16;
  float local_ab0;
  float local_aac;
  float local_aa8;
  float local_aa4;
  float local_aa0;
  float local_a9c;
  float local_a98;
  float local_a94;
  undefined4 local_a90;
  undefined4 local_a8c;
  undefined4 local_a84;
  undefined4 local_a80;
  float local_a68;
  float local_a54;
  undefined1 local_a50 [4];
  undefined4 local_a4c;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined4 local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  undefined **local_6f0;
  undefined4 local_6ec;
  undefined1 *local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined1 local_6d0 [416];
  undefined1 local_530 [80];
  int local_4e0;
  int local_4dc;
  
  local_ab0 = *param_4;
  local_aac = param_4[1];
  local_aa8 = param_4[2];
  local_aa4 = param_4[3];
  fVar2 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_a80 = 0;
  local_aa0 = *param_5 * fVar2 + local_ab0;
  local_a9c = fVar2 * param_5[1] + local_aac;
  local_a98 = local_aa8 + fVar2 * param_5[2];
  local_a94 = fVar2 * param_5[3] + local_aa4;
  *param_2 = local_aa0;
  param_2[1] = local_a9c;
  param_2[2] = local_a98;
  param_2[3] = local_a94;
  fVar7 = local_aa0 - local_ab0;
  fVar9 = local_a9c - local_aac;
  fVar8 = local_a98 - local_aa8;
  fVar10 = local_a94 - local_aa4;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  *param_3 = *param_5 * -1.0;
  param_3[1] = fVar2 * -1.0;
  param_3[2] = fVar3 * -1.0;
  param_3[3] = fVar4 * -1.0;
  local_a8c = *(undefined4 *)(param_1 + 0xda0);
  local_a90 = 0x1a;
  local_a84 = 1;
  hkpAllCdPointCollector_21();
  iVar15 = BehaviorUtility::checkRay(local_530,&local_ab0);
  if (iVar15 != 0) {
    FUN_0112c170();
    if (local_4e0 != local_4dc * 0x60 + local_4e0) {
      pfVar16 = (float *)(local_4e0 + 4);
      do {
        fVar2 = pfVar16[3];
        fVar13 = *param_4 + fVar7 * fVar2;
        fVar12 = fVar9 * fVar2 + param_4[1];
        fVar14 = fVar8 * fVar2 + param_4[2];
        fVar11 = fVar10 * fVar2 + param_4[3];
        fVar2 = pfVar16[-1];
        fVar3 = *pfVar16;
        fVar4 = pfVar16[1];
        fVar5 = pfVar16[2];
        fVar6 = **(float **)(param_1 + 0xd58);
        local_a68 = fVar4 * fVar6;
        local_ab0 = fVar2 * fVar6 + fVar13;
        local_aac = fVar3 * fVar6 + fVar12;
        local_aa8 = local_a68 + fVar14;
        local_aa4 = fVar6 * fVar5 + fVar11;
        fVar6 = **(float **)(param_1 + 0xd58);
        local_a84 = 0;
        local_a54 = fVar6 * param_5[3];
        local_aa0 = *param_4 - *param_5 * fVar6;
        local_a9c = param_4[1] - fVar6 * param_5[1];
        local_a98 = param_4[2] - fVar6 * param_5[2];
        local_a94 = param_4[3] - local_a54;
        FUN_00910a40(0);
        local_a4c = 0;
        local_a20 = 0;
        hkpAllRayHitCollector::hkpAllRayHitCollector_8();
        local_6ec = 0x7f7fffee;
        local_a40 = 0;
        local_a3c = 0;
        local_6e0 = local_6d0;
        local_a38 = 0;
        local_a34 = 0;
        local_6f0 = vftable;
        local_a30 = 0;
        local_a2c = 0;
        local_6d8 = 0x80000008;
        local_a28 = 0;
        local_6dc = 0;
        local_a24 = 0;
        iVar15 = BehaviorUtility::checkRay(local_a50,&local_ab0);
        if (iVar15 != 0) {
          FUN_00a84420(0xffff0000,0x1a,"cliffAheadCandidate");
          *param_2 = fVar13;
          param_2[1] = fVar12;
          param_2[2] = fVar14;
          param_2[3] = fVar11;
          *param_3 = fVar2;
          param_3[1] = fVar3;
          param_3[2] = fVar4;
          param_3[3] = fVar5;
          hkpCdPointCollector::hkpCdPointCollector_16();
          hkpCdPointCollector::hkpCdPointCollector_16();
          return 1;
        }
        hkpCdPointCollector::hkpCdPointCollector_16();
        pfVar1 = pfVar16 + 0x17;
        pfVar16 = pfVar16 + 0x18;
      } while (pfVar1 != (float *)(local_4dc * 0x60 + local_4e0));
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return 0;
}

