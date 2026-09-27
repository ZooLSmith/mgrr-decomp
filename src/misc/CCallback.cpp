// src/misc/CCallback.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00981D70..00982280, 15 functions

#include "mgrr.h"

// 00981D70  CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf04  size=10  [class]
void __fastcall CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf04(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00981d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}

// 00981D80  CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf00  size=18  [class]
void __thiscall
CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf00(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}

// 00981DA0  CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf08  size=6  [class]
undefined4 CCallback<CSteamAchievements,UserStatsReceived_t,0>::vf08(void)

{
  return 0x18;
}

// 00981DD0  CCallback<CSteamAchievements,UserStatsStored_t,0>::vf04  size=10  [class]
void __fastcall CCallback<CSteamAchievements,UserStatsStored_t,0>::vf04(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00981dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}

// 00981DE0  CCallback<CSteamAchievements,UserStatsStored_t,0>::vf00  size=18  [class]
void __thiscall
CCallback<CSteamAchievements,UserStatsStored_t,0>::vf00(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}

// 00981E00  CCallback<CSteamAchievements,UserStatsStored_t,0>::vf08  size=6  [class]
undefined4 CCallback<CSteamAchievements,UserStatsStored_t,0>::vf08(void)

{
  return 0x10;
}

// 00981E30  CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf04  size=10  [class]
void __fastcall CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf04(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00981e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}

// 00981E40  CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf00  size=18  [class]
void __thiscall
CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf00(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}

// 00981E60  CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf08  size=6  [class]
undefined4 CCallback<CSteamAchievements,UserAchievementStored_t,0>::vf08(void)

{
  return 0x98;
}

// 00981F30  CCallback<CSteamAchievements,UserStatsReceived_t,0>::CCallback<CSteamAchievements,UserStatsReceived_t,0>_4  size=76  [class]
void __fastcall
CCallback<CSteamAchievements,UserStatsReceived_t,0>::
CCallback<CSteamAchievements,UserStatsReceived_t,0>_4(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = CCallback<CSteamAchievements,UserAchievementStored_t,0>::vftable
  ;
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x24) = CCallback<CSteamAchievements,UserStatsStored_t,0>::vftable;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x10) = vftable;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x10));
  }
  return;
}

// 00982070  CCallback<CSteamAchievements,UserStatsReceived_t,0>::CCallback<CSteamAchievements,UserStatsReceived_t,0>_2  size=96  [class]
int __thiscall
CCallback<CSteamAchievements,UserStatsReceived_t,0>::
CCallback<CSteamAchievements,UserStatsReceived_t,0>_2(int param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0x38) = CCallback<CSteamAchievements,UserAchievementStored_t,0>::vftable
  ;
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x24) = CCallback<CSteamAchievements,UserStatsStored_t,0>::vftable;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x10) = vftable;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    SteamAPI_UnregisterCallback((undefined4 *)(param_1 + 0x10));
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009820D0  CCallback<CSteamAchievements,UserStatsReceived_t,0>::CCallback<CSteamAchievements,UserStatsReceived_t,0>  size=205  [class]
undefined4 * __thiscall
CCallback<CSteamAchievements,UserStatsReceived_t,0>::
CCallback<CSteamAchievements,UserStatsReceived_t,0>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[4] = vftable;
  param_1[7] = param_1;
  param_1[8] = &LAB_00981bd0;
  param_1[7] = param_1;
  param_1[8] = &LAB_00981bd0;
  SteamAPI_RegisterCallback(param_1 + 4,0x44d);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[9] = CCallback<CSteamAchievements,UserStatsStored_t,0>::vftable;
  param_1[0xc] = param_1;
  param_1[0xd] = &LAB_00981c20;
  param_1[0xc] = param_1;
  param_1[0xd] = &LAB_00981c20;
  SteamAPI_RegisterCallback(param_1 + 9,0x44e);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0xe] = CCallback<CSteamAchievements,UserAchievementStored_t,0>::vftable;
  param_1[0x11] = param_1;
  param_1[0x12] = &LAB_00981c50;
  param_1[0x11] = param_1;
  param_1[0x12] = &LAB_00981c50;
  SteamAPI_RegisterCallback(param_1 + 0xe,0x44f);
  piVar1 = (int *)SteamUtils();
  uVar2 = (**(code **)(*piVar1 + 0x24))();
  param_1[1] = uVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return param_1;
}

// 009821A0  FUN_009821a0  size=90  [between]
void __fastcall FUN_009821a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = SteamUtils();
  if (iVar1 != 0) {
    piVar2 = (int *)SteamUtils();
    uVar3 = (**(code **)(*piVar2 + 0x24))();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar1 = FUN_00dd3500(0x4c,&DAT_01b7bcf0);
    if (iVar1 != 0) {
      uVar3 = CCallback<CSteamAchievements,UserStatsReceived_t,0>::
              CCallback<CSteamAchievements,UserStatsReceived_t,0>(&DAT_01887c70,0x3c);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      return;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 00982200  CCallback<CSteamAchievements,UserStatsReceived_t,0>::CCallback<CSteamAchievements,UserStatsReceived_t,0>_3  size=119  [class]
void __fastcall
CCallback<CSteamAchievements,UserStatsReceived_t,0>::
CCallback<CSteamAchievements,UserStatsReceived_t,0>_3(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[6];
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x38) = CCallback<CSteamAchievements,UserAchievementStored_t,0>::vftable
    ;
    if ((*(byte *)(iVar1 + 0x3c) & 1) != 0) {
      SteamAPI_UnregisterCallback((undefined4 *)(iVar1 + 0x38));
    }
    *(undefined4 *)(iVar1 + 0x24) = CCallback<CSteamAchievements,UserStatsStored_t,0>::vftable;
    if ((*(byte *)(iVar1 + 0x28) & 1) != 0) {
      SteamAPI_UnregisterCallback((undefined4 *)(iVar1 + 0x24));
    }
    *(undefined4 *)(iVar1 + 0x10) = vftable;
    if ((*(byte *)(iVar1 + 0x14) & 1) != 0) {
      SteamAPI_UnregisterCallback((undefined4 *)(iVar1 + 0x10));
    }
    FUN_00dd4920(iVar1);
    param_1[6] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00982271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SteamAPI_Shutdown();
  return;
}

// 00982280  FUN_00982280  size=133  [callgraph]
undefined4 __fastcall FUN_00982280(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    FUN_009821a0();
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x14) != 1) {
      iVar1 = SteamUserStats();
      if (iVar1 != 0) {
        iVar1 = SteamUser();
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)SteamUserStats();
          uVar3 = (**(code **)*puVar2)();
          *(uint *)(param_1 + 0x14) = uVar3 & 0xff;
          if ((uVar3 & 0xff) != 0) {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            return 1;
          }
        }
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = SteamUser();
    if (iVar1 != 0) {
      iVar1 = SteamUserStats();
      if (iVar1 != 0) {
        SteamAPI_RunCallbacks();
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

