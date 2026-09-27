// lib/havok/unit_00BF6DA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BF6DA0..00BF6DA0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00BF6DA0  hkpAllCdPointCollector::hkpAllCdPointCollector_16  size=514  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_16(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined1 local_190 [396];
  
  FUN_00a7c950();
  hkpAllCdPointCollector_32(1);
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a81330();
    if (((((iVar1 == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) ||
         (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) || (*(int *)(iVar1 + 0x4e4) != 0)) &&
       (((iVar1 = FUN_00a81330(), iVar1 != 0 && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
        ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && (*(int *)(iVar1 + 0x4e4) == 0)))))) {
      FUN_00a7c950();
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00a8caf0(0x3e,0,0,0);
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar1 = FUN_00a81330(), iVar1 != 0)) {
      iVar1 = FUN_00a7c8a0();
      local_1c0 = *(undefined4 *)(iVar1 + 0x40);
      local_1bc = *(undefined4 *)(iVar1 + 0x44);
      local_1b8 = *(undefined4 *)(iVar1 + 0x48);
      local_1b4 = *(undefined4 *)(iVar1 + 0x4c);
      local_1a0 = local_190;
      local_1b0 = vftable;
      local_1ac = 0x7f7fffee;
      local_198 = 0x80000008;
      local_19c = 0;
      iVar1 = FUN_009f8b40();
      hkpAllCdPointCollector_24
                (&local_1b0,param_1 + 0x40,&local_1c0,0x3e99999a,iVar1 << 0x10 | 0x1d,
                 "Ray Missile Run");
      if (local_19c < 1) {
        *(undefined4 *)(param_1 + 0x948) = 0;
      }
      else {
        *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
      }
      if ((4 < *(int *)(param_1 + 0x948)) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
        FUN_00a7c950();
        FUN_00a81330();
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        FUN_00a8caf0(0x3e,0,0,0);
      }
      hkpCdPointCollector::hkpCdPointCollector_4();
    }
    return;
  }
  return;
}

