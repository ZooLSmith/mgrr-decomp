// src/player/pl0010/state/ZangekiDatsuShortStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82E80..00BF0530, 10 functions

#include "mgrr.h"
#include "ZangekiDatsuShortStatePl0010.h"

// 00B82E80  ZangekiDatsuShortStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B82E90  ZangekiDatsuShortStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82EA0  ZangekiDatsuShortStatePl0010::vf24  size=19  [class]
bool ZangekiDatsuShortStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82EC0  ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010  size=41  [class]
undefined4 * __thiscall
ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00B82EF0  ZangekiDatsuShortStatePl0010::vf00  size=6  [class]
undefined * ZangekiDatsuShortStatePl0010::vf00(void)

{
  return &DAT_01be9ea4;
}

// 00B915F0  ZangekiDatsuShortStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuShortStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB2F50  ZangekiDatsuShortStatePl0010::vf0C  size=1223  [class]
void __thiscall ZangekiDatsuShortStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 local_8c;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  float local_64;
  undefined1 local_60 [16];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x20) != 0) goto LAB_00bb3403;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar15 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar15);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar15);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar3 = FUN_00ac70a0();
  local_6c = *(float *)(iVar3 + 4);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(uVar5 + 0x40);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(uVar5 + 0x44);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(uVar5 + 0x48);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(uVar5 + 0x4c);
  local_50 = *(undefined4 *)(uVar5 + 0x40);
  local_4c = *(float *)(uVar5 + 0x44);
  local_48 = *(undefined4 *)(uVar5 + 0x48);
  local_44 = *(float *)(uVar5 + 0x4c);
  local_2c = 0;
  local_24 = 0;
  local_3c = local_4c - 10.0;
  local_1c = 0;
  local_34 = local_44 - local_64;
  local_30 = 0xffff0006;
  local_28 = 0x60;
  local_20 = "zangekiDatsuJumpSafeCheck";
  local_40 = local_50;
  local_38 = local_48;
  iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_80,local_60,0,0,&local_50);
  if ((iVar3 != 0) && (*(float *)(uVar5 + 0x44) - *(float *)(param_1 + 100) < 2.0)) {
    *(undefined4 *)(param_1 + 0x60) = local_80;
    *(undefined4 *)(param_1 + 100) = local_7c;
    *(undefined4 *)(param_1 + 0x68) = local_78;
    *(undefined4 *)(param_1 + 0x6c) = local_74;
  }
  local_8c = 0x3e2aaaab;
  fVar2 = local_6c - *(float *)(param_1 + 100);
  if (0.6 <= fVar2) {
    if (fVar2 <= 1.6) {
      fVar2 = fVar2 * 1.25;
    }
    else {
      fVar2 = 2.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar6 = (float10)FUN_00dde300(0,0x3f800000);
  local_84 = (float)fVar6;
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x974) == 0x20070) {
    local_84 = 1.0;
  }
  if (*(int *)(uVar4 + 0x370) < 1) {
    FUN_00da8810(0x41a00000);
    uVar9 = 0x41a00000;
  }
  else {
    local_8c = 0x3eaaaaab;
    FUN_00da8810(0x42200000);
    uVar9 = 0x42200000;
  }
  FUN_00db3e80(uVar9,1,&DAT_01bea1d0);
  if ((fVar2 <= 1.6) || (local_84 <= 0.4)) {
    FUN_00a9f4c0("Datsu_Blend",local_8c,0x8002000,*(undefined4 *)(param_1 + 0x34));
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,2,0,0x507,local_8c,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,1,0,0x508,local_8c,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,0,0,0x509,local_8c,0x8002000);
    FUN_00a947e0(*(undefined4 *)(param_1 + 0x34),0,fVar2,0);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar9 = *(undefined4 *)(uVar5 + 0x4f0);
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
        }
        uVar16 = 0x3f800000;
        uVar14 = 0xbf800000;
        uVar13 = 0x8000000;
        uVar12 = 0x3f800000;
        uVar11 = 0;
        uVar10 = 0;
        uVar8 = 0x537;
        uVar7 = 0x11017;
        goto LAB_00bb3394;
      }
    }
  }
  else {
    FUN_00aa4080(0x525,0,local_8c,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar9 = *(undefined4 *)(uVar5 + 0x4f0);
        uVar16 = 0x3f800000;
        uVar14 = 0xbf800000;
        uVar13 = 0x8000000;
        uVar12 = 0x3f800000;
        uVar11 = 0;
        uVar10 = 0;
        uVar8 = 0x539;
        uVar7 = 0x11017;
        FUN_004b5380(0x11017,0x539,uVar9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
LAB_00bb3394:
        FUN_00aa45f0(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar16);
        *(undefined4 *)(uVar5 + 0xb9c) = 4;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x42200000;
  *(undefined4 *)(param_1 + 0x44) = 0x428c0000;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00a7c940(*(int *)(param_1 + 0x4c) + 0x968);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      uVar9 = *(undefined4 *)(iVar3 + 0x83c);
      uVar7 = FUN_009f8b40();
      FUN_00941450(uVar9,uVar7);
    }
  }
LAB_00bb3403:
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB3420  ZangekiDatsuShortStatePl0010::vf20  size=414  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar2 + 0x98,uVar1,0x41200000);
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  DAT_01dc08bc = 0;
  DAT_01dc08d4 = 0;
  *(undefined4 *)(uVar4 + 0x2f4) = 0;
  DAT_01bea060 = DAT_01bea060 & 0xfffffbff;
  FUN_008e5c50(6);
  FUN_008e6d00();
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x4c), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x988) != 0)) {
      FUN_0093bdd0(piVar3[0x13c],*(undefined4 *)(iVar2 + 0x87c),*(undefined4 *)(iVar2 + 0x884));
      FUN_00ace4a0(0x6f,piVar3);
    }
  }
  if (*(int *)(piVar3[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(piVar3[0x1d9] + 0x104) = 0;
  }
  *(undefined4 *)(uVar4 + 0x188) = 0;
  FUN_008e4580(piVar3 + 0x10,1);
  (**(code **)(*piVar3 + 0x314))();
  piVar3[0x224] = 0;
  piVar3[0x225] = 0;
  piVar3[0x226] = 0;
  piVar3[0x227] = 0x3f800000;
  *(undefined4 *)(uVar4 + 0x3ec) = 0;
  return 1;
}

// 00BCD870  ZangekiDatsuShortStatePl0010::vf08  size=835  [class]
void __thiscall ZangekiDatsuShortStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar6 + 0xc);
    if (piVar2 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_00e25500(0);
    *(undefined4 *)(uVar6 + 0x2f4) = 1;
    DAT_01dc08c0 = 1;
    FUN_00e5e050("core_se_btl_char_datsu_out",0);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(uVar5 + 0x341c);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(float *)(uVar5 + 0x3454) <= 0.0) {
      *(undefined4 *)(uVar5 + 0x343c) = 0;
      *(undefined4 *)(uVar5 + 0x3440) = 0x3f800000;
    }
    *(undefined4 *)(uVar5 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c960(uVar6 + 0x338);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar7 = &DAT_01be9ca8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9ca8);
        iVar1 = FUN_00dd6d80(puVar7);
        *(uint *)(param_1 + 0x4c) = -(uint)(iVar1 != 0) & (uint)piVar2;
        FUN_00ac6f30();
      }
    }
    FUN_00db3e80(0x42a00000,0,&DAT_01bea1d0);
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar7 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar7);
      uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar4 + 0x4c4) != 4) {
      FUN_00b92d70(param_2);
      *(undefined4 *)(uVar4 + 0x4c4) = 4;
      FUN_00e5e1b0("bgm_Datsu_Enter");
    }
    FUN_00bbc960(param_2);
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00a7c940(*(int *)(param_1 + 0x4c) + 0x968);
    }
    FUN_008e5c50(6);
    FUN_00a83990();
    FUN_00a83990();
    FUN_00a83990();
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(undefined4 *)(uVar5 + 0x110c) = 0x3e99999a;
      *(undefined4 *)(uVar5 + 0x1118) = 0;
      *(undefined4 *)(uVar5 + 0x1110) = 0x3dcccccd;
      *(undefined4 *)(uVar5 + 0x1134) = 1;
      *(undefined4 *)(uVar5 + 0x111c) = 1;
      *(undefined4 *)(uVar5 + 0x1114) = 0x3e99999a;
    }
    *(undefined4 *)(uVar5 + 0x3e70) = *(undefined4 *)(uVar5 + 0x40);
    *(undefined4 *)(uVar5 + 0x3e74) = *(undefined4 *)(uVar5 + 0x44);
    *(undefined4 *)(uVar5 + 0x3e78) = *(undefined4 *)(uVar5 + 0x48);
    *(undefined4 *)(uVar5 + 0x3e7c) = *(undefined4 *)(uVar5 + 0x4c);
    if (*(int *)(param_1 + 0x2c) != 0x34) {
      *(undefined4 *)(uVar5 + 0x3e60) = 0;
      *(undefined4 *)(uVar5 + 0x3e64) = 0;
      *(undefined4 *)(uVar5 + 0x3e68) = 0;
      *(undefined4 *)(uVar5 + 0x3e6c) = 0x3f800000;
    }
    DAT_01bea060 = DAT_01bea060 | 0x400;
    DAT_018b56b4 = 1;
    *(undefined4 *)(uVar6 + 0x540) = 0;
    *(undefined4 *)(uVar6 + 0x544) = 0;
    *(undefined4 *)(uVar6 + 0x548) = 0;
    *(undefined4 *)(uVar6 + 0x54c) = 0x3f800000;
    *(undefined4 *)(uVar6 + 0xf4) = 0;
    *(undefined4 *)(uVar6 + 0xf8) = 0;
    *(undefined4 *)(uVar6 + 0x104) = 0;
    *(undefined4 *)(uVar6 + 0x108) = 0;
    *(undefined4 *)(uVar6 + 0x10c) = 0x40400000;
    *(undefined4 *)(uVar5 + 0x3df4) = 0;
    *(undefined4 *)(uVar5 + 0x3df8) = 0;
    *(undefined2 *)(uVar5 + 0x10a8) = 0xffff;
    return;
  }
  return;
}

// 00BF0530  ZangekiDatsuShortStatePl0010::vf10  size=1749  [class]
void __thiscall ZangekiDatsuShortStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;
  undefined *puVar8;
  int iStack_1c0;
  undefined4 *local_1bc;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float fStack_18c;
  float local_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float local_168;
  float local_164 [88];
  
  if (param_2 == (undefined4 *)0x0) {
    local_1bc = param_2;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    local_1bc = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
  }
  piVar6 = (int *)local_1bc[3];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    piVar6 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar6);
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    FUN_00d82510(0xb,100);
    StateMachineNode::vf10(param_2);
    return;
  }
  iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40));
  if (iVar2 != 0) {
    iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34));
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      uVar3 = *(undefined4 *)(iVar4 + 0x980);
      FUN_00a7c800(uVar3);
      iVar4 = FUN_00a12210(uVar3);
      local_190 = *(float *)(iVar4 + 0x40);
      local_188 = *(float *)(iVar4 + 0x48);
      FUN_004fc8e0(&local_1a0,piVar6,0xffffffff);
      FUN_004fc8e0(&local_1b0,piVar6,0xf00);
      fVar1 = (float)iVar2 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
      local_168 = ((local_188 - (local_1a8 - local_198)) - local_198) * fVar1;
      local_1b0 = ((local_190 - (local_1b0 - local_1a0)) - local_1a0) * fVar1 + local_1a0;
      local_1ac = ((*(float *)(param_1 + 100) - 0.0) - local_19c) * fVar1 + local_19c;
      local_1a8 = local_168 + local_198;
      local_1a4 = fVar1 * ((local_1a4 - (local_164[0] - local_194)) - local_194) + local_194;
      (**(code **)(*piVar6 + 0x6c))(&local_1b0);
      puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x84))();
      uStack_184 = *puVar5;
      uStack_17c = puVar5[2];
      uStack_178 = puVar5[3];
      fVar7 = (float10)fpatan((float10)local_194 - (float10)local_1a4,
                              (float10)fStack_18c - (float10)local_19c);
      fStack_180 = (float)(((float10)(float)local_1bc /
                           ((float10)*(float *)(param_1 + 0x40) -
                           (float10)*(float *)(param_1 + 0x3c))) *
                           (fVar7 - (float10)(float)puVar5[1]) + (float10)(float)puVar5[1]);
      (**(code **)(*piVar6 + 0x88))(&uStack_184);
    }
  }
  iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),local_1bc[0xcf]);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_00ae4660(0x6f,piVar6);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00d82510(0xb,100);
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar2 = FUN_00a8c760(0x16);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_00ae24f0();
      }
      if ((*(int *)(param_1 + 0x80) == 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x4c);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x988) != 0)) {
          FUN_0093bdd0(piVar6[0x13c],*(undefined4 *)(iVar2 + 0x87c),*(undefined4 *)(iVar2 + 0x884));
          FUN_00ace4a0(0x6f,piVar6);
          FUN_00a7c950();
        }
        FUN_00b7aa80();
        piVar6[0xd07] = 0x3f800000;
        FUN_00b85350(0x43340000,0x3f800000,0x3f800000,0,0,0x3dcccccd);
        FUN_00bbc2a0(param_2);
        FUN_00b92e00(param_2);
        FUN_00b90990();
        *(undefined4 *)(param_1 + 0x80) = 1;
        Pl0000::qteZangekiSafeCheckForward();
        FUN_00b89850();
      }
    }
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(0xb,100);
    local_1bc[0xdc] = 0;
  }
  (**(code **)(*piVar6 + 0x220))(0x41200000);
  iVar2 = FUN_00a8c760(0x20);
  if (iVar2 == 0) {
LAB_00bf09f8:
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_00bf0bdf;
  }
  else if (*(int *)(param_1 + 0x84) == 0) {
    iVar2 = piVar6[0x13c];
    uVar3 = FUN_00a81330(0);
    iVar4 = (**(code **)(*piVar6 + 0x84))(0x40c90fdb,0x40a00000,uVar3);
    iVar2 = FUN_00bd5d10(param_2,iVar2,*(undefined4 *)(iVar4 + 4));
    if (0 < *(int *)(iVar2 + 0xc)) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      piVar6[0x1029] = piVar6[0x102a];
      piVar6[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
      FUN_00bbc2a0(param_2);
    }
    goto LAB_00bf09f8;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    if ((float)piVar6[0x1029] <= 0.0) {
      piVar6[0x1029] = -0x40800000;
      piVar6[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
      FUN_00bbc2a0(param_2);
      DAT_01dc08bc = 0;
      *(undefined4 *)(param_1 + 0x88) = 1;
    }
    else if (0.0 < (float)piVar6[0xd07]) {
      piVar6[0xd07] = 0x40a00000;
    }
    if ((float)piVar6[0xd09] <= (float)piVar6[0x1028]) {
      fVar1 = (float)piVar6[0x1029] - 1.0;
      piVar6[0x1029] = (int)fVar1;
      if ((fVar1 < (float)piVar6[0x102a] - (float)piVar6[0x102b]) &&
         ((float)piVar6[0x102a] - (float)piVar6[0x102c] < fVar1)) {
        uVar3 = FUN_00a81330();
        iVar2 = FUN_00be6620(param_2,param_1,100,0,uVar3);
        if (iVar2 != 0) {
          FUN_004039a0(0x99,piVar6,0);
          FUN_00e020f0(piVar6[0x13c]);
          FUN_00a8c8b0(0x10010,local_164);
          DAT_018b56b4 = 1;
          piVar6[0x1029] = -0x40800000;
          piVar6[0xd07] = 0x3f800000;
          FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
          FUN_00bbc2a0(param_2);
          iVar2 = *(int *)(param_1 + 0x4c);
          if (iVar2 != 0) {
            FUN_0093bdd0(piVar6[0x13c],*(undefined4 *)(iVar2 + 0x87c),*(undefined4 *)(iVar2 + 0x884)
                        );
            FUN_00ace4a0(0x6f,piVar6);
          }
          *(int *)(iStack_1c0 + 0x370) = *(int *)(iStack_1c0 + 0x370) + 1;
        }
      }
    }
  }
LAB_00bf0bdf:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00bbc310(param_2);
  }
  StateMachineNode::vf10(param_2);
  return;
}

