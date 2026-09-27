// src/player/pl0010/state/ZangekiDatsuJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82DF0..00BEF4C0, 9 functions

#include "types.h"

// 00B82DF0  ZangekiDatsuJumpStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B82E00  ZangekiDatsuJumpStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82E10  ZangekiDatsuJumpStatePl0010::vf24  size=19  [class]
bool ZangekiDatsuJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82E30  ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010  size=41  [class]
undefined4 * __thiscall
ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00B82E60  ZangekiDatsuJumpStatePl0010::vf00  size=6  [class]
undefined * ZangekiDatsuJumpStatePl0010::vf00(void)

{
  return &DAT_01be9ea0;
}

// 00B915D0  ZangekiDatsuJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB2E30  ZangekiDatsuJumpStatePl0010::vf20  size=282  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  DAT_01dc08bc = 0;
  DAT_01dc08d4 = 0;
  *(undefined4 *)(uVar3 + 0x2f4) = 0;
  DAT_01bea060 = DAT_01bea060 & 0xfdfffbff;
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x988) != 0)) {
      FUN_0093bdd0(*(undefined4 *)(uVar4 + 0x4f0),*(undefined4 *)(iVar2 + 0x87c),
                   *(undefined4 *)(iVar2 + 0x884));
      FUN_00ace4a0(0x6f,uVar4);
    }
  }
  FUN_00da0d70();
  return 1;
}

// 00BCD390  ZangekiDatsuJumpStatePl0010::vf08  size=1243  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_ESI;
  int *piVar7;
  undefined4 *unaff_retaddr;
  undefined *puVar8;
  uint local_8;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar6 + 0xc);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    piVar7 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar7);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_00e25500(0);
  *(undefined4 *)(uVar6 + 0x2f4) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0x41f00000;
  DAT_01dc08c0 = 1;
  FUN_00e5e050("core_se_btl_char_datsu_out",0);
  DAT_01bea060 = DAT_01bea060 | 0x2000400;
  if ((float)piVar7[0xd15] <= 0.0) {
    piVar7[0xd0f] = 0;
    piVar7[0xd10] = 0x3f800000;
  }
  piVar7[0xd07] = 0x3f800000;
  FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
  FUN_00bbc2a0(param_2);
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      puVar8 = &DAT_01be9ca8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9ca8);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
    *(uint *)(param_1 + 0x54) = uVar4;
  }
  FUN_00a7c960(uVar6 + 0x338);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (((((iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x974), iVar2 == 0x20030 || (iVar2 == 0x20033)
         ) || (iVar2 == 0x20035)) || ((iVar2 == 0x20080 || (iVar2 == 0x20081)))) ||
      (iVar2 == 0x20100)))) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0xdc) = (uint)(*(int *)(param_1 + 0x2c) == 0x34);
  iVar2 = (**(code **)(*piVar7 + 800))(0x3c888889);
  if ((iVar2 == 0) || (*(int *)(param_1 + 0xdc) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  piVar3 = piVar7 + 0x10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(int *)(param_1 + 0xb0) = *piVar3;
  *(int *)(param_1 + 0xb4) = piVar7[0x11];
  *(int *)(param_1 + 0xb8) = piVar7[0x12];
  *(int *)(param_1 + 0xbc) = piVar7[0x13];
  *(int *)(param_1 + 0xc0) = *piVar3;
  *(int *)(param_1 + 0xc4) = piVar7[0x11];
  *(int *)(param_1 + 200) = piVar7[0x12];
  *(int *)(param_1 + 0xcc) = piVar7[0x13];
  FUN_008e4580(piVar3,1);
  FUN_008e3c10();
  FUN_008e5c50(6);
  piVar7[0x43d] = 0;
  FUN_00db3e80(0x42a00000,0,&DAT_01bea1d0);
  if (unaff_retaddr == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*unaff_retaddr)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    local_8 = -(uint)(iVar2 != 0) & (uint)unaff_retaddr;
  }
  if (*(int *)(local_8 + 0x4c4) != 4) {
    FUN_00b92d70(unaff_retaddr);
    *(undefined4 *)(local_8 + 0x4c4) = 4;
    FUN_00e5e1b0("bgm_Datsu_Enter");
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x83c);
      uVar5 = FUN_009f8b40();
      FUN_00941450(uVar1,uVar5);
    }
  }
  FUN_00ac6f30();
  FUN_00a83990();
  FUN_00a83990();
  FUN_00a83990();
  FUN_00bbc960(unaff_retaddr);
  FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
  DAT_018b56b4 = 1;
  piVar7[0xf9c] = *piVar3;
  piVar7[0xf9d] = piVar7[0x11];
  piVar7[0xf9e] = piVar7[0x12];
  piVar7[3999] = piVar7[0x13];
  if (*(int *)(param_1 + 0xdc) == 0) {
    piVar7[0xf98] = 0;
    piVar7[0xf99] = 0;
    piVar7[0xf9a] = 0;
    piVar7[0xf9b] = 0x3f800000;
  }
  *(undefined4 *)(unaff_ESI + 0x540) = 0;
  *(undefined4 *)(unaff_ESI + 0x544) = 0;
  *(undefined4 *)(unaff_ESI + 0x548) = 0;
  *(undefined4 *)(unaff_ESI + 0x54c) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xf4) = 0;
  *(undefined4 *)(unaff_ESI + 0xf8) = 0;
  *(undefined4 *)(unaff_ESI + 0x104) = 0;
  *(undefined4 *)(unaff_ESI + 0x108) = 0;
  *(undefined4 *)(unaff_ESI + 0x10c) = 0x40400000;
  piVar7[0xf7d] = 0;
  piVar7[0xf7e] = 0;
  *(undefined2 *)(piVar7 + 0x42a) = 0xffff;
  iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x974);
  if ((iVar2 != 0x20080) && (iVar2 != 0x20081)) {
    *(undefined4 *)(unaff_ESI + 0x360) = 0;
    *(undefined4 *)(unaff_ESI + 0x364) = 0;
    *(undefined4 *)(unaff_ESI + 0x368) = 0;
    *(undefined4 *)(unaff_ESI + 0x36c) = 0x3f800000;
    return 1;
  }
  return 1;
}

// 00BEF4C0  ZangekiDatsuJumpStatePl0010::vf10  size=4184  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiDatsuJumpStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined4 uVar17;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [12];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_60 [64];
  undefined1 local_20 [12];
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    local_104 = 0.0;
  }
  else {
    puVar16 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar16);
    local_104 = (float)(-(uint)(iVar2 != 0) & (uint)param_2);
  }
  piVar1 = *(int **)((int)local_104 + 0xc);
  if (piVar1 == (int *)0x0) {
    pfVar8 = (float *)0x0;
  }
  else {
    puVar16 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar16);
    pfVar8 = (float *)(-(uint)(iVar2 != 0) & (uint)piVar1);
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0xd4) == 0)) {
    FUN_00d82510(0xb,100);
    StateMachineNode::vf10(param_2);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    goto switchD_00bef561_default;
  case 1:
    break;
  case 2:
    goto switchD_00bef561_caseD_2;
  case 3:
    goto switchD_00bef561_caseD_3;
  case 4:
    goto LAB_00bf04bb;
  default:
    goto switchD_00bef561_default;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    local_108 = 0.0;
    if (*(int *)((int)local_104 + 0x370) < 1) {
      FUN_00da8810(0);
      uVar4 = 0;
    }
    else {
      local_108 = 0.16666667;
      FUN_00da8810(0x41200000);
      uVar4 = 0x41200000;
    }
    FUN_00db3e80(uVar4,0,&DAT_01bea1d0);
    FUN_00aa4080(0x521,*(undefined4 *)(param_1 + 0x3c),local_108,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00bef665:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 2;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00d82510(0xb,100);
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00bef665;
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_00bef561_default;
switchD_00bef561_caseD_2:
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    uVar4 = 0xbf800000;
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar4 = 0x3e2aaaab;
    }
    FUN_00aa4080(0x522,0,0,0x3f800000,0x8004000,uVar4,0x3f800000);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_00befa02:
    local_f0 = -0.192;
    local_ec = 2.913;
    local_e8 = 2.073;
    local_e4 = local_84;
    D3DXVec3TransformNormal(&local_f0,&local_f0,pfVar8 + 4);
    pfVar3 = (float *)FUN_00ac70a0();
    local_ec = *pfVar3;
    local_e8 = pfVar3[1];
    local_e4 = pfVar3[2];
    local_e0 = pfVar3[3];
    pfVar3 = (float *)FUN_00ac70a0();
    fStack_10c = *pfVar3 - local_fc;
    iVar5 = -1;
    local_108 = pfVar3[1] - local_f8;
    local_104 = pfVar3[2] - local_f4;
    local_100 = pfVar3[3] - local_f0;
    FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      iVar5 = FUN_009f8b40();
    }
    FUN_00445d40(&local_ec,&fStack_10c,iVar5 << 0x10 | 5,0,0x60,0,"zangekiDatsuStartSafeCheck",0);
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_bc,&local_dc,0,0,&local_6c);
    if (iVar2 != 0) {
      fStack_10c = local_bc;
      local_104 = local_b4;
      local_100 = local_90;
    }
    fVar7 = *pfVar8;
    uVar4 = (**(code **)((int)fVar7 + 0x84))();
    (**(code **)((int)fVar7 + 0x7c))(&fStack_10c,uVar4);
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar4 = 0;
      FUN_00a92f90(0);
      FUN_00404b90(uVar4);
      local_108 = *(float *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      FUN_00a92f90();
      Animation::Motion::Unit::setCameraNo(local_108,uVar4);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else {
    if (iVar2 == 1) goto LAB_00befa02;
    if (iVar2 == 2) {
      iVar2 = FUN_00a92f90();
      if (iVar2 != 0) {
        uVar4 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar4);
        local_108 = *(float *)(param_1 + 0x3c);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        FUN_00a92f90();
        Animation::Motion::Unit::setCameraNo(local_108,uVar4);
      }
      iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x3c),0,0x42500000);
      if (iVar2 != 0) {
        iVar2 = FUN_00a12210(0xffffffff);
        local_100 = *(float *)(iVar2 + 0x40);
        local_fc = *(float *)(iVar2 + 0x44);
        local_f8 = *(float *)(iVar2 + 0x48);
        local_f4 = *(float *)(iVar2 + 0x4c);
        iVar2 = FUN_00a12210(0xf00);
        local_e0 = local_100 - *(float *)(iVar2 + 0x40);
        local_dc = local_fc - *(float *)(iVar2 + 0x44);
        local_d8 = local_f8 - *(float *)(iVar2 + 0x48);
        local_d4 = local_f4 - *(float *)(iVar2 + 0x4c);
        pfVar3 = (float *)FUN_00ac70a0();
        local_100 = *pfVar3;
        local_fc = pfVar3[1];
        local_f8 = pfVar3[2];
        local_f4 = pfVar3[3];
        uVar4 = 0xffffffff;
        local_f0 = local_e0 + local_100;
        local_ec = local_fc + local_dc;
        local_e8 = local_f8 + local_d8;
        local_e4 = local_f4 + local_d4;
        FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          uVar4 = FUN_009f8b40();
        }
        uVar12 = 0;
        pcVar15 = "zangekiDatsuStartSafeCheck";
        uVar11 = 0;
        uVar10 = 0x60;
        uVar9 = 0;
        uVar4 = FUN_00410130(5,uVar4,0,0,0,0,0x60,0,"zangekiDatsuStartSafeCheck",0);
        FUN_00445d40(&local_100,&local_f0,uVar4,uVar9,uVar10,uVar11,pcVar15,uVar12);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_b0,&local_d0,0,0,local_60);
        if (iVar2 != 0) {
          local_f0 = local_b0;
          local_e8 = local_a8;
          local_e4 = local_84;
        }
        fVar7 = *pfVar8;
        uVar4 = (**(code **)((int)fVar7 + 0x84))();
        (**(code **)((int)fVar7 + 0x7c))(&local_f0,uVar4);
      }
      iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),0x42500000);
      if (iVar2 != 0) {
        FUN_00ae4660(0x6f,pfVar8);
        FUN_008e6d00();
        FUN_008e0af0(0);
        (**(code **)((int)*pfVar8 + 0x318))();
        FUN_008e5c50(6);
        FUN_008e5610(1);
        FUN_008e5610(2);
      }
      iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x30) = 3;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_00d82510(0xb,100);
      }
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_00bef561_default;
switchD_00bef561_caseD_3:
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x523,*(undefined4 *)(param_1 + 0x3c),0,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    iVar2 = FUN_004b5380();
    if (iVar2 != 0) {
      fVar7 = pfVar8[0x13c];
      uVar17 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar13 = 0x8000000;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x538;
      uVar4 = 0x11017;
      FUN_004b5380(0x11017,0x538,fVar7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00aa45f0(uVar4,uVar9,fVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar17);
      pfVar8[0x2e7] = 5.60519e-45;
    }
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    fVar7 = local_104;
    puVar6 = (undefined4 *)((int)local_104 + 0x360);
    if (((*(float *)((int)local_104 + 0x360) == 0.0) && (*(float *)((int)local_104 + 0x364) == 0.0))
       && (*(float *)((int)local_104 + 0x368) == 0.0)) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        iVar2 = FUN_00a12210(0);
        local_d0 = *(float *)(iVar2 + 0x40);
        uVar12 = 0;
        local_c8 = *(float *)(iVar2 + 0x48);
        pcVar15 = "zangekiDatsuJumpSafeCheck";
        uVar11 = 0;
        uVar10 = 0x60;
        uVar9 = 0;
        local_bc = *(float *)(iVar2 + 0x44) + 1.0;
        local_b4 = local_74 + *(float *)(iVar2 + 0x4c);
        local_cc = *(float *)(iVar2 + 0x44) - 10.0;
        local_c4 = *(float *)(iVar2 + 0x4c) - local_74;
        local_c0 = local_d0;
        local_b8 = local_c8;
        uVar4 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"zangekiDatsuJumpSafeCheck",0);
        FUN_00445d40(&local_c0,&local_d0,uVar4,uVar9,uVar10,uVar11,pcVar15,uVar12);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_b0,&local_e0,0,0,local_60);
        fVar7 = *pfVar8;
        if (iVar2 == 0) {
          local_8c = *(undefined4 *)(param_1 + 0xb4);
          local_88 = pfVar8[0x12];
          local_90 = pfVar8[0x10];
          uVar4 = (**(code **)((int)fVar7 + 0x84))();
          pfVar3 = &local_90;
        }
        else {
          local_6c = local_ac;
          local_68 = pfVar8[0x12];
          local_70 = pfVar8[0x10];
          uVar4 = (**(code **)((int)fVar7 + 0x84))();
          pfVar3 = &local_70;
        }
LAB_00bf0028:
        (**(code **)((int)fVar7 + 0x7c))(pfVar3,uVar4);
      }
      else {
        pfVar3 = (float *)FUN_0085c460(local_20);
        local_100 = *pfVar3;
        local_fc = pfVar3[1] + 1.5;
        local_f8 = pfVar3[2];
        local_f4 = pfVar3[3] + local_14;
        pfVar3 = (float *)FUN_0085c430(local_80);
        local_f0 = *pfVar3;
        uVar12 = 0;
        pcVar15 = "Pl0000::qteSafeCheck";
        uVar11 = 0;
        local_ec = pfVar3[1] + 1.5;
        uVar10 = 0x60;
        uVar9 = 0;
        local_e8 = pfVar3[2];
        local_e4 = pfVar3[3] + local_74;
        uVar4 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"Pl0000::qteSafeCheck",0);
        FUN_00445d40(&local_f0,&local_100,uVar4,uVar9,uVar10,uVar11,pcVar15,uVar12);
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_b0,&local_c0,0,0,local_60);
        if (iVar2 != 0) {
          *(float *)(param_1 + 0xb0) = local_c0 * 0.5 + local_b0;
          *(float *)(param_1 + 0xb4) = local_bc * 0.5 + *(float *)(param_1 + 0xb4);
          *(float *)(param_1 + 0xb8) = local_b8 * 0.5 + local_a8;
          *(float *)(param_1 + 0xbc) = local_b4 * 0.5 + local_a4;
          pfVar8[0xf9c] = 0.0;
          pfVar8[0xf9d] = 0.0;
          pfVar8[0xf9e] = 0.0;
          pfVar8[3999] = 1.0;
        }
        iVar2 = FUN_00ac70a0();
        if (*(float *)(param_1 + 0xb4) < *(float *)(iVar2 + 4)) {
          iVar2 = FUN_00ac70a0();
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 4);
        }
        local_e0 = *(float *)(param_1 + 0xb0);
        local_d8 = *(float *)(param_1 + 0xb8);
        local_d4 = *(float *)(param_1 + 0xbc);
        local_dc = *(float *)(param_1 + 0xb4) + 0.5;
        local_cc = *(float *)(param_1 + 0xb4) - 10.0;
        local_d0 = local_e0;
        local_c8 = local_d8;
        local_c4 = local_d4;
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (&local_e0,0,0,0,&local_e0,&local_d0,0x1e,"jumpDatsuFloorCheck");
        if (iVar2 != 0) {
          fVar7 = *pfVar8;
          uVar4 = (**(code **)((int)fVar7 + 0x84))();
          pfVar3 = &local_e0;
          goto LAB_00bf0028;
        }
        local_108 = *pfVar8;
        uVar4 = (**(code **)((int)local_108 + 0x84))();
        (**(code **)((int)local_108 + 0x7c))(param_1 + 0xb0,uVar4);
      }
      Pl0000::qteZangekiSafeCheckForward();
      FUN_00b89850();
    }
    else {
      local_108 = *pfVar8;
      uVar4 = (**(code **)((int)local_108 + 0x84))();
      (**(code **)((int)local_108 + 0x7c))(puVar6,uVar4);
      *puVar6 = 0;
      *(undefined4 *)((int)fVar7 + 0x364) = 0;
      *(undefined4 *)((int)fVar7 + 0x368) = 0;
      *(undefined4 *)((int)fVar7 + 0x36c) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (pfVar8[0x1d9] != 0.0) {
      FUN_008e0af0(1);
    }
    (**(code **)((int)*pfVar8 + 0x314))();
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00bf0064:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    local_108 = *(float *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(local_108,uVar4);
    local_d0 = pfVar8[0x10];
    local_bc = pfVar8[0x11] + 5.0;
    local_c8 = pfVar8[0x12];
    local_b4 = pfVar8[0x13] + local_74;
    local_cc = local_bc - 10.0;
    local_c4 = local_b4 - local_74;
    local_c0 = local_d0;
    local_b8 = local_c8;
    FUN_00445d40(&local_c0,&local_d0,0xffff000a,0,0x60,0,"zangekiDatsuJumpOnWaterCheck",0);
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_b0,&local_e0,0,0,local_60);
    if ((iVar2 != 0) && (pfVar8[0x11] + 0.2 < local_ac)) {
      _DAT_01bea860 = 1;
    }
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_00d82510(0xb,100);
      }
      if (*(int *)(param_1 + 0xd4) == 0) {
        iVar2 = FUN_00a8c760(0x16);
        if ((iVar2 != 0) && (*(int *)(param_1 + 0x54) != 0)) {
          FUN_00ae24f0();
        }
        if ((*(int *)(param_1 + 0xd4) == 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0x54);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x988) != 0)) {
            FUN_0093bdd0(pfVar8[0x13c],*(undefined4 *)(iVar2 + 0x87c),*(undefined4 *)(iVar2 + 0x884)
                        );
            FUN_00ace4a0(0x6f,pfVar8);
            FUN_00a7c950();
          }
          FUN_00b92e00(param_2);
          FUN_00b7aa80();
          FUN_008e5c50(6);
          FUN_008e6d00();
          FUN_008e5720(1);
          FUN_008e5720(2);
          pfVar8[0x43d] = 1.4013e-45;
          *(undefined4 *)(param_1 + 0xd4) = 1;
        }
      }
    }
    iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 4;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = FUN_00a8c760(0x20);
    if (iVar2 == 0) {
LAB_00bf035d:
      if (*(int *)(param_1 + 0xd8) == 0) goto LAB_00bf04ab;
    }
    else if (*(int *)(param_1 + 0xd8) == 0) {
      local_108 = pfVar8[0x13c];
      uVar4 = FUN_00a81330(0);
      iVar2 = (**(code **)((int)*pfVar8 + 0x84))(0x40c90fdb,0x40a00000,uVar4);
      iVar2 = FUN_00bd5d10(param_2,local_108,*(undefined4 *)(iVar2 + 4));
      if (0 < *(int *)(iVar2 + 0xc)) {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        pfVar8[0x1029] = pfVar8[0x102a];
        pfVar8[0xd07] = 1.0;
        FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
        FUN_00bbc2a0(param_2);
      }
      goto LAB_00bf035d;
    }
    if (pfVar8[0x1029] <= 0.0) {
      pfVar8[0x1029] = -1.0;
      pfVar8[0xd07] = 1.0;
      FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
      FUN_00bbc2a0(param_2);
    }
    else {
      FUN_00b7ab30(0x40a00000);
    }
    if (pfVar8[0xd09] <= pfVar8[0x1028]) {
      fVar7 = pfVar8[0x1029] - 1.0;
      pfVar8[0x1029] = fVar7;
      if ((fVar7 < pfVar8[0x102a] - pfVar8[0x102b]) && (pfVar8[0x102a] - pfVar8[0x102c] < fVar7)) {
        uVar4 = FUN_00a81330();
        iVar2 = FUN_00be6620(param_2,param_1,100,0,uVar4);
        if (iVar2 != 0) {
          DAT_018b56b4 = 1;
          pfVar8[0x1029] = -1.0;
          pfVar8[0xd07] = 1.0;
          FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
          FUN_00bbc2a0(param_2);
          *(int *)((int)local_104 + 0x370) = *(int *)((int)local_104 + 0x370) + 1;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00bf0064;
LAB_00bf04ab:
  if (*(int *)(param_1 + 0x60) != 0) {
LAB_00bf04bb:
    fVar7 = local_104;
    if (*(int *)(param_1 + 0xdc) != 0) {
      pfVar8[0xf7d] = 0.0;
      pfVar8[0xf7e] = 0.0;
      FUN_00ba6810(1,0);
      fVar7 = local_104;
      *(undefined4 *)((int)local_104 + 0x32c) = 1;
      FUN_00b90990();
    }
    *(undefined4 *)((int)fVar7 + 0x3ec) = 0;
    FUN_00d82510(0xb,100);
    *(undefined4 *)((int)fVar7 + 0x370) = 0;
  }
switchD_00bef561_default:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00bbc310(param_2);
  }
  (**(code **)((int)*pfVar8 + 0x220))(0x41200000);
  StateMachineNode::vf10(param_2);
  return;
}

