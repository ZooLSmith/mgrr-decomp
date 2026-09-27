// src/unsorted/unit_0052C250.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0052C250..0052C810, 4 functions

#include "types.h"

// 0052C250  FUN_0052c250  size=1176  [run]
void __thiscall FUN_0052c250(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar8;
  float fStack_144;
  float local_140 [3];
  int iStack_134;
  uint uStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 auStack_124 [2];
  undefined1 auStack_11c [12];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar5 = 8;
  do {
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
      FUN_00a7c950();
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_c8 = 0.0;
  local_cc = 0.0;
  local_d0 = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_9c = -1;
  local_c4 = 1.0;
  local_d8 = 0x3f800000;
  local_ec = 0x3f800000;
  local_100 = 0x3f800000;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_a0 = 0x3f800000;
  local_140[0] = 0.0;
  local_140[1] = 3.0;
  local_140[2] = 10.0;
  local_110 = iVar5;
  local_10c = iVar5;
  local_108 = iVar5;
  local_104 = iVar5;
  local_98 = iVar5;
  local_94 = iVar5;
  D3DXVec3TransformNormal(local_140,local_140,param_1 + 0x10);
  iVar6 = FUN_00a12210(0x50e);
  fVar1 = *(float *)(iVar6 + 0x40) + unaff_ESI;
  fVar2 = *(float *)(iVar6 + 0x44) + unaff_EBX;
  fVar3 = *(float *)(iVar6 + 0x48) + fStack_144;
  local_140[0] = *(float *)(iVar6 + 0x4c) + local_140[0];
  if (param_2 == 1) {
    D3DXVec3TransformNormal(&stack0xfffffeb4,&stack0xfffffeb4,param_1 + 0x10);
    iVar6 = FUN_00a12210(0xf00);
    fVar1 = *(float *)(iVar6 + 0x40) + 0.0;
    fVar2 = *(float *)(iVar6 + 0x44) + 0.0;
    fVar3 = *(float *)(iVar6 + 0x48) + 0.0;
    local_140[0] = *(float *)(iVar6 + 0x4c) + local_140[0];
  }
  local_c0 = *(undefined4 *)(param_1 + 0x90);
  local_bc = *(undefined4 *)(param_1 + 0x94);
  local_b8 = *(undefined4 *)(param_1 + 0x98);
  local_cc = fVar1;
  local_c8 = fVar2;
  local_c4 = fVar3;
  iStack_128 = FUN_00a82090("Katamari",0x401a1,auStack_11c);
  if (iStack_128 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    iVar6 = FUN_00a7c8a0();
    if (iVar6 != 0) {
      FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  uStack_130 = *(uint *)(param_1 + 0x15d4);
  auStack_124[0] = 0xf00d1;
  auStack_124[1] = 0xf00d3;
  if (7 < uStack_130) {
    uStack_130 = 8;
    *(undefined4 *)(param_1 + 0x15d4) = 8;
  }
  if (0 < (int)uStack_130) {
    iStack_134 = param_1 + 0x12f0;
    iStack_12c = 0;
    do {
      uStack_54 = 0;
      piVar8 = &local_9c;
      uStack_58 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      uStack_74 = 0;
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      uStack_88 = 0;
      uStack_28 = 0xffffffff;
      uStack_50 = 0x3f800000;
      uStack_64 = 0x3f800000;
      uStack_78 = 0x3f800000;
      uStack_8c = 0x3f800000;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0x3f800000;
      uStack_30 = 0x3f800000;
      uStack_2c = 0x3f800000;
      local_9c = iVar5;
      local_98 = iVar5;
      local_94 = iVar5;
      iStack_90 = iVar5;
      iStack_24 = iVar5;
      iStack_20 = iVar5;
      sVar4 = FUN_00dde2d0(0,1);
      iVar6 = FUN_00a82090("Container Parts",auStack_124[sVar4],piVar8);
      if (iVar6 != 0) {
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
        iVar6 = FUN_00a7c8a0();
        if (iVar6 != 0) {
          uVar7 = FUN_009f8b40();
          FUN_009f8ae0(uVar7);
          uVar7 = FUN_00a7c7f0();
          FUN_00a7c960(uVar7);
          *(int *)(iVar6 + 0x1434) = iStack_12c;
          *(undefined4 *)(iVar6 + 0x1440) = 0;
          *(undefined4 *)(iVar6 + 0x1444) = 0;
          *(undefined4 *)(iVar6 + 0x1448) = 0;
          *(float *)(iVar6 + 0x144c) = local_140[0];
          *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
        }
      }
      iStack_134 = iStack_134 + 4;
      iStack_12c = iStack_12c + 1;
    } while (iStack_12c < (int)uStack_130);
  }
  return;
}

// 0052C6F0  FUN_0052c6f0  size=193  [run]
void FUN_0052c6f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00dde2d0(0xffffffce,0x32);
        FUN_00dde2d0(0xffffffce,0x32);
        FUN_00dde2d0(0xffffffce,0x32);
        FUN_0051b3c0();
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar2 = 8;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c950();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0052C7C0  FUN_0052c7c0  size=69  [run]
undefined4 FUN_0052c7c0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4e4) == 0)) {
        return 1;
      }
    }
    uVar2 = uVar2 + 1;
    if (7 < uVar2) {
      return 0;
    }
  } while( true );
}

// 0052C810  FUN_0052c810  size=501  [run]
void __fastcall FUN_0052c810(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_b4;
  float local_b0 [5];
  undefined1 auStack_9c [8];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
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
  undefined4 local_14;
  
  local_94 = param_1 + 0x1310;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar1 = 8;
  do {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
      FUN_00a7c950();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_48 = 0.0;
  local_4c = 0.0;
  local_50 = 0;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_90 = 0;
  local_68 = 0;
  local_8c = 0;
  local_70 = 0;
  local_84 = 0;
  local_74 = 0;
  local_88 = 0;
  local_78 = 0;
  local_14 = 0;
  local_7c = 0;
  local_18 = 0;
  local_1c = 0xffffffff;
  local_44 = 1.0;
  local_58 = 0x3f800000;
  local_6c = 0x3f800000;
  local_80 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_b0[0] = 0.0;
  local_b0[1] = 3.0;
  local_b0[2] = 10.0;
  D3DXVec3TransformNormal(local_b0,local_b0,param_1 + 0x10);
  iVar1 = FUN_00a12210(0x50e);
  local_4c = *(float *)(iVar1 + 0x40) + unaff_ESI;
  local_48 = *(float *)(iVar1 + 0x44) + unaff_EBX;
  local_44 = *(float *)(iVar1 + 0x48) + fStack_b4;
  local_b0[0] = *(float *)(iVar1 + 0x4c) + local_b0[0];
  local_40 = *(undefined4 *)(param_1 + 0x90);
  local_3c = *(undefined4 *)(param_1 + 0x94);
  local_38 = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090(&DAT_01640e98,0xf00d5,auStack_9c);
  if (iVar1 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  return;
}

