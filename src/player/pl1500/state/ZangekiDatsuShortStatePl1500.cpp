// src/player/pl1500/state/ZangekiDatsuShortStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4510..008CF660, 10 functions

#include "mgrr.h"
#include "ZangekiDatsuShortStatePl1500.h"

// 008A4510  ZangekiDatsuShortStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A4520  ZangekiDatsuShortStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4530  ZangekiDatsuShortStatePl1500::vf24  size=19  [class]
bool ZangekiDatsuShortStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4550  ZangekiDatsuShortStatePl1500::ZangekiDatsuShortStatePl1500  size=41  [class]
undefined4 * __thiscall
ZangekiDatsuShortStatePl1500::ZangekiDatsuShortStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 008A4580  ZangekiDatsuShortStatePl1500::vf00  size=6  [class]
undefined * ZangekiDatsuShortStatePl1500::vf00(void)

{
  return &DAT_01b35bb0;
}

// 008AA0F0  ZangekiDatsuShortStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuShortStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B36F0  ZangekiDatsuShortStatePl1500::vf0C  size=879  [class]
void __thiscall ZangekiDatsuShortStatePl1500::vf0C(int param_1,undefined4 *param_2)

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
      puVar8 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar6 + 0x5e0);
    if (piVar1 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01b35b90;
      (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
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
      if (fVar3 <= 2.1) {
        fVar3 = fVar3 * 1.25;
      }
      else {
        fVar3 = 3.0;
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
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,3,0,0x162,local_88,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,2,0,0x15f,local_88,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,1,0,0x160,local_88,0x8002000);
    FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x34),0,0,0,0x161,local_88,0x8002000);
    FUN_00a947e0(*(undefined4 *)(param_1 + 0x34),0,fVar3,0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x42200000;
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
  StateMachineNode::vf0C(param_2);
  return;
}

// 008B3A60  ZangekiDatsuShortStatePl1500::vf20  size=433  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1500::vf20(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
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
  *(undefined4 *)(uVar4 + 0x6b8) = 0;
  *(undefined4 *)(uVar4 + 0x6cc) = 0;
  *(undefined4 *)(uVar4 + 0x3ec) = 0x10000;
  return 1;
}

// 008BD040  ZangekiDatsuShortStatePl1500::vf08  size=887  [class]
undefined4 __thiscall ZangekiDatsuShortStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  puVar1 = param_2;
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar10 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar10);
      uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar3 = *(int **)(uVar6 + 0x5e0);
    if (piVar3 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = &DAT_01b35b90;
      (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
      iVar2 = FUN_00dd6d80(puVar10);
      uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
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
    FUN_00b7ab80(0,0x3f800000);
    *(undefined4 *)(uVar5 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
    FUN_008b8630(param_2);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c960(uVar6 + 0x338);
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar10 = &DAT_01be9ca8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9ca8);
        iVar2 = FUN_00dd6d80(puVar10);
        *(uint *)(param_1 + 0x4c) = -(uint)(iVar2 != 0) & (uint)piVar3;
        FUN_00ac6f30();
      }
    }
    FUN_00db3e80(0x42a00000,0,&DAT_01bea1d0);
    if (param_2 != (undefined4 *)0x0) {
      puVar10 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar10);
      param_2 = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
    }
    if (param_2[0x131] != 4) {
      FUN_008aa950(puVar1);
      param_2[0x131] = 4;
      FUN_00e5e1b0("bgm_Datsu_Enter");
    }
    FUN_008b8cc0(puVar1);
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00a7c940(*(int *)(param_1 + 0x4c) + 0x968);
    }
    FUN_008e5c50(6);
    FUN_00a83990();
    FUN_00a83990();
    FUN_00a83990();
    uVar11 = 1;
    uVar9 = 0x3e99999a;
    uVar8 = 0x3dcccccd;
    uVar7 = 0x3e99999a;
    uVar4 = FUN_00a81330(0x3e99999a,0x3dcccccd,0x3e99999a,1);
    FUN_00b80920(uVar4,uVar7,uVar8,uVar9,uVar11);
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
    *(undefined4 *)(uVar6 + 0x540) = 0;
    *(undefined4 *)(uVar6 + 0x544) = 0;
    *(undefined4 *)(uVar6 + 0x548) = 0;
    *(undefined4 *)(uVar6 + 0x54c) = 0x3f800000;
    *(undefined4 *)(uVar6 + 0xf4) = 0x10000;
    *(undefined4 *)(uVar6 + 0xf8) = 0;
    *(undefined4 *)(uVar6 + 0x104) = 0;
    *(undefined4 *)(uVar6 + 0x108) = 0;
    *(undefined4 *)(uVar6 + 0x10c) = 0x40400000;
    *(undefined4 *)(uVar5 + 0x3df8) = 0;
    *(undefined4 *)(uVar5 + 0x3df4) = 0x10000;
    *(undefined2 *)(uVar5 + 0x10a8) = 0xffff;
    FUN_00a94bc0(*(undefined4 *)(uVar6 + 0x5e4),0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = &DAT_01b35bdc;
      (**(code **)*puVar1)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar10);
      uVar5 = -(uint)(iVar2 != 0) & (uint)puVar1;
    }
    (**(code **)(*(int *)(uVar5 + 0x600) + 8))(0x41200000,0,0);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(uVar6 + 0x6b8) = 0;
    return 1;
  }
  return 0;
}

// 008CF660  ZangekiDatsuShortStatePl1500::vf10  size=1838  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiDatsuShortStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iStack_1a0;
  undefined4 *local_19c;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164 [88];
  
  if (param_2 == (undefined4 *)0x0) {
    local_19c = param_2;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    local_19c = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
  }
  piVar5 = (int *)local_19c[0x178];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar5 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    FUN_00d82510(1,100);
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
      local_170 = *(float *)(iVar4 + 0x40);
      local_168 = *(float *)(iVar4 + 0x48);
      FUN_004fc8e0(&local_190,piVar5,0xffffffff);
      FUN_004fc8e0(&local_180,piVar5,0xf00);
      local_17c = *(float *)(param_1 + 100);
      local_16c = (local_17c - 0.0) - local_18c;
      local_164[0] = (local_174 - (local_174 - local_184)) - local_184;
      fVar1 = (float)iVar2 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
      local_178 = ((local_168 - (local_178 - local_188)) - local_188) * fVar1;
      local_190 = ((local_170 - (local_180 - local_190)) - local_190) * fVar1 + local_190;
      local_18c = local_16c * fVar1 + local_18c;
      local_188 = local_178 + local_188;
      local_184 = fVar1 * local_164[0] + local_184;
      (**(code **)(*piVar5 + 0x6c))(&local_190);
    }
  }
  iVar2 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x34),local_19c[0xcf]);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00ae4660(0x6f,piVar5);
    }
    FUN_00a95fb0(0x3f800000);
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
        iVar2 = *(int *)(param_1 + 0x4c);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x988) != 0)) {
          FUN_0093bdd0(piVar5[0x13c],*(undefined4 *)(iVar2 + 0x87c),*(undefined4 *)(iVar2 + 0x884));
          FUN_00ace4a0(0x6f,piVar5);
          FUN_00a7c950();
        }
        FUN_00b7aa80();
        FUN_008aa9e0(param_2);
        FUN_00b90990();
        *(undefined4 *)(param_1 + 0x80) = 1;
        iVar2 = FUN_00b7f550(0xc);
        if (iVar2 != 0) {
          piVar5[0xf98] = 0;
          piVar5[0xf99] = 0;
          piVar5[0xf9a] = 0;
          piVar5[0xf9b] = 0x3f800000;
          piVar5[3999] = 0x3f800000;
          piVar5[0xf9c] = 0;
          piVar5[0xf9d] = 0;
          piVar5[0xf9e] = 0;
        }
        Pl0000::qteZangekiSafeCheckForward();
        FUN_00b89850();
        FUN_008aaa30(param_2);
      }
    }
  }
  iVar2 = FUN_00a94ce0(*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    FUN_00d82510(1,100);
    local_19c[0xdc] = 0;
  }
  (**(code **)(*piVar5 + 0x220))(0x41200000);
  iVar2 = FUN_00a8c760(0x20);
  if (iVar2 == 0) {
LAB_008cfafb:
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_008cfcc4;
  }
  else if (*(int *)(param_1 + 0x84) == 0) {
    iVar2 = piVar5[0x13c];
    uVar3 = FUN_00a81330(0);
    iVar4 = (**(code **)(*piVar5 + 0x84))(0x40c90fdb,0x40a00000,uVar3);
    iVar2 = FUN_008c23e0(param_2,iVar2,*(undefined4 *)(iVar4 + 4));
    if (0 < *(int *)(iVar2 + 0xc)) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      piVar5[0x1029] = piVar5[0x102a];
      piVar5[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3c23d70a,0x3c23d70a,0,0,0x3dcccccd);
      FUN_008b8630(param_2);
      *(undefined4 *)(iStack_1a0 + 0x6b8) = 1;
    }
    goto LAB_008cfafb;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    if ((float)piVar5[0x1029] <= 0.0) {
      piVar5[0x1029] = -0x40800000;
      piVar5[0xd07] = 0x3f800000;
      FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
      FUN_008b8630(param_2);
      DAT_01dc08bc = 0;
      *(undefined4 *)(param_1 + 0x88) = 1;
      *(undefined4 *)(iStack_1a0 + 0x6b8) = 0;
    }
    else {
      FUN_00b7ab30(0x40a00000);
    }
    if ((float)piVar5[0xd09] <= (float)piVar5[0x1028]) {
      fVar1 = (float)piVar5[0x1029] - 1.0;
      piVar5[0x1029] = (int)fVar1;
      if ((fVar1 < (float)piVar5[0x102a] - (float)piVar5[0x102b]) &&
         ((float)piVar5[0x102a] - (float)piVar5[0x102c] < fVar1)) {
        uVar3 = FUN_00a81330();
        iVar2 = FUN_008ce550(param_2,param_1,100,0,uVar3);
        if (iVar2 != 0) {
          FUN_004039a0(0x99,piVar5,0);
          FUN_00e020f0(piVar5[0x13c]);
          FUN_00a8c8b0(0x11500,local_164);
          DAT_018b56b4 = 1;
          piVar5[0x1029] = -0x40800000;
          piVar5[0xd07] = 0x3f800000;
          FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
          FUN_008b8630(param_2);
          if (*(int *)(param_1 + 0x4c) != 0) {
            FUN_00ace4a0(0x6f,piVar5);
          }
          *(int *)(iStack_1a0 + 0x370) = *(int *)(iStack_1a0 + 0x370) + 1;
          *(undefined4 *)(iStack_1a0 + 0x6b8) = 0;
        }
      }
    }
  }
LAB_008cfcc4:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_008b86a0(param_2);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    (**(code **)(*piVar5 + 0x1d4))(0);
    iVar2 = FUN_008c8c50();
    if (iVar2 != 0xe0000) {
      *(int *)(iStack_1a0 + 0x3ec) = iVar2;
      *(undefined4 *)(iStack_1a0 + 0x2f4) = 0;
      FUN_00da8810(0x41200000);
      _DAT_01bea940 = 0x41200000;
      FUN_00dc1270(0x41200000,0);
      FUN_00db3e80(0x41200000,1,&DAT_01bea1d0);
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
  }
  *(undefined4 *)(iStack_1a0 + 0x6cc) = *(undefined4 *)(param_1 + 0x80);
  StateMachineNode::vf10(param_2);
  return;
}

