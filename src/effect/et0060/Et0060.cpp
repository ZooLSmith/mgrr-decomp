// src/effect/et0060/Et0060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D1F70..00AB81B0, 6 functions

#include "mgrr.h"
#include "Et0060.h"

// 005D1F70  Et0060::vf44  size=39  [class]
void __fastcall Et0060::vf44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x870);
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 005D1FE0  Et0060::startup  size=148  [class]
undefined4 __fastcall Et0060::startup(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x884) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x888) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x88c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x890) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_1 + 0x884);
      *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x888);
      *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x88c);
      *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x890);
      *(undefined4 *)(param_1 + 0x874) = 0;
      return 1;
    }
  }
  return 0;
}

// 005D2080  Et0060::vf50  size=97  [class]
void __fastcall Et0060::vf50(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  Behavior::vf50();
  if (0.0 < *(float *)(param_1 + 0x874)) {
    fVar1 = (float10)FUN_00a92ff0();
    fVar2 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0x874) - fVar2 * (float10)(float)fVar1;
    *(float *)(param_1 + 0x874) = (float)fVar1;
    if (fVar1 <= (float10)0) {
      *(float *)(param_1 + 0x874) = (float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00AA6A20  Et0060::Et0060  size=28  [class]
undefined4 * __fastcall Et0060::Et0060(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  param_1[0x21c] = 0;
  return param_1;
}

// 00AA6A40  Et0060::vf04  size=6  [class]
undefined * Et0060::vf04(void)

{
  return &DAT_01b352ac;
}

// 00AB81B0  Et0060::destruct  size=105  [class]
undefined4 * __thiscall Et0060::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

