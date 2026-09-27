// src/managers/triggermanager/actions/TrgActVrGoalPoint.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97B10..00C97B10, 1 functions

#include "mgrr.h"

// 00C97B10  Trigger::Act::VR_GOAL_POINT  size=755  [class]
undefined4 __fastcall Trigger::Act::VR_GOAL_POINT(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  float local_d0;
  int *local_cc;
  float local_c8;
  int local_c4;
  int local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90 [20];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b1684);
    return 0;
  }
  iVar1 = FUN_00c78580(*(undefined4 *)(iVar2 + 8),&local_b0);
  if (iVar1 != 0) {
    uVar5 = 1;
    iVar1 = FUN_00d467a0();
    if ((iVar1 != 0) && (DAT_018b9174 == 0xd30)) {
      uVar7 = 0xd6040;
      uVar5 = FUN_00e03ea0(&DAT_016b164c,0xd6040);
      iVar1 = FUN_00a18d70(uVar5,uVar7);
      if (iVar1 != 0) {
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar2 = FUN_00a7c7e0();
          if (iVar2 != 0) {
            uVar5 = FUN_00a7c8a0();
            iVar2 = FUN_00c83b80(uVar5);
            if (iVar2 != 0) {
              FUN_006042f0(0);
              return 1;
            }
          }
        }
        else {
          iVar2 = FUN_00a7c7e0();
          if (iVar2 != 0) {
            uVar5 = FUN_00a7c8a0();
            piVar3 = (int *)FUN_00c83b80(uVar5);
            if (piVar3 != (int *)0x0) {
              local_d0 = local_b0;
              local_cc = (int *)local_ac;
              local_c8 = local_a8;
              local_c4 = 0x3f800000;
              local_a0 = 0;
              local_9c = local_a4;
              local_98 = 0;
              local_94 = 0x3f800000;
              (**(code **)(*piVar3 + 0x7c))(&local_d0,&local_a0);
              FUN_006042f0(1);
              return 1;
            }
          }
        }
      }
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 1) {
      local_cc = local_90;
      local_d0 = 0.0;
      local_c8 = 2.24208e-44;
      local_c4 = 0;
      local_c0 = 0;
      FUN_00c77fc0("Id:Bm0296",&local_d0);
      piVar3 = local_cc;
      if (local_c4 < 1) {
        uVar5 = 0;
      }
      else {
        piVar6 = local_cc;
        if (local_cc != local_cc + local_c4) {
          do {
            if (((((*piVar6 != 0) &&
                  (pfVar4 = (float *)FUN_00a7c8b0(), piVar3 = local_cc, local_b0 == *pfVar4)) &&
                 (local_ac == pfVar4[1])) &&
                ((local_a8 == pfVar4[2] &&
                 (pfVar4 = (float *)FUN_00a7c8d0(), piVar3 = local_cc, *pfVar4 == 0.0)))) &&
               ((local_a4 == pfVar4[1] && (pfVar4[2] == 0.0)))) {
              FUN_00a805f0();
              piVar3 = local_cc;
            }
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar3 + local_c4);
        }
      }
      if ((piVar3 != (int *)0x0) && (local_c4 = 0, local_c0 != 0)) {
        FUN_00dd48d0(piVar3,0);
      }
      return uVar5;
    }
    FUN_0040b190();
    local_40 = local_b0;
    local_3c = local_ac;
    local_38 = local_a8;
    local_34 = 0;
    local_30 = local_a4;
    local_2c = 0;
    FUN_00a82090("goalPoint",0xd0296,local_90);
    return 1;
  }
  FUN_00dd5650(&DAT_016b1654);
  return 0;
}

