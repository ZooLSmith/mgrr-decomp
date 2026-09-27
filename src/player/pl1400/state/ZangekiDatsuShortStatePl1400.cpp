// src/player/pl1400/state/ZangekiDatsuShortStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F5C0..0089D880, 12 functions

#include "mgrr.h"
#include "ZangekiDatsuShortStatePl1400.h"

// 0085F5C0  ZangekiDatsuShortStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F5D0  ZangekiDatsuShortStatePl1400::vf24  size=19  [class]
bool ZangekiDatsuShortStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00867BD0  ZangekiDatsuShortStatePl1400::ZangekiDatsuShortStatePl1400  size=51  [class]
undefined4 * __thiscall
ZangekiDatsuShortStatePl1400::ZangekiDatsuShortStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x23] = 0;
  return param_1;
}

// 00867C10  ZangekiDatsuShortStatePl1400::vf00  size=6  [class]
undefined * ZangekiDatsuShortStatePl1400::vf00(void)

{
  return &DAT_01b35b3c;
}

// 00867C30  ZangekiDatsuShortStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuShortStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00870F80  ZangekiDatsuShortStatePl1400::SafeCheck  size=866  [class]
void __thiscall ZangekiDatsuShortStatePl1400::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 local_88;
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
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar6 + 0x5e0);
    if (piVar1 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01b35b20;
      (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    iVar4 = FUN_00ac70a0();
    local_6c = *(float *)(iVar4 + 4);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(uVar7 + 0x40);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(uVar7 + 0x44);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(uVar7 + 0x48);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(uVar7 + 0x4c);
    local_50 = *(undefined4 *)(uVar7 + 0x40);
    local_4c = *(float *)(uVar7 + 0x44);
    local_48 = *(undefined4 *)(uVar7 + 0x48);
    local_44 = *(float *)(uVar7 + 0x4c);
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
    iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_80,local_60,0,0,&local_50);
    if ((iVar4 != 0) && (*(float *)(uVar7 + 0x44) - *(float *)(param_1 + 100) < 2.0)) {
      *(undefined4 *)(param_1 + 0x60) = local_80;
      *(undefined4 *)(param_1 + 100) = local_7c;
      *(undefined4 *)(param_1 + 0x68) = local_78;
      *(undefined4 *)(param_1 + 0x6c) = local_74;
    }
    local_88 = 0x3e2aaaab;
    fVar3 = local_6c - *(float *)(param_1 + 100);
    if (0.6 <= fVar3) {
      if (fVar3 <= 1.6) {
        fVar3 = fVar3 * 1.25;
      }
      else {
        fVar3 = 2.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    FUN_00dde300(0,0x3f800000);
    if (*(int *)(uVar6 + 0x370) < 1) {
      FUN_00da8810(0x41a00000);
      uVar2 = 0x41a00000;
    }
    else {
      local_88 = 0x3eaaaaab;
      FUN_00da8810(0x42200000);
      uVar2 = 0x42200000;
    }
    FUN_00db3e80(uVar2,1,&DAT_01bea1d0);
    FUN_00a9f4c0("Datsu_Blend",local_88,0x8002000,*(undefined4 *)(param_1 + 0x34));
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,2,0,0x1a7,local_88,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,1,0,0x1a8,local_88,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,0,0,0x1a9,local_88,0x8002000);
    FUN_00a947e0(*(undefined4 *)(param_1 + 0x34),0,fVar3,0);
    FUN_0085dcf0(*(undefined4 *)(uVar7 + 0x4f0),0x1e1,0x8000000);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar6 + 0x33c);
    *(undefined4 *)(param_1 + 0x44) = 0x428c0000;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00a7c940(*(int *)(param_1 + 0x4c) + 0x968);
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        iVar4 = FUN_00a7c8a0();
        if (iVar4 != 0) {
          uVar2 = *(undefined4 *)(iVar4 + 0x83c);
          uVar5 = FUN_009f8b40();
          FUN_00941450(uVar2,uVar5);
        }
      }
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008712F0  ZangekiDatsuShortStatePl1400::vf20  size=432  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1400::vf20(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
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
    if ((((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x4c), iVar2 != 0)) &&
        (*(int *)(iVar2 + 0x988) != 0)) && (*(int *)(uVar4 + 0x6b0) == 0)) {
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
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(uVar4 + 0x694) = 0;
  return 1;
}

// 008714A0  FUN_008714a0  size=392  [callgraph]
void __thiscall FUN_008714a0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 *local_ec;
  int *local_e8;
  undefined1 auStack_e4 [4];
  uint local_e0 [36];
  undefined4 local_50;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar1 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  local_100 = piVar5[0x10];
  local_fc = piVar5[0x11];
  local_f8 = piVar5[0x12];
  local_f4 = piVar5[0x13];
  iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0xec));
  if (iVar2 != 0) {
    local_100 = *(int *)(iVar2 + 0x40);
    local_fc = *(int *)(iVar2 + 0x44);
    local_f8 = *(int *)(iVar2 + 0x48);
    local_f4 = *(int *)(iVar2 + 0x4c);
  }
  FUN_0118f7b0();
  local_50 = 0;
  iVar2 = FUN_009f8b40();
  local_e0[0] = iVar2 << 0x10 | 3;
  local_e8 = (int *)FUN_00910da0();
  local_ec = (undefined4 *)(*local_e8 + 4);
  uVar3 = (**(code **)(*piVar5 + 0x84))(param_1 + 0x100,1);
  uVar3 = (*(code *)*local_ec)(auStack_e4,local_e0,&local_100,uVar3);
  FUN_00910ab0(uVar3);
  FUN_00916260();
  FUN_008f9610(*(undefined4 *)(param_1 + 0x8c),0x20,1);
  FUN_008f9610(*(undefined4 *)(param_1 + 0x8c),0x40,1);
  *(undefined4 *)(param_1 + 0x90) = 1;
  iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0xec));
  puVar6 = (undefined4 *)(iVar2 + 0x10);
  puVar7 = (undefined4 *)(param_1 + 0xa0);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}

// 00871630  FUN_00871630  size=342  [callgraph]
void __thiscall FUN_00871630(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined *puVar6;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
    puVar6 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar6);
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0xe4));
    if (iVar4 == 0) {
      return;
    }
    FUN_008714a0(param_2);
  }
  iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0xe8));
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  fVar2 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xe0);
  *(float *)(param_1 + 0xe0) = fVar2;
  pfVar5 = (float *)FUN_00a8b8a0(local_20,fVar2);
  *(float *)(param_1 + 0xd0) = *pfVar5 + *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd4) = pfVar5[1] + *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xd8) = pfVar5[2] + *(float *)(param_1 + 0xd8);
  FUN_004066f0();
  FUN_00920c60(param_1 + 0xa0,0,0);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00888D60  ZangekiDatsuShortStatePl1400::vf08  size=1023  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 *local_24;
  undefined4 uStack_14;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar4 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_00e25500(0);
  *(undefined4 *)(uVar4 + 0x2f4) = 1;
  DAT_01dc08c0 = 1;
  FUN_00e5e050("core_se_btl_char_datsu_out",0);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(uVar5 + 0x341c);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00b7ab80(0,0x3f800000);
  *(undefined4 *)(uVar5 + 0x341c) = 0x3f800000;
  FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
  FUN_00877430(param_2);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c960(uVar4 + 0x338);
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar9 = &DAT_01be9ca8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9ca8);
      iVar1 = FUN_00dd6d80(puVar9);
      *(uint *)(param_1 + 0x4c) = -(uint)(iVar1 != 0) & (uint)piVar2;
      FUN_00ac6f30();
    }
  }
  FUN_00db3e80(0x42a00000,0,&DAT_01bea1d0);
  if (param_2 == (undefined4 *)0x0) {
    local_24 = param_2;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar9);
    local_24 = (undefined4 *)(-(uint)(iVar1 != 0) & (uint)param_2);
  }
  if (local_24[0x131] != 4) {
    FUN_00869630(param_2);
    local_24[0x131] = 4;
    FUN_00e5e1b0("bgm_Datsu_Enter");
  }
  FUN_00877ad0(param_2);
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00a7c940(*(int *)(param_1 + 0x4c) + 0x968);
  }
  FUN_008e5c50(6);
  FUN_00a83990();
  FUN_00a83990();
  FUN_00a83990();
  uVar10 = 1;
  uVar8 = 0x3e99999a;
  uVar7 = 0x3dcccccd;
  uVar6 = 0x3e99999a;
  uVar3 = FUN_00a81330(0x3e99999a,0x3dcccccd,0x3e99999a,1);
  FUN_00b80920(uVar3,uVar6,uVar7,uVar8,uVar10);
  *(undefined4 *)(uVar5 + 0x3e70) = *(undefined4 *)(uVar5 + 0x40);
  *(undefined4 *)(uVar5 + 0x3e74) = *(undefined4 *)(uVar5 + 0x44);
  *(undefined4 *)(uVar5 + 0x3e78) = *(undefined4 *)(uVar5 + 0x48);
  *(undefined4 *)(uVar5 + 0x3e7c) = *(undefined4 *)(uVar5 + 0x4c);
  *(undefined4 *)(uVar5 + 0x3e60) = 0;
  *(undefined4 *)(uVar5 + 0x3e64) = 0;
  *(undefined4 *)(uVar5 + 0x3e68) = 0;
  *(undefined4 *)(uVar5 + 0x3e6c) = 0x3f800000;
  DAT_01bea060 = DAT_01bea060 | 0x400;
  DAT_018b56b4 = 1;
  *(undefined4 *)(uVar4 + 0x540) = 0;
  *(undefined4 *)(uVar4 + 0x544) = 0;
  *(undefined4 *)(uVar4 + 0x548) = 0;
  *(undefined4 *)(uVar4 + 0x54c) = 0x3f800000;
  *(undefined4 *)(uVar4 + 0xf4) = 0x100000;
  *(undefined4 *)(uVar4 + 0x104) = 0;
  *(undefined4 *)(uVar4 + 0xf8) = 0;
  *(undefined4 *)(uVar4 + 0x108) = 0;
  *(undefined4 *)(uVar4 + 0x10c) = 0x40400000;
  *(undefined4 *)(uVar5 + 0x3df4) = 0x100000;
  *(undefined4 *)(uVar5 + 0x3df8) = 0;
  *(undefined2 *)(uVar5 + 0x10a8) = 0xffff;
  *(undefined4 *)(uVar4 + 0x3ec) = 0x100000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xec) = 0x16;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x42700000;
  *(undefined4 *)(param_1 + 0xe8) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x100) = 0x40000000;
  *(undefined4 *)(param_1 + 0x104) = 0x40000000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10c) = uStack_14;
  *(undefined4 *)(uVar4 + 0x694) = 0;
  return 1;
}

// 00889160  ZangekiDatsuShortStatePl1400::vf14  size=315  [class]
void ZangekiDatsuShortStatePl1400::vf14(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float fStack_14;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar5 + 0x5e0) != (int *)0x0) {
    puVar7 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar5 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar7);
  }
  FUN_00871630(param_1);
  iVar6 = *(int *)(uVar5 + 0x6a8);
  uVar4 = 0;
  if (iVar6 != iVar6 + *(int *)(uVar5 + 0x6b0) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar7 = &DAT_01be9ca8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9ca8);
        iVar2 = FUN_00dd6d80(puVar7);
        if ((iVar2 != 0) && (iVar2 = FUN_00a943e0(uVar4 + 0x6f), iVar2 != 0)) {
          fVar1 = (float)uVar4 * 0.1;
          *(float *)(iVar2 + 0x30) = fVar1 * 0.0;
          *(float *)(iVar2 + 0x34) = fVar1 * 0.0;
          *(float *)(iVar2 + 0x38) = fVar1 * -1.0;
          *(float *)(iVar2 + 0x3c) = fStack_14 * fVar1;
        }
      }
      iVar6 = iVar6 + 4;
      uVar4 = (uint)(byte)((char)uVar4 + 1);
    } while (iVar6 != *(int *)(uVar5 + 0x6a8) + *(int *)(uVar5 + 0x6b0) * 4);
  }
  StateMachineNode::vf14(param_1);
  return;
}

// 0089D880  ZangekiDatsuShortStatePl1400::qteSafeCheck  size=2012  [class]
void __thiscall ZangekiDatsuShortStatePl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  undefined *puVar9;
  undefined4 uStack_1cc;
  int local_1c8;
  int local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
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
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar6 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar9);
    piVar7 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar7);
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    FUN_00d82510(1,100);
    StateMachineNode::qteSafeCheck(param_2);
    return;
  }
  iVar2 = FUN_00a94e10(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40));
  if (iVar2 != 0) {
    iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x34));
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    local_1c4 = FUN_00a81330();
    if ((local_1c4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      uVar3 = *(undefined4 *)(iVar4 + 0x980);
      FUN_00a7c800(uVar3);
      iVar4 = FUN_00a12210(uVar3);
      local_190 = *(float *)(iVar4 + 0x40);
      local_188 = *(float *)(iVar4 + 0x48);
      FUN_004fc8e0(&local_1a0,piVar7,0xffffffff);
      FUN_004fc8e0(&local_1c0,piVar7,0xf00);
      fVar1 = (float)iVar2 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
      local_168 = ((local_188 - (local_1b8 - local_198)) - local_198) * fVar1;
      local_1c0 = ((local_190 - (local_1c0 - local_1a0)) - local_1a0) * fVar1 + local_1a0;
      local_1bc = ((*(float *)(param_1 + 100) - 0.0) - local_19c) * fVar1 + local_19c;
      local_1b8 = local_168 + local_198;
      local_1b4 = fVar1 * ((local_1b4 - (local_164[0] - local_194)) - local_194) + local_194;
      (**(code **)(*piVar7 + 0x6c))(&local_1c0);
      puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x84))();
      uStack_184 = *puVar5;
      uStack_17c = puVar5[2];
      uStack_178 = puVar5[3];
      fVar8 = (float10)fpatan((float10)local_194 - (float10)local_1a4,
                              (float10)fStack_18c - (float10)local_19c);
      fStack_180 = (float)(((float10)uStack_1cc /
                           ((float10)*(float *)(param_1 + 0x40) -
                           (float10)*(float *)(param_1 + 0x3c))) *
                           (fVar8 - (float10)(float)puVar5[1]) + (float10)(float)puVar5[1]);
      (**(code **)(*piVar7 + 0x88))(&uStack_184);
    }
  }
  iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(uVar6 + 0x33c));
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_00ae4660(*(int *)(uVar6 + 0x6b0) + 0x6f,piVar7);
    uVar3 = FUN_00a7c7f0();
    FUN_00878130(&local_1c4,uVar3);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00d82510(1,100);
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar2 = FUN_00a8c760(0x16);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_00ae24f0();
      }
      if ((*(int *)(param_1 + 0x80) == 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
        if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(*(int *)(param_1 + 0x4c) + 0x988) != 0)) {
          if (0 < *(int *)(uVar6 + 0x6b0)) {
            local_1c8 = *(int *)(uVar6 + 0x6a8);
            uStack_1cc._3_1_ = 1;
            if (local_1c8 != local_1c8 + *(int *)(uVar6 + 0x6b0) * 4) {
              do {
                iVar2 = FUN_00a81330();
                if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
                   (local_1c4 = FUN_00860b80(iVar2), local_1c4 != 0)) {
                  FUN_0093bdd0(piVar7[0x13c],*(undefined4 *)(local_1c4 + 0x87c),
                               *(undefined4 *)(local_1c4 + 0x884));
                  FUN_00ace4a0(uStack_1cc._3_1_ + 0x6f,piVar7);
                }
                uStack_1cc._3_1_ = uStack_1cc._3_1_ + 1;
                local_1c8 = local_1c8 + 4;
              } while (local_1c8 != *(int *)(uVar6 + 0x6a8) + *(int *)(uVar6 + 0x6b0) * 4);
            }
            *(undefined4 *)(uVar6 + 0x6b0) = 0;
          }
          FUN_0093bdd0(piVar7[0x13c],*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x87c),
                       *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x884));
          FUN_00ace4a0(0x6f,piVar7);
        }
        FUN_00b7aa80();
        piVar7[0xd07] = 0x3f800000;
        FUN_00b85350(0x43340000,0x3f800000,0x3f800000,0,0,0x3dcccccd);
        FUN_00877430(param_2);
        FUN_008696c0(param_2);
        FUN_00b90990();
        *(undefined4 *)(param_1 + 0x80) = 1;
        Pl0000::qteZangekiSafeCheckForward();
        FUN_00b89850();
      }
    }
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(1,100);
    *(undefined4 *)(uVar6 + 0x370) = 0;
  }
  (**(code **)(*piVar7 + 0x220))(0x41200000);
  iVar2 = FUN_00a8c760(0x20);
  if (iVar2 == 0) {
LAB_0089de37:
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_0089dffb;
  }
  else if (*(int *)(param_1 + 0x84) == 0) {
    iVar2 = piVar7[0x13c];
    uVar3 = FUN_00a81330(0);
    iVar4 = (**(code **)(*piVar7 + 0x84))(0x40c90fdb,0x40e00000,uVar3);
    iVar2 = FUN_0088faa0(param_2,iVar2,*(undefined4 *)(iVar4 + 4));
    if (0 < *(int *)(iVar2 + 0xc)) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      piVar7[0x1029] = piVar7[0x102a];
      piVar7[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
      FUN_00877430(param_2);
      *(undefined4 *)(uVar6 + 0x694) = 1;
    }
    goto LAB_0089de37;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    if ((float)piVar7[0x1029] <= 0.0) {
      piVar7[0x1029] = -0x40800000;
      piVar7[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
      FUN_00877430(param_2);
      DAT_01dc08bc = 0;
      *(undefined4 *)(param_1 + 0x88) = 1;
      *(undefined4 *)(uVar6 + 0x694) = 0;
    }
    else {
      FUN_00b7ab30(0x40a00000);
    }
    if ((float)piVar7[0xd09] <= (float)piVar7[0x1028]) {
      fVar1 = (float)piVar7[0x1029] - 1.0;
      piVar7[0x1029] = (int)fVar1;
      if ((fVar1 < (float)piVar7[0x102a] - (float)piVar7[0x102b]) &&
         ((float)piVar7[0x102a] - (float)piVar7[0x102c] < fVar1)) {
        uVar3 = FUN_00a81330();
        iVar2 = FUN_0089c390(param_2,param_1,100,0,uVar3);
        if (iVar2 != 0) {
          FUN_004039a0(0x99,piVar7,0);
          FUN_00e020f0(piVar7[0x13c]);
          FUN_00a8c8b0(0x11400,local_164);
          DAT_018b56b4 = 1;
          piVar7[0x1029] = -0x40800000;
          piVar7[0xd07] = 0x3f800000;
          FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
          FUN_00877430(param_2);
          *(int *)(uVar6 + 0x370) = *(int *)(uVar6 + 0x370) + 1;
          *(undefined4 *)(uVar6 + 0x694) = 0;
        }
      }
    }
  }
LAB_0089dffb:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_008774a0(param_2);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    (**(code **)(*piVar7 + 0x1d4))(0);
    iVar2 = FUN_0086f370();
    if (iVar2 != 0x100007) {
      *(int *)(uVar6 + 0x3ec) = iVar2;
      *(undefined4 *)(uVar6 + 0x2f4) = 0;
    }
  }
  StateMachineNode::qteSafeCheck(param_2);
  return;
}

