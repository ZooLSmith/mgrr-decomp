// src/effect/et000a/Et000a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005CACF0..00AB8B00, 10 functions

#include "types.h"

// 005CACF0  Et000a::vf40  size=130  [class]
undefined4 __fastcall Et000a::vf40(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      *(undefined4 *)(param_1 + 0x8e4) = 3;
      *(undefined4 *)(param_1 + 0x900) = 1;
      *(undefined4 *)(param_1 + 0x8f0) = 0;
      *(undefined4 *)(param_1 + 0x8f4) = 0;
      *(undefined4 *)(param_1 + 0x8f8) = 0;
      *(undefined4 *)(param_1 + 0x8fc) = 0x3f800000;
      return 1;
    }
  }
  return 0;
}

// 005CAD80  Et000a::vf44  size=16  [class]
void Et000a::vf44(void)

{
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 005CAD90  Et000a::vf48  size=5  [class]
void __fastcall Et000a::vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 005CADA0  Et000a::vf50  size=5  [class]
void __fastcall Et000a::vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 005CADD0  FUN_005cadd0  size=32  [between]
void FUN_005cadd0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005CADF0  FUN_005cadf0  size=102  [between]
void __thiscall FUN_005cadf0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x900) != param_2) {
    if (*(int *)(param_1 + 0x900) == 0) {
      FUN_00a8ca50(0x101,0,0);
    }
    if (*(int *)(param_1 + 0x900) == 1) {
      FUN_00a8ca50(0x103,0,0);
    }
    *(int *)(param_1 + 0x900) = param_2;
    *(undefined4 *)(param_1 + 0x618) = 1;
  }
  return;
}

// 005CAED0  Et000a::vf4C  size=842  [class]
void __fastcall Et000a::vf4C(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 auStack_238 [4];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined1 auStack_1ac [8];
  undefined1 auStack_1a4 [68];
  undefined1 local_160 [348];
  
  Behavior::vf4C();
  iVar5 = 0;
  if (0 < param_1[0x239]) {
    param_1[0x239] = param_1[0x239] + -1;
  }
  switch(param_1[0x186]) {
  case 0:
    if (param_1[0x238] != 0) {
      param_1[0x186] = 1;
      return;
    }
    break;
  case 1:
    if (param_1[0x240] == 0) {
      FUN_004039a0(0x101,param_1,0);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a8c930(0,local_160);
    }
    else if (param_1[0x240] == 1) {
      FUN_004039a0(0x103,param_1,0);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a8c930(0,local_160);
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 2:
    if (param_1[0x238] != 0) {
      piVar2 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar2 + 0x28))(0);
      iVar4 = 0;
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        iVar5 = FUN_00a12210(0);
      }
      if ((iVar4 != 0) && (iVar5 != 0)) {
        uStack_234 = *(undefined4 *)(iVar5 + 0x40);
        uStack_230 = *(undefined4 *)(iVar5 + 0x44);
        uStack_22c = *(undefined4 *)(iVar5 + 0x48);
        uStack_228 = *(undefined4 *)(iVar5 + 0x4c);
        iVar5 = FUN_00a12210(0xffffffff);
        fStack_214 = *(float *)(iVar5 + 0x40);
        uStack_20c = *(undefined4 *)(iVar5 + 0x48);
        fStack_208 = *(float *)(iVar5 + 0x4c);
        fStack_210 = (float)uStack_230;
        uStack_224 = 0;
        uStack_220 = 0x3f800000;
        uStack_21c = 0;
        D3DXMatrixRotationZ(auStack_1a4,param_1[0x236]);
        D3DXVec3TransformNormal(&uStack_22c,&uStack_22c,auStack_1ac);
        FUN_00db6410(&fStack_1f8,&stack0xfffffdb8,&uStack_228,auStack_238);
        fStack_214 = SQRT(fStack_1f0 * fStack_1f0 +
                          fStack_1f8 * fStack_1f8 + fStack_1f4 * fStack_1f4);
        fStack_210 = SQRT(fStack_1e0 * fStack_1e0 +
                          fStack_1e4 * fStack_1e4 + fStack_1e8 * fStack_1e8);
        fVar1 = SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8 + fStack_1d4 * fStack_1d4);
        fVar6 = (float10)FUN_00ddbaa0(-(fStack_1f0 / fVar1));
        fVar7 = (float10)fpatan((float10)(fStack_1e0 / fVar1),(float10)(fStack_1d0 / fVar1));
        fStack_208 = (float)fVar7;
        fStack_204 = (float)fVar6;
        fVar6 = (float10)fpatan((float10)fStack_1f4 / (float10)fStack_210,
                                (float10)fStack_1f8 / (float10)fStack_214);
        fStack_200 = (float)fVar6;
        (**(code **)(*param_1 + 0x7c))(&stack0xfffffdb8,&fStack_208);
      }
    }
    if ((param_1[0x238] == 0) || (param_1[0x239] == 0)) {
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 3:
    if (param_1[0x240] == 0) {
      FUN_00a8ca50(0x101,0,0);
    }
    if (param_1[0x240] == 1) {
      FUN_00a8ca50(0x103,0,0);
      param_1[0x238] = 0;
      param_1[0x186] = 0;
      return;
    }
    param_1[0x238] = 0;
    param_1[0x186] = 0;
  }
  return;
}

// 00AA6CD0  Et000a::Et000a  size=29  [class]
undefined4 * __fastcall Et000a::Et000a(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6CF0  Et000a::vf04  size=6  [class]
undefined * Et000a::vf04(void)

{
  return &DAT_01b35280;
}

// 00AB8B00  Et000a::vf00  size=105  [class]
undefined4 * __thiscall Et000a::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

