// lib/havok/unit_009105C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009105C0..009105C0, 1 functions

#include "mgrr.h"
#include "hkpAllRayHitCollector.h"

// 009105C0  hkpAllRayHitCollector::hkpAllRayHitCollector_4  size=567  [run]
undefined4
hkpAllRayHitCollector::hkpAllRayHitCollector_4
          (float *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,float *param_5,
          float *param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int local_344;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  hkpAllRayHitCollector_8();
  iVar12 = RayCastMultiHitWork::RayCastMultiHitWork(local_330,param_5,param_6,param_7,param_9);
  if (iVar12 == 0) {
    local_330[0] = vftable;
    if (-1 < (int)local_318) {
      local_31c = iVar12;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
      return 0;
    }
  }
  else {
    FUN_0112c170();
    iVar12 = 0;
    local_344 = 0;
    if (0 < local_31c) {
      do {
        puVar1 = (undefined4 *)(iVar12 + local_320);
        iVar13 = (int)*(char *)(puVar1[0x14] + 0x10) + puVar1[0x14];
        if (iVar13 != 0) {
          iVar13 = FUN_008f7780(iVar13);
          if (iVar13 == 0) {
LAB_009106a1:
            if (param_1 != (float *)0x0) {
              fVar2 = param_5[2];
              fVar3 = param_5[3];
              fVar4 = param_5[1];
              fVar5 = param_6[3];
              fVar6 = param_6[2];
              fVar7 = param_6[1];
              fVar8 = (float)puVar1[4];
              *param_1 = (*param_6 - *param_5) * fVar8 + *param_5;
              param_1[1] = (fVar7 - fVar4) * fVar8 + fVar4;
              param_1[2] = (fVar6 - fVar2) * fVar8 + fVar2;
              param_1[3] = (fVar5 - fVar3) * fVar8 + fVar3;
            }
            if (param_2 != (undefined4 *)0x0) {
              uVar9 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              *param_2 = *puVar1;
              param_2[1] = uVar9;
              param_2[2] = uVar10;
              param_2[3] = uVar11;
            }
            if (param_3 != (int *)0x0) {
              iVar12 = puVar1[0x14];
              if (*(char *)(iVar12 + 0x18) == '\x01') {
                iVar12 = *(char *)(iVar12 + 0x10) + iVar12;
              }
              else {
                iVar12 = 0;
              }
              *param_3 = iVar12;
            }
            local_330[0] = vftable;
            local_31c = 0;
            if (-1 < (int)local_318) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
            }
            return 1;
          }
          iVar14 = 0;
          if ((int)param_8[1] < 1) goto LAB_009106a1;
          piVar15 = (int *)*param_8;
          while (*piVar15 != iVar13) {
            iVar14 = iVar14 + 1;
            piVar15 = piVar15 + 1;
            if ((int)param_8[1] <= iVar14) goto LAB_009106a1;
          }
          if (iVar14 == -1) goto LAB_009106a1;
        }
        local_344 = local_344 + 1;
        iVar12 = iVar12 + 0x60;
      } while (local_344 < local_31c);
    }
    local_330[0] = vftable;
    local_31c = 0;
    if (-1 < (int)local_318) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
    }
  }
  return 0;
}

