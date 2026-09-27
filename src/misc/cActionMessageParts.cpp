// src/misc/cActionMessageParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD01A0..00D38A70, 7 functions

#include "mgrr.h"
#include "cActionMessageParts.h"

// 00CD01A0  cActionMessageParts::cActionMessageParts  size=185  [class]
undefined4 * cActionMessageParts::cActionMessageParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  extraout_EDX[0x32] = 0;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x45] = 0;
  extraout_EDX[0x46] = 0;
  extraout_EDX[0x47] = 0;
  extraout_EDX[0x48] = 0;
  extraout_EDX[0x49] = 0;
  extraout_EDX[0x4a] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x2f] = 1;
  extraout_EDX[0x44] = 1;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x37] = 0x3f800000;
  extraout_EDX[0x3f] = 0x3f800000;
  extraout_EDX[0x3c] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x3e] = 0;
  extraout_EDX[0x40] = 0;
  extraout_EDX[0x41] = 0;
  extraout_EDX[0x42] = 0;
  extraout_EDX[0x43] = 0x3f800000;
  return extraout_EDX;
}

// 00CEAAB0  cActionMessageParts::vf00  size=30  [class]
undefined4 __thiscall cActionMessageParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_21();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D29EE0  FUN_00d29ee0  size=72  [callgraph]
int FUN_00d29ee0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x130,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cActionMessageParts::cActionMessageParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cActionMessageParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(2);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D29F30  cActionMessageParts::vf08  size=499  [class]
void __fastcall cActionMessageParts::vf08(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xec);
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xee);
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xf0);
  }
  *(uint *)(param_1 + 0x98) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0x9c);
  }
  *(uint *)(param_1 + 0x9c) = uVar1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb0);
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xc4);
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x9e);
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xa0);
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x146);
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  iVar3 = FUN_00d29960(4);
  *(int *)(param_1 + 0x124) = iVar3;
  *(undefined4 *)(iVar3 + 0x214) = 6;
  iVar3 = FUN_00d29960(5);
  *(int *)(param_1 + 0x128) = iVar3;
  *(undefined4 *)(iVar3 + 0x1e8) = 6;
  DAT_018b3934 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 1;
  return;
}

// 00D2A130  FUN_00d2a130  size=276  [callgraph]
int __thiscall FUN_00d2a130(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 3)) {
      piVar3 = (int *)0x0;
    }
    iVar2 = FUN_00d1fa60(piVar3,&local_54);
    if ((iVar2 != 0) && (DAT_018b3934 < 0)) {
      DAT_018b3934 = local_14;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

// 00D2A250  FUN_00d2a250  size=294  [callgraph]
void __fastcall FUN_00d2a250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((DAT_01dc0740 != 0) && ((DAT_01bea060 & 0x48000000) == 0)) && (DAT_01dc2d58 == 0)) &&
     (*(int *)(param_1 + 0x10) == 0)) {
    iVar1 = FUN_00d29ee0();
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(iVar1 + 0xc4) = DAT_018b3a2c;
    DAT_018b3a2c = -1;
    DAT_01dc14f0 = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (DAT_01dc0744 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0) = 1;
      DAT_01dc0744 = 0;
    }
    uVar2 = FUN_00caac30(2);
    iVar1 = FUN_00d9fa80(&local_20,uVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar1 + 0xd0) = local_20;
      *(undefined4 *)(iVar1 + 0xd4) = local_1c;
      *(undefined4 *)(iVar1 + 0xd8) = local_18;
      *(undefined4 *)(iVar1 + 0xdc) = local_14;
    }
    if ((((DAT_01bea060 & 0x48000000) != 0) || (DAT_01dc2d58 != 0)) ||
       ((*(int *)(*(int *)(param_1 + 0x10) + 0xbc) == 0 &&
        (*(int *)(*(int *)(param_1 + 0x10) + 200) == 0)))) {
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      DAT_01dc14f0 = 0;
      if (DAT_018b3a2c == -1) {
        DAT_01dc0740 = 0;
      }
    }
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  return;
}

// 00D38A70  cActionMessageParts::create  size=3198  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cActionMessageParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  float *pfVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_30;
  float afStack_28 [2];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar4 = FUN_00cb5390();
  if ((iVar4 == 0) ||
     ((DAT_01dc14c8 != (int *)0x0 && (iVar4 = (**(code **)(*DAT_01dc14c8 + 0x32c))(), iVar4 != 0))))
  {
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    pfVar9 = (float *)0x0;
  }
  else {
    iVar8 = *(int *)(iVar4 + 0x78);
    if ((((iVar8 == 0) || (*(int *)(iVar8 + 0x10) == 0)) ||
        (iVar8 = iVar8 + *(int *)(iVar8 + 0x10), iVar8 == 0)) ||
       (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xb4))) {
      pfVar9 = (float *)0x0;
    }
    else {
      pfVar9 = (float *)(*(uint *)(param_1 + 0xb4) * 0x1b0 + iVar8);
    }
  }
  iVar4 = FUN_00f98a90();
  *(float *)(param_1 + 0xf0) = (float)iVar4 * 0.00078125 * *pfVar9;
  iVar4 = FUN_00f98aa0();
  *(float *)(param_1 + 0xf4) = (float)iVar4 * 0.0013888889 * pfVar9[1];
  if ((local_30 == 0) && (*(int *)(param_1 + 200) != 0)) {
switchD_00d38b44_caseD_1:
  }
  else {
    switch(*(undefined4 *)(param_1 + 200)) {
    case 0:
      if (*(int *)(param_1 + 0xbc) != 0) {
        FUN_00ce4ff0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xc4),0);
        FUN_00ce4ff0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xc4),0);
        fVar10 = (float10)FUN_00d2a130(6,0);
        FUN_00cb32a0(afStack_28,*(undefined4 *)(param_1 + 0x9c));
        fVar1 = 550.0 - (afStack_28[0] + afStack_28[0] + (float)fVar10 + 81.0);
        if (0.0 < fVar1) {
          *(float *)(param_1 + 0xe8) = fVar1;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x94),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xa8),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xac),0);
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 200) = 2;
        goto LAB_00d38c3f;
      }
      break;
    default:
      goto switchD_00d38b44_caseD_1;
    case 2:
LAB_00d38c3f:
      if ((DAT_01dc14c8 == (int *)0x0) ||
         (iVar4 = (**(code **)(*DAT_01dc14c8 + 0x32c))(), iVar4 == 0)) {
        iVar4 = FUN_00416d50(0);
        if (iVar4 == 0) {
          if (DAT_01dc14f8 != 0) {
            iVar4 = *(int *)(DAT_01dc14f8 + 0x228);
LAB_00d38c8d:
            if (iVar4 < 7) break;
          }
        }
        else if (DAT_01dc14fc != 0) {
          iVar4 = *(int *)(DAT_01dc14fc + 0x8c);
          goto LAB_00d38c8d;
        }
        if ((((DAT_01dc1500 == 0) || (*(int *)(DAT_01dc1500 + 0x88) != 0)) ||
            ((5 < *(int *)(DAT_01dc1500 + 0x3c) || (iVar4 = FUN_00a4a350(DAT_018b9174), iVar4 != 0))
            )) && ((DAT_01dc1504 == 0 || (6 < *(int *)(DAT_01dc1504 + 0xa4))))) {
          uVar7 = *(uint *)(param_1 + 0xe0) & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          *(uint *)(*(int *)(param_1 + 0x128) + 4) = (uint)((int)uVar7 < 2);
          iVar4 = FUN_00ca8620(param_1 + 0xe0,9);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x118) = 1;
            *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 1;
            FUN_00cb2310(*(undefined4 *)(param_1 + 0xb4),1);
            *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + extraout_EDX;
            *(undefined4 *)(param_1 + 0xe4) = 0;
            goto switchD_00d38b44_caseD_3;
          }
        }
      }
      break;
    case 3:
switchD_00d38b44_caseD_3:
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x128) + 4) = 1;
      fVar1 = *(float *)(param_1 + 0xe4) + _DAT_018b8c70;
      *(float *)(param_1 + 0xe4) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
      }
      if (1.0 <= *(float *)(param_1 + 0xe4)) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(1);
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x94),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x94),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x98),1,3);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xa8),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xac),1);
        if (DAT_01dc2cd8 == 0) {
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa8),1,3);
          uVar12 = *(undefined4 *)(param_1 + 0xac);
          uVar13 = 3;
        }
        else {
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa8),1,2);
          uVar12 = *(undefined4 *)(param_1 + 0xac);
          uVar13 = 2;
        }
        FUN_00ccdf90(uVar12,1,uVar13);
        FUN_00e5e050("core_se_sys_objective",0);
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        goto LAB_00d38e79;
      }
      break;
    case 4:
LAB_00d38e79:
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x128) + 4) = 1;
      if ((*(int *)(param_1 + 0xc0) != 0) || (iVar4 = FUN_00ca8620(param_1 + 0xe0,0x3c), iVar4 != 0)
         ) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      }
      break;
    case 5:
      iVar4 = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 1;
      if (*(int *)(param_1 + 0xc0) == 0) {
        uVar11 = FUN_00ca8620(param_1 + 0xe0,0x1e);
        iVar4 = (int)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) break;
      }
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + iVar4;
      break;
    case 6:
      piVar5 = (int *)FUN_00cb2f10(*(undefined4 *)(param_1 + 0x98));
      piVar6 = (int *)FUN_00cb2f10(*(undefined4 *)(param_1 + 0xac));
      if (((*(int *)(param_1 + 0xc0) != 0) || (*piVar5 == 0)) || (*piVar6 == 0)) {
        uVar7 = *(uint *)(param_1 + 0xe0) & 0x80000003;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(*(int *)(param_1 + 0x124) + 4) = (uint)(2 < (int)uVar7);
        uVar7 = *(uint *)(param_1 + 0xe0) & 0x80000003;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(*(int *)(param_1 + 0x128) + 4) = (uint)(2 < (int)uVar7);
        uVar7 = *(uint *)(param_1 + 0xe0) & 0x80000003;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xb4),2 < (int)uVar7);
        iVar4 = FUN_00ca8620(extraout_EDX_00,0xc);
        if (iVar4 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x128) + 4) = 0;
          FUN_00cb2310(*(undefined4 *)(param_1 + 0xb4),0);
          *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        }
      }
      break;
    case 7:
      iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xa8));
      if (((iVar4 == 0) && (iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xac)), iVar4 == 0)) &&
         ((*(int *)(param_1 + 0xc0) != 0 || (iVar4 = FUN_00ca8620(param_1 + 0xe0,0xb4), iVar4 != 0))
         )) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0);
        }
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      }
      break;
    case 8:
      iVar4 = FUN_00ce4dd0(0);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x118) = 0;
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xb4),1);
        *(undefined4 *)(param_1 + 200) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 200) == 0) goto LAB_00d3967f;
  fVar10 = (float10)FUN_00d2a130(1,0);
  fVar10 = (float10)FUN_00cb52c0(0,(float)fVar10);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x90),(float)fVar10);
  fVar10 = (float10)FUN_00d2a130(6,0);
  if (DAT_01dc2cd8 == 0) {
    afStack_28[0] = (float)FUN_00f98a90();
    fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 7.0;
  }
  else {
    afStack_28[0] = (float)FUN_00f98a90();
    fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 5.0;
  }
  fVar10 = (float10)FUN_00cb52c0(3,fVar1 + (float)fVar10);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x9c),(float)fVar10);
  fVar10 = (float10)FUN_00d2a130(6,1);
  if (fVar10 <= (float10)0) {
LAB_00d391d6:
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xa8))) ||
        (iVar8 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar8 == 0)) ||
       (*(int *)(iVar8 + 0x3b0) == 0)) goto LAB_00d391d6;
    if ((*(uint *)(param_1 + 0xa0) < *(uint *)(iVar4 + 0x80)) &&
       (iVar4 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (DAT_01dc2cd8 == 0) {
      afStack_28[0] = (float)FUN_00f98a90();
      fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 7.0;
    }
    else {
      afStack_28[0] = (float)FUN_00f98a90();
      fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 5.0;
    }
    fVar10 = (float10)FUN_00cb52c0(4,fVar1 + (float)fVar10);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xa0),(float)fVar10);
  }
  fVar10 = (float10)FUN_00d2a130(6,2);
  if (fVar10 <= (float10)0) {
LAB_00d392d3:
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xa8))) ||
        (iVar8 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar8 == 0)) ||
       (*(int *)(iVar8 + 0x3b0) == 0)) goto LAB_00d392d3;
    if ((*(uint *)(param_1 + 0xa4) < *(uint *)(iVar4 + 0x80)) &&
       (iVar4 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (DAT_01dc2cd8 == 0) {
      afStack_28[0] = (float)FUN_00f98a90();
      fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 7.0;
    }
    else {
      afStack_28[0] = (float)FUN_00f98a90();
      fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 5.0;
    }
    fVar10 = (float10)FUN_00cb52c0(5,fVar1 + (float)fVar10);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xa4),(float)fVar10);
  }
  if (*(int *)(param_1 + 0x110) == 0) {
    if (*(int *)(param_1 + 200) < 5) {
      iVar4 = FUN_00f98aa0();
      afStack_28[0] = (float)FUN_00f98a90();
      *(float *)(param_1 + 0x100) =
           (*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xf0)) +
           (((float)(int)afStack_28[0] * 0.00078125 * 310.0 + *(float *)(param_1 + 0xe8)) -
           *(float *)(param_1 + 0xd0)) * *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0x104) =
           (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xf4)) +
           ((float)iVar4 * 0.0013888889 * 400.0 - *(float *)(param_1 + 0xd4)) *
           *(float *)(param_1 + 0xe4);
    }
    else {
      iVar4 = FUN_00f98aa0();
      afStack_28[0] = (float)FUN_00f98a90();
      fStack_20 = (float)(int)afStack_28[0] * 0.00078125 * 88.0;
      fStack_1c = (float)iVar4 * 0.0013888889 * 310.0;
      afStack_28[0] = (float)FUN_00f98a90();
      fVar1 = fStack_20;
      if ((float)(int)afStack_28[0] * 0.00078125 * 1040.0 < fStack_20) {
        afStack_28[0] = (float)FUN_00f98a90();
        fVar1 = (float)(int)afStack_28[0] * 0.00078125 * 1040.0;
      }
      if (*(int *)(param_1 + 0x110) != 0) {
        *(float *)(param_1 + 0x100) = fVar1;
        *(float *)(param_1 + 0x104) = fStack_1c;
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 0;
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      fVar2 = ABS(fVar1 - *(float *)(param_1 + 0x100)) * 0.1;
      if (fVar2 < 1.0) {
        fVar2 = 1.0;
      }
      fVar3 = ABS(fStack_1c - *(float *)(param_1 + 0x104)) * 0.1;
      if (fVar3 < 1.0) {
        fVar3 = 1.0;
      }
      if (fVar1 <= *(float *)(param_1 + 0x100)) {
        if ((fVar1 < *(float *)(param_1 + 0x100)) &&
           (fVar2 = *(float *)(param_1 + 0x100) - fVar2, *(float *)(param_1 + 0x100) = fVar2,
           fVar2 < fVar1)) {
          *(float *)(param_1 + 0x100) = fVar1;
        }
      }
      else {
        fVar2 = *(float *)(param_1 + 0x100) + fVar2;
        *(float *)(param_1 + 0x100) = fVar2;
        if (fVar1 < fVar2) {
          *(float *)(param_1 + 0x100) = fVar1;
        }
      }
      if (fStack_1c <= *(float *)(param_1 + 0x104)) {
        if ((fStack_1c < *(float *)(param_1 + 0x104)) &&
           (fVar3 = *(float *)(param_1 + 0x104) - fVar3, *(float *)(param_1 + 0x104) = fVar3,
           fVar3 < fStack_1c)) {
          *(float *)(param_1 + 0x104) = fStack_1c;
        }
      }
      else {
        fVar3 = fVar3 + *(float *)(param_1 + 0x104);
        *(float *)(param_1 + 0x104) = fVar3;
        if (fStack_1c < fVar3) {
          *(float *)(param_1 + 0x104) = fStack_1c;
        }
      }
    }
  }
  else {
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xf8);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x104);
  uVar13 = *(undefined4 *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar12;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar13;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb8) < *(uint *)(iVar4 + 0x80))) &&
     (*(uint *)(param_1 + 0xb8) * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
    uStack_14 = 0x3f800000;
    fStack_20 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xf0);
    fStack_1c = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xf4);
    fStack_18 = *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0xf8);
    FUN_00cb5540((undefined4 *)(param_1 + 0xd0),&fStack_20,0x3f800000);
    uVar12 = *(undefined4 *)(param_1 + 0xd4);
    iVar4 = *(int *)(param_1 + 0x128);
    if (*(int *)(iVar4 + 0x18) != 0) {
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(iVar4 + 0x84) = uVar12;
    }
  }
LAB_00d3967f:
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0xb0),0x3fc00000,0x3fc00000,0x43c80000,0x43960000);
  local_30 = local_30 & *(uint *)(param_1 + 0x118);
  if (local_30 == 0) {
    if (*(int *)(param_1 + 0x124) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x128) + 4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = local_30;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}

