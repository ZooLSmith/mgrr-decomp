// src/behavior/BehaviorAppBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004EC370..00B7CDF0, 90 functions

#include "types.h"

// 004EC370  BehaviorAppBase::BehaviorAppBase_36  size=29  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_36(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 004EC390  BehaviorAppBase::vf04  size=6  [class]
undefined * BehaviorAppBase::vf04(void)

{
  return &DAT_01be9c24;
}

// 004EC3A0  BehaviorAppBase::vf314  size=11  [class]
void __fastcall BehaviorAppBase::vf314(int param_1)

{
  *(undefined4 *)(param_1 + 0x884) = 0;
  return;
}

// 004EC3B0  BehaviorAppBase::vf318  size=11  [class]
void __fastcall BehaviorAppBase::vf318(int param_1)

{
  *(undefined4 *)(param_1 + 0x884) = 1;
  return;
}

// 004EC3C0  BehaviorAppBase::vf31C  size=1  [class]
void BehaviorAppBase::vf31C(void)

{
  return;
}

// 004EC3D0  BehaviorAppBase::vf324  size=7  [class]
undefined4 __fastcall BehaviorAppBase::vf324(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a0);
}

// 004EC3F0  BehaviorAppBase::vf00  size=30  [class]
undefined4 __thiscall BehaviorAppBase::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004ED790  BehaviorAppBase::BehaviorAppBase_34  size=133  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_34(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorEmBase::vftable;
  param_1[0x286] = 0;
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00de3530();
  FUN_00de3530();
  FUN_00de3530();
  FUN_004ec5c0();
  cEnemyCautionStateManager::cEnemyCautionStateManager_5();
  return param_1;
}

// 00A8E790  BehaviorAppBase::vfFC  size=5  [class]
void __fastcall BehaviorAppBase::vfFC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x764);
  *(undefined4 *)(param_1 + 0x570) = 1;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x114);
  }
  *(undefined4 *)(param_1 + 0x574) = uVar2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)(*(int *)(iVar1 + 0x104) == 0);
  }
  *(uint *)(param_1 + 0x57c) = uVar3;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10c);
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x578) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x578) = 1;
  return;
}

// 00A8E7A0  BehaviorAppBase::vf100  size=5  [class]
void __fastcall BehaviorAppBase::vf100(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xec))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 200))(param_1[0x15d]);
    (**(code **)(*param_1 + 0xd4))(param_1[0x15f]);
    (**(code **)(*param_1 + 0xd0))(param_1[0x15e]);
    (**(code **)(*param_1 + 0xd8))(param_1[0x160]);
  }
  param_1[0x15c] = 0;
  return;
}

// 00A8E7B0  BehaviorAppBase::vfDC  size=20  [class]
undefined4 __fastcall BehaviorAppBase::vfDC(int param_1)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x764) + 0x114);
  }
  return 0;
}

// 00A8E7D0  BehaviorAppBase::vfE0  size=20  [class]
undefined4 __fastcall BehaviorAppBase::vfE0(int param_1)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x764) + 0x10c);
  }
  return 0;
}

// 00A8E7F0  BehaviorAppBase::vfE4  size=27  [class]
bool __fastcall BehaviorAppBase::vfE4(int param_1)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    return *(int *)(*(int *)(param_1 + 0x764) + 0x104) == 0;
  }
  return false;
}

// 00A8E810  BehaviorAppBase::vfE8  size=3  [class]
undefined4 BehaviorAppBase::vfE8(void)

{
  return 0;
}

// 00A8E820  BehaviorAppBase::vfEC  size=6  [class]
undefined4 BehaviorAppBase::vfEC(void)

{
  return 1;
}

// 00A8E830  BehaviorAppBase::vf114  size=21  [class]
void __fastcall BehaviorAppBase::vf114(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a8e843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}

// 00A8E850  BehaviorAppBase::vf1D0  size=3  [class]
void BehaviorAppBase::vf1D0(void)

{
  return;
}

// 00A8E860  BehaviorAppBase::vf300  size=1  [class]
void BehaviorAppBase::vf300(void)

{
  return;
}

// 00A8E870  BehaviorAppBase::vf304  size=1  [class]
void BehaviorAppBase::vf304(void)

{
  return;
}

// 00A8E880  FUN_00a8e880  size=215  [between]
void __thiscall FUN_00a8e880(int param_1,float *param_2)

{
  float fVar1;
  float unaff_EBX;
  float unaff_EDI;
  float10 fVar2;
  float *pfVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  pfVar3 = &local_30;
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(pfVar3,pfVar3,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar2 = (float10)fpatan((float10)(float)pfVar3 -
                          ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar1 + unaff_EBX)),
                          (float10)unaff_EDI -
                          ((float10)*(float *)(param_1 + 0x128) + (float10)local_30));
  *(float *)(param_1 + 0x8f4) = (float)fVar2;
  *(float *)(param_1 + 0x8e0) = *param_2;
  *(float *)(param_1 + 0x8e4) = param_2[1];
  *(float *)(param_1 + 0x8e8) = param_2[2];
  *(float *)(param_1 + 0x8ec) = param_2[3];
  return;
}

// 00A8E960  FUN_00a8e960  size=13  [between]
void __thiscall FUN_00a8e960(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8f4) = param_2;
  return;
}

// 00A8E9B0  FUN_00a8e9b0  size=7  [between]
int __fastcall FUN_00a8e9b0(int param_1)

{
  return param_1 + 0x8f0;
}

// 00A8E9C0  FUN_00a8e9c0  size=223  [between]
float10 __fastcall FUN_00a8e9c0(int param_1)

{
  float fVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float *pfVar4;
  float fStack_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *(float *)(param_1 + 0x8e0);
  local_2c = *(undefined4 *)(param_1 + 0x8e4);
  pfVar4 = &local_30;
  local_28 = *(undefined4 *)(param_1 + 0x8e8);
  local_24 = *(undefined4 *)(param_1 + 0x8ec);
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar3 = (float10)(float)pfVar4 -
          ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar1 + fStack_38));
  fVar2 = (float10)unaff_ESI - ((float10)*(float *)(param_1 + 0x128) + (float10)local_30);
  if ((ABS(fVar3) < (float10)0.001) && (ABS(fVar2) < (float10)0.001)) {
    return (float10)0;
  }
  fVar2 = (float10)fpatan(fVar3,fVar2);
  return fVar2;
}

// 00A8EAA0  FUN_00a8eaa0  size=170  [between]
float10 __thiscall FUN_00a8eaa0(int param_1,float *param_2)

{
  float fVar1;
  float unaff_ESI;
  float10 fVar2;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(&local_30,&local_30);
  fVar1 = *(float *)(param_1 + 0x128);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar2 = (float10)fpatan((float10)(float)(param_1 + 0xf0) -
                          ((float10)*(float *)(param_1 + 0x124) + (float10)(fVar1 + fStack_34)),
                          (float10)unaff_ESI -
                          ((float10)*(float *)(param_1 + 0x128) + (float10)local_30));
  return -fVar2;
}

// 00A8EB50  FUN_00a8eb50  size=221  [between]
float * __thiscall FUN_00a8eb50(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float *pfVar4;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_24 = param_3[3];
  pfVar4 = &local_30;
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar2 = *(float *)(param_1 + 0x120);
  local_30 = unaff_ESI - (*(float *)(param_1 + 0x128) + local_30);
  fVar3 = (float10)FUN_00fdc8b0();
  *param_2 = (float)fVar3;
  fVar3 = (float10)fpatan((float10)((float)pfVar4 - (fVar1 + fStack_38 + fVar2)),(float10)local_30);
  param_2[1] = (float)fVar3;
  fVar3 = (float10)FUN_00fdc4e0();
  param_2[2] = (float)fVar3;
  return param_2;
}

// 00A8EC30  FUN_00a8ec30  size=217  [between]
float10 __thiscall FUN_00a8ec30(int param_1,float *param_2)

{
  float fVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float *pfVar4;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  pfVar4 = &local_30;
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar3 = (float10)(float)pfVar4 -
          ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar1 + fStack_38));
  fVar2 = (float10)unaff_ESI - ((float10)*(float *)(param_1 + 0x128) + (float10)local_30);
  if ((ABS(fVar3) < (float10)0.001) && (ABS(fVar2) < (float10)0.001)) {
    return (float10)0;
  }
  fVar2 = (float10)fpatan(fVar3,fVar2);
  return fVar2;
}

// 00A8ED10  FUN_00a8ed10  size=219  [between]
float10 __thiscall FUN_00a8ed10(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float *pfVar4;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = param_3[3];
  pfVar4 = &local_30;
  D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&local_2c,&local_2c,param_1 + 0xf0);
  fVar3 = (float10)(float)pfVar4 -
          ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar1 + fStack_38));
  fVar2 = (float10)unaff_ESI - ((float10)*(float *)(param_1 + 0x128) + (float10)local_30);
  if ((ABS(fVar3) < (float10)0.001) && (ABS(fVar2) < (float10)0.001)) {
    return (float10)0;
  }
  fVar2 = (float10)fpatan(fVar3,fVar2);
  return fVar2;
}

// 00A8EDF0  FUN_00a8edf0  size=19  [between]
void __thiscall FUN_00a8edf0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x874) = param_2;
  *(undefined4 *)(param_1 + 0x870) = param_2;
  return;
}

// 00A8EE10  FUN_00a8ee10  size=13  [between]
void __thiscall FUN_00a8ee10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x874) = param_2;
  return;
}

// 00A8EE20  FUN_00a8ee20  size=13  [between]
void __thiscall FUN_00a8ee20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x870) = param_2;
  return;
}

// 00A8EE30  BehaviorAppBase::vf30C  size=59  [class]
void __thiscall BehaviorAppBase::vf30C(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x870) - param_2;
  if (*(int *)(param_1 + 0x870) < 1) {
    *(undefined4 *)(param_1 + 0x870) = 0;
  }
  if ((param_3 != 0) && (*(int *)(param_1 + 0x870) < 1)) {
    *(undefined4 *)(param_1 + 0x870) = 1;
  }
  return;
}

// 00A8EE70  BehaviorAppBase::vf310  size=37  [class]
void __thiscall BehaviorAppBase::vf310(int param_1,int param_2)

{
  if (-1 < param_2) {
    *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x870) + param_2;
    if (*(int *)(param_1 + 0x874) < *(int *)(param_1 + 0x870)) {
      *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x874);
    }
  }
  return;
}

// 00A8EEA0  FUN_00a8eea0  size=7  [between]
undefined4 __fastcall FUN_00a8eea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x870);
}

// 00A8EEB0  FUN_00a8eeb0  size=7  [between]
undefined4 __fastcall FUN_00a8eeb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x874);
}

// 00A8EEC0  FUN_00a8eec0  size=7  [between]
void __fastcall FUN_00a8eec0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a8eec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00A8EED0  BehaviorAppBase::vf220  size=13  [class]
void __thiscall BehaviorAppBase::vf220(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8d8) = param_2;
  return;
}

// 00A8EEE0  BehaviorAppBase::vf328  size=34  [class]
void __thiscall BehaviorAppBase::vf328(int param_1,float param_2)

{
  if (0.0 < *(float *)(param_1 + 0x8d8)) {
    *(float *)(param_1 + 0x8d8) = *(float *)(param_1 + 0x8d8) - param_2;
  }
  return;
}

// 00A8EF10  FUN_00a8ef10  size=24  [between]
undefined4 __fastcall FUN_00a8ef10(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x8d8)) {
    return 1;
  }
  return 0;
}

// 00A8EF30  BehaviorAppBase::vf320  size=166  [class]
undefined4 __thiscall BehaviorAppBase::vf320(int param_1,float param_2)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_14 = param_2 * 60.0;
  local_20 = *(float *)(param_1 + 0x890) * local_14;
  local_1c = local_14 * *(float *)(param_1 + 0x894);
  local_18 = *(float *)(param_1 + 0x898) * local_14;
  local_14 = *(float *)(param_1 + 0x89c) * local_14;
  if (0.0 < local_1c) {
    return 0;
  }
  iVar1 = FUN_008e2740();
  if ((iVar1 == 0) &&
     (iVar1 = hkpCdPointCollector::hkpCdPointCollector_11(&local_20,param_2), iVar1 == 0)) {
    return 0;
  }
  FUN_008e2760();
  return 1;
}

// 00A8EFE0  FUN_00a8efe0  size=19  [between]
void __fastcall FUN_00a8efe0(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  return;
}

// 00A8F000  FUN_00a8f000  size=34  [between]
void __fastcall FUN_00a8f000(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  return;
}

// 00A8F030  BehaviorAppBase::vf15C  size=14  [class]
void BehaviorAppBase::vf15C(void)

{
  FUN_00a7c950();
  return;
}

// 00A982F0  BehaviorAppBase::vf30  size=70  [class]
void __fastcall BehaviorAppBase::vf30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x162];
  param_1[0x19d] = 1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x3c) == 0) {
      puVar1 = (undefined4 *)FUN_009f8b60();
      uVar3 = *puVar1;
      iVar2 = param_1[0x162];
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x40);
    }
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00a98334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))();
  return;
}

// 00A98340  BehaviorAppBase::vf40  size=360  [class]
undefined4 __fastcall BehaviorAppBase::vf40(int *param_1)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x304))();
    param_1[0x1ba] = 0x40000000;
    param_1[0x1b1] = 0;
    param_1[0x1b9] = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b7] = iStack_14;
    param_1[0x1bb] = 1;
    param_1[0x274] = 0;
    param_1[0x278] = 0;
    param_1[0x279] = 0;
    param_1[0x27a] = 0;
    param_1[0x27b] = 0;
    param_1[0x27c] = 0;
    param_1[0x21e] = 0;
    param_1[0x21f] = 0x16;
    param_1[0x220] = 0x12;
    if (param_1[0x13c] != 0) {
      FUN_00a7c910();
    }
    FUN_00e08640(3);
    param_1[0x272] = 0;
    param_1[0x271] = 0;
    param_1[0x270] = 0;
    param_1[0x26f] = 0;
    param_1[0x26d] = 0;
    param_1[0x26c] = 0;
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
    param_1[0x268] = 0;
    param_1[0x267] = 0;
    param_1[0x266] = 0;
    param_1[0x265] = 0;
    param_1[0x273] = 0x3f800000;
    param_1[0x26e] = 0x3f800000;
    param_1[0x269] = 0x3f800000;
    param_1[0x264] = 0x3f800000;
    param_1[0x22e] = -0x1010102;
    param_1[0x22f] = -0x1010102;
    param_1[0x230] = -0x1010102;
    param_1[0x231] = -0x1010102;
    param_1[0x232] = -0x1010102;
    param_1[0x233] = -0x1010102;
    param_1[0x234] = -0x1010102;
    param_1[0x235] = -0x1010102;
    return 1;
  }
  return 0;
}

// 00A984B0  BehaviorAppBase::vf308  size=379  [class]
void __thiscall
BehaviorAppBase::vf308(int *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_20 = *puVar1;
  fStack_1c = (float)puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x23d] + param_5);
  fVar3 = (float10)FUN_00ddba30((float)(fVar2 - (float10)fStack_1c));
  param_1[0x27c] = (int)(float)fVar3;
  fVar6 = (float10)0;
  fVar4 = (float10)param_3;
  fVar5 = (float10)1;
  if (fVar6 < fVar4) {
    if ((-fVar4 < fVar3 != (-fVar4 == fVar3)) && (fVar3 < fVar4 != (fVar3 == fVar4))) {
      return;
    }
    fVar3 = (ABS(fVar3) - fVar4) * (float10)(float)0x40747645;
    if (fVar3 < fVar6 == (fVar3 == fVar6)) {
      if (fVar5 <= fVar3) {
        fVar3 = fVar5;
      }
      param_2 = (float)(fVar3 * (float10)param_2);
    }
    else {
      param_2 = (float)(fVar6 * (float10)param_2);
    }
  }
  if ((fVar5 < (float10)param_2 == (fVar5 == (float10)param_2)) ||
     (NAN(param_4) || 3.1415927 < param_4 == (param_4 == 3.1415927))) {
    if (param_1[0x13c] != 0) {
      FUN_00a7c910();
    }
    fVar5 = (float10)FUN_00e049b0();
    if (param_1[0x13c] != 0) {
      FUN_00a7c910();
    }
    fVar6 = (float10)FUN_00e049b0();
    fVar5 = (float10)FUN_00dde210(fStack_1c,(float)fVar2,(float)(fVar6 * (float10)param_2),
                                  (float)fVar5 * param_4);
  }
  else {
    fVar5 = (float10)(float)fVar2;
  }
  fStack_1c = (float)fVar5;
  (**(code **)(*param_1 + 0x88))(&uStack_20);
  return;
}

// 00A98630  BehaviorAppBase::vf200  size=33  [class]
bool __fastcall BehaviorAppBase::vf200(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c7e0();
  if (iVar1 == 0) {
    return false;
  }
  return 0 < *(int *)(param_1 + 0x870);
}

// 00AA0C30  BehaviorAppBase::vfF4  size=94  [class]
void __thiscall
BehaviorAppBase::vfF4(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x5f0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5f4);
  }
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((-(uint)(uVar1 != 0) & uVar1) + 0x2c);
    }
    *param_3 = uVar2;
    iVar3 = FUN_008f7780(iVar3);
    if (iVar3 != 0) {
      *param_4 = *(undefined4 *)(iVar3 + 0x4b4);
      return;
    }
    *param_4 = 0x700000;
  }
  return;
}

// 00AA0C90  BehaviorAppBase::vf48  size=28  [class]
void __fastcall BehaviorAppBase::vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 00AA0CB0  BehaviorAppBase::vf50  size=304  [class]
void __fastcall BehaviorAppBase::vf50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  if (*(int *)(param_1 + 0x764) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar3 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 0x764) + 0x170) = (float)fVar3;
  }
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
      if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        iVar1 = FUN_00e26e90();
        if (iVar1 != 0) {
          FUN_00e36970(0);
        }
      }
      uVar2 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x8b4) = uVar2;
    }
  }
  if (((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) &&
     (*(int *)(param_1 + 0x570) == 0)) {
    return;
  }
  switchD_0080dbae::default();
  return;
}

// 00AA0DE0  BehaviorAppBase::vf19C  size=179  [class]
void __thiscall BehaviorAppBase::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 00AA4AC0  BehaviorAppBase::thunk_vf64  size=5  [class]
void __fastcall BehaviorAppBase::thunk_vf64(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if (((*(int *)(param_1 + 0x4f0) == 0) || (iVar3 = FUN_00a7c890(), iVar3 == 0)) ||
     ((*(byte *)(iVar3 + 0x94) & 1) == 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = 0;
  if ((iVar3 != 0) &&
     (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8) * 0xc)) {
    do {
      uVar1 = *puVar4;
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar10 = (float10)-1.0;
      }
      else {
        fVar10 = (float10)FUN_00e36970(uVar1);
      }
      puVar4[10] = (float)fVar10;
      puVar4[0xb] = 0;
      iVar3 = FUN_00e33270(puVar4 + 2);
      if (iVar3 == -1) {
        if (puVar4[0xb] == 0) {
          puVar4[0xb] = 1;
          goto LAB_00aa37ac;
        }
        puVar4 = (undefined4 *)FUN_00aa2a50(puVar4);
      }
      else {
LAB_00aa37ac:
        puVar4 = puVar4 + 0xc;
      }
    } while (puVar4 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x774) + 8) * 0x30 +
                       *(int *)(*(int *)(param_1 + 0x774) + 4)));
  }
  FUN_00e3e620();
  FUN_00e22e40();
  FUN_00e3f050();
  iVar3 = *(int *)(param_1 + 0x7a0);
  if ((iVar3 != 0) && (iVar5 = *(int *)(iVar3 + 4), iVar5 != iVar5 + *(int *)(iVar3 + 8) * 0x1c)) {
    do {
      if ((*(int *)(iVar5 + 0x10) == 0) ||
         ((iVar3 = FUN_00a94db0(*(int *)(iVar5 + 0x10)), iVar3 == 0 &&
          (iVar3 = FUN_00a9f760(*(undefined4 *)(iVar5 + 0x10)), iVar3 != 0)))) {
        iVar5 = iVar5 + 0x1c;
      }
      else {
        FUN_00a8c9f0(iVar5);
        iVar5 = FUN_00a9be00(iVar5);
      }
    } while (iVar5 != *(int *)(*(int *)(param_1 + 0x7a0) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a0) + 8) * 0x1c);
  }
  iVar3 = *(int *)(param_1 + 0x7a4);
  if ((iVar3 != 0) && (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8))
     ) {
    do {
      uVar1 = *puVar4;
      uVar11 = 0;
      uVar6 = FUN_00a95ca0(0);
      iVar3 = FUN_00d77270(uVar6,uVar11);
      if (iVar3 == 0) {
        puVar9 = puVar4 + 1;
      }
      else {
        FUN_00d7b0f0();
        piVar7 = (int *)FUN_00d773c0();
        (**(code **)(*piVar7 + 0x10))(uVar1);
        iVar3 = *(int *)(param_1 + 0x7a4);
        uVar2 = *(uint *)(iVar3 + 8);
        iVar5 = *(int *)(iVar3 + 4);
        puVar9 = (undefined4 *)(iVar5 + uVar2 * 4);
        if ((((puVar4 != puVar9) && (iVar5 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)puVar4 - iVar5 >> 2) < uVar2)) {
          for (puVar8 = puVar4; puVar8 != puVar9 + -1; puVar8 = puVar8 + 1) {
            *puVar8 = puVar8[1];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar9 = puVar4;
        }
      }
      puVar4 = puVar9;
    } while (puVar9 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                       *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
  }
  FUN_00a96270();
  return;
}

// 00AAB480  BehaviorAppBase::BehaviorAppBase_16  size=35  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_16(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = PlWig::vftable;
  return param_1;
}

// 00AAB520  BehaviorAppBase::BehaviorAppBase_17  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_17(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Pl0013::vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AAB650  BehaviorAppBase::BehaviorAppBase_18  size=271  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_18(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Pl2040::vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x37a] = 0;
  stKogekkoCamParamBase::stKogekkoCamParamBase();
  param_1[0x37c] = stKogekkoCamParamNormal::vftable;
  stKogekkoCamParamBase::stKogekkoCamParamBase();
  param_1[0x390] = stKogekkoCamParamNarrow::vftable;
  FUN_00a8b210();
  param_1[0x3ed] = 0;
  param_1[0x3ee] = 0;
  param_1[0x3ec] = 0;
  cEspControler::cEspControler();
  FUN_00a603a0();
  FUN_004ec5c0();
  cEspControler::cEspControler();
  FUN_00904d60();
  FUN_00904d60();
  FUN_009003e0();
  FUN_00a7c930();
  return param_1;
}

// 00AAB8A0  BehaviorAppBase::BehaviorAppBase_14  size=35  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_14(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorTest::vftable;
  return param_1;
}

// 00AABDC0  BehaviorAppBase::BehaviorAppBase_15  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_15(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = EmAfterImage::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AAC100  BehaviorAppBase::BehaviorAppBase_35  size=35  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_35(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Es0305::vftable;
  return param_1;
}

// 00AAC4F0  BehaviorAppBase::BehaviorAppBase_37  size=57  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_37(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0600Gun::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AAD090  BehaviorAppBase::BehaviorAppBase_32  size=110  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_32(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0090::vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00904d60();
  return param_1;
}

// 00AAD570  BehaviorAppBase::BehaviorAppBase_33  size=103  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_33(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0312::vftable;
  FUN_00a603a0();
  param_1[0x2b1] = param_1 + 0x2b4;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0x10;
  param_1[0x2b0] = lib::StaticArray<Hw::cVec4,16>::vftable;
  param_1[0x2fe] = 0;
  FUN_00a603a0();
  return param_1;
}

// 00AAE2C0  BehaviorAppBase::BehaviorAppBase_30  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_30(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AAE370  BehaviorAppBase::BehaviorAppBase_31  size=52  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_31(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = cRayLeftHand::vftable;
  return param_1;
}

// 00AAE900  BehaviorAppBase::BehaviorAppBase_23  size=67  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_23(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = PowGaObj::vftable;
  cEspControler::cEspControler();
  FUN_00a7c930();
  param_1[0x2be] = 0;
  return param_1;
}

// 00AAEA30  BehaviorAppBase::BehaviorAppBase_24  size=95  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_24(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = ExcelObj::vftable;
  cEspControler::cEspControler();
  iVar1 = 4;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  param_1[0x2c6] = 0;
  return param_1;
}

// 00AAEB10  BehaviorAppBase::BehaviorAppBase_25  size=77  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_25(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = ExcelPartsObj::vftable;
  cEspControler::cEspControler();
  param_1[0x2b4] = 0;
  FUN_00a7c930();
  param_1[0x2c6] = 0;
  return param_1;
}

// 00AAECC0  BehaviorAppBase::BehaviorAppBase_26  size=91  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_26(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = MonQteObj::vftable;
  iVar1 = 7;
  do {
    FUN_004105d0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  param_1[0x4be] = 0;
  return param_1;
}

// 00AAEDA0  BehaviorAppBase::BehaviorAppBase_27  size=110  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_27(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = cRayBattery::vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AAEE90  BehaviorAppBase::BehaviorAppBase_28  size=151  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_28(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = cGeckoBattery::vftable;
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00a7c930();
  *(undefined2 *)(param_1 + 0x2f6) = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0x3f800000;
  FUN_00a7c930();
  param_1[0x2fb] = 0;
  FUN_00a7c950();
  return param_1;
}

// 00AAEFA0  BehaviorAppBase::BehaviorAppBase_29  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_29(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0030Wire::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AAF040  BehaviorAppBase::BehaviorAppBase_20  size=89  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_20(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0060Battery::vftable;
  param_1[0x280] = 0;
  FUN_00a826e0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AAF110  BehaviorAppBase::BehaviorAppBase_21  size=63  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_21(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = cEm0010Magazine::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AAF350  BehaviorAppBase::BehaviorAppBase_22  size=57  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_22(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorCamera::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AAF850  BehaviorAppBase::BehaviorAppBase_19  size=79  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_19(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Et002f::vftable;
  FUN_004ec5c0();
  FUN_00a603a0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  return param_1;
}

// 00AB0680  BehaviorAppBase::BehaviorAppBase_9  size=110  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_9(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em0091::vftable;
  FUN_0049d2c0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_0049cd80();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AB0CA0  BehaviorAppBase::BehaviorAppBase_7  size=35  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_7(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Ba0041::vftable;
  return param_1;
}

// 00AB0F90  BehaviorAppBase::BehaviorAppBase_8  size=117  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_8(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BaContainerParts::vftable;
  iVar1 = 7;
  do {
    FUN_004105d0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x50c] = 0;
  param_1[0x522] = 0;
  return param_1;
}

// 00AB19C0  BehaviorAppBase::BehaviorAppBase_5  size=35  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_5(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = DlcCatBehavior::vftable;
  return param_1;
}

// 00AB1B60  BehaviorAppBase::BehaviorAppBase_6  size=67  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_6(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = KamaitatiObj::vftable;
  cEspControler::cEspControler();
  FUN_00904d60();
  param_1[0x2c4] = 0;
  return param_1;
}

// 00AB2390  BehaviorAppBase::BehaviorAppBase_4  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_4(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Emc030Wire::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB3B60  BehaviorAppBase::BehaviorAppBase  size=110  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = cRayBatteryDLC::vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AB3E50  BehaviorAppBase::BehaviorAppBase_2  size=67  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = PowGaObjDLC::vftable;
  cEspControler::cEspControler();
  FUN_00a7c930();
  param_1[0x2be] = 0;
  return param_1;
}

// 00AB3F20  BehaviorAppBase::BehaviorAppBase_3  size=176  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_3(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = ArmThrowObj::vftable;
  FUN_00a7c930();
  iVar1 = 7;
  do {
    FUN_004105d0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_009003e0();
  param_1[0x52d] = 0;
  iVar1 = 7;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x550] = 0;
  return param_1;
}

// 00AB40F0  BehaviorAppBase::BehaviorAppBase_13  size=63  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_13(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = EmC010Magazine::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB4A10  BehaviorAppBase::BehaviorAppBase_12  size=46  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_12(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em8030Wire::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB5F00  BehaviorAppBase::BehaviorAppBase_11  size=63  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_11(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = Em8010Magazine::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB6BA0  BehaviorAppBase::BehaviorAppBase_10  size=52  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_10(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = cRayArmor::vftable;
  return param_1;
}

// 00AC0E90  BehaviorAppBase::BehaviorAppBase_39  size=52  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_39(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = cRayDamageCutArmor::vftable;
  return param_1;
}

// 00AC0F40  BehaviorAppBase::BehaviorAppBase_40  size=129  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_40(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = Em01a0Parts::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_009003e0();
  FUN_009003e0();
  return param_1;
}

// 00AC1070  BehaviorAppBase::BehaviorAppBase_38  size=88  [class]
undefined4 * __fastcall BehaviorAppBase::BehaviorAppBase_38(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = BehaviorPartsModel::vftable;
  FUN_00a7c930();
  *param_1 = cRayRightHand::vftable;
  puVar1 = param_1 + 0x299;
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}

// 00B7CDF0  BehaviorAppBase::thunk_vf64  size=5  [class]
void __fastcall BehaviorAppBase::thunk_vf64(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if (((*(int *)(param_1 + 0x4f0) == 0) || (iVar3 = FUN_00a7c890(), iVar3 == 0)) ||
     ((*(byte *)(iVar3 + 0x94) & 1) == 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = 0;
  if ((iVar3 != 0) &&
     (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8) * 0xc)) {
    do {
      uVar1 = *puVar4;
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar10 = (float10)-1.0;
      }
      else {
        fVar10 = (float10)FUN_00e36970(uVar1);
      }
      puVar4[10] = (float)fVar10;
      puVar4[0xb] = 0;
      iVar3 = FUN_00e33270(puVar4 + 2);
      if (iVar3 == -1) {
        if (puVar4[0xb] == 0) {
          puVar4[0xb] = 1;
          goto LAB_00aa37ac;
        }
        puVar4 = (undefined4 *)FUN_00aa2a50(puVar4);
      }
      else {
LAB_00aa37ac:
        puVar4 = puVar4 + 0xc;
      }
    } while (puVar4 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x774) + 8) * 0x30 +
                       *(int *)(*(int *)(param_1 + 0x774) + 4)));
  }
  FUN_00e3e620();
  FUN_00e22e40();
  FUN_00e3f050();
  iVar3 = *(int *)(param_1 + 0x7a0);
  if ((iVar3 != 0) && (iVar5 = *(int *)(iVar3 + 4), iVar5 != iVar5 + *(int *)(iVar3 + 8) * 0x1c)) {
    do {
      if ((*(int *)(iVar5 + 0x10) == 0) ||
         ((iVar3 = FUN_00a94db0(*(int *)(iVar5 + 0x10)), iVar3 == 0 &&
          (iVar3 = FUN_00a9f760(*(undefined4 *)(iVar5 + 0x10)), iVar3 != 0)))) {
        iVar5 = iVar5 + 0x1c;
      }
      else {
        FUN_00a8c9f0(iVar5);
        iVar5 = FUN_00a9be00(iVar5);
      }
    } while (iVar5 != *(int *)(*(int *)(param_1 + 0x7a0) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a0) + 8) * 0x1c);
  }
  iVar3 = *(int *)(param_1 + 0x7a4);
  if ((iVar3 != 0) && (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8))
     ) {
    do {
      uVar1 = *puVar4;
      uVar11 = 0;
      uVar6 = FUN_00a95ca0(0);
      iVar3 = FUN_00d77270(uVar6,uVar11);
      if (iVar3 == 0) {
        puVar9 = puVar4 + 1;
      }
      else {
        FUN_00d7b0f0();
        piVar7 = (int *)FUN_00d773c0();
        (**(code **)(*piVar7 + 0x10))(uVar1);
        iVar3 = *(int *)(param_1 + 0x7a4);
        uVar2 = *(uint *)(iVar3 + 8);
        iVar5 = *(int *)(iVar3 + 4);
        puVar9 = (undefined4 *)(iVar5 + uVar2 * 4);
        if ((((puVar4 != puVar9) && (iVar5 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)puVar4 - iVar5 >> 2) < uVar2)) {
          for (puVar8 = puVar4; puVar8 != puVar9 + -1; puVar8 = puVar8 + 1) {
            *puVar8 = puVar8[1];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar9 = puVar4;
        }
      }
      puVar4 = puVar9;
    } while (puVar9 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                       *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
  }
  FUN_00a96270();
  return;
}

