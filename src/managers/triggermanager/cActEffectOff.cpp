// src/managers/triggermanager/cActEffectOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8E710..00C979C0, 7 functions

#include "mgrr.h"

// 00C8E710  Trigger::cActEffectOff::vf08  size=1  [class]
void Trigger::cActEffectOff::vf08(void)

{
  return;
}

// 00C8E720  Trigger::cActEffectOff::vf0C  size=1  [class]
void Trigger::cActEffectOff::vf0C(void)

{
  return;
}

// 00C8E730  Trigger::cActEffectOff::vf10  size=1  [class]
void Trigger::cActEffectOff::vf10(void)

{
  return;
}

// 00C8E740  Trigger::cActEffectOff::vf14  size=1  [class]
void Trigger::cActEffectOff::vf14(void)

{
  return;
}

// 00C94490  Trigger::cActEffectOff::vf00  size=6  [class]
undefined * Trigger::cActEffectOff::vf00(void)

{
  return &DAT_01dbe260;
}

// 00C944A0  Trigger::cActEffectOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffectOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C979C0  Trigger::cActEffectOff::vf18  size=328  [class]
undefined4 __fastcall Trigger::cActEffectOff::vf18(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b1604);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar6 = *(int *)(iVar3 + 8);
  pcVar1 = (char *)(iVar3 + 0xc);
  if (iVar6 == -1) {
    FUN_00c77fc0(pcVar1,&local_54);
  }
  else {
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_54,iVar6);
    }
    else {
      FUN_00c959c0(pcVar1,iVar6,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar6 = 0;
  uVar5 = 1;
  if (0 < local_48) {
    uVar5 = 1;
    do {
      if (*(int *)(local_50 + iVar6 * 4) == 0) {
        if (*(int *)(iVar3 + 8) == -1) {
          FUN_00dd5650(&DAT_016b0e54,pcVar1);
        }
        uVar5 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar3 + 0x24);
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        uVar8 = *(undefined4 *)(iVar3 + 0x20);
        FUN_00a7c8a0(uVar7,uVar8,uVar9);
        FUN_00a8ca50(uVar7,uVar8,uVar9);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar5;
}

