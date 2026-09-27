// src/collision/CollisionSphere.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77400..00D7DF90, 10 functions

#include "mgrr.h"
#include "CollisionSphere.h"

// 00D77400  CollisionSphere::vf1C  size=7  [class]
float10 __fastcall CollisionSphere::vf1C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x510);
}

// 00D77410  CollisionSphere::vf14  size=137  [class]
void __fastcall CollisionSphere::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar1);
  if (*(int *)(param_1 + 0x38c) == 1) {
    iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fffff00) + 0x80000000;
    if (*(int *)(param_1 + 0x41c) != 0) {
      iVar1 = -0xffff01;
    }
    FUN_00f96230(param_1 + 0x3d0,param_1 + 0x3e0,*(undefined4 *)(param_1 + 0x510),iVar1,0,0);
  }
  return;
}

// 00D78680  CollisionSphere::vf24  size=49  [class]
void __fastcall CollisionSphere::vf24(int param_1)

{
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x4cc);
  return;
}

// 00D786C0  CollisionSphere::detectionForPenetration  size=194  [class]
void __fastcall CollisionSphere::detectionForPenetration(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  hkpAllCdPointCollector::hkpAllCdPointCollector_26
            (param_1 + 0x10,param_1 + 0x520,*(undefined4 *)(param_1 + 0x510),
             *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionSphere::detectionForPenetration");
  (**(code **)(*(int *)(param_1 + 0x1b0) + 8))();
  if ((*(int *)(param_1 + 0x38c) == 1) &&
     (SQRT(*(float *)(param_1 + 0x3c8) * *(float *)(param_1 + 0x3c8) +
           *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x3c0) +
           *(float *)(param_1 + 0x3c4) * *(float *)(param_1 + 0x3c4)) != 0.0)) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_24
              (param_1 + 0x1b0,param_1 + 0x3d0,param_1 + 0x3e0,*(undefined4 *)(param_1 + 0x510),
               *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionSphere::detectionForPenetration");
  }
  return;
}

// 00D787D0  CollisionSphere::detectionForPenetration_2  size=262  [class]
void __fastcall CollisionSphere::detectionForPenetration_2(int param_1)

{
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  fStack_20 = *(float *)(param_1 + 0x510) * 0.5;
  fStack_1c = *(float *)(param_1 + 0x514) * 0.5;
  fStack_18 = *(float *)(param_1 + 0x518) * 0.5;
  fStack_14 = *(float *)(param_1 + 0x51c) * 0.5;
  FUN_0090fd80(param_1 + 0x10,param_1 + 0x550,param_1 + 0x470,&fStack_20,
               *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionSphere::detectionForPenetration");
  (**(code **)(*(int *)(param_1 + 0x1b0) + 8))();
  if ((*(int *)(param_1 + 0x38c) == 1) &&
     (SQRT(*(float *)(param_1 + 0x3c8) * *(float *)(param_1 + 0x3c8) +
           *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x3c0) +
           *(float *)(param_1 + 0x3c4) * *(float *)(param_1 + 0x3c4)) != 0.0)) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_24
              (param_1 + 0x1b0,param_1 + 0x3d0,param_1 + 0x3e0,0x3dcccccd,
               *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionSphere::detectionForPenetration");
  }
  return;
}

// 00D7D140  CollisionSphere::vf00  size=6  [class]
undefined * CollisionSphere::vf00(void)

{
  return &DAT_01dc5314;
}

// 00D7D150  CollisionSphere::vf04  size=52  [class]
undefined4 * CollisionSphere::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionSphere",0xf);
  uVar1 = FUN_008d93a0(uVar1,"CollisionSphere",0xf);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D190  CollisionSphere::~CollisionSphere  size=28  [class]
void __fastcall CollisionSphere::~CollisionSphere(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::~ShapeBase();
  Collision::~Collision();
  return;
}

// 00D7D1B0  CollisionSphere::vf08  size=49  [class]
undefined4 * __thiscall CollisionSphere::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::~ShapeBase();
  Collision::~Collision();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7DF90  CollisionSphere::CollisionSphere  size=77  [class]
undefined4 *
CollisionSphere::CollisionSphere(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x530,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    Collision::Collision(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeSphere::ShapeSphere();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

