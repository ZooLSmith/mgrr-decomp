// src/unsorted/unit_005E9F50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E9F50..005EA3D0, 4 functions

#include "types.h"

// 005E9F50  FUN_005e9f50  size=509  [run]
void __thiscall FUN_005e9f50(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  *(int *)(param_1 + 0x874) = param_2;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + 8);
    if ((iVar6 == 0xd92bb0f) || (iVar6 == 0x4cbfda41)) {
      iVar6 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
        do {
          pbVar5 = *(byte **)(*piVar7 + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pbVar3 = (byte *)0x1645164;
            do {
              bVar1 = *pbVar3;
              bVar8 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_005ea072:
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_005ea077;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar8 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_005ea072;
              pbVar3 = pbVar3 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_005ea077:
            if (iVar4 == 0) {
              if ((iVar6 != -1) && (iVar6 = iVar6 * 0x70 + *(int *)(param_1 + 800), iVar6 != 0)) {
                *(undefined4 *)(iVar6 + 0x1c) = 0x3f800000;
                *(undefined4 *)(iVar6 + 0x10) = 0x3ec8c8c9;
                *(undefined4 *)(iVar6 + 0x14) = 0x3f800000;
                uVar2 = 0x3f69e9ea;
                goto LAB_005ea0af;
              }
              break;
            }
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 0x1c;
        } while (iVar6 < *(short *)(param_1 + 0x324));
      }
    }
    else if (((iVar6 == 0x23a6f56d) || (iVar6 == 0x3855170f)) &&
            (iVar6 = 0, 0 < *(short *)(param_1 + 0x324))) {
      piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
      do {
        pbVar5 = *(byte **)(*piVar7 + 0x40);
        if (pbVar5 != (byte *)0x0) {
          pbVar3 = (byte *)0x1645164;
          do {
            bVar1 = *pbVar3;
            bVar8 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_005e9fdb:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_005e9fe0;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar8 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_005e9fdb;
            pbVar3 = pbVar3 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_005e9fe0:
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (iVar6 = iVar6 * 0x70 + *(int *)(param_1 + 800), iVar6 != 0)) {
              *(undefined4 *)(iVar6 + 0x1c) = 0x3f800000;
              *(undefined4 *)(iVar6 + 0x10) = 0x3f7afafb;
              *(undefined4 *)(iVar6 + 0x14) = 0x3f2aaaab;
              uVar2 = 0x3e70f0f1;
LAB_005ea0af:
              *(undefined4 *)(iVar6 + 0x18) = uVar2;
            }
            break;
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x1c;
      } while (iVar6 < *(short *)(param_1 + 0x324));
    }
    if (((*(int *)(*(int *)(param_1 + 0x874) + 8) == 0x263b6dae) &&
        (*(int *)(param_1 + 0x4b0) == 0x70200)) &&
       ((1 < *(short *)(param_1 + 0x324) && (iVar6 = *(int *)(param_1 + 800), iVar6 != -0x70)))) {
      *(undefined4 *)(iVar6 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x88) = 0x3f800000;
    }
    if ((((*(int *)(*(int *)(param_1 + 0x874) + 8) == 0x513c5d38) &&
         (*(int *)(param_1 + 0x4b0) == 0x70200)) && (1 < *(short *)(param_1 + 0x324))) &&
       (iVar6 = *(int *)(param_1 + 800), iVar6 != -0x70)) {
      *(undefined4 *)(iVar6 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x80) = 0x3ecccccd;
      *(undefined4 *)(iVar6 + 0x84) = 0x3e888889;
      *(undefined4 *)(iVar6 + 0x88) = 0x3e4ccccd;
      return;
    }
  }
  return;
}

// 005EA150  FUN_005ea150  size=511  [run]
void __fastcall FUN_005ea150(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  int *piStack_60;
  undefined4 uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x240] != 0) {
    local_8c = 0;
    local_88 = 0;
    if (param_1[0x23e] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
    }
    local_84 = FUN_00907560(param_1 + 0x240,&local_80,local_70,&local_8c,&local_88,0,0,0);
    if (param_1[0x23e] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
    }
    if (local_84 == 1) {
      iVar2 = (**(code **)(*param_1 + 0x304))(local_8c);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x308))(local_88);
        if (iVar2 == 0) goto LAB_005ea232;
      }
      uVar1 = *(undefined1 *)(param_1[0x21c] + 0x28);
      param_1[0x224] = 0;
      param_1[0x226] = 0;
      *(undefined1 *)((int)param_1 + 0x90b) = uVar1;
      param_1[0x14] = (int)local_80;
      param_1[0x16] = (int)fStack_78;
      param_1[0x234] = 0;
      param_1[0x231] = (int)(*(float *)(param_1[0x21c] + 4) * 0.017453292);
    }
  }
LAB_005ea232:
  iVar2 = FUN_009f8b40();
  pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
  local_80 = *pfVar3;
  fStack_7c = pfVar3[1];
  fStack_78 = pfVar3[2];
  fStack_74 = pfVar3[3];
  fVar4 = (float10)FUN_00a92ff0();
  uStack_30 = iVar2 << 0x10 | 9;
  piStack_60 = param_1 + 0x240;
  uStack_5c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  pcStack_20 = "ItemSplash_XZ";
  uStack_1c = 0;
  uStack_18 = 0;
  fStack_50 = local_80;
  fStack_4c = fStack_7c;
  fStack_3c = fStack_7c;
  fStack_48 = fStack_78;
  fStack_44 = fStack_74;
  fStack_40 = (float)((float10)(float)param_1[0x224] * fVar4 + (float10)local_80);
  fStack_38 = (float)((float10)(float)param_1[0x226] * fVar4 + (float10)fStack_78);
  fStack_34 = (float)((float10)(float)param_1[0x227] * fVar4 + (float10)fStack_74);
  if (param_1[0x23e] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  }
  HavokRayCastManager::set(&piStack_60);
  if (param_1[0x23e] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  }
  fVar4 = (float10)FUN_00a92ff0();
  param_1[0x14] =
       (int)(float)(fVar4 * (float10)(float)param_1[0x224] + (float10)(float)param_1[0x14]);
  fVar4 = (float10)FUN_00a92ff0();
  param_1[0x16] =
       (int)(float)(fVar4 * (float10)(float)param_1[0x226] + (float10)(float)param_1[0x16]);
  return;
}

// 005EA350  FUN_005ea350  size=120  [run]
void __fastcall FUN_005ea350(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x70200) && (1 < *(short *)(param_1 + 0x324))) &&
     (iVar1 = *(int *)(param_1 + 800), iVar1 != -0x70)) {
    iVar2 = FUN_00d46780();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x88) = 0x3f800000;
      return;
    }
    iVar2 = FUN_00d467a0();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x80) = 0x3ecccccd;
      *(undefined4 *)(iVar1 + 0x84) = 0x3e888889;
      *(undefined4 *)(iVar1 + 0x88) = 0x3e4ccccd;
    }
  }
  return;
}

// 005EA3D0  FUN_005ea3d0  size=102  [run]
void __thiscall FUN_005ea3d0(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x70200) && (1 < *(short *)(param_1 + 0x324))) &&
     (iVar1 = *(int *)(param_1 + 800), iVar1 != -0x70)) {
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x88) = 0x3f800000;
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x80) = 0x3ecccccd;
      *(undefined4 *)(iVar1 + 0x84) = 0x3e888889;
      *(undefined4 *)(iVar1 + 0x88) = 0x3e4ccccd;
    }
  }
  return;
}

