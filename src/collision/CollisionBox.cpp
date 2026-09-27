// src/collision/CollisionBox.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D774A0..00D7DF40, 8 functions

#include "types.h"

// 00D774A0  CollisionBox::vf1C  size=90  [class]
float10 __fastcall CollisionBox::vf1C(int param_1)

{
  if (*(float *)(param_1 + 0x510) <= *(float *)(param_1 + 0x514)) {
    if (*(float *)(param_1 + 0x518) < *(float *)(param_1 + 0x514)) {
      return (float10)*(float *)(param_1 + 0x514) * (float10)0.5;
    }
  }
  else if (*(float *)(param_1 + 0x518) < *(float *)(param_1 + 0x510)) {
    return (float10)*(float *)(param_1 + 0x510) * (float10)0.5;
  }
  return (float10)*(float *)(param_1 + 0x518) * (float10)0.5;
}

// 00D77500  CollisionBox::vf14  size=53  [class]
void __fastcall CollisionBox::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar1);
  return;
}

// 00D78790  CollisionBox::vf24  size=49  [class]
void __fastcall CollisionBox::vf24(int param_1)

{
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x4cc);
  return;
}

// 00D7D230  CollisionBox::vf00  size=6  [class]
undefined * CollisionBox::vf00(void)

{
  return &DAT_01dc5318;
}

// 00D7D240  CollisionBox::vf04  size=52  [class]
undefined4 * CollisionBox::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionBox",0xc);
  uVar1 = FUN_008d93a0(uVar1,"CollisionBox",0xc);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D280  CollisionBox::CollisionBox_2  size=28  [class]
void __fastcall CollisionBox::CollisionBox_2(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_5();
  hkpCdPointCollector::hkpCdPointCollector_5();
  return;
}

// 00D7D2A0  CollisionBox::vf08  size=49  [class]
undefined4 * __thiscall CollisionBox::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase_5();
  hkpCdPointCollector::hkpCdPointCollector_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7DF40  CollisionBox::CollisionBox  size=77  [class]
undefined4 * CollisionBox::CollisionBox(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x560,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector_10(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeBox::ShapeBox();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

