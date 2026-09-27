// src/collision/CollisionImpactWave.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77570..00D7DFE0, 10 functions

#include "mgrr.h"
#include "CollisionImpactWave.h"

// 00D77570  CollisionImpactWave::vf1C  size=7  [class]
float10 __fastcall CollisionImpactWave::vf1C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x53c);
}

// 00D77580  FUN_00d77580  size=39  [between]
void __thiscall FUN_00d77580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x530) = param_2;
  *(undefined4 *)(param_1 + 0x534) = param_3;
  *(undefined4 *)(param_1 + 0x538) = param_4;
  *(undefined4 *)(param_1 + 0x53c) = param_2;
  return;
}

// 00D775B0  CollisionImpactWave::vf14  size=53  [class]
void __fastcall CollisionImpactWave::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar1);
  return;
}

// 00D78D00  CollisionImpactWave::detectionForPenetration  size=66  [class]
void __fastcall CollisionImpactWave::detectionForPenetration(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  hkpAllCdPointCollector::hkpAllCdPointCollector_26
            (param_1 + 0x10,param_1 + 0x520,*(undefined4 *)(param_1 + 0x510),
             *(int *)(param_1 + 0x370) << 0x10 | 0x1c,"CollisionImpactWave::detectionForPenetration"
            );
  return;
}

// 00D7A5C0  CollisionImpactWave::vf24  size=181  [class]
void __fastcall CollisionImpactWave::vf24(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x4cc);
  fVar2 = (float10)FUN_00e049b0();
  fVar2 = fVar2 * (float10)*(float *)(param_1 + 0x538) + (float10)*(float *)(param_1 + 0x53c);
  *(float *)(param_1 + 0x53c) = (float)fVar2;
  if ((float10)*(float *)(param_1 + 0x534) <= fVar2) {
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x534);
  }
  if (*(float *)(param_1 + 0x53c) < *(float *)(param_1 + 0x530) !=
      (*(float *)(param_1 + 0x53c) == *(float *)(param_1 + 0x530))) {
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x530);
  }
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x53c);
  if (((*(int *)(param_1 + 0x37c) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x37c) + 0x14), iVar1 != 0)) &&
     (*(char *)(iVar1 + 8) == '\0')) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x53c);
  }
  return;
}

// 00D7D420  CollisionImpactWave::vf00  size=6  [class]
undefined * CollisionImpactWave::vf00(void)

{
  return &DAT_01dc5320;
}

// 00D7D430  CollisionImpactWave::vf04  size=52  [class]
undefined4 * CollisionImpactWave::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionImpactWave",0x13);
  uVar1 = FUN_008d93a0(uVar1,"CollisionImpactWave",0x13);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D470  CollisionImpactWave::CollisionImpactWave_2  size=28  [class]
void __fastcall CollisionImpactWave::CollisionImpactWave_2(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_4();
  hkpCdPointCollector::hkpCdPointCollector_5();
  return;
}

// 00D7D490  CollisionImpactWave::vf08  size=49  [class]
undefined4 * __thiscall CollisionImpactWave::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_4();
  hkpCdPointCollector::hkpCdPointCollector_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7DFE0  CollisionImpactWave::CollisionImpactWave  size=77  [class]
undefined4 *
CollisionImpactWave::CollisionImpactWave(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x540,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_10(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeSphere::ShapeSphere();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

