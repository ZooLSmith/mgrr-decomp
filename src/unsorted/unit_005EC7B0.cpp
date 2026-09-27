// src/unsorted/unit_005EC7B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EC7B0..005EC7B0, 1 functions

#include "mgrr.h"

// 005EC7B0  FUN_005ec7b0  size=1711  [run]
void __fastcall FUN_005ec7b0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_3b8;
  int local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  int *piStack_380;
  undefined4 uStack_37c;
  int iStack_370;
  float fStack_36c;
  int iStack_368;
  float fStack_364;
  int iStack_360;
  float fStack_35c;
  int iStack_358;
  float fStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  char *pcStack_340;
  int *piStack_33c;
  undefined4 uStack_338;
  undefined1 local_330 [16];
  int iStack_320;
  int iStack_31c;
  
  iVar7 = 0;
  if (param_1[0x244] == 0) {
    if ((float)param_1[0x232] < 0.0) {
      param_1[0x246] = 1;
    }
    iVar2 = FUN_00d467a0();
    if (iVar2 == 0) {
      if ((param_1[0x241] != 0) && (((float)param_1[0x232] < 0.0 || (0.0 < (float)param_1[0x232]))))
      {
        local_3a0 = 0.0;
        local_39c = 0.0;
        local_398 = 0.0;
        local_394 = 1.0;
        local_3a4 = 1.0;
        local_3b0 = 0.0;
        local_3b8 = 0;
        local_3ac = 0.0;
        local_3a8 = 0.0;
        iVar2 = FUN_009075e0(param_1 + 0x241,&local_3b8,&local_3a0,&local_3b0);
        if ((iVar2 == 1) && (local_3b8 != 0)) {
          FUN_0112c170();
          local_3b4 = 0;
          if (0 < *(int *)(local_3b8 + 0x14)) {
            do {
              iVar2 = *(int *)(local_3b8 + 0x10);
              iVar6 = *(int *)(iVar2 + 0x50 + iVar7);
              if (*(char *)(iVar6 + 0x18) == '\x01') {
                iVar6 = *(char *)(iVar6 + 0x10) + iVar6;
              }
              else {
                iVar6 = 0;
              }
              iVar6 = (**(code **)(*param_1 + 0x304))(iVar6);
              if (iVar6 == 0) {
                iVar6 = (**(code **)(*param_1 + 0x308))(0);
              }
              if (iVar6 == 1) {
                fVar1 = *(float *)(iVar2 + 0x10 + iVar7);
                fStack_390 = (local_3b0 - local_3a0) * fVar1 + local_3a0;
                fStack_38c = (local_3ac - local_39c) * fVar1 + local_39c;
                fStack_388 = (local_3a8 - local_398) * fVar1 + local_398;
                fStack_384 = (local_3a4 - local_394) * fVar1 + local_394;
                if ((float)param_1[0x232] < 0.0) {
                  if (*(char *)((int)param_1 + 0x909) != '\0') {
                    iVar7 = param_1[0x21c];
                    if ((uint)*(byte *)((int)param_1 + 0x90b) < *(uint *)(iVar7 + 0x28)) {
                      *(byte *)((int)param_1 + 0x90b) = *(byte *)((int)param_1 + 0x90b) + 1;
                      param_1[0x234] = (int)((float)param_1[0x234] * 0.5);
                      param_1[0x233] = 0;
                      fVar1 = (float)param_1[0x232] * 0.25 * -1.0;
                      param_1[0x232] = (int)fVar1;
                      param_1[0x225] = 0;
                      param_1[0x15] = (int)fStack_38c;
                      if (fVar1 < *(float *)(iVar7 + 0x14)) {
                        *(undefined1 *)((int)param_1 + 0x90b) = *(undefined1 *)(iVar7 + 0x28);
                      }
                      *(undefined1 *)((int)param_1 + 0x90a) = 1;
                      break;
                    }
                  }
                  FUN_005e8780();
                  param_1[0x15] = (int)fStack_38c;
                  break;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x242) = 0;
              }
              local_3b4 = local_3b4 + 1;
              iVar7 = iVar7 + 0x60;
            } while (local_3b4 < *(int *)(local_3b8 + 0x14));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x242) = 0;
        }
      }
    }
    else if (param_1[300] == 0x70630) {
      if ((DAT_018b9174 == 0xd50) && ((float)param_1[0x15] <= -5.0)) {
        param_1[0x232] = 0;
        piVar5 = (int *)FUN_00c13920();
        iVar2 = (**(code **)(*piVar5 + 0x28))(0xffffffff);
        if (iVar2 != 0) {
          iVar7 = *param_1;
          param_1[0x244] = 1;
          uVar3 = FUN_00a7c8b0();
          (**(code **)(iVar7 + 0x6c))(uVar3);
          *(undefined1 *)((int)param_1 + 0x909) = 1;
          FUN_005e8780();
          return;
        }
      }
      if (((float)param_1[0x232] < 0.0) || (0.0 < (float)param_1[0x232])) {
        hkpAllRayHitCollector::hkpAllRayHitCollector();
        local_3b0 = 0.0;
        local_3ac = 0.0;
        local_3a8 = 0.0;
        local_3a4 = 1.0;
        local_394 = 1.0;
        local_3a0 = 0.0;
        local_39c = 0.0;
        local_398 = 0.0;
        pfVar4 = (float *)(**(code **)(*param_1 + 0x68))();
        local_3b0 = *pfVar4;
        local_3a8 = pfVar4[2];
        local_3a4 = pfVar4[3];
        local_3ac = pfVar4[1] + 0.4 + *(float *)(param_1[0x21c] + 0x14);
        local_394 = (float)param_1[0x227] + local_3a4;
        local_39c = ((local_3ac + (float)param_1[0x225]) - 0.45) - *(float *)(param_1[0x21c] + 0x14)
        ;
        local_3a0 = local_3b0;
        local_398 = local_3a8;
        iVar2 = RayCastMultiHitWork::RayCastMultiHitWork
                          (local_330,&local_3b0,&local_3a0,9,"It0630_SpecialCheck");
        if ((iVar2 == 1) && (local_3b8 = iStack_31c, 0 < iStack_31c)) {
          FUN_0112c170();
          local_3b4 = 0;
          if (0 < iStack_31c) {
            do {
              iVar6 = iStack_320;
              iVar2 = *(int *)(iStack_320 + 0x50 + iVar7);
              if (*(char *)(iVar2 + 0x18) == '\x01') {
                iVar2 = *(char *)(iVar2 + 0x10) + iVar2;
              }
              else {
                iVar2 = 0;
              }
              iVar2 = (**(code **)(*param_1 + 0x304))(iVar2);
              if (iVar2 == 0) {
                iVar2 = (**(code **)(*param_1 + 0x308))(0);
              }
              if (iVar2 == 1) {
                fVar1 = *(float *)(iVar6 + 0x10 + iVar7);
                fStack_390 = (local_3a0 - local_3b0) * fVar1 + local_3b0;
                fStack_38c = (local_39c - local_3ac) * fVar1 + local_3ac;
                fStack_388 = (local_398 - local_3a8) * fVar1 + local_3a8;
                fStack_384 = (local_394 - local_3a4) * fVar1 + local_3a4;
                if ((float)param_1[0x232] < 0.0) {
                  if (*(char *)((int)param_1 + 0x909) != '\0') {
                    iVar7 = param_1[0x21c];
                    if ((uint)*(byte *)((int)param_1 + 0x90b) < *(uint *)(iVar7 + 0x28)) {
                      *(byte *)((int)param_1 + 0x90b) = *(byte *)((int)param_1 + 0x90b) + 1;
                      param_1[0x234] = (int)((float)param_1[0x234] * 0.5);
                      param_1[0x233] = 0;
                      fVar1 = (float)param_1[0x232] * 0.25 * -1.0;
                      param_1[0x232] = (int)fVar1;
                      param_1[0x225] = 0;
                      param_1[0x15] = (int)fStack_38c;
                      if (fVar1 < *(float *)(iVar7 + 0x14)) {
                        *(undefined1 *)((int)param_1 + 0x90b) = *(undefined1 *)(iVar7 + 0x28);
                      }
                      *(undefined1 *)((int)param_1 + 0x90a) = 1;
                      break;
                    }
                  }
                  FUN_005e8780();
                  param_1[0x15] = (int)fStack_38c;
                  break;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x242) = 0;
              }
              local_3b4 = local_3b4 + 1;
              iVar7 = iVar7 + 0x60;
            } while (local_3b4 < local_3b8);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x242) = 0;
        }
        hkpRayHitCollector::hkpRayHitCollector_2();
      }
    }
    if (((float)param_1[0x232] <= -*(float *)(param_1[0x21c] + 0x14)) ||
       (0.0 < (float)param_1[0x232])) {
      iVar7 = FUN_009f8b40();
      piVar5 = (int *)(**(code **)(*param_1 + 0x68))();
      iStack_370 = *piVar5;
      iStack_368 = piVar5[2];
      piStack_380 = param_1 + 0x241;
      fStack_364 = (float)piVar5[3];
      uStack_350 = iVar7 << 0x10 | 9;
      fStack_36c = (float)piVar5[1] + 0.4 + *(float *)(param_1[0x21c] + 0x14);
      fStack_354 = (float)param_1[0x227] + fStack_364;
      fStack_35c = (((float)param_1[0x225] + fStack_36c) - 0.45) - *(float *)(param_1[0x21c] + 0x14)
      ;
      uStack_37c = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      pcStack_340 = "ItemSplash_Y";
      uStack_338 = 1;
      param_1[0x228] = iStack_370;
      param_1[0x229] = (int)fStack_36c;
      param_1[0x22a] = iStack_368;
      param_1[0x22b] = (int)fStack_364;
      param_1[0x22c] = iStack_370;
      param_1[0x22d] = (int)fStack_35c;
      param_1[0x22e] = iStack_368;
      param_1[0x22f] = (int)fStack_354;
      iStack_360 = iStack_370;
      iStack_358 = iStack_368;
      piStack_33c = param_1;
      if (param_1[0x23e] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
      }
      HavokRayCastManager::set(&piStack_380);
      if (param_1[0x23e] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
      }
    }
  }
  return;
}

