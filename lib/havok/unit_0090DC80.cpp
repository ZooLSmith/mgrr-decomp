// lib/havok/unit_0090DC80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090DC80..0090DC80, 1 functions

#include "mgrr.h"
#include "hkpFirstCdBodyPairCollector.h"

// 0090DC80  hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector  size=283  [run]
/* WARNING: Removing unreachable block (ram,0x0090dd58) */
/* WARNING: Removing unreachable block (ram,0x0090dd60) */
/* WARNING: Removing unreachable block (ram,0x0090dd6a) */
/* WARNING: Removing unreachable block (ram,0x0090dd35) */

undefined4
hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
          undefined4 param_5,undefined4 param_6)

{
  if (((*param_4 != 0.0) && (param_4[1] != 0.0)) && (param_4[2] != 0.0)) {
    FUN_0090cbe0(0xffffffff,param_2,param_3,param_4,param_5,param_6,5,1);
    RayCastPenetrationWork::vf08();
    FUN_009053f0();
    hkpCdBodyPairCollector::hkpCdBodyPairCollector_2();
    return 0;
  }
  return 0;
}

