// src/misc/cVRGoalPointSignParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF2B40..00D35BC0, 5 functions

#include "types.h"

// 00CF2B40  cVRGoalPointSignParts::vf00  size=30  [class]
undefined4 __thiscall cVRGoalPointSignParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_6();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF2B60  cVRGoalPointSignParts::vf14  size=652  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cVRGoalPointSignParts::vf14(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((_DAT_01dc5090 & 1) == 0) {
    _DAT_01dc5090 = _DAT_01dc5090 | 1;
    _DAT_01dc5080 = 55.0;
    _DAT_01dc5084 = -55.0;
    _DAT_01dc5088 = 0.0;
  }
  fVar6 = (float10)1;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    if (*(int *)(param_1 + 0x20) == 0) break;
    *(undefined4 *)(param_1 + 0x24) = 1;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x4c) + 4) = (uint)((int)uVar5 < 2);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (9 < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
switchD_00cf2baf_caseD_2:
      fVar6 = (float10)1;
      fVar7 = (float10)*(float *)(param_1 + 0x44) + (float10)_DAT_018b7838;
      *(float *)(param_1 + 0x44) = (float)fVar7;
      if (fVar6 < fVar7) {
        *(float *)(param_1 + 0x44) = (float)fVar6;
      }
      if ((fVar6 <= (float10)*(float *)(param_1 + 0x44)) &&
         (iVar4 = FUN_00ce4dd0(1), fVar6 = extraout_ST0, iVar4 != 0)) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
switchD_00cf2baf_caseD_3:
        *(undefined4 *)(param_1 + 0x24) = 4;
      }
    }
    break;
  case 2:
    goto switchD_00cf2baf_caseD_2;
  case 3:
    goto switchD_00cf2baf_caseD_3;
  case 4:
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      fVar6 = (float10)1;
      *(undefined4 *)(param_1 + 0x24) = 5;
    }
    break;
  case 5:
    uVar5 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x48) + 4) = (uint)(2 < (int)uVar5);
    uVar5 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x4c) + 4) = (uint)(2 < (int)uVar5);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (4 < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
      *(undefined4 *)(param_1 + 0x24) = 6;
    }
    break;
  case 6:
    iVar4 = FUN_00ce4dd0(2);
    fVar6 = extraout_ST0_00;
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fVar2 = *(float *)(param_1 + 0x44);
    pfVar1 = (float *)(param_1 + 0x30);
    local_20 = *pfVar1 + _DAT_01dc5080 * fVar2;
    local_1c = *(float *)(param_1 + 0x34) + _DAT_01dc5084 * fVar2;
    local_18 = *(float *)(param_1 + 0x38) + _DAT_01dc5088 * fVar2;
    local_14 = *(float *)(param_1 + 0x3c) + _DAT_01dc508c * fVar2;
    if (*(int *)(param_1 + 0x18) != 0) {
      *(float *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
      *(float *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
      *(float *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar4 + 0x80))) &&
       (*(int *)(iVar4 + 0x7c) + 0x2a0 + *(uint *)(param_1 + 0x1c) * 0x400 != 0)) {
      FUN_00cb5540(pfVar1,&local_20,(float)fVar6);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (*(int *)(iVar4 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        return;
      }
      *(float *)(iVar4 + 0x80) = *pfVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar3;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00D35AD0  cVRGoalPointSignParts::cVRGoalPointSignParts  size=106  [class]
undefined4 * cVRGoalPointSignParts::cVRGoalPointSignParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 1;
    puVar1[0x11] = 0;
    puVar1[8] = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[9] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[3] = "cVRGoalPointSignParts";
    puVar1[2] = 2;
    uVar2 = FUN_00d29960(0x50);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D35B40  cVRGoalPointSignParts::vf08  size=128  [class]
void __fastcall cVRGoalPointSignParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 != 0) {
    FUN_00cdeec0(1);
  }
  iVar2 = FUN_00d29960(4);
  *(int *)(param_1 + 0x48) = iVar2;
  *(undefined4 *)(iVar2 + 0x210) = 2;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x214) = 6;
  iVar2 = FUN_00d29960(5);
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(iVar2 + 0x1e4) = 2;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1e8) = 6;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D35BC0  FUN_00d35bc0  size=188  [callgraph]
void __fastcall FUN_00d35bc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_01dc1370 == 0) {
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if ((puVar1[8] == 0) && (((int)puVar1[9] < 1 || (5 < (int)puVar1[9])))) {
      (**(code **)*puVar1)(1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if (*param_1 == 0) {
      iVar2 = cVRGoalPointSignParts::cVRGoalPointSignParts();
      *param_1 = iVar2;
    }
    *(undefined4 *)(*param_1 + 0x20) = 1;
  }
  if (*param_1 == 0) {
    return;
  }
  iVar2 = FUN_00d9fa80(&local_20,&DAT_01dc5020);
  if (iVar2 == 0) {
    if ((DAT_018b9174 != 0xd71) && (DAT_018b9174 != 0xd30)) goto LAB_00d35c42;
    local_1c = 0xc4bb8000;
  }
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x30) = local_20;
  *(undefined4 *)(iVar2 + 0x34) = local_1c;
  *(undefined4 *)(iVar2 + 0x38) = local_18;
  *(undefined4 *)(iVar2 + 0x3c) = local_14;
LAB_00d35c42:
  (**(code **)(*(int *)*param_1 + 4))();
  return;
}

