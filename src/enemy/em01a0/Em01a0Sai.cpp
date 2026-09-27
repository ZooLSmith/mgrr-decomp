// src/enemy/em01a0/Em01a0Sai.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051ADE0..00AB7450, 7 functions

#include "mgrr.h"
#include "Em01a0Sai.h"

// 0051ADE0  Em01a0Sai::startup  size=44  [class]
undefined4 __fastcall Em01a0Sai::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorWeapon::startup();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  return 1;
}

// 0051AE10  Em01a0Sai::vf44  size=5  [class]
void __fastcall Em01a0Sai::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x8a0) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a0));
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(char *)(param_1 + 0x8a4) != '\0')) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a8));
    *(undefined4 *)(param_1 + 0x8a8) = 0;
  }
  Behavior::vf44();
  return;
}

// 0051AE20  Em01a0Sai::vf50  size=16  [class]
void Em01a0Sai::vf50(void)

{
  FUN_00a93170();
  BehaviorWeapon::vf50();
  return;
}

// 0051E0D0  Em01a0Sai::vf4C  size=20  [class]
void Em01a0Sai::vf4C(void)

{
  BehaviorWeapon::vf4C();
  FUN_00a81330();
  return;
}

// 00AA65D0  Em01a0Sai::Em01a0Sai  size=49  [class]
undefined4 * __fastcall Em01a0Sai::Em01a0Sai(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6610  Em01a0Sai::vf04  size=6  [class]
undefined * Em01a0Sai::vf04(void)

{
  return &DAT_01b34f50;
}

// 00AB7450  Em01a0Sai::destruct  size=105  [class]
undefined4 * __thiscall Em01a0Sai::destruct(undefined4 *param_1,byte param_2)

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

