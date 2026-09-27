// src/enemy/em8230/Em8230.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00707DD0..00AB9B10, 10 functions

#include "types.h"

// 00707DD0  Em8230::vf44  size=53  [class]
void __fastcall Em8230::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xeb0) != 0) {
    FUN_00dd7270();
  }
  if (*(int *)(param_1 + 0xe90) != 0) {
    FUN_00a805f0();
  }
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  return;
}

// 00707E10  Em8230::vf4C  size=28  [class]
void Em8230::vf4C(void)

{
  FUN_00ac80a0(0x3f800000,0x3f800000);
  BehaviorEmBase::vf4C();
  return;
}

// 00707E30  Em8230::vf50  size=16  [class]
void Em8230::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 00707E50  Em8230::vf264  size=29  [class]
undefined4 __thiscall Em8230::vf264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xab0);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

// 00707E70  Em8230::vf94  size=6  [class]
undefined4 Em8230::vf94(void)

{
  return 3;
}

// 00707F10  FUN_00707f10  size=42  [callgraph]
uint FUN_00707f10(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35764;
  (**(code **)(*param_1 + 4))(&DAT_01b35764);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00707F40  Em8230::vf40  size=173  [class]
undefined4 __fastcall Em8230::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xeb8) = 0;
  iVar1 = EmBaseDLC::vf40();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        uVar2 = 1;
        FUN_00a92f90(1);
        FUN_00e26e50(uVar2);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00a8edf0(1);
      iVar1 = FUN_00dd7240();
      if (iVar1 != 0) {
        uVar2 = FUN_00a82090("NManiBody",0xf6020,0);
        *(undefined4 *)(param_1 + 0xe90) = uVar2;
        FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),uVar2,0xffffffff,0xffffffff);
        return 1;
      }
    }
  }
  return 0;
}

// 00707FF0  Em8230::vf48  size=173  [class]
void __fastcall Em8230::vf48(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  
  if ((param_1[0x3a4] != 0) && (param_1[0x3ae] == 0)) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x344))(0xb,1,1);
      param_1[0x3a4] = 0;
    }
    else {
      uVar3 = FUN_00a7c8a0();
      piVar4 = (int *)FUN_00707f10(uVar3);
      if (piVar4 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar4 + 0x2f0))();
        if (cVar1 != '\0') {
          param_1[0x3ae] = 1;
          EmBaseDLC::vf48();
          return;
        }
      }
    }
    EmBaseDLC::vf48();
    return;
  }
  fVar5 = (float10)FUN_00a92ff0();
  fVar5 = fVar5 * (float10)0.016666668 + (float10)(float)param_1[0x248];
  param_1[0x248] = (int)(float)fVar5;
  if ((float10)3.0 <= fVar5) {
    FUN_009fdde0();
    return;
  }
  return;
}

// 00AB1880  Em8230::vf04  size=6  [class]
undefined * Em8230::vf04(void)

{
  return &DAT_01b35760;
}

// 00AB9B10  Em8230::vf00  size=54  [class]
undefined4 __thiscall Em8230::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

