// src/collision/RayCastSingleHitWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009066A0..00910800, 8 functions

#include "types.h"

// 009066A0  RayCastSingleHitWork::vf00  size=6  [class]
undefined * RayCastSingleHitWork::vf00(void)

{
  return &DAT_01b35de4;
}

// 009066C0  FUN_009066c0  size=12  [between]
bool __fastcall FUN_009066c0(int param_1)

{
  return *(int *)(param_1 + 0xb0) != 0;
}

// 009066D0  RayCastSingleHitWork::vf04  size=77  [class]
int * __thiscall RayCastSingleHitWork::vf04(int *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = (int)vftable;
  if ((char)param_1[5] == '\0') {
    iVar1 = FUN_009066c0();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0x2c]);
    }
    (**(code **)(*param_1 + 0x1c))();
  }
  *param_1 = (int)RayCastWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00907860  RayCastSingleHitWork::RayCastSingleHitWork_5  size=114  [class]
undefined4 * RayCastSingleHitWork::RayCastSingleHitWork_5(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0xe0,0x10,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0xe0);
  *(undefined4 *)((int)_Dst + 10) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *(undefined1 *)((int)_Dst + 0x1b) = 1;
  *_Dst = vftable;
  *(undefined1 *)(_Dst + 0x10) = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x1c] = 0x3f800000;
  _Dst[0x1d] = 0xffffffff;
  _Dst[0x20] = 0xffffffff;
  _Dst[0x28] = 0;
  _Dst[0x2c] = 0;
  return _Dst;
}

// 0090B130  RayCastSingleHitWork::RayCastSingleHitWork_2  size=423  [class]
/* WARNING: Removing unreachable block (ram,0x0090b1e6) */
/* WARNING: Removing unreachable block (ram,0x0090b21b) */
/* WARNING: Removing unreachable block (ram,0x0090b21f) */
/* WARNING: Removing unreachable block (ram,0x0090b221) */
/* WARNING: Removing unreachable block (ram,0x0090b23a) */
/* WARNING: Removing unreachable block (ram,0x0090b228) */
/* WARNING: Removing unreachable block (ram,0x0090b22b) */
/* WARNING: Removing unreachable block (ram,0x0090b250) */
/* WARNING: Removing unreachable block (ram,0x0090b25e) */
/* WARNING: Removing unreachable block (ram,0x0090b26c) */
/* WARNING: Removing unreachable block (ram,0x0090b27c) */
/* WARNING: Removing unreachable block (ram,0x0090b289) */

undefined4
RayCastSingleHitWork::RayCastSingleHitWork_2
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5
          )

{
  int iVar1;
  
  RayCastWork::set(0xffffffff,param_5,param_5 + 0x10,*(undefined4 *)(param_5 + 0x20),
                   *(undefined4 *)(param_5 + 0x24),*(undefined4 *)(param_5 + 0x28),
                   *(undefined4 *)(param_5 + 0x2c),*(undefined4 *)(param_5 + 0x30),1,1,0);
  FUN_009068d0();
  FUN_009053f0();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar1 = FUN_009066c0();
  if (iVar1 != 0) {
    FUN_00905560(0);
  }
  FUN_009058a0();
  return 0;
}

// 0090B2E0  RayCastSingleHitWork::RayCastSingleHitWork_3  size=418  [class]
undefined4
RayCastSingleHitWork::RayCastSingleHitWork_3
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 local_f4 [4];
  undefined **local_f0;
  int local_ec;
  undefined4 local_e6;
  undefined4 local_dc;
  undefined3 local_d8;
  char cStack_d5;
  undefined4 local_d4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_50;
  undefined4 local_40;
  
  local_80 = 0x3f800000;
  local_e6 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_d8 = 0;
  cStack_d5 = '\x01';
  local_f0 = vftable;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_7c = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_40 = 0;
  RayCastWork::set(0xffffffff,param_6,param_6 + 0x10,*(undefined4 *)(param_6 + 0x20),
                   *(undefined4 *)(param_6 + 0x24),*(undefined4 *)(param_6 + 0x28),
                   *(undefined4 *)(param_6 + 0x2c),*(undefined4 *)(param_6 + 0x30),1,1,0);
  local_dc = local_dc & 0xffffff;
  if (cStack_d5 != '\0') {
    if (local_e6._2_2_ < 1) {
      (*(code *)local_f0[2])();
      FUN_009053f0();
    }
    else {
      local_e6 = CONCAT22(local_e6._2_2_ + -1,(undefined2)local_e6);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (local_dc._2_1_ != '\0') {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if (local_ec == 1) {
      FUN_00905720(param_1,param_2,param_3,0,0,0,local_f4);
    }
    else if (local_ec != 2) {
      FUN_00dd5650("RayCastWork::get");
    }
    local_f0 = vftable;
    if ((char)local_dc == '\0') {
      iVar1 = FUN_009066c0();
      if (iVar1 != 0) {
        FUN_00905560(local_40);
      }
      (*(code *)local_f0[7])();
    }
    return 1;
  }
  local_f0 = vftable;
  if ((char)local_dc == '\0') {
    iVar1 = FUN_009066c0();
    if (iVar1 != 0) {
      FUN_00905560(local_40);
    }
    (*(code *)local_f0[7])();
  }
  return 0;
}

// 0090B490  RayCastSingleHitWork::RayCastSingleHitWork_4  size=642  [class]
/* WARNING: Removing unreachable block (ram,0x0090b53b) */
/* WARNING: Removing unreachable block (ram,0x0090b56b) */
/* WARNING: Removing unreachable block (ram,0x0090b56f) */
/* WARNING: Removing unreachable block (ram,0x0090b571) */
/* WARNING: Removing unreachable block (ram,0x0090b591) */
/* WARNING: Removing unreachable block (ram,0x0090b652) */
/* WARNING: Removing unreachable block (ram,0x0090b659) */
/* WARNING: Removing unreachable block (ram,0x0090b676) */
/* WARNING: Removing unreachable block (ram,0x0090b67d) */
/* WARNING: Removing unreachable block (ram,0x0090b5a6) */
/* WARNING: Removing unreachable block (ram,0x0090b5ad) */
/* WARNING: Removing unreachable block (ram,0x0090b578) */
/* WARNING: Removing unreachable block (ram,0x0090b57f) */
/* WARNING: Removing unreachable block (ram,0x0090b5c3) */
/* WARNING: Removing unreachable block (ram,0x0090b5cd) */
/* WARNING: Removing unreachable block (ram,0x0090b60b) */
/* WARNING: Removing unreachable block (ram,0x0090b612) */
/* WARNING: Removing unreachable block (ram,0x0090b62f) */
/* WARNING: Removing unreachable block (ram,0x0090b633) */
/* WARNING: Removing unreachable block (ram,0x0090b640) */
/* WARNING: Removing unreachable block (ram,0x0090b64e) */
/* WARNING: Removing unreachable block (ram,0x0090b64a) */
/* WARNING: Removing unreachable block (ram,0x0090b689) */
/* WARNING: Removing unreachable block (ram,0x0090b697) */
/* WARNING: Removing unreachable block (ram,0x0090b6a5) */
/* WARNING: Removing unreachable block (ram,0x0090b6b5) */
/* WARNING: Removing unreachable block (ram,0x0090b6c2) */

undefined4
RayCastSingleHitWork::RayCastSingleHitWork_4
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  RayCastWork::set(0xffffffff,param_5,param_6,param_7,0,0,0,param_8,1,1,0);
  FUN_009068d0();
  FUN_009053f0();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_009066c0();
  if (iVar1 != 0) {
    FUN_00905560(0);
  }
  FUN_009058a0();
  return 0;
}

// 00910800  RayCastSingleHitWork::RayCastSingleHitWork  size=420  [class]
/* WARNING: Removing unreachable block (ram,0x009108b1) */
/* WARNING: Removing unreachable block (ram,0x009108d8) */
/* WARNING: Removing unreachable block (ram,0x009108df) */
/* WARNING: Removing unreachable block (ram,0x00910902) */
/* WARNING: Removing unreachable block (ram,0x009108e6) */
/* WARNING: Removing unreachable block (ram,0x009108f8) */
/* WARNING: Removing unreachable block (ram,0x009108e9) */
/* WARNING: Removing unreachable block (ram,0x0091090f) */
/* WARNING: Removing unreachable block (ram,0x0091091b) */
/* WARNING: Removing unreachable block (ram,0x00910929) */
/* WARNING: Removing unreachable block (ram,0x00910937) */
/* WARNING: Removing unreachable block (ram,0x00910947) */
/* WARNING: Removing unreachable block (ram,0x00910954) */

undefined4 RayCastSingleHitWork::RayCastSingleHitWork(undefined4 param_1,int param_2)

{
  int iVar1;
  
  RayCastWork::set(0xffffffff,param_2,param_2 + 0x10,*(undefined4 *)(param_2 + 0x20),
                   *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),2,1,0);
  FUN_009068d0();
  FUN_009053f0();
  iVar1 = FUN_009066c0();
  if (iVar1 != 0) {
    FUN_00905560(0);
  }
  FUN_009058a0();
  return 0;
}

