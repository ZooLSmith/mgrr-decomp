// src/enemy/em0310/Em0310QteCeilingDebris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E790..00AB87D0, 8 functions

#include "types.h"

// 0057E790  Em0310QteCeilingDebris::vf40  size=191  [class]
undefined4 __fastcall Em0310QteCeilingDebris::vf40(int *param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = BehaviorDebrisBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  param_1[0x24a] = 1;
  param_1[0x25c] = 0;
  FUN_005d95e0(&local_20);
  local_20 = local_20 * -2.0;
  local_1c = local_1c * -2.0;
  local_18 = local_18 * -2.0;
  local_14 = local_14 * -2.0;
  (**(code **)(*param_1 + 0x70))(&local_20);
  return 1;
}

// 0057E850  Em0310QteCeilingDebris::thunk_vf44  size=5  [class]
void __fastcall Em0310QteCeilingDebris::thunk_vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    FUN_00d8b4a0(param_1);
  }
  if (*(int *)(param_1 + 0x904) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x904));
    if (*(undefined4 **)(param_1 + 0x904) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x904))(1);
      *(undefined4 *)(param_1 + 0x904) = 0;
    }
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    FUN_00d8a1d0(0x1f,*(int *)(param_1 + 0x908));
    if (*(undefined4 **)(param_1 + 0x908) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x908))(1);
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  FUN_00900ca0();
  FUN_00a8c820();
  FUN_00a944d0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 0057E860  Em0310QteCeilingDebris::vf1D0  size=16  [class]
void __thiscall Em0310QteCeilingDebris::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 0057E880  Em0310QteCeilingDebris::vf1B8  size=31  [class]
void Em0310QteCeilingDebris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42415;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00586560  Em0310QteCeilingDebris::vf4C  size=270  [class]
void __fastcall Em0310QteCeilingDebris::vf4C(int param_1)

{
  char cVar1;
  float10 fVar2;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  BehaviorDebrisBase::vf4C();
  fVar2 = (float10)FUN_00a92ff0();
  fStack_24 = (float)fVar2;
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) {
    FUN_00912660(&iStack_28,0);
    if (iStack_28 != 0) {
      cVar1 = FUN_00a55810();
      if (cVar1 == '\0') {
        fVar2 = (float10)FUN_00a5be60(0);
        fStack_20 = 0.0;
        fStack_18 = 0.0;
        fStack_1c = (float)(fVar2 * (float10)fStack_24 * (float10)-0.016666668 * (float10)1.025);
        FUN_00912300(&fStack_20);
      }
    }
  }
  if (*(int *)(param_1 + 0x970) == 0) {
    if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) {
      FUN_00912660(&iStack_28,0);
      if (iStack_28 != 0) {
        FUN_005d95e0(&fStack_20);
        fStack_20 = fStack_20 * -2.0;
        fStack_1c = fStack_1c * -2.0;
        fStack_18 = fStack_18 * -2.0;
        fStack_14 = fStack_14 * -2.0;
        FUN_00912300(&fStack_20);
      }
    }
    *(undefined4 *)(param_1 + 0x970) = 1;
  }
  return;
}

// 00AAFB70  Em0310QteCeilingDebris::Em0310QteCeilingDebris  size=18  [class]
undefined4 * __fastcall Em0310QteCeilingDebris::Em0310QteCeilingDebris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00AAFB90  Em0310QteCeilingDebris::vf04  size=6  [class]
undefined * Em0310QteCeilingDebris::vf04(void)

{
  return &DAT_01b35158;
}

// 00AB87D0  Em0310QteCeilingDebris::vf00  size=105  [class]
undefined4 * __thiscall Em0310QteCeilingDebris::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

