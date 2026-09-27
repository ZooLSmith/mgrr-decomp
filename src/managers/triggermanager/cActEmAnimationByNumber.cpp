// src/managers/triggermanager/cActEmAnimationByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80CC0..00C941E0, 7 functions

#include "mgrr.h"

// 00C80CC0  Trigger::cActEmAnimationByNumber::vf18  size=794  [class]
uint __fastcall Trigger::cActEmAnimationByNumber::vf18(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *local_30;
  char local_28 [8];
  char local_20 [32];
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 != 0x94) {
    if (iVar2 == 0x95) {
      local_30 = "EM_ANIM_PHASE_NUM";
      goto LAB_00c80d08;
    }
    if (iVar2 == 0x32) {
      local_30 = "EM_ANIM_LOOP_NUM";
      goto LAB_00c80d08;
    }
    local_30 = "EM_ANIM_PHASE_LOOP_NUM";
    if (iVar2 == 0x96) goto LAB_00c80d08;
  }
  local_30 = "EM_ANIM_NUM";
LAB_00c80d08:
  iVar2 = FUN_00c19c00(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                       *(undefined4 *)(iVar3 + 0x10));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016abaa4,local_30,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                 *(undefined4 *)(iVar3 + 0x10));
    return 0;
  }
  uVar6 = 0;
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aba0c,local_30);
  }
  else {
    iVar2 = *(int *)(iVar3 + 4);
    if (iVar2 == 0x94) {
      iVar3 = FUN_00aa4940(iVar3 + 0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    else {
      if (iVar2 != 0x32) {
        if ((iVar2 != 0x95) && (iVar2 != 0x96)) {
          FUN_00dd5650(&DAT_016aba88,local_30);
          return 0;
        }
        pcVar1 = (char *)(iVar3 + 0x14);
        local_28[0] = '\0';
        local_28[1] = '\0';
        local_28[2] = '\0';
        local_28[3] = '\0';
        local_28[4] = 0;
        iVar2 = 0;
        pcVar4 = pcVar1;
        do {
          if (*pcVar4 == '\0') break;
          if (*pcVar4 == '_') {
            if (iVar2 < 0x10) {
              _strncpy_s(local_28,5,pcVar4 + 1,4);
              local_20[0] = '\0';
              local_20[1] = '\0';
              local_20[2] = '\0';
              local_20[3] = '\0';
              local_20[4] = '\0';
              local_20[5] = '\0';
              local_20[6] = '\0';
              local_20[7] = '\0';
              local_20[8] = '\0';
              local_20[9] = '\0';
              local_20[10] = '\0';
              local_20[0xb] = '\0';
              local_20[0xc] = '\0';
              local_20[0xd] = '\0';
              local_20[0xe] = '\0';
              local_20[0xf] = '\0';
              local_20[0x10] = '\0';
              local_20[0x11] = '\0';
              local_20[0x12] = '\0';
              local_20[0x13] = '\0';
              local_20[0x14] = '\0';
              local_20[0x15] = '\0';
              local_20[0x16] = '\0';
              local_20[0x17] = '\0';
              local_20[0x18] = '\0';
              local_20[0x19] = '\0';
              local_20[0x1a] = '\0';
              local_20[0x1b] = '\0';
              local_20[0x1c] = '\0';
              local_20[0x1d] = '\0';
              local_20[0x1e] = '\0';
              local_20[0x1f] = '\0';
              _sprintf_s(local_20,0x20,"%s.mot",pcVar1);
              iVar2 = FUN_00de4500(local_20);
              if (iVar2 == 0) {
                FUN_00dd5650(&DAT_016aba2c,local_30,local_20);
                return 0;
              }
              local_20[0] = '\0';
              local_20[1] = '\0';
              local_20[2] = '\0';
              local_20[3] = '\0';
              local_20[4] = '\0';
              local_20[5] = '\0';
              local_20[6] = '\0';
              local_20[7] = '\0';
              local_20[8] = '\0';
              local_20[9] = '\0';
              local_20[10] = '\0';
              local_20[0xb] = '\0';
              local_20[0xc] = '\0';
              local_20[0xd] = '\0';
              local_20[0xe] = '\0';
              local_20[0xf] = '\0';
              local_20[0x10] = '\0';
              local_20[0x11] = '\0';
              local_20[0x12] = '\0';
              local_20[0x13] = '\0';
              local_20[0x14] = '\0';
              local_20[0x15] = '\0';
              local_20[0x16] = '\0';
              local_20[0x17] = '\0';
              local_20[0x18] = '\0';
              local_20[0x19] = '\0';
              local_20[0x1a] = '\0';
              local_20[0x1b] = '\0';
              local_20[0x1c] = '\0';
              local_20[0x1d] = '\0';
              local_20[0x1e] = '\0';
              local_20[0x1f] = '\0';
              _sprintf_s(local_20,0x20,"%s_0_seq.bxm",pcVar1);
              uVar5 = FUN_00de4500(local_20);
              uVar6 = FUN_00ac45d0(iVar2,uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000,local_28);
              if (uVar6 != 1) {
                return uVar6;
              }
              FUN_00a95f70(0x41400000);
              if (*(int *)(iVar3 + 4) != 0x95) {
                return 1;
              }
              FUN_00a96070(0,0x8000000,1);
              return 1;
            }
            break;
          }
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 < 0x10);
        FUN_00dd5650(&DAT_016aba5c,local_30,pcVar1);
        return 0;
      }
      iVar3 = FUN_00a9f2f0(iVar3 + 0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    uVar6 = (uint)(iVar3 != -1);
    if (uVar6 == 1) {
      FUN_00a95f70(0x41400000);
      return 1;
    }
  }
  return uVar6;
}

// 00C8E030  Trigger::cActEmAnimationByNumber::vf08  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf08(void)

{
  return;
}

// 00C8E040  Trigger::cActEmAnimationByNumber::vf0C  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf0C(void)

{
  return;
}

// 00C8E050  Trigger::cActEmAnimationByNumber::vf10  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf10(void)

{
  return;
}

// 00C8E060  Trigger::cActEmAnimationByNumber::vf14  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf14(void)

{
  return;
}

// 00C941D0  Trigger::cActEmAnimationByNumber::vf00  size=6  [class]
undefined * Trigger::cActEmAnimationByNumber::vf00(void)

{
  return &DAT_01dbe234;
}

// 00C941E0  Trigger::cActEmAnimationByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmAnimationByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

