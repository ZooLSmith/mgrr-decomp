// src/collision/CollisionImpactVolume.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D775F0..00D7E030, 9 functions

#include "types.h"

// 00D775F0  CollisionImpactVolume::vf1C  size=33  [class]
float10 __fastcall CollisionImpactVolume::vf1C(int param_1)

{
  if (*(float *)(param_1 + 0x59c) < *(float *)(param_1 + 0x58c)) {
    return (float10)*(float *)(param_1 + 0x58c);
  }
  return (float10)*(float *)(param_1 + 0x59c);
}

// 00D77620  FUN_00d77620  size=75  [between]
void __thiscall
FUN_00d77620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0x580) = param_2;
  *(undefined4 *)(param_1 + 0x584) = param_3;
  *(undefined4 *)(param_1 + 0x588) = param_4;
  *(undefined4 *)(param_1 + 0x58c) = param_2;
  *(undefined4 *)(param_1 + 0x590) = param_5;
  *(undefined4 *)(param_1 + 0x594) = param_6;
  *(undefined4 *)(param_1 + 0x598) = param_7;
  *(undefined4 *)(param_1 + 0x59c) = param_5;
  return;
}

// 00D77670  CollisionImpactVolume::vf14  size=53  [class]
void __fastcall CollisionImpactVolume::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar1);
  return;
}

// 00D7A680  CollisionImpactVolume::vf24  size=319  [class]
void __fastcall CollisionImpactVolume::vf24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  fVar5 = (float10)FUN_00e049b0();
  fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x588) + (float10)*(float *)(param_1 + 0x58c);
  *(float *)(param_1 + 0x58c) = (float)fVar5;
  if ((float10)*(float *)(param_1 + 0x584) <= fVar5) {
    *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x584);
  }
  if (*(float *)(param_1 + 0x58c) < *(float *)(param_1 + 0x580) !=
      (*(float *)(param_1 + 0x58c) == *(float *)(param_1 + 0x580))) {
    *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x580);
  }
  fVar5 = (float10)FUN_00e049b0();
  fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x598) + (float10)*(float *)(param_1 + 0x59c);
  *(float *)(param_1 + 0x59c) = (float)fVar5;
  if ((float10)*(float *)(param_1 + 0x594) <= fVar5) {
    *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x594);
  }
  if (*(float *)(param_1 + 0x59c) < *(float *)(param_1 + 0x590) !=
      (*(float *)(param_1 + 0x59c) == *(float *)(param_1 + 0x590))) {
    *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x590);
  }
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x59c);
  if (((*(int *)(param_1 + 0x37c) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x37c) + 0x14), iVar1 != 0)) &&
     (*(char *)(iVar1 + 8) == '\x01')) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x58c);
    uVar2 = *(undefined4 *)(param_1 + 0x534);
    uVar3 = *(undefined4 *)(param_1 + 0x538);
    uVar4 = *(undefined4 *)(param_1 + 0x53c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x530);
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
    *(undefined4 *)(iVar1 + 0x2c) = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x544);
    uVar3 = *(undefined4 *)(param_1 + 0x548);
    uVar4 = *(undefined4 *)(param_1 + 0x54c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x540);
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  }
  return;
}

// 00D7D510  CollisionImpactVolume::vf00  size=6  [class]
undefined * CollisionImpactVolume::vf00(void)

{
  return &DAT_01dc5324;
}

// 00D7D520  CollisionImpactVolume::vf04  size=52  [class]
undefined4 * CollisionImpactVolume::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionImpactVolume",0x15);
  uVar1 = FUN_008d93a0(uVar1,"CollisionImpactVolume",0x15);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D560  CollisionImpactVolume::CollisionImpactVolume_2  size=28  [class]
void __fastcall CollisionImpactVolume::CollisionImpactVolume_2(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_3();
  hkpCdPointCollector::hkpCdPointCollector_5();
  return;
}

// 00D7D580  CollisionImpactVolume::vf08  size=49  [class]
undefined4 * __thiscall CollisionImpactVolume::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_3();
  hkpCdPointCollector::hkpCdPointCollector_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7E030  CollisionImpactVolume::CollisionImpactVolume  size=77  [class]
undefined4 *
CollisionImpactVolume::CollisionImpactVolume
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x5a0,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_10(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeCylinder::ShapeCylinder();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

