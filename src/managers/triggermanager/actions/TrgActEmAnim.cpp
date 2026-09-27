// src/managers/triggermanager/actions/TrgActEmAnim.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F7A0..00C7F7A0, 1 functions

#include "mgrr.h"

// 00C7F7A0  Trigger::Act::EM_ANIM  size=543  [class]
uint __fastcall Trigger::Act::EM_ANIM(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char local_28 [8];
  char local_20 [32];
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016aaffc);
    return 0;
  }
  iVar5 = iVar3 + 0xc;
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016aafcc);
    return 0;
  }
  pcVar1 = (char *)(iVar3 + 0x1c);
  if (pcVar1 == (char *)0x0) {
    FUN_00dd5650(&DAT_016aafa0);
    return 0;
  }
  iVar4 = FUN_00c19da0(DAT_01d5bad4,*(undefined4 *)(iVar3 + 8),iVar5);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aaf58,*(undefined4 *)(iVar3 + 8),iVar5);
    return 0;
  }
  iVar5 = FUN_00a7c8a0();
  if (iVar5 != 0) {
    if (*(int *)(iVar3 + 4) == 0x50) {
      local_28[0] = '\0';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      local_28[4] = 0;
      cVar2 = *pcVar1;
      pcVar6 = pcVar1;
      while (cVar2 != '_') {
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar6;
      }
      _strncpy_s(local_28,5,pcVar6 + 1,4);
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
      uVar7 = FUN_00de4500(local_20);
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
      uVar8 = FUN_00de4500(local_20);
      uVar9 = FUN_00ac45d0(uVar7,uVar8,0,0,0x3f800000,0,0xbf800000,0x3f800000,local_28);
      FUN_00a96070(0,0x8000000,1);
    }
    else {
      if (*(int *)(iVar3 + 4) != 0x4f) {
        FUN_00dd5650(&DAT_016aaec0);
        goto LAB_00c7f951;
      }
      iVar5 = FUN_00aa4940(pcVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      uVar9 = (uint)(iVar5 != -1);
    }
    if (uVar9 != 0) {
      return uVar9;
    }
  }
LAB_00c7f951:
  FUN_00dd5650(&DAT_016aaf08,*(undefined4 *)(iVar3 + 8),iVar3 + 0xc,pcVar1);
  return 0;
}

