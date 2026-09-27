// src/collision/CollisionCapsule.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D773D0..00D7DEA0, 9 functions

#include "mgrr.h"
#include "CollisionCapsule.h"

// 00D773D0  CollisionCapsule::vf1C  size=34  [class]
float10 __fastcall CollisionCapsule::vf1C(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x594) * (float10)0.5;
  if (fVar1 < (float10)*(float *)(param_1 + 0x590)) {
    fVar1 = (float10)*(float *)(param_1 + 0x590);
  }
  return fVar1;
}

// 00D78380  CollisionCapsule::detectionForPenetration  size=260  [class]
void __fastcall CollisionCapsule::detectionForPenetration(int param_1)

{
  float *pfVar1;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  pfVar1 = (float *)(param_1 + 0x540);
  hkpAllCdPointCollector::hkpAllCdPointCollector_24
            (param_1 + 0x10,pfVar1,param_1 + 0x550,*(undefined4 *)(param_1 + 0x590),
             *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionCapsule::detectionForPenetration");
  (**(code **)(*(int *)(param_1 + 0x1b0) + 8))();
  if (*(int *)(param_1 + 0x38c) == 1) {
    if ((((*pfVar1 - *(float *)(param_1 + 0x560) != 0.0) ||
         (*(float *)(param_1 + 0x544) - *(float *)(param_1 + 0x564) != 0.0)) ||
        (*(float *)(param_1 + 0x548) - *(float *)(param_1 + 0x568) != 0.0)) &&
       (SQRT(*(float *)(param_1 + 0x3c8) * *(float *)(param_1 + 0x3c8) +
             *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x3c0) +
             *(float *)(param_1 + 0x3c4) * *(float *)(param_1 + 0x3c4)) != 0.0)) {
      hkpAllCdPointCollector::hkpAllCdPointCollector_24
                (param_1 + 0x1b0,(float *)(param_1 + 0x560),pfVar1,*(undefined4 *)(param_1 + 0x590),
                 *(int *)(param_1 + 0x370) << 0x10 | 0x1c,
                 "CollisionCapsule::detectionForPenetration");
      return;
    }
  }
  return;
}

// 00D78490  CollisionCapsule::vf14  size=486  [class]
void __fastcall CollisionCapsule::vf14(int param_1)

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
    fStack_34 = *(float *)(param_1 + 0x550) - *(float *)(param_1 + 0x540);
    fStack_30 = *(float *)(param_1 + 0x554) - *(float *)(param_1 + 0x544);
    fStack_2c = *(float *)(param_1 + 0x558) - *(float *)(param_1 + 0x548);
    fStack_28 = *(float *)(param_1 + 0x55c) - *(float *)(param_1 + 0x54c);
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
    fVar1 = *(float *)(param_1 + 0x594);
    fStack_24 = *(float *)(param_1 + 0x3d0) + fStack_34 * -1.0 * fVar1;
    fStack_20 = fStack_30 * -1.0 * fVar1 + *(float *)(param_1 + 0x3d4);
    fStack_1c = *(float *)(param_1 + 0x3d8) + fStack_2c * -1.0 * fVar1;
    fStack_18 = fStack_28 * -1.0 * fVar1 + *(float *)(param_1 + 0x3dc);
    FUN_00f96230(&fStack_24,param_1 + 0x550,*(undefined4 *)(param_1 + 0x590),iVar2,0,0);
  }
  return;
}

// 00D7D040  CollisionCapsule::vf00  size=6  [class]
undefined * CollisionCapsule::vf00(void)

{
  return &DAT_01dc5310;
}

// 00D7D050  CollisionCapsule::vf24  size=1  [class]
void CollisionCapsule::vf24(void)

{
  return;
}

// 00D7D060  CollisionCapsule::vf04  size=52  [class]
undefined4 * CollisionCapsule::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionCapsule",0x10);
  uVar1 = FUN_008d93a0(uVar1,"CollisionCapsule",0x10);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D0A0  CollisionCapsule::CollisionCapsule_2  size=28  [class]
void __fastcall CollisionCapsule::CollisionCapsule_2(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_6();
  hkpCdPointCollector::hkpCdPointCollector_5();
  return;
}

// 00D7D0C0  CollisionCapsule::vf08  size=49  [class]
undefined4 * __thiscall CollisionCapsule::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_6();
  hkpCdPointCollector::hkpCdPointCollector_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7DEA0  CollisionCapsule::CollisionCapsule  size=77  [class]
undefined4 *
CollisionCapsule::CollisionCapsule(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x5a0,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_10(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeCapsule::ShapeCapsule();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

