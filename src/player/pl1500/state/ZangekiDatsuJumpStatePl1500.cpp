// src/player/pl1500/state/ZangekiDatsuJumpStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4490..008D4910, 9 functions

#include "mgrr.h"
#include "ZangekiDatsuJumpStatePl1500.h"

// 008A4490  ZangekiDatsuJumpStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A44A0  ZangekiDatsuJumpStatePl1500::vf24  size=19  [class]
bool ZangekiDatsuJumpStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A44C0  ZangekiDatsuJumpStatePl1500::ZangekiDatsuJumpStatePl1500  size=41  [class]
undefined4 * __thiscall
ZangekiDatsuJumpStatePl1500::ZangekiDatsuJumpStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 008A44F0  ZangekiDatsuJumpStatePl1500::vf00  size=6  [class]
undefined * ZangekiDatsuJumpStatePl1500::vf00(void)

{
  return &DAT_01b35bac;
}

// 008AA0D0  ZangekiDatsuJumpStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuJumpStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B35B0  ZangekiDatsuJumpStatePl1500::vf20  size=305  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1500::vf20(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  DAT_01dc08bc = 0;
  DAT_01dc08d4 = 0;
  *(undefined4 *)(uVar3 + 0x2f4) = 0;
  DAT_01bea060 = DAT_01bea060 & 0xfdfffbff;
  if (*(int *)(param_1 + 0xe4) == 0) {
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
  }
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
  *(undefined4 *)(uVar3 + 0x6b8) = 0;
  *(undefined4 *)(uVar3 + 0x6cc) = 0;
  return 1;
}

// 008BCB20  ZangekiDatsuJumpStatePl1500::vf08  size=1310  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_retaddr;
  undefined *puVar8;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar6 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b90);
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
  FUN_00b7ab80(0,0x3f800000);
  piVar7[0xd07] = 0x3f800000;
  FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
  FUN_008b8630(param_2);
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
     ((((iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x974), iVar2 == 0x20030 || (iVar2 == 0x20033))
       || (iVar2 == 0x20035)) || (((iVar2 == 0x20080 || (iVar2 == 0x20081)) || (iVar2 == 0x20100))))
     )) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = (**(code **)(*piVar7 + 800))(0x3c888889);
  if (iVar2 == 0) {
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
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*unaff_retaddr)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar2 != 0) & (uint)unaff_retaddr;
  }
  if (*(int *)(uVar4 + 0x4c4) != 4) {
    FUN_008aa950(unaff_retaddr);
    *(undefined4 *)(uVar4 + 0x4c4) = 4;
    FUN_00e5e1b0("bgm_Datsu_Enter");
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        uVar1 = *(undefined4 *)(iVar2 + 0x83c);
        uVar5 = FUN_009f8b40();
        FUN_00941450(uVar1,uVar5);
      }
    }
  }
  FUN_00ac6f30();
  FUN_00a83990();
  FUN_00a83990();
  FUN_00a83990();
  FUN_008b8cc0(unaff_retaddr);
  FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
  DAT_018b56b4 = 1;
  if (*(int *)(param_1 + 0x2c) != 5) {
    piVar7[0xf9c] = piVar7[0x10];
    piVar7[0xf9d] = piVar7[0x11];
    piVar7[0xf9e] = piVar7[0x12];
    piVar7[3999] = piVar7[0x13];
  }
  piVar7[0xf98] = 0;
  piVar7[0xf99] = 0;
  piVar7[0xf9a] = 0;
  piVar7[0xf9b] = 0x3f800000;
  *(undefined4 *)(uVar6 + 0x54c) = 0x3f800000;
  *(undefined4 *)(uVar6 + 0x540) = 0;
  *(undefined4 *)(uVar6 + 0x544) = 0;
  *(undefined4 *)(uVar6 + 0x548) = 0;
  *(undefined4 *)(uVar6 + 0x104) = 0;
  *(undefined4 *)(uVar6 + 0x108) = 0;
  *(undefined4 *)(uVar6 + 0xf4) = 0x10000;
  *(undefined4 *)(uVar6 + 0xf8) = 0;
  *(undefined4 *)(uVar6 + 0x10c) = 0x40400000;
  piVar7[0xf7d] = 0x10000;
  piVar7[0xf7e] = 0;
  *(undefined2 *)(piVar7 + 0x42a) = 0xffff;
  *(undefined4 *)(uVar6 + 0x360) = 0;
  *(undefined4 *)(uVar6 + 0x364) = 0;
  *(undefined4 *)(uVar6 + 0x368) = 0;
  *(undefined4 *)(uVar6 + 0x36c) = 0x3f800000;
  FUN_00a94bc0(*(undefined4 *)(uVar6 + 0x5e4),0);
  if (unaff_retaddr == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*unaff_retaddr)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar2 != 0) & (uint)unaff_retaddr;
  }
  (**(code **)(*(int *)(uVar4 + 0x600) + 8))(0x41200000,0,0);
  iVar2 = FUN_008b8bb0(unaff_retaddr);
  *(int *)(param_1 + 0xe0) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(uVar6 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  return 1;
}

// 008D3810  ZangekiDatsuJumpStatePl1500::vf10  size=4321  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiDatsuJumpStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar8;
  undefined *puVar9;
  float local_540;
  float local_53c;
  float local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float fStack_51c;
  int local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float afStack_4d0 [3];
  float local_4c4;
  undefined1 local_4c0 [4];
  float local_4bc;
  float fStack_4b8;
  float local_4b4;
  float fStack_4b0;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [336];
  undefined1 local_330 [16];
  int local_320;
  int local_31c;
  
  if (param_2 == (undefined4 *)0x0) {
    fVar3 = 0.0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar9);
    fVar3 = (float)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar8 = *(int **)((int)fVar3 + 0x5e0);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*piVar8 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar9);
    piVar8 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar8);
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 == 0) && (*(int *)(param_1 + 0xd4) == 0)) {
    FUN_00d82510(1,100);
    StateMachineNode::vf10(param_2);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    goto switchD_008d38b2_default;
  case 1:
    break;
  case 2:
    goto switchD_008d38b2_caseD_2;
  case 3:
    goto switchD_008d38b2_caseD_3;
  case 4:
    goto LAB_008d46c3;
  default:
    goto switchD_008d38b2_default;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    local_514 = 0.0;
    if (*(int *)((int)fVar3 + 0x370) < 1) {
      FUN_00da8810(0);
      uVar5 = 0;
    }
    else {
      local_514 = 0.16666667;
      FUN_00da8810(0x41200000);
      uVar5 = 0x41200000;
    }
    FUN_00db3e80(uVar5,0,&DAT_01bea1d0);
    FUN_00aa4080(0x164,*(undefined4 *)(param_1 + 0x3c),local_514,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_008d39bd:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    iVar4 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 2;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      FUN_00d82510(1,100);
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_008d39bd;
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_008d38b2_default;
switchD_008d38b2_caseD_2:
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == 0) {
    FUN_00aa4080(0x165,0,0,0x3f800000,0x8004000,0xbf800000,0x3f800000);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar4 = FUN_00a12210(0);
    local_540 = *(float *)(iVar4 + 0x40);
    local_53c = *(float *)(iVar4 + 0x44);
    local_538 = *(float *)(iVar4 + 0x48);
    local_534 = *(float *)(iVar4 + 0x4c);
    iVar4 = FUN_00ac70a0();
    local_53c = *(float *)(iVar4 + 4) + 1.0;
    local_500 = local_540;
    local_4fc = local_53c - 3.0;
    local_4f8 = local_538;
    local_4f4 = local_534 - local_4c4;
    uVar5 = FUN_00410130(6,0xffffffff,0,0,0);
    FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_009f8b40();
    }
    hkpAllRayHitCollector::hkpAllRayHitCollector_8();
    iVar4 = RayCastMultiHitWork::RayCastMultiHitWork
                      (local_330,&local_540,&local_500,uVar5,"DatsuJump::groundCheck");
    if (iVar4 != 0) {
      FUN_0112c170();
      local_518 = 0;
      if (0 < local_31c) {
        local_514 = 0.0;
        do {
          piVar1 = (int *)(local_320 + 0x50 + (int)local_514);
          iVar4 = *piVar1;
          iVar6 = *(char *)(iVar4 + 0x10) + iVar4;
          if ((((iVar6 != 0) && (*(char *)(iVar4 + 0x18) != '\x02')) &&
              (iVar4 = FUN_008f8cf0(iVar6,1), iVar4 == 0)) &&
             (((iVar4 = FUN_00445ca0(*piVar1), iVar4 == 0 ||
               (iVar4 = FUN_008f7780(iVar4), iVar4 == 0)) ||
              ((*(byte *)(iVar4 + 0x4c0) & 0x60) == 0)))) {
            *(undefined4 *)(param_1 + 0x4c) = 1;
            goto LAB_008d407f;
          }
          local_514 = (float)((int)local_514 + 0x60);
          local_518 = local_518 + 1;
        } while (local_518 < local_31c);
        hkpRayHitCollector::hkpRayHitCollector_2();
        goto LAB_008d408f;
      }
    }
LAB_008d407f:
    hkpRayHitCollector::hkpRayHitCollector_2();
LAB_008d408f:
    local_540 = -0.045;
    local_53c = 2.984;
    local_538 = 4.962;
    local_534 = local_4c4;
    iVar4 = FUN_00a12210(0xffffffff);
    local_510 = *(float *)(iVar4 + 0x40);
    local_50c = *(float *)(iVar4 + 0x44);
    local_508 = *(float *)(iVar4 + 0x48);
    local_504 = *(float *)(iVar4 + 0x4c);
    iVar4 = FUN_00a12210(0);
    local_4f0 = *(float *)(iVar4 + 0x40) - local_510;
    local_4ec = *(float *)(iVar4 + 0x44) - local_50c;
    local_4e8 = *(float *)(iVar4 + 0x48) - local_508;
    local_4e4 = *(float *)(iVar4 + 0x4c) - local_504;
    D3DXVec3TransformNormal(&local_540,&local_540,piVar8 + 4);
    pfVar7 = (float *)FUN_00ac70a0();
    local_50c = *pfVar7;
    local_508 = pfVar7[1];
    local_504 = pfVar7[2];
    local_500 = pfVar7[3];
    local_53c = local_50c - (local_4fc + unaff_ESI);
    local_538 = local_508 - (local_4f8 + unaff_EBX);
    local_534 = local_504 - (local_4f4 + fVar3);
    local_530 = local_500 - (local_4f0 + local_540);
    iVar4 = hkpAllRayHitCollector::hkpAllRayHitCollector_2(&fStack_51c,&local_50c,&local_53c);
    if (iVar4 != 0) {
      local_53c = fStack_51c;
      local_534 = local_514;
      local_530 = afStack_4d0[0];
    }
    iVar4 = *piVar8;
    local_4bc = local_53c + local_4fc;
    fStack_4b8 = local_4f8 + local_538;
    local_4b4 = local_534 + local_4f4;
    fStack_4b0 = local_530 + local_4f0;
    uVar5 = (**(code **)(iVar4 + 0x84))();
    (**(code **)(iVar4 + 0x7c))(&local_4bc,uVar5);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else {
    if (iVar4 == 1) goto LAB_008d408f;
    if (iVar4 == 2) {
      iVar4 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x3c),0,0x42200000);
      if (iVar4 != 0) {
        iVar4 = FUN_00a12210(0xffffffff);
        local_540 = *(float *)(iVar4 + 0x40);
        local_53c = *(float *)(iVar4 + 0x44);
        local_538 = *(float *)(iVar4 + 0x48);
        local_534 = *(float *)(iVar4 + 0x4c);
        iVar4 = FUN_00a12210(0);
        local_4f0 = *(float *)(iVar4 + 0x40);
        local_4ec = *(float *)(iVar4 + 0x44);
        local_4e8 = *(float *)(iVar4 + 0x48);
        local_4e4 = *(float *)(iVar4 + 0x4c);
        iVar4 = FUN_00a12210(0xf00);
        local_4b4 = *(float *)(iVar4 + 0x4c);
        local_510 = local_540 - local_4f0;
        local_50c = local_53c - local_4ec;
        local_508 = local_538 - local_4e8;
        local_504 = local_534 - local_4e4;
        local_540 = local_4f0 - *(float *)(iVar4 + 0x40);
        local_53c = local_4ec - *(float *)(iVar4 + 0x44);
        local_538 = local_4e8 - *(float *)(iVar4 + 0x48);
        local_534 = local_4e4 - local_4b4;
        pfVar7 = (float *)FUN_00ac70a0();
        local_500 = *pfVar7;
        local_4fc = pfVar7[1];
        local_4f8 = pfVar7[2];
        local_4f4 = pfVar7[3];
        local_530 = local_540 + local_500;
        local_52c = local_4fc + local_53c;
        local_528 = local_4f8 + local_538;
        local_524 = local_4f4 + local_534;
        iVar4 = hkpAllRayHitCollector::hkpAllRayHitCollector_2(&local_540,&local_500,&local_530);
        if (iVar4 != 0) {
          local_530 = local_540;
          local_528 = local_538;
          local_524 = local_4b4;
        }
        iVar4 = *piVar8;
        local_4a0 = local_530 + local_510;
        local_49c = local_50c + local_52c;
        local_498 = local_528 + local_508;
        local_494 = local_524 + local_504;
        uVar5 = (**(code **)(iVar4 + 0x84))();
        (**(code **)(iVar4 + 0x7c))(&local_4a0,uVar5);
      }
      iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),0x42200000);
      if (iVar4 != 0) {
        FUN_00ae4660(0x6f,piVar8);
        FUN_008e6d00();
        FUN_008e0af0(0);
        (**(code **)(*piVar8 + 0x318))();
        FUN_008e5c50(6);
        FUN_008e5610(1);
        FUN_008e5610(2);
        iVar4 = FUN_00a12210(0xf00);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(iVar4 + 0x40);
          *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(iVar4 + 0x44);
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar4 + 0x48);
          *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar4 + 0x4c);
        }
      }
      iVar4 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x30) = 3;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar4 = FUN_00a81330();
      if (iVar4 == 0) {
        FUN_00d82510(1,100);
      }
      uVar5 = FUN_00a957b0(0);
      iVar4 = FUN_00a94ee0(0,0x5f,uVar5);
      if (iVar4 != 0) {
        iVar4 = FUN_00a12210(6);
        local_530 = *(float *)(iVar4 + 0x40);
        local_52c = *(float *)(iVar4 + 0x44);
        local_528 = *(float *)(iVar4 + 0x48);
        local_524 = *(float *)(iVar4 + 0x4c);
        pfVar7 = (float *)FUN_00a8bac0(auStack_490,0xbf000000);
        local_500 = *pfVar7 + local_530;
        local_4fc = pfVar7[1] + local_52c;
        local_4f8 = pfVar7[2] + local_528;
        local_4f4 = pfVar7[3] + local_524;
        pfVar7 = (float *)FUN_00a8bac0(afStack_4d0,0x3f000000);
        local_530 = *pfVar7 + local_530;
        local_52c = pfVar7[1] + local_52c;
        local_528 = pfVar7[2] + local_528;
        local_524 = pfVar7[3] + local_524;
        iVar4 = hkpAllRayHitCollector::hkpAllRayHitCollector_2(local_4c0,&local_530,&local_500);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x60) = 1;
          *(undefined4 *)(param_1 + 0x30) = 3;
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
      }
    }
  }
  iVar4 = FUN_00a92f90();
  if (iVar4 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    local_518 = *(int *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(local_518,uVar5);
  }
  if (*(int *)(param_1 + 0x60) == 0) goto switchD_008d38b2_default;
switchD_008d38b2_caseD_3:
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x166,*(undefined4 *)(param_1 + 0x3c),0,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (((*(float *)((int)fVar3 + 0x360) == 0.0) && (*(float *)((int)fVar3 + 0x364) == 0.0)) &&
       (*(float *)((int)fVar3 + 0x368) == 0.0)) {
      local_510 = (float)piVar8[0x10];
      local_50c = (float)piVar8[0x11];
      local_508 = (float)piVar8[0x12];
      local_504 = (float)piVar8[0x13];
      iVar4 = FUN_00a12210(0);
      local_540 = *(float *)(iVar4 + 0x40);
      local_538 = *(float *)(iVar4 + 0x48);
      local_53c = *(float *)(iVar4 + 0x44) + 3.0;
      local_534 = local_4c4 + *(float *)(iVar4 + 0x4c);
      local_4fc = *(float *)(iVar4 + 0x44) - 10.0;
      local_4f4 = *(float *)(iVar4 + 0x4c) - local_4c4;
      local_500 = local_540;
      local_4f8 = local_538;
      iVar4 = hkpAllRayHitCollector::hkpAllRayHitCollector_2(local_4c0,&local_540,&local_500);
      local_50c = local_4bc;
      if (iVar4 == 0) {
        local_50c = *(float *)(param_1 + 0xb4);
      }
      iVar4 = *piVar8;
      uVar5 = (**(code **)(iVar4 + 0x84))();
      (**(code **)(iVar4 + 0x7c))(&local_510,uVar5);
      iVar4 = FUN_00b7f550(0xc);
      if (iVar4 != 0) {
        piVar8[0xf98] = 0;
        piVar8[0xf99] = 0;
        piVar8[0xf9a] = 0;
        piVar8[0xf9b] = 0x3f800000;
        piVar8[3999] = 0x3f800000;
        piVar8[0xf9c] = 0;
        piVar8[0xf9d] = 0;
        piVar8[0xf9e] = 0;
      }
      Pl0000::qteZangekiSafeCheckForward();
      FUN_00b89850();
    }
    else {
      local_518 = *piVar8;
      uVar5 = (**(code **)(local_518 + 0x84))();
      (**(code **)(local_518 + 0x7c))((undefined4 *)((int)fVar3 + 0x360),uVar5);
      *(undefined4 *)((int)fVar3 + 0x360) = 0;
      *(undefined4 *)((int)fVar3 + 0x364) = 0;
      *(undefined4 *)((int)fVar3 + 0x368) = 0;
      *(undefined4 *)((int)fVar3 + 0x36c) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (piVar8[0x1d9] != 0) {
      FUN_008e0af0(1);
    }
    (**(code **)(*piVar8 + 0x314))();
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_008d44ac:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    local_518 = *(int *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(local_518,uVar5);
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 == 0) {
        FUN_00d82510(1,100);
      }
      if (*(int *)(param_1 + 0xd4) == 0) {
        iVar4 = FUN_00a8c760(0x16);
        if ((iVar4 != 0) && (*(int *)(param_1 + 0x54) != 0)) {
          FUN_00ae24f0();
        }
        if ((*(int *)(param_1 + 0xd4) == 0) && (iVar4 = FUN_00a8c760(0xb), iVar4 != 0)) {
          iVar4 = *(int *)(param_1 + 0x54);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x988) != 0)) {
            FUN_0093bdd0(piVar8[0x13c],*(undefined4 *)(iVar4 + 0x87c),*(undefined4 *)(iVar4 + 0x884)
                        );
            FUN_00ace4a0(0x6f,piVar8);
            FUN_00a7c950();
          }
          FUN_008aa9e0(param_2);
          FUN_00b7aa80();
          FUN_008e5c50(6);
          FUN_008e6d00();
          FUN_008e5720(1);
          FUN_008e5720(2);
          piVar8[0x43d] = 1;
          *(undefined4 *)(param_1 + 0xd4) = 1;
          *(undefined4 *)((int)fVar3 + 0xe0) = 0;
          *(undefined4 *)((int)fVar3 + 0x188) = 0;
        }
      }
    }
    iVar4 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x3c));
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x30) = 4;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      (**(code **)(*piVar8 + 0x1d4))(0);
      iVar4 = FUN_008c8c50();
      if (iVar4 != 0xe0000) {
        *(int *)((int)fVar3 + 0x3ec) = iVar4;
        *(undefined4 *)((int)fVar3 + 0x2f4) = 0;
        FUN_00da8810(0x41200000);
        _DAT_01bea940 = 0x41200000;
        FUN_00dc1270(0x41200000,0);
        FUN_00db3e80(0x41200000,1,&DAT_01bea1d0);
        *(undefined4 *)(param_1 + 0xe4) = 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_008d44ac;
  if (*(int *)(param_1 + 0x60) != 0) {
LAB_008d46c3:
    *(undefined4 *)((int)fVar3 + 0x3ec) = 0x10000;
    FUN_00d82510(1,100);
    *(undefined4 *)((int)fVar3 + 0x370) = 0;
  }
switchD_008d38b2_default:
  if (1 < *(int *)(param_1 + 0x30)) {
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0xd8) == 0)) {
      iVar4 = piVar8[0x13c];
      uVar5 = FUN_00a81330(0);
      iVar6 = (**(code **)(*piVar8 + 0x84))(0x40c90fdb,0x40e00000,uVar5);
      iVar4 = FUN_008c23e0(param_2,iVar4,*(undefined4 *)(iVar6 + 4));
      if (0 < *(int *)(iVar4 + 0xc)) {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        piVar8[0x1029] = piVar8[0x102a];
        piVar8[0xd07] = 0x3f800000;
        FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
        FUN_008b8630(param_2);
        *(undefined4 *)((int)fVar3 + 0x6b8) = 1;
      }
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      if ((float)piVar8[0x1029] <= 0.0) {
        piVar8[0x1029] = -0x40800000;
        piVar8[0xd07] = 0x3f800000;
        FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
        FUN_008b8630(param_2);
        *(undefined4 *)((int)fVar3 + 0x6b8) = 0;
      }
      else {
        FUN_00b7ab30(0x40a00000);
      }
      if ((float)piVar8[0xd09] <= (float)piVar8[0x1028]) {
        fVar2 = (float)piVar8[0x1029] - 1.0;
        piVar8[0x1029] = (int)fVar2;
        if ((fVar2 < (float)piVar8[0x102a] - (float)piVar8[0x102b]) &&
           ((float)piVar8[0x102a] - (float)piVar8[0x102c] < fVar2)) {
          uVar5 = FUN_00a81330();
          iVar4 = FUN_008ce550(param_2,param_1,100,0,uVar5);
          if (iVar4 != 0) {
            FUN_004039a0(0x99,piVar8,0);
            FUN_00e020f0(piVar8[0x13c]);
            FUN_00a8c8b0(0x11500,auStack_480);
            DAT_018b56b4 = 1;
            piVar8[0x1029] = -0x40800000;
            piVar8[0xd07] = 0x3f800000;
            FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
            FUN_008b8630(param_2);
            if (*(int *)(param_1 + 0x54) != 0) {
              FUN_00ace4a0(0x6f,piVar8);
            }
            *(int *)((int)fVar3 + 0x370) = *(int *)((int)fVar3 + 0x370) + 1;
            *(undefined4 *)((int)fVar3 + 0x6b8) = 0;
          }
        }
      }
    }
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_008b86a0(param_2);
  }
  (**(code **)(*piVar8 + 0x220))(0x41200000);
  *(undefined4 *)((int)unaff_EBX + 0x6cc) = *(undefined4 *)(param_1 + 0xd4);
  StateMachineNode::vf10(param_2);
  return;
}

// 008D4910  ZangekiDatsuJumpStatePl1500::vf18  size=705  [class]
/* WARNING: Removing unreachable block (ram,0x008d4a57) */
/* WARNING: Removing unreachable block (ram,0x008d4a64) */
/* WARNING: Removing unreachable block (ram,0x008d4a71) */
/* WARNING: Removing unreachable block (ram,0x008d4b53) */

void __thiscall ZangekiDatsuJumpStatePl1500::vf18(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar2 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar6);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar5);
  }
  if ((*(int *)(param_1 + 0x30) == 2) &&
     (((*(float *)(param_1 + 0xf0) != 0.0 || (*(float *)(param_1 + 0xf4) != 0.0)) ||
      (*(float *)(param_1 + 0xf8) != 0.0)))) {
    local_30 = *(float *)(param_1 + 0xf0);
    local_2c = *(float *)(param_1 + 0xf4);
    local_28 = *(float *)(param_1 + 0xf8);
    local_24 = *(float *)(param_1 + 0xfc);
    iVar3 = FUN_00a12210(0);
    local_40 = *(float *)(iVar3 + 0x40) - local_30;
    local_3c = *(float *)(iVar3 + 0x44) - local_2c;
    local_38 = *(float *)(iVar3 + 0x48) - local_28;
    local_34 = *(float *)(iVar3 + 0x4c) - local_24;
    local_50 = local_40 + local_30;
    local_4c = local_3c + local_2c;
    local_48 = local_38 + local_28;
    local_44 = local_34 + local_24;
    fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    local_50 = local_40 + local_50;
    local_4c = local_3c + local_4c;
    local_48 = local_38 + local_48;
    local_44 = local_34 + local_44;
    iVar3 = hkpAllRayHitCollector::hkpAllRayHitCollector_2(&local_20,&local_30,&local_50);
    if (iVar3 != 0) {
      iVar3 = *piVar5;
      local_20 = local_20 - local_40;
      local_18 = local_18 - local_38;
      local_14 = local_14 - local_34;
      local_1c = piVar5[0x11];
      uVar4 = (**(code **)(iVar3 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(&local_20,uVar4);
    }
  }
  StateMachineNode::vf18(param_2);
  return;
}

