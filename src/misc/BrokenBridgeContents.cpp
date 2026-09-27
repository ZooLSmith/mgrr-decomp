// src/misc/BrokenBridgeContents.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC350..008DD1F0, 6 functions

#include "mgrr.h"
#include "BrokenBridgeContents.h"

// 008DC350  BrokenBridgeContents::vf10  size=82  [class]
void BrokenBridgeContents::vf10(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_00a00bd0(0x40002,0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  FUN_00d89e60(0x22);
  DAT_01bea090 = DAT_01bea090 & 0xff94ffff;
  piVar2 = (int *)FUN_00c1bd10();
                    /* WARNING: Could not recover jumptable at 0x008dc3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x10))();
  return;
}

// 008DC3B0  BrokenBridgeContents::BrokenBridgeContents  size=53  [class]
undefined4 * __thiscall
BrokenBridgeContents::BrokenBridgeContents
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  *param_1 = vftable;
  param_1[5] = 0;
  FUN_00a7c930();
  return param_1;
}

// 008DC3F0  BrokenBridgeContents::vf00  size=6  [class]
undefined * BrokenBridgeContents::vf00(void)

{
  return &DAT_01b35d68;
}

// 008DCB30  BrokenBridgeContents::vf0C  size=733  [class]
void __fastcall BrokenBridgeContents::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_14;
  int iStack_c;
  int iStack_8;
  
  uStack_14 = 0x8dcb3b;
  piVar1 = (int *)FUN_00c13920();
  uStack_14 = 0;
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x4e4) != 0)) {
    return;
  }
  iVar2 = FUN_00a00f80(0x40002,0);
  if ((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 == 0)) {
    uVar3 = FUN_00a82090("loverBand",0x40002,0);
    FUN_00a7c970(uVar3);
  }
  piVar1 = (int *)FUN_00c1bd10();
  iVar2 = (**(code **)(*piVar1 + 0x1c))();
  if (-1 < iVar2) {
    iVar2 = FUN_00c19c90(4,0,0x20190);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x14) == 0)) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(0);
      if (iVar2 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0xe8;
        FUN_00a7c8a0(0xe8,0,0,0);
        FUN_00a8caf0(uVar3,uVar4,uVar5,uVar6);
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    iVar2 = FUN_00a7f600(0xf0036);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      (**(code **)(*piVar1 + 0x28))(0);
      piVar1 = (int *)FUN_00c1bd10();
      iVar2 = FUN_00a7c8a0();
      (**(code **)(*piVar1 + 8))(&uStack_14,iVar2 + 0x40);
      if ((iStack_c != 0) && (((unaff_EDI != 0 || (iStack_8 != 0)) && (iStack_c == 2)))) {
        FUN_00a7c8a0();
        iVar2 = FUN_00a8cac0();
        if (iVar2 < 10) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 10;
          uVar3 = 0xe8;
          FUN_00a7c8a0(0xe8,10,0,0);
          FUN_00a8caf0(uVar3,uVar4,uVar5,uVar6);
          iVar2 = FUN_00a7f600(0xf0035);
          if (iVar2 != 0) {
            uVar3 = FUN_00a7c8a0();
            piVar1 = (int *)FUN_0040ea80(uVar3);
            (**(code **)(*piVar1 + 0x304))(0,"front");
            (**(code **)(*piVar1 + 0x304))(0,&DAT_0164ac48);
          }
        }
      }
    }
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0x28))(0);
    uVar3 = 0xd8;
    FUN_00a7c8a0(0xd8);
    iVar2 = FUN_00a9f760(uVar3);
    if (iVar2 == 0) {
      uVar3 = 0xdb;
      FUN_00a7c8a0(0xdb);
      iVar2 = FUN_00a9f760(uVar3);
      if (iVar2 == 0) {
        uVar3 = 0xdc;
        FUN_00a7c8a0(0xdc);
        iVar2 = FUN_00a9f760(uVar3);
        if (((iVar2 == 0) && (iVar2 = FUN_00a7c8b0(), *(float *)(iVar2 + 4) <= -4.0)) &&
           (DAT_01bea160 == 0)) {
          FUN_00a7f600(0x40001);
          uVar3 = FUN_00a7c8a0();
          FUN_008dca60(uVar3);
          FUN_00ac9fe0();
          FUN_00db3e80(0,0,&DAT_01bea1d0);
          piVar1 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar1 + 0xd4))(0);
          FUN_00d664e0(1);
          piVar1 = (int *)FUN_00c1bd10();
          (**(code **)(*piVar1 + 0x10))();
        }
      }
    }
  }
  if ((DAT_01bea090 & 0x20000) != 0) {
    FUN_00cbc8f0(0x2000,1);
  }
  if ((DAT_01bea090 & 0x10000) != 0) {
    FUN_00cbc8f0(2,1);
  }
  return;
}

// 008DCE10  BrokenBridgeContents::vf08  size=990  [class]
undefined4 BrokenBridgeContents::vf08(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  undefined4 uStack_114;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_c4 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_94;
  undefined4 uStack_64;
  
  uStack_114 = 1;
  local_118 = (undefined4 *)0x4;
  puStack_11c = (undefined1 *)0x109;
  uStack_120 = 0x8dce2d;
  EffectAreaScrSystem::SetEffectAreaEnable();
  uStack_114 = 10;
  local_118 = (undefined4 *)0x0;
  puStack_11c = (undefined1 *)0x8dce3d;
  FUN_00dffcd0();
  DAT_01bea090 = DAT_01bea090 | 0x680000;
  puStack_11c = (undefined1 *)0x24;
  uStack_120 = 0x8dce4e;
  FUN_00d89e60();
  piVar5 = (int *)0x0;
  uStack_114 = 0;
  local_118 = (undefined4 *)0x40002;
  puStack_11c = (undefined1 *)0x8dce63;
  FUN_00a00a60();
  uStack_114 = 0x8dce68;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_114 = 0;
  local_118 = (undefined4 *)0x8dce72;
  (**(code **)(*piVar1 + 0x24))();
  local_118 = (undefined4 *)0xf0033;
  puStack_11c = (undefined1 *)0x8dce81;
  uVar2 = FUN_00a7f600();
  local_118 = (undefined4 *)0xf0034;
  puStack_11c = (undefined1 *)0x8dce92;
  uVar3 = FUN_00a7f600();
  local_118 = (undefined4 *)0x8dce9b;
  iVar4 = FUN_00a7c8a0();
  *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
  local_118 = (undefined4 *)0x8dcea9;
  iVar4 = FUN_00a7c8a0();
  *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
  puStack_11c = (undefined1 *)0x8dceba;
  local_118 = (undefined4 *)uVar2;
  FUN_00a7f290();
  uStack_e4 = 0;
  uStack_f0 = 0x19;
  uStack_ec = 0;
  uStack_e0 = 0x40900000;
  uStack_94 = 0;
  uStack_dc = 0xc1200000;
  uStack_d8 = uStack_f8;
  local_118 = (undefined4 *)0x8dcef4;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_104 = 0x41100000;
  local_118 = &uStack_104;
  uStack_100 = 0x40800000;
  puStack_11c = auStack_f4;
  uStack_fc = 0x41b00000;
  uStack_120 = 0;
  uStack_124 = 0;
  puStack_128 = (undefined4 *)0x8dcf27;
  uVar2 = (**(code **)(*piVar1 + 0x34))();
  puStack_128 = (undefined4 *)0x8dcf2e;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_114 = 0x41100000;
  puStack_128 = &uStack_114;
  puStack_12c = &uStack_104;
  uStack_134 = 0;
  uStack_138 = 0x8dcf61;
  uStack_130 = uVar2;
  puStack_128 = (undefined4 *)(**(code **)(*piVar1 + 0x4c))();
  uStack_138 = 0x8dcf6a;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_138 = 1;
  uStack_13c = 4;
  uStack_144 = 0;
  uStack_148 = 0x8dcf79;
  uStack_140 = uVar2;
  (**(code **)(*piVar1 + 100))();
  uStack_148 = 0x8dcf7e;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_148 = 1;
  uStack_14c = uStack_138;
  uStack_154 = 0;
  puStack_158 = (undefined1 *)0x8dcf93;
  uStack_150 = uVar2;
  (**(code **)(*piVar1 + 0x84))();
  uStack_15c = 0x8dcfa0;
  puStack_158 = (undefined1 *)uVar3;
  FUN_00a7f290();
  uStack_b4 = 0;
  uStack_c0 = 4;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_ac = 0;
  uStack_64 = 0;
  uStack_a8 = uStack_138;
  puStack_158 = (undefined1 *)0x8dcfe0;
  piVar1 = (int *)FUN_00c1bd10();
  puStack_158 = auStack_c4;
  uStack_15c = uStack_148;
  uStack_164 = 0;
  uStack_160 = uVar2;
  (**(code **)(*piVar1 + 0x88))();
  uVar2 = FUN_00a7f600(0xf0036);
  iVar4 = FUN_00a7c8a0();
  *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
  FUN_00a7f290(uVar2);
  uStack_134 = 0;
  uStack_140 = 2;
  uStack_13c = 0;
  uStack_130 = 0x40000000;
  uStack_e4 = 0;
  puStack_12c = (undefined4 *)0x0;
  puStack_128 = (undefined4 *)uStack_148;
  piVar1 = (int *)FUN_00c1bd10();
  uStack_154 = 0x41800000;
  uStack_150 = 0x40400000;
  uStack_14c = 0x41a00000;
  uVar3 = (**(code **)(*piVar1 + 0x34))(0,1,&uStack_144,&uStack_154);
  piVar1 = (int *)FUN_00c1bd10();
  uStack_164 = 0x41800000;
  uStack_160 = 0x40400000;
  uStack_15c = 0x41a00000;
  (**(code **)(*piVar1 + 0x4c))(0,uVar3,&uStack_154,&uStack_164);
  piVar1 = (int *)FUN_00c1bd10();
  uVar8 = 1;
  (**(code **)(*piVar1 + 100))(0,uVar3,4,1);
  piVar1 = (int *)FUN_00c1bd10();
  uVar7 = 2;
  (**(code **)(*piVar1 + 0x84))(0,uVar3,uVar8,2);
  FUN_00a7f290(uVar2);
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_b4 = 0;
  uStack_f8 = uVar8;
  piVar1 = (int *)FUN_00c1bd10();
  (**(code **)(*piVar1 + 0x88))(0,uVar3,uVar7,&uStack_114);
  piVar1 = (int *)FUN_00c1bd10();
  (**(code **)(*piVar1 + 0xc))(0);
  iVar4 = FUN_00a7f600(0xf0035);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar6 = &DAT_01be9c28;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c28);
      iVar4 = FUN_00dd6d80(puVar6);
      piVar5 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar1);
    }
    (**(code **)(*piVar5 + 0x304))(1,"front");
    (**(code **)(*piVar5 + 0x304))(1,&DAT_0164ac48);
  }
  return 1;
}

// 008DD1F0  BrokenBridgeContents::vf04  size=31  [class]
undefined4 * __thiscall BrokenBridgeContents::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = ContentsBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

