// src/unsorted/unit_00D35CE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D35CE0..00D35F60, 5 functions

#include "types.h"

// 00D35CE0  FUN_00d35ce0  size=79  [run]
int FUN_00d35ce0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x110,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cVRMissionStartDisp::cVRMissionStartDisp();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cVRMissionStartDisp";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x52);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 00D35D30  FUN_00d35d30  size=242  [run]
int __thiscall FUN_00d35d30(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_54 = 0;
  local_50 = 0;
  local_10 = 0;
  local_4c = 0;
  local_c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D35E30  FUN_00d35e30  size=79  [run]
int FUN_00d35e30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x4a4,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager_3();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cVRMissionResult2";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x53);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 00D35E80  FUN_00d35e80  size=216  [run]
int FUN_00d35e80(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D35F60  FUN_00d35f60  size=892  [run]
undefined4 __fastcall FUN_00d35f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  char *pcVar4;
  float local_10 [2];
  undefined1 local_8 [8];
  
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x490)) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x1d4);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x490) = 4;
      uVar2 = 1;
    }
    else {
      if (iVar1 == 0) {
        FUN_00e5e050("core_se_sys_mission_rank_a",0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),1);
        pcVar4 = "VR_TITLE_06";
LAB_00d3602a:
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x480),pcVar4,0,0xffffffff);
      }
      else {
        if (iVar1 == 1) {
          FUN_00e5e050("core_se_sys_mission_rank_b",0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),1);
          pcVar4 = "VR_TITLE_07";
          goto LAB_00d3602a;
        }
        if (iVar1 == 2) {
          FUN_00e5e050("core_se_sys_mission_rank_c",0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x470),1);
          pcVar4 = "VR_TITLE_08";
          goto LAB_00d3602a;
        }
      }
      if (*(int *)(param_1 + 0x494) != 0) {
        FUN_00ca84a0(*(int *)(param_1 + 0x494),local_8,8);
        FUN_0095c6a0(local_10,&DAT_016b893c,local_8);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x488),local_10);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x48c),local_10);
      }
      if (DAT_01dc2cd8 == 6) {
        *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x480);
        *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x47c);
      }
      else {
        *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x47c);
        *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x480);
      }
      fVar3 = (float10)FUN_00d35e80(param_1 + 0x38,*(undefined4 *)(param_1 + 0x498));
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x49c),(float)fVar3);
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_00cdeec0(0);
      }
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1f8) = 0;
      return uVar2;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x50) != 0) && (iVar1 = FUN_00cdf400(0), iVar1 != 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x498),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x498),1,3);
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x498));
    if (iVar1 == 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x49c),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x49c),1,3);
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      return 0;
    }
    break;
  case 3:
    iVar1 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x49c));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x494) != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x484),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x488),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x48c),1);
        FUN_00cce0e0(*(undefined4 *)(param_1 + 0x488),1,3);
        FUN_00cce0e0(*(undefined4 *)(param_1 + 0x48c),1,3);
        *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x490) = 5;
      return 0;
    }
    break;
  case 4:
    fVar3 = (float10)FUN_00d047a0(param_1 + 0x38,*(undefined4 *)(param_1 + 0x488));
    local_10[0] = (float)(uint)((float10)0 != fVar3);
    local_10[0] = (float)(fVar3 - (float10)(int)local_10[0] * (float10)6.0);
    iVar1 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x488));
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
    }
    fVar3 = (float10)FUN_00cc13f0(param_1 + 0x38,*(undefined4 *)(param_1 + 0x484),local_10[0]);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x484),(float)fVar3);
    return 0;
  case 5:
    uVar2 = 1;
  }
  return uVar2;
}

