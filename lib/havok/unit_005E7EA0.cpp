// lib/havok/unit_005E7EA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E7EA0..005E7EA0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 005E7EA0  hkpAllCdPointCollector::hkpAllCdPointCollector_37  size=451  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_37(int *param_1)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined1 auStack_1c4 [20];
  undefined **local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  uint local_1a4;
  undefined1 *local_1a0;
  int local_19c [3];
  undefined1 local_190 [396];
  
  Behavior::vf54();
  if (((param_1[0x1ed] != 0) && (param_1[0x220] == 0)) && (param_1[0x21c] != 0)) {
    FUN_004066f0();
    local_1ac = 0x7f7fffee;
    local_1a0 = local_190;
    local_1b0 = vftable;
    local_19c[1] = 0x80000008;
    local_19c[0] = 0;
    FUN_00900350(&local_1b0);
    bVar3 = local_19c[0] != 0;
    uVar2 = (uint)bVar3;
    hkpCdPointCollector::hkpCdPointCollector();
    if (uVar2 == 0) {
      local_1a8 = local_19c;
      local_1b0 = hkpAllCdBodyPairCollector::vftable;
      local_1a0 = &DAT_80000010;
      local_1ac = CONCAT31(local_1ac._1_3_,bVar3);
      local_1a4 = uVar2;
      FUN_00900320(&local_1b0);
      uVar2 = (uint)(local_1a4 != 0);
      hkpCdBodyPairCollector::hkpCdBodyPairCollector();
    }
    FUN_009174c0();
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
    param_1[0x223] = 1;
    FUN_00900ca0();
    if ((param_1[0x1ed] != 0) && (param_1[0x220] == 0)) {
      FUN_00912890(DAT_01885d20);
      param_1[0x220] = 1;
    }
    if ((*(int *)(param_1[0xcc] + 0xc4) != 0) && (uVar2 == 0)) {
      fVar4 = (float10)FUN_00916de0();
      fVar4 = fVar4 * (float10)-1.0;
      pfVar1 = (float *)FUN_005e4f20(auStack_1c4);
      fStack_1d4 = (float)fVar4 * *pfVar1;
      fStack_1d0 = pfVar1[1] * (float)((float10)0.2 * fVar4);
      fStack_1cc = pfVar1[2] * (float)fVar4;
      fStack_1c8 = pfVar1[3] * fStack_1d8;
      FUN_0091ab40(&fStack_1d4);
    }
    FUN_00406760();
  }
  return;
}

