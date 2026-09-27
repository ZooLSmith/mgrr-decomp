// src/unsorted/unit_00512630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00512630..00512630, 1 functions

#include "types.h"

// 00512630  FUN_00512630  size=1265  [run]
void __fastcall FUN_00512630(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_130 [140];
  int local_a4;
  
  iVar2 = FUN_00a81330();
  iVar6 = 0;
  local_174 = iVar2;
  if (iVar2 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar7 = (float10)-1.0;
    }
    else {
      fVar7 = (float10)FUN_00e36a50(0);
    }
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar8 = (float10)-1.0;
    }
    else {
      fVar8 = (float10)FUN_00e36970(0);
    }
    param_1[0x249] = (int)(float)((float10)(float)fVar7 - fVar8);
    param_1[0x248] = (int)(float)(((float10)(float)fVar7 - fVar8) * (float10)60.0);
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar7 = (float10)-1.0;
    }
    else {
      fVar7 = (float10)FUN_00e36a50(0);
    }
    param_1[0x24a] = (int)(float)fVar7;
    if (iVar6 != 0) {
      param_1[600] = *(int *)(iVar6 + 0x40);
      param_1[0x259] = *(int *)(iVar6 + 0x44);
      param_1[0x25a] = *(int *)(iVar6 + 0x48);
      param_1[0x25b] = *(int *)(iVar6 + 0x4c);
    }
    FUN_00b7ab30((float)param_1[0x248] * 20.0);
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar7 = (float10)-1.0;
    }
    else {
      fVar7 = (float10)FUN_00e36970(0);
    }
    param_1[0x24f] = (int)(float)fVar7;
    param_1[599] = *(int *)(iVar6 + 0x83c);
    FUN_00b89c20(0x101,1,4,local_174,(float)param_1[0x248] * 20.0,0x41f00000,0x41f00000,0x41200000);
    DAT_01dc08d8 = 1;
    return;
  case 1:
    FUN_008e6d00();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    FUN_00aa4080(0x4fe,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    if (param_1[0x252] == -1) {
      pfVar3 = (float *)FUN_00a8b8a0(local_130,0x40a00000);
      local_190 = *pfVar3 + (float)param_1[0x10];
      local_18c = pfVar3[1] + (float)param_1[0x11];
      local_188 = pfVar3[2] + (float)param_1[0x12];
      local_184 = pfVar3[3] + (float)param_1[0x13];
      local_14c = local_18c - 30.0;
      local_150 = local_190;
      local_148 = local_188;
      local_144 = local_184;
      FUN_0090dc50(&local_170,0,0,&local_190,&local_150,0x1e,"em0190");
    }
    else {
      FUN_00957fd0(&local_170,param_1[0x252],1);
    }
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_160 = *puVar4;
    uStack_158 = puVar4[2];
    uStack_154 = puVar4[3];
    uStack_15c = uStack_164;
    (**(code **)(*param_1 + 0x7c))(&local_170,&uStack_160);
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
  case 3:
    if (((param_1[0x187] == 2) && (iVar2 == 0)) && (iVar6 = FUN_00a8c760(0xb), iVar6 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      iVar6 = FUN_00a12210(0xf00);
      uVar5 = FUN_00e01ca0();
      FUN_00e01490(0x20190,0x10,iVar6 + 0x10,uVar5);
      local_190 = *(float *)(iVar6 + 0x40);
      local_18c = *(float *)(iVar6 + 0x44);
      local_188 = *(float *)(iVar6 + 0x48);
      local_184 = *(float *)(iVar6 + 0x4c);
      local_a4 = iVar2;
      FUN_00e5e080("et0020_se_dmg_explosion",&local_190,0,0xffffffff,0);
      FUN_00940450(param_1[599]);
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00dc1270(0x41700000,0);
      local_140 = 0;
      local_13c = 0;
      local_138 = 0;
      FUN_008e0c00(&local_140);
      FUN_00ba6810(1,0);
      DAT_01bea090 = DAT_01bea090 & 0xfffffffe;
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      pcVar1 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 0;
      (*pcVar1)(0);
      return;
    }
    break;
  case 4:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00dc1270(0x41a00000,0);
      FUN_00ba6810(1,0);
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      FUN_00a8caf0(0xb,0,0,0);
      DAT_01bea090 = DAT_01bea090 & 0xfffffffe;
    }
  }
  return;
}

