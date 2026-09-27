// src/managers/triggermanager/cActSound.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F390..00C928D0, 7 functions

#include "mgrr.h"

// 00C7F390  Trigger::cActSound::vf18  size=125  [class]
undefined4 __fastcall Trigger::cActSound::vf18(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aab54);
    return 0;
  }
  pbVar5 = &DAT_016416fa;
  pbVar3 = (byte *)(iVar2 + 8);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00c7f3d6:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00c7f3db;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00c7f3d6;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c7f3db:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aab28);
    return 0;
  }
  FUN_00e467b0((byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18));
  return 1;
}

// 00C8B090  Trigger::cActSound::vf08  size=1  [class]
void Trigger::cActSound::vf08(void)

{
  return;
}

// 00C8B0A0  Trigger::cActSound::vf0C  size=1  [class]
void Trigger::cActSound::vf0C(void)

{
  return;
}

// 00C8B0B0  Trigger::cActSound::vf10  size=1  [class]
void Trigger::cActSound::vf10(void)

{
  return;
}

// 00C8B0C0  Trigger::cActSound::vf14  size=1  [class]
void Trigger::cActSound::vf14(void)

{
  return;
}

// 00C928C0  Trigger::cActSound::vf00  size=6  [class]
undefined * Trigger::cActSound::vf00(void)

{
  return &DAT_01dbe104;
}

// 00C928D0  Trigger::cActSound::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSound::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

