// src/managers/triggermanager/cActBgmSimple.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8AF50..00C92650, 7 functions

#include "mgrr.h"

// 00C8AF50  Trigger::cActBgmSimple::vf08  size=1  [class]
void Trigger::cActBgmSimple::vf08(void)

{
  return;
}

// 00C8AF60  Trigger::cActBgmSimple::vf0C  size=1  [class]
void Trigger::cActBgmSimple::vf0C(void)

{
  return;
}

// 00C8AF70  Trigger::cActBgmSimple::vf10  size=1  [class]
void Trigger::cActBgmSimple::vf10(void)

{
  return;
}

// 00C8AF80  Trigger::cActBgmSimple::vf14  size=1  [class]
void Trigger::cActBgmSimple::vf14(void)

{
  return;
}

// 00C92620  Trigger::cActBgmSimple::vf00  size=6  [class]
undefined * Trigger::cActBgmSimple::vf00(void)

{
  return &DAT_01dbe0fc;
}

// 00C92630  Trigger::cActBgmSimple::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBgmSimple::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92650  Trigger::cActBgmSimple::vf18  size=215  [class]
undefined4 __fastcall Trigger::cActBgmSimple::vf18(int param_1)

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
    FUN_00dd5650(&DAT_016af4c0);
    return 0;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 4) + 8);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00c926a4:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00c926a9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00c926a4;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c926a9:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af494);
    return 0;
  }
  uVar5 = FUN_00959930(local_400,"%s%03x_%s","bgm_p",DAT_018b9174,pbVar1);
  iVar4 = FUN_00e5e1b0(uVar5);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016af448,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

