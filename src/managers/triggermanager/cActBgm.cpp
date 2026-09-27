// src/managers/triggermanager/cActBgm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8AEB0..00C92540, 7 functions

#include "mgrr.h"

// 00C8AEB0  Trigger::cActBgm::vf08  size=1  [class]
void Trigger::cActBgm::vf08(void)

{
  return;
}

// 00C8AEC0  Trigger::cActBgm::vf0C  size=1  [class]
void Trigger::cActBgm::vf0C(void)

{
  return;
}

// 00C8AED0  Trigger::cActBgm::vf10  size=1  [class]
void Trigger::cActBgm::vf10(void)

{
  return;
}

// 00C8AEE0  Trigger::cActBgm::vf14  size=1  [class]
void Trigger::cActBgm::vf14(void)

{
  return;
}

// 00C92510  Trigger::cActBgm::vf00  size=6  [class]
undefined * Trigger::cActBgm::vf00(void)

{
  return &DAT_01dbe0f8;
}

// 00C92520  Trigger::cActBgm::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBgm::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92540  Trigger::cActBgm::vf18  size=204  [class]
undefined4 __fastcall Trigger::cActBgm::vf18(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 local_400 [1024];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016af3f8);
    return 0;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 4) + 8);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00c92594:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00c92599;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00c92594;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c92599:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af3d0);
    return 0;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016575ac,pbVar1);
  iVar4 = FUN_00e5e1b0(uVar5);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016af3a0,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

