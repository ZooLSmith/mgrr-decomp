// src/misc/cStageConnectParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDE860..00D3EDF0, 6 functions

#include "mgrr.h"
#include "cStageConnectParts.h"

// 00CDE860  cStageConnectParts::vf00  size=63  [class]
undefined4 * __thiscall cStageConnectParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D03530  cStageConnectParts::vf08  size=1060  [class]
void __fastcall cStageConnectParts::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_8;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x9e);
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa0);
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa4);
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa6);
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa8);
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xd8);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xec);
  }
  *(uint *)(param_1 + 0x34) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x112);
  }
  *(uint *)(param_1 + 0x38) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x114);
  }
  *(uint *)(param_1 + 0x3c) = uVar3;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x116);
  }
  *(uint *)(param_1 + 0x40) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x118);
  }
  *(uint *)(param_1 + 0x44) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x11a);
  }
  *(uint *)(param_1 + 0x48) = uVar5;
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x40) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x40) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x44) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x44) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x48) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x48) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  uVar3 = FUN_00932720();
  if (((uVar3 & 0xff0) == 0xef0) && ((uVar3 & 0xf) - 3 < 5)) {
    local_7 = 0;
    local_3 = 0;
    local_1 = 0;
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x60) = 1;
    FUN_0095c6a0(&local_8,&DAT_01655a78,(uVar3 & 0xf) - 2);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x24),&local_8);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x28),&local_8);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  if (((DAT_018b9174 == 0xd20) || (DAT_018b9174 == 0xd21)) || (DAT_018b9174 == 0xd30)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 3)) {
      uVar2 = FUN_00e03ea0("COLLECT_TITLE_00");
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 1;
      iVar4 = FUN_00cc8f60(1);
      if (((iVar4 != 0) && (piVar1[5] = iVar4, *(int *)(iVar4 + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar2), -1 < iVar4)) {
        piVar1[0x2a] = iVar4;
        piVar1[0x2b] = 1;
        piVar1[0x2e] = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 3)))) {
      uVar2 = FUN_00e03ea0("COLLECT_TITLE_00");
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 1;
      iVar4 = FUN_00cc8f60(1);
      if (((iVar4 != 0) && (piVar1[5] = iVar4, *(int *)(iVar4 + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar2), -1 < iVar4)) {
        piVar1[0x2a] = iVar4;
        piVar1[0x2b] = 1;
        piVar1[0x2e] = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D33E70  cStageConnectParts::cStageConnectParts  size=107  [class]
undefined4 * cStageConnectParts::cStageConnectParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x6c,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x14] = 0;
    puVar1[2] = 0;
    puVar1[0x1a] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0x13] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[4] = 0;
    puVar1[3] = "cStageConnectParts";
    puVar1[2] = 9;
    uVar2 = FUN_00d29960(0x46);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D33EE0  FUN_00d33ee0  size=317  [callgraph]
void __fastcall FUN_00d33ee0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 fVar3;
  undefined1 local_54 [84];
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = *(int *)(param_1 + 100);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x54) != 0) {
        FUN_00988d40();
        FUN_00d29cc0(*(undefined4 *)(param_1 + 0x1c),local_54);
        iVar2 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x1c));
        fVar3 = extraout_ST0 * (float10)*(float *)(iVar2 + 0x10);
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),(float)fVar3);
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(float)fVar3);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_00e03960();
      fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x68);
      *(float *)(param_1 + 0x68) = fVar1;
      if (41.0 <= fVar1) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        return;
      }
    }
    else if ((iVar2 == 2) && (iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x1c)), iVar2 == 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x28),1,3);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      return;
    }
  }
  return;
}

// 00D34020  FUN_00d34020  size=469  [callgraph]
void __fastcall FUN_00d34020(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_018b56fc == 0) {
LAB_00d34048:
    if (*(int *)(param_1 + 4) == 0) {
      DAT_018b56fc = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    uVar3 = cStageConnectParts::cStageConnectParts();
    *(undefined4 *)(param_1 + 4) = uVar3;
    DAT_01bea064 = DAT_01bea064 & 0xefffffff;
    goto LAB_00d34048;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (0x1d < *(int *)(param_1 + 0x10)) {
    iVar4 = FUN_00e03960();
    fVar1 = *(float *)(iVar4 + 0x7c);
    if ((1.0 < fVar1) && (fVar1 < 1.1)) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0xc) = fVar1 + *(float *)(param_1 + 0xc);
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    if (*(float *)(param_1 + 0xc) == 0.0) break;
    *(undefined4 *)(param_1 + 8) = 1;
  case 1:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x54) = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 22.0 < fVar1 != (fVar1 == 22.0)) {
      *(undefined4 *)(param_1 + 8) = 3;
    }
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 33.0 < fVar1 != (fVar1 == 33.0)) {
      FUN_00e5e050("core_se_sys_vr_in",0);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 70.0 < fVar1 != (fVar1 == 70.0)) {
      FUN_004168f0(0x22);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    break;
  case 5:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 79.0 < fVar1 != (fVar1 == 79.0)) {
      FUN_00ccdf90(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30),1,3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    break;
  case 6:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 95.0 < fVar1 != (fVar1 == 95.0)) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    break;
  case 7:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 332.0 < fVar1 != (fVar1 == 332.0)) {
      FUN_00ccdf90(*(undefined4 *)(*(int *)(param_1 + 4) + 0x34),1,3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    break;
  case 8:
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 453.0 < fVar1 != (fVar1 == 453.0)) {
      FUN_0049cc90(0x1d);
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2[0x17] != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    DAT_01bea064 = DAT_01bea064 & 0xbfffffff | 0x10000000;
  }
  DAT_018b56fc = 0;
  return;
}

// 00D3EDF0  cStageConnectParts::vf14  size=584  [class]
void __fastcall cStageConnectParts::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_80;
  undefined1 local_7f [127];
  
  switch(*(undefined4 *)(param_1 + 0x4c)) {
  case 0:
    if (*(int *)(param_1 + 0x54) == 0) goto switchD_00d3ee0b_default;
    iVar2 = FUN_00d467a0();
    if (iVar2 == 0) {
      pcVar4 = "bgm_VR_Screen_enter";
    }
    else {
      pcVar4 = "bgm_VR_Screen_enter_DLC3";
    }
    FUN_00e5e1b0(pcVar4);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    goto LAB_00d3efd1;
  case 1:
    if (*(int *)(param_1 + 0x58) == 0) goto switchD_00d3ee0b_default;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x48),1);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    break;
  case 2:
    iVar2 = FUN_00e03960();
    if (iVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x50) + 1.0;
    }
    else {
      iVar2 = FUN_00e03960();
      fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x50) = fVar1;
    if (*(float *)(param_1 + 0x50) <= 40.0) goto switchD_00d3ee0b_default;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x38),0xc1800000);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),1);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    break;
  case 3:
    iVar2 = FUN_00e03960();
    if (iVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x50) + 1.0;
    }
    else {
      iVar2 = FUN_00e03960();
      fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x50) = fVar1;
    if (*(float *)(param_1 + 0x50) <= 40.0) goto switchD_00d3ee0b_default;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x38),0xc2000000);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),1);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    break;
  case 4:
    iVar2 = FUN_00e03960();
    if (iVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x50) + 1.0;
    }
    else {
      iVar2 = FUN_00e03960();
      fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x50) = fVar1;
    if (*(float *)(param_1 + 0x50) <= 40.0) goto switchD_00d3ee0b_default;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar2 = FUN_00d467a0();
    if (iVar2 != 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c),"HUD_R_EYE_14",0,1);
    }
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x38),0xc2400000);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    break;
  default:
    goto switchD_00d3ee0b_default;
  }
  FUN_00ccdf90(uVar3,1,3);
LAB_00d3efd1:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
switchD_00d3ee0b_default:
  if (((0 < *(int *)(param_1 + 0x4c)) && (*(int *)(param_1 + 0x18) != 0)) &&
     (iVar2 = FUN_00cdf400(0), iVar2 != 0)) {
    local_80 = '\0';
    _memset(local_7f,0,0x7f);
    uVar3 = FUN_00932720();
    _sprintf_s(&local_80,0x80,"bgm_VR_Screen_p%03x_exit",uVar3);
    FUN_00e5e1b0(&local_80);
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  FUN_00d33ee0();
  return;
}

