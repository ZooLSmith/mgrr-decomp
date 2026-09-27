// src/player/pl0010/state/OvercomeBridgeStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81F60..00BDFA10, 10 functions

#include "mgrr.h"
#include "OvercomeBridgeStatePl0010.h"

// 00B81F60  OvercomeBridgeStatePl0010::vf08  size=52  [class]
undefined4 __thiscall OvercomeBridgeStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  DAT_01bea060 = DAT_01bea060 | 0x8000000;
  return 1;
}

// 00B81FA0  OvercomeBridgeStatePl0010::vf18  size=5  [class]
undefined4 __thiscall OvercomeBridgeStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B81FB0  OvercomeBridgeStatePl0010::vf24  size=19  [class]
bool OvercomeBridgeStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81FD0  OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010  size=33  [class]
undefined4 * __thiscall
OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_00a603a0();
  return param_1;
}

// 00B82000  OvercomeBridgeStatePl0010::vf00  size=6  [class]
undefined * OvercomeBridgeStatePl0010::vf00(void)

{
  return &DAT_01be9e4c;
}

// 00B91140  OvercomeBridgeStatePl0010::vf04  size=39  [class]
undefined4 * __thiscall OvercomeBridgeStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  cXml::cXml_7();
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAF730  OvercomeBridgeStatePl0010::qteSafeCheck  size=643  [class]
void __thiscall OvercomeBridgeStatePl0010::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  local_50 = *(int **)(uVar6 + 0xc);
  if (local_50 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*local_50 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)local_50);
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  local_4c = *(undefined4 *)(uVar6 + 0xc4);
  local_48 = *(undefined4 *)(uVar6 + 200);
  iVar3 = *(int *)(uVar6 + 0xcc);
  local_40 = *(float *)(iVar3 + 0x50);
  local_3c = *(float *)(iVar3 + 0x54);
  local_38 = *(float *)(iVar3 + 0x58);
  local_34 = *(float *)(iVar3 + 0x5c);
  fVar7 = (float10)FUN_00a8ed10(&local_40,piVar5 + 0x10);
  FUN_00a8e960((float)fVar7);
  if (*(int *)(param_1 + 0x30) == 0) {
    local_30 = local_40 - *(float *)(param_1 + 0x40);
    local_2c = local_3c - *(float *)(param_1 + 0x44);
    local_28 = local_38 - *(float *)(param_1 + 0x48);
    local_24 = (int *)(local_34 - *(float *)(param_1 + 0x4c));
    if (((local_30 != 0.0) || (local_2c != 0.0)) || (local_28 != 0.0)) {
      fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
    }
    FUN_00a7f600(0xf0033);
    piVar2 = (int *)FUN_00a7c8a0();
    piVar4 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      puVar8 = &DAT_01b34b14;
      (**(code **)(*piVar2 + 4))(&DAT_01b34b14);
      iVar3 = FUN_00dd6d80(puVar8);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
    }
    (**(code **)(*piVar4 + 200))(0);
    iVar3 = FUN_00a54a60(*(undefined4 *)(param_1 + 8));
    if ((iVar3 != 0) && (*(int *)(piVar5[0x1d9] + 0x104) != 0)) {
      *(undefined4 *)(piVar5[0x1d9] + 0x104) = 0;
    }
    FUN_00a581b0(&local_50,0x3e99999a,*(undefined4 *)(param_1 + 8));
    local_24 = local_50;
    uStack_20 = local_4c;
    uStack_1c = local_48;
    (**(code **)(*piVar5 + 0x6c))(&local_24);
  }
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

// 00BCB190  OvercomeBridgeStatePl0010::SafeCheck  size=1051  [class]
void __thiscall OvercomeBridgeStatePl0010::SafeCheck(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  undefined *puVar20;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar14 = 0;
    }
    else {
      puVar20 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar12 = FUN_00dd6d80(puVar20);
      uVar14 = -(uint)(iVar12 != 0) & (uint)param_2;
    }
    piVar13 = *(int **)(uVar14 + 0xc);
    if (piVar13 == (int *)0x0) {
      uVar15 = 0;
    }
    else {
      puVar20 = &DAT_01be9db8;
      (**(code **)(*piVar13 + 4))(&DAT_01be9db8);
      iVar12 = FUN_00dd6d80(puVar20);
      uVar15 = -(uint)(iVar12 != 0) & (uint)piVar13;
    }
    iVar12 = *(int *)(uVar15 + 0x764);
    if (*(int *)(iVar12 + 0x104) != 1) {
      *(undefined4 *)(iVar12 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar15 + 0x416c) = 1;
    *(undefined4 *)(uVar15 + 0x418c) = *(undefined4 *)(uVar15 + 0x4180);
    *(undefined4 *)(uVar15 + 0x4188) = *(undefined4 *)(uVar15 + 0x417c);
    *(undefined4 *)(uVar15 + 0x4190) = *(undefined4 *)(uVar15 + 0x4184);
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar12 = *(int *)(uVar14 + 0xcc);
    fVar2 = *(float *)(iVar12 + 0x50);
    fVar3 = *(float *)(iVar12 + 0x54);
    fVar4 = *(float *)(iVar12 + 0x58);
    *(undefined4 *)(param_1 + 0x34) = 0xda;
    FUN_00aa4080(0xda,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a96030(0,0x3fcccccd);
    FUN_00a95fb0(0);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar15 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar15 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar15 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar15 + 0x4c);
    puVar10 = (undefined4 *)FUN_00dd3500(0x14,&DAT_01b7bd48);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
    }
    *(undefined4 **)(param_1 + 0x50) = puVar10;
    FUN_0041c8e0(4,&DAT_01b7bd48);
    iVar12 = *(int *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    if (*(int *)(iVar12 + 0xc) < *(int *)(iVar12 + 8)) {
      puVar10 = (undefined4 *)(*(int *)(iVar12 + 4) + *(int *)(iVar12 + 0xc) * 0xc);
      if (puVar10 == (undefined4 *)0x0) {
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
      else {
        *puVar10 = *(undefined4 *)(param_1 + 0x40);
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
    }
    iVar12 = *(int *)(param_1 + 0x50);
    fVar9 = fVar3 + 9.0;
    fVar7 = *(float *)(param_1 + 0x48);
    fVar8 = *(float *)(param_1 + 0x48);
    if (*(int *)(iVar12 + 0xc) < *(int *)(iVar12 + 8)) {
      pfVar1 = (float *)(*(int *)(iVar12 + 4) + *(int *)(iVar12 + 0xc) * 0xc);
      if (pfVar1 == (float *)0x0) {
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
      else {
        *pfVar1 = (fVar2 - *(float *)(param_1 + 0x40)) * 0.3 + *(float *)(param_1 + 0x40);
        pfVar1[1] = fVar9;
        pfVar1[2] = (fVar4 - fVar7) * 0.3 + fVar8;
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
    }
    iVar12 = *(int *)(param_1 + 0x50);
    fVar7 = *(float *)(param_1 + 0x48);
    fVar8 = *(float *)(param_1 + 0x48);
    if (*(int *)(iVar12 + 0xc) < *(int *)(iVar12 + 8)) {
      pfVar1 = (float *)(*(int *)(iVar12 + 4) + *(int *)(iVar12 + 0xc) * 0xc);
      if (pfVar1 == (float *)0x0) {
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
      else {
        *pfVar1 = (fVar2 - *(float *)(param_1 + 0x40)) * 0.6 + *(float *)(param_1 + 0x40);
        pfVar1[1] = fVar9;
        pfVar1[2] = (fVar4 - fVar7) * 0.6 + fVar8;
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
    }
    iVar12 = *(int *)(param_1 + 0x50);
    if (*(int *)(iVar12 + 0xc) < *(int *)(iVar12 + 8)) {
      pfVar1 = (float *)(*(int *)(iVar12 + 4) + *(int *)(iVar12 + 0xc) * 0xc);
      if (pfVar1 == (float *)0x0) {
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
      else {
        *pfVar1 = fVar2;
        pfVar1[1] = fVar3;
        pfVar1[2] = fVar4;
        *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
      }
    }
    FUN_00a5e090(*(undefined4 *)(param_1 + 0x50));
    DAT_01bea070 = DAT_01bea070 | 0x80000;
    FUN_00a7f600(0xf0035);
    piVar11 = (int *)FUN_00a7c8a0();
    piVar13 = (int *)0x0;
    if (piVar11 != (int *)0x0) {
      puVar20 = &DAT_01b34b14;
      (**(code **)(*piVar11 + 4))(&DAT_01b34b14);
      iVar12 = FUN_00dd6d80(puVar20);
      piVar13 = (int *)(-(uint)(iVar12 != 0) & (uint)piVar11);
    }
    (**(code **)(*piVar13 + 0x304))(0,"front");
    FUN_00a7f600(0x40001);
    piVar13 = (int *)FUN_00a7c8a0();
    if (piVar13 != (int *)0x0) {
      puVar20 = &DAT_01be9c80;
      (**(code **)(*piVar13 + 4))(&DAT_01be9c80);
      FUN_00dd6d80(puVar20);
    }
    FUN_00ac4f70();
    fVar16 = (float10)FUN_00a95680(0);
    fVar17 = (float10)FUN_00a958c0(0);
    fVar18 = (float10)FUN_00a95680(0);
    fVar19 = (float10)FUN_00a958c0(0);
    FUN_00a96030(0,(float)(((float10)(float)fVar18 - fVar19) /
                          ((float10)(float)fVar16 - (float10)(float)fVar17)));
    *(undefined4 *)(uVar15 + 0xb74) = 1;
    FUN_00a94bc0(4,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(2,0);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BCB5B0  OvercomeBridgeStatePl0010::vf14  size=2569  [class]
void __thiscall OvercomeBridgeStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  int iStack_29c;
  int iStack_294;
  int iStack_290;
  undefined4 local_28c [7];
  undefined **ppuStack_270;
  undefined1 *puStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined1 auStack_260 [252];
  undefined1 auStack_164 [352];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar19 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar19);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar11 = *(int **)(uVar3 + 0xc);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar19 = &DAT_01be9db8;
    (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar19);
    piVar11 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar11);
  }
  if (((*(int *)(param_1 + 0x34) == 0xda) && (iVar4 = FUN_00a94db0(0xda), iVar4 != 0)) &&
     (*(int *)(piVar11[0x1d9] + 0x104) != 0)) {
    *(undefined4 *)(piVar11[0x1d9] + 0x104) = 0;
  }
  iVar4 = FUN_00a54a60(*(undefined4 *)(param_1 + 8));
  if (iVar4 != 0) {
    iVar4 = piVar11[0x1d9];
    if (((*(int *)(iVar4 + 0x104) != 0) && (*(int *)(param_1 + 0x30) == 0)) &&
       (*(int *)(iVar4 + 0x104) != 0)) {
      *(undefined4 *)(iVar4 + 0x104) = 0;
    }
    if (((piVar11[0x1078] != 0) && ((float)piVar11[0x1079] <= 0.36)) ||
       (iVar4 = FUN_008e2740(), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  iVar4 = FUN_00a94db0(0xd8);
  if (iVar4 != 0) {
    iVar4 = 0;
    do {
      uVar5 = FUN_00c19cc0(4,0,0x20190,iVar4);
      local_28c[iVar4] = uVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 != (int *)0x0) {
      puVar19 = &DAT_01b34f20;
      (**(code **)(*piVar6 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar19);
    }
    FUN_004fede0(2,&DAT_018b92f0);
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 != (int *)0x0) {
      puVar19 = &DAT_01b34f20;
      (**(code **)(*piVar6 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar19);
    }
    FUN_004fede0(4,&DAT_018b92f0);
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 != (int *)0x0) {
      puVar19 = &DAT_01b34f20;
      (**(code **)(*piVar6 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar19);
    }
    FUN_004fede0(6,&DAT_018b92f0);
    iVar4 = FUN_00a7f600(0xf0035);
    if (iVar4 != 0) {
      uVar5 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar5);
      uVar5 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar5);
      uVar5 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar5);
      iVar4 = FUN_00a7c8a0();
      iStack_290 = 0;
      if (0 < *(short *)(iVar4 + 0x324)) {
        iStack_294 = 0;
        do {
          iVar10 = *(int *)(iVar4 + 800) + iStack_294;
          iVar7 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_hide"), iVar7 != 0)) {
            puVar1 = (uint *)(iVar10 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_294 = iStack_294 + 0x70;
          iStack_290 = iStack_290 + 1;
        } while (iStack_290 < *(short *)(iVar4 + 0x324));
      }
      iVar4 = FUN_00a7c8a0();
      iStack_29c = 0;
      if (0 < *(short *)(iVar4 + 0x324)) {
        iStack_294 = 0;
        do {
          iVar10 = *(int *)(iVar4 + 800) + iStack_294;
          iVar7 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_appear"), iVar7 != 0)) {
            puVar1 = (uint *)(iVar10 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          iStack_294 = iStack_294 + 0x70;
          iStack_29c = iStack_29c + 1;
        } while (iStack_29c < *(short *)(iVar4 + 0x324));
      }
    }
    piVar6 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar6 + 0x58))(0x11b,1);
    piVar6 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar6 + 0x58))(0x114,0);
    DAT_01bea090 = DAT_01bea090 & 0xfffdffff;
    if (3.0 < *(float *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x34) = 0xdb;
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 0xdc;
      if (*(int *)(piVar11[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(piVar11[0x1d9] + 0x104) = 0;
      }
      FUN_00c420c0(0x42a00000);
    }
    FUN_00aa3f60(*(undefined4 *)(param_1 + 0x34));
  }
  iVar4 = FUN_00a95630(0xdb,0x1e);
  if (iVar4 != 0) {
    FUN_00dda360(0,0x40000000,0x40000000,0xf);
  }
  iVar4 = FUN_00a94db0(0xdb);
  if (iVar4 == 0) {
    iVar4 = FUN_00a95840(0xdb);
    iVar4 = FUN_00a95200(0xdb,(float)iVar4 - 30.0);
    if (iVar4 == 0) goto LAB_00bcbc16;
  }
  FUN_00a7f600(0xf0035);
  piVar6 = (int *)FUN_00a7c8a0();
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar19 = &DAT_01b34b14;
    (**(code **)(*piVar6 + 4))(&DAT_01b34b14);
    iVar4 = FUN_00dd6d80(puVar19);
    piVar6 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar6);
  }
  FUN_00a9f4c0("BridgeRun",0,0x8000000,0);
  FUN_00a94640(0xffffffff,0,0,0,0,&DAT_01663e34,0,0x8000000);
  FUN_00a94640(0xffffffff,0,0,0,1,&DAT_016a27d8,0,0x8000000);
  FUN_00a94640(0xffffffff,0,0,0,0xffffffff,&DAT_016457e4,0,0x8000000);
  FUN_00404bd0(0xc38b0000,0xc3830000);
  uVar5 = FUN_004039a0(1,piVar6,0);
  FUN_00a963e0(uVar5);
  iStack_290 = FUN_00a7f600(0x40001);
  piVar8 = (int *)FUN_00a7c8a0();
  if (piVar8 != (int *)0x0) {
    puVar19 = &DAT_01be9c80;
    (**(code **)(*piVar8 + 4))(&DAT_01be9c80);
    FUN_00dd6d80(puVar19);
  }
  FUN_00ac9cf0(&DAT_016a27b8,&DAT_016a27c0,&DAT_016a27c8);
  FUN_00ac5020(0xc38b0000,0xc3830000);
  FUN_00a7ce90(piVar6 + 0x10);
  uVar5 = (**(code **)(*piVar6 + 0x84))();
  FUN_00a7cf00(uVar5);
  FUN_00a7f600(0xf0036);
  piVar6 = (int *)FUN_00a7c8a0();
  if (piVar6 != (int *)0x0) {
    puVar19 = &DAT_01b34b14;
    (**(code **)(*piVar6 + 4))(&DAT_01b34b14);
    FUN_00dd6d80(puVar19);
  }
  FUN_00a9e290(&DAT_01641bdc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  EffectAreaScrSystem::SetEffectAreaEnable(0x11c,1,1);
  FUN_00dffcd0(0,10);
  pcVar2 = *(code **)(*piVar11 + 0x3ec);
  piVar11[0x14f8] = 0x3f800000;
  piVar11[0x2dd] = 1;
  iVar4 = (*pcVar2)();
  if ((iVar4 == 0) ||
     ((float)piVar11[0x34a] <=
      *(float *)(piVar11[0x1035] + 0x14c) * *(float *)(piVar11[0x1035] + 0x14c))) {
    uVar5 = 0x11;
  }
  else {
    uVar5 = 10;
  }
  FUN_00d82510(uVar5,100);
LAB_00bcbc16:
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar4 = *(int *)(param_1 + 0x34);
    if (((iVar4 != 0xd8) && (iVar4 != 0xdb)) && (iVar4 != 0xdc)) {
      FUN_00a581b0(local_28c,0x3e99999a,*(undefined4 *)(param_1 + 8));
      local_28c[3] = local_28c[0];
      local_28c[4] = local_28c[1];
      local_28c[5] = local_28c[2];
      (**(code **)(*piVar11 + 0x6c))(local_28c + 3);
      FUN_00a8c9b0(0,9,0,0);
      FUN_00a8c9b0(0,8,0,0);
      FUN_00e01d00(10);
      EffectAreaScrSystem::SetEffectAreaEnable(0x100,4,0);
      EffectAreaScrSystem::SetEffectAreaEnable(0x11c,1,0);
      piVar6 = (int *)FUN_00a6dd90();
      uVar5 = (**(code **)(*piVar6 + 0x9c))(0x100,10,auStack_164);
      FUN_00e01f10(uVar5);
      *(undefined4 *)(param_1 + 0x34) = 0xd8;
      FUN_00aa3f60(0xd8);
      iVar4 = piVar11[0x1d9];
      if (*(int *)(iVar4 + 0x104) != 1) {
        *(undefined4 *)(iVar4 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
      }
      (**(code **)(*piVar11 + 0xd0))(0);
      (**(code **)(*piVar11 + 0xd4))(0);
      (**(code **)(*piVar11 + 200))(0);
      iStack_294 = 0;
      iStack_290 = 0x3fc90fdb;
      local_28c[0] = 0;
      (**(code **)(*piVar11 + 0x88))(&iStack_294);
      FUN_00a7f600(0xf0034);
      uVar18 = 0x3f800000;
      uVar17 = 0;
      uVar16 = 0x8000000;
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar5 = 0;
      puVar13 = &DAT_01641bdc;
      FUN_00a7c8a0(&DAT_01641bdc,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00a9e290(puVar13,uVar5,uVar14,uVar15,uVar16,uVar17,uVar18);
      piVar11 = (int *)FUN_00a7c8a0();
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        puVar19 = &DAT_01b34b14;
        (**(code **)(*piVar11 + 4))(&DAT_01b34b14);
        iVar4 = FUN_00dd6d80(puVar19);
        piVar11 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar11);
      }
      FUN_00a7f600(0x40001);
      piVar6 = (int *)FUN_00a7c8a0();
      if (piVar6 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar19 = &DAT_01be9c80;
        (**(code **)(*piVar6 + 4))(&DAT_01be9c80);
        iVar4 = FUN_00dd6d80(puVar19);
        uVar3 = -(uint)(iVar4 != 0) & (uint)piVar6;
      }
      FUN_00ac4f70();
      FUN_00ac9d90(0xa102,0,0x8000000);
      *(undefined4 *)(uVar3 + 0xa30) = 0;
      FUN_00a7ce90(piVar11 + 0x10);
      uVar5 = (**(code **)(*piVar11 + 0x84))();
      FUN_00a7cf00(uVar5);
      local_28c[3] = 0xe0084;
      local_28c[4] = 0xe0085;
      local_28c[5] = 0xe0086;
      uVar3 = 0;
      do {
        puStack_26c = auStack_260;
        iStack_268 = 0;
        uStack_264 = 0x40;
        ppuStack_270 = lib::StaticArray<Entity*,64>::vftable;
        FUN_00a7f440(local_28c[uVar3 + 3],&ppuStack_270);
        puVar13 = puStack_26c;
        if (puStack_26c != puStack_26c + iStack_268 * 4) {
          do {
            pfVar9 = (float *)FUN_00a7c8b0();
            if (*pfVar9 <= 280.0) {
              FUN_00a805f0();
            }
            puVar13 = puVar13 + 4;
          } while (puVar13 != puStack_26c + iStack_268 * 4);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
    }
    if (*(int *)(param_1 + 0x34) == 0xd8) {
      iVar4 = FUN_00a95630(0xd8,0x5a);
      if (iVar4 != 0) {
        FUN_00dda360(0,0x3f19999a,0x3f19999a,0x5a);
      }
      if ((*(int *)(param_1 + 0x34) == 0xd8) && (iVar4 = FUN_00a95270(0xd8,0x5a), iVar4 != 0)) {
        if (((byte)DAT_01b7b914 & 0x80) != 0) {
          fVar12 = (float10)FUN_00a93060();
          *(float *)(param_1 + 0x38) =
               (float)(fVar12 * (float10)60.0 + (float10)*(float *)(param_1 + 0x38));
        }
        DAT_01bea090 = DAT_01bea090 | 0x20000;
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDFA10  OvercomeBridgeStatePl0010::vf20  size=346  [class]
undefined4 __thiscall OvercomeBridgeStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = StateMachineNode::vf20(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar2 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  if (*(int *)(piVar3[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(piVar3[0x1d9] + 0x104) = 0;
  }
  (**(code **)(*piVar3 + 0xd0))(1);
  (**(code **)(*piVar3 + 0xd4))(1);
  (**(code **)(*piVar3 + 200))(1);
  piVar3[0x1060] = piVar3[0x1063];
  piVar3[0x105b] = 0;
  piVar3[0x105f] = piVar3[0x1062];
  piVar3[0x1061] = piVar3[0x1064];
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(iVar1 + 4),0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  FUN_00a5dcc0(0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(iVar1 + 4),0);
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xfff7ffff;
  DAT_01bea090 = DAT_01bea090 & 0xfffdffff;
  DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
  return 1;
}

