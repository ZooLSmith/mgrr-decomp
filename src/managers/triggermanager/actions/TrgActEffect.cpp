// src/managers/triggermanager/actions/TrgActEffect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C96670..00C96670, 1 functions

#include "mgrr.h"

// 00C96670  Trigger::Act::EFFECT  size=319  [class]
int __fastcall Trigger::Act::EFFECT(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar3 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b0e90);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar5 = *(int *)(iVar3 + 8);
  pcVar1 = (char *)(iVar3 + 0xc);
  if (iVar5 == -1) {
    FUN_00c77fc0(pcVar1,&local_54);
  }
  else {
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_54,iVar5);
    }
    else {
      FUN_00c959c0(pcVar1,iVar5,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar5 = 1;
  if (0 < local_48) {
    do {
      if (*(int *)(local_50 + iVar6 * 4) == 0) {
        if (*(int *)(iVar3 + 8) == -1) {
          FUN_00dd5650(&DAT_016b0e54,pcVar1);
        }
LAB_00c9675f:
        iVar5 = 0;
      }
      else {
        if (iVar5 == 0) goto LAB_00c9675f;
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        FUN_00a7c8a0(uVar7);
        iVar5 = FUN_00aa92c0(uVar7);
        if (iVar5 == 0) goto LAB_00c9675f;
        iVar5 = 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar5;
}

