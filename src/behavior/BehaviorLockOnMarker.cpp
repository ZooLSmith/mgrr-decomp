// src/behavior/BehaviorLockOnMarker.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6670..00AC64D0, 7 functions

#include "mgrr.h"
#include "BehaviorLockOnMarker.h"

// 00AA6670  BehaviorLockOnMarker::BehaviorLockOnMarker  size=40  [class]
undefined4 * __fastcall BehaviorLockOnMarker::BehaviorLockOnMarker(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  return param_1;
}

// 00AA66A0  BehaviorLockOnMarker::vf04  size=6  [class]
undefined * BehaviorLockOnMarker::vf04(void)

{
  return &DAT_01be9ca4;
}

// 00AB7590  BehaviorLockOnMarker::destruct  size=30  [class]
undefined4 __thiscall BehaviorLockOnMarker::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC63B0  BehaviorLockOnMarker::startup  size=49  [class]
undefined4 __fastcall BehaviorLockOnMarker::startup(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x9d0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x9d4) = 0xbf800000;
  return 1;
}

// 00AC63F0  BehaviorLockOnMarker::vf44  size=77  [class]
void __fastcall BehaviorLockOnMarker::vf44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x870) + 8))(0x3f800000,0,0);
  (**(code **)(*(int *)(param_1 + 0x920) + 8))(0x3f800000,0,0);
  Behavior::vf44();
  return;
}

// 00AC6440  BehaviorLockOnMarker::vf4C  size=142  [class]
void __fastcall BehaviorLockOnMarker::vf4C(int param_1)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  
  Behavior::vf4C();
  fVar1 = *(float *)(param_1 + 0x9d0);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    fVar3 = (float10)FUN_00a92ff0();
    fVar3 = (float10)*(float *)(param_1 + 0x9d4) - fVar3 * (float10)0.016666668;
    *(float *)(param_1 + 0x9d4) = (float)fVar3;
    if (fVar3 <= (float10)0) {
      if (*(int *)(param_1 + 0x618) == 1) {
        piVar2 = (int *)(param_1 + 0x870);
      }
      else {
        if (*(int *)(param_1 + 0x618) != 2) {
          *(undefined4 *)(param_1 + 0x618) = 0;
          return;
        }
        piVar2 = (int *)(param_1 + 0x920);
      }
      (**(code **)(*piVar2 + 8))(0x3f800000,(float)(float10)0,0);
      *(undefined4 *)(param_1 + 0x618) = 0;
      return;
    }
  }
  return;
}

// 00AC64D0  BehaviorLockOnMarker::vf50  size=16  [class]
void BehaviorLockOnMarker::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

