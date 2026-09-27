// src/collision/CollisionCylinder.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77540..00D7DEF0, 9 functions

#include "mgrr.h"
#include "CollisionCylinder.h"

// 00D77540  CollisionCylinder::vf1C  size=34  [class]
float10 __fastcall CollisionCylinder::vf1C(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x574) * (float10)0.5;
  if (fVar1 < (float10)*(float *)(param_1 + 0x570)) {
    fVar1 = (float10)*(float *)(param_1 + 0x570);
  }
  return fVar1;
}

// 00D788E0  CollisionCylinder::vf10  size=555  [class]
void __fastcall CollisionCylinder::vf10(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  pfVar1 = (float *)(param_1 + 0x540);
  hkpAllCdPointCollector::hkpAllCdPointCollector_25
            (param_1 + 0x10,param_1 + 0x530,pfVar1,*(undefined4 *)(param_1 + 0x570),
             *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionCylinder::detectionForPenetration");
  (**(code **)(*(int *)(param_1 + 0x1b0) + 8))();
  if (*(int *)(param_1 + 0x38c) == 1) {
    fStack_30 = *pfVar1 - *(float *)(param_1 + 0x530);
    fStack_2c = *(float *)(param_1 + 0x544) - *(float *)(param_1 + 0x534);
    fStack_28 = *(float *)(param_1 + 0x548) - *(float *)(param_1 + 0x538);
    fStack_24 = *(float *)(param_1 + 0x54c) - *(float *)(param_1 + 0x53c);
    if (((fStack_30 != 0.0) || (fStack_2c != 0.0)) || (fStack_28 != 0.0)) {
      fVar2 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_30,&fStack_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_30 = 0.0;
        fStack_2c = 1.0;
        fStack_28 = 0.0;
      }
    }
    if (SQRT(*(float *)(param_1 + 0x3c8) * *(float *)(param_1 + 0x3c8) +
             *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x3c0) +
             *(float *)(param_1 + 0x3c4) * *(float *)(param_1 + 0x3c4)) != 0.0) {
      fVar2 = *(float *)(param_1 + 0x574);
      fStack_20 = *(float *)(param_1 + 0x3d0) + fStack_30 * -1.0 * fVar2;
      fStack_1c = fStack_2c * -1.0 * fVar2 + *(float *)(param_1 + 0x3d4);
      fStack_18 = *(float *)(param_1 + 0x3d8) + fStack_28 * -1.0 * fVar2;
      fStack_14 = fStack_24 * -1.0 * fVar2 + *(float *)(param_1 + 0x3dc);
      hkpAllCdPointCollector::hkpAllCdPointCollector_25
                (param_1 + 0x1b0,&fStack_20,pfVar1,*(undefined4 *)(param_1 + 0x570),
                 *(int *)(param_1 + 0x370) << 0x10 | 0x1c,
                 "CollisionCylinder::detectionForPenetration");
      return;
    }
  }
  return;
}

// 00D78B10  CollisionCylinder::vf14  size=486  [class]
void __fastcall CollisionCylinder::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar2 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar2 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar2);
  if (*(int *)(param_1 + 0x38c) == 1) {
    iVar2 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fffff00) + 0x80000000;
    if (*(int *)(param_1 + 0x41c) != 0) {
      iVar2 = -0xffff01;
    }
    fStack_34 = *(float *)(param_1 + 0x540) - *(float *)(param_1 + 0x530);
    fStack_30 = *(float *)(param_1 + 0x544) - *(float *)(param_1 + 0x534);
    fStack_2c = *(float *)(param_1 + 0x548) - *(float *)(param_1 + 0x538);
    fStack_28 = *(float *)(param_1 + 0x54c) - *(float *)(param_1 + 0x53c);
    if (((fStack_34 != 0.0) || (fStack_30 != 0.0)) || (fStack_2c != 0.0)) {
      fVar1 = fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_34,&fStack_34);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 0.0;
      }
    }
    fVar1 = *(float *)(param_1 + 0x574);
    fStack_24 = *(float *)(param_1 + 0x3d0) + fStack_34 * -1.0 * fVar1;
    fStack_20 = fStack_30 * -1.0 * fVar1 + *(float *)(param_1 + 0x3d4);
    fStack_1c = *(float *)(param_1 + 0x3d8) + fStack_2c * -1.0 * fVar1;
    fStack_18 = fStack_28 * -1.0 * fVar1 + *(float *)(param_1 + 0x3dc);
    FUN_00f961d0(&fStack_24,param_1 + 0x540,*(undefined4 *)(param_1 + 0x570),iVar2,0,0);
  }
  return;
}

// 00D7D320  CollisionCylinder::vf00  size=6  [class]
undefined * CollisionCylinder::vf00(void)

{
  return &DAT_01dc531c;
}

// 00D7D330  CollisionCylinder::vf24  size=1  [class]
void CollisionCylinder::vf24(void)

{
  return;
}

// 00D7D340  CollisionCylinder::vf04  size=52  [class]
undefined4 * CollisionCylinder::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionCylinder",0x11);
  uVar1 = FUN_008d93a0(uVar1,"CollisionCylinder",0x11);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D380  CollisionCylinder::CollisionCylinder_2  size=28  [class]
void __fastcall CollisionCylinder::CollisionCylinder_2(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_3();
  hkpCdPointCollector::hkpCdPointCollector_5();
  return;
}

// 00D7D3A0  CollisionCylinder::vf08  size=49  [class]
undefined4 * __thiscall CollisionCylinder::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_3();
  hkpCdPointCollector::hkpCdPointCollector_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7DEF0  CollisionCylinder::CollisionCylinder  size=77  [class]
undefined4 *
CollisionCylinder::CollisionCylinder(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x580,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_10(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeCylinder::ShapeCylinder();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

