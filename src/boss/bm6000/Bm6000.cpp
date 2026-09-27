// src/boss/bm6000/Bm6000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603E80..00AB98A0, 5 functions

#include "mgrr.h"
#include "Bm6000.h"

// 00603E80  Bm6000::startup  size=29  [class]
undefined4 __fastcall Bm6000::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return 1;
}

// 00603EA0  Bm6000::vf48  size=75  [class]
void __fastcall Bm6000::vf48(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  Bm0201::thunk_vf48();
  if (0.0 < (float)param_1[0x2d0]) {
    fVar2 = (float10)FUN_00a92ff0();
    fVar1 = (float)param_1[0x2d0];
    param_1[0x2d0] = (int)(float)((float10)fVar1 - fVar2);
    if ((float10)fVar1 - fVar2 <= (float10)0) {
      param_1[0x2d0] = (int)(float)(float10)0;
                    /* WARNING: Could not recover jumptable at 0x00603ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}

// 00AB14F0  Bm6000::Bm6000  size=18  [class]
undefined4 * __fastcall Bm6000::Bm6000(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB1510  Bm6000::vf04  size=6  [class]
undefined * Bm6000::vf04(void)

{
  return &DAT_01b354e8;
}

// 00AB98A0  Bm6000::destruct  size=43  [class]
undefined4 __thiscall Bm6000::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

