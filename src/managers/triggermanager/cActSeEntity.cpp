// src/managers/triggermanager/cActSeEntity.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8B1D0..00C96F90, 7 functions

#include "mgrr.h"

// 00C8B1D0  Trigger::cActSeEntity::vf08  size=1  [class]
void Trigger::cActSeEntity::vf08(void)

{
  return;
}

// 00C8B1E0  Trigger::cActSeEntity::vf0C  size=1  [class]
void Trigger::cActSeEntity::vf0C(void)

{
  return;
}

// 00C8B1F0  Trigger::cActSeEntity::vf10  size=1  [class]
void Trigger::cActSeEntity::vf10(void)

{
  return;
}

// 00C8B200  Trigger::cActSeEntity::vf14  size=1  [class]
void Trigger::cActSeEntity::vf14(void)

{
  return;
}

// 00C92940  Trigger::cActSeEntity::vf00  size=6  [class]
undefined * Trigger::cActSeEntity::vf00(void)

{
  return &DAT_01dbe10c;
}

// 00C92950  Trigger::cActSeEntity::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSeEntity::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C96F90  Trigger::cActSeEntity::vf18  size=426  [class]
int __fastcall Trigger::cActSeEntity::vf18(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined *puVar10;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aeec8);
    return 0;
  }
  pbVar3 = (byte *)(iVar2 + 8);
  pbVar6 = &DAT_016416fa;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c96fe1:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00c96fe6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c96fe1;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c96fe6:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aeea0);
    return 0;
  }
  pbVar7 = (byte *)(iVar2 + 0x18);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar7;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c97030:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00c97035;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c97030;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c97035:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b1378);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar4 = FUN_00c77fc0(pbVar7,&local_54);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b134c,pbVar7);
    FUN_00948120();
    return 0;
  }
  iVar4 = 1;
  if (0 < local_48) {
    iVar8 = 0;
    do {
      if (*(int *)(local_50 + iVar8 * 4) == 0) {
        puVar10 = &DAT_016b1314;
LAB_00c970c1:
        FUN_00dd5650(puVar10,pbVar7);
LAB_00c970c9:
        iVar4 = 0;
      }
      else {
        iVar5 = FUN_00a7c800();
        if (iVar5 == 0) {
          puVar10 = &DAT_016b12e4;
          goto LAB_00c970c1;
        }
        if (*(int *)(iVar2 + 0x28) != -1) {
          if (iVar4 != 0) goto LAB_00c97125;
          goto LAB_00c970c9;
        }
        if (iVar4 == 0) goto LAB_00c970c9;
LAB_00c97125:
        iVar4 = FUN_00e5e0c0(iVar2 + 8,iVar5,*(int *)(iVar2 + 0x28),0);
        if (iVar4 == 0) goto LAB_00c970c9;
        iVar4 = 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar4;
}

