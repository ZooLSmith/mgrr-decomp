// src/misc/cItemFixBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EA440..00AB1470, 7 functions

#include "mgrr.h"
#include "cItemFixBase.h"

// 005EA440  cItemFixBase::startup  size=154  [class]
undefined4 __fastcall cItemFixBase::startup(int param_1)

{
  int iVar1;
  
  iVar1 = cItemObjectBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f03a0(0x10,1);
    FUN_008f03a0(1,1);
    FUN_008f03a0(2,1);
    FUN_008f03a0(8,1);
    FUN_008f03a0(4,1);
    FUN_008f03a0(0x20,1);
    FUN_008f03a0(0x40,1);
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
  *(undefined1 *)(param_1 + 0x920) = 1;
  *(undefined1 *)(param_1 + 0x909) = 1;
  return 1;
}

// 005EA4E0  cItemFixBase::thunk_vf44  size=5  [class]
void __fastcall cItemFixBase::thunk_vf44(int param_1)

{
  *(undefined4 *)(param_1 + 0x874) = 0;
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x8f8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  RayCastManager::getWork(param_1 + 0x900);
  RayCastManager::getWork(param_1 + 0x904);
  if (*(int *)(param_1 + 0x8f8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 005EA4F0  cItemFixBase::vf50  size=65  [class]
void __fastcall cItemFixBase::vf50(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x910) == 0) {
    fVar1 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x54) =
         (float)(fVar1 * (float10)*(float *)(param_1 + 0x894) + (float10)*(float *)(param_1 + 0x54))
    ;
  }
  if ((*(char *)(param_1 + 0x908) == '\0') || ((*(uint *)(param_1 + 0x364) & 0x40000) == 0)) {
    FUN_00a93170();
  }
  Behavior::vf50();
  return;
}

// 005ECE70  cItemFixBase::vf48  size=395  [class]
void __fastcall cItemFixBase::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  BehaviorDebrisActor::vf48();
  if (*(char *)(param_1 + 0x908) != '\0') {
    fVar3 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x8d8) = (float)((float10)*(float *)(param_1 + 0x8d8) - fVar3);
  }
  if (*(float *)(param_1 + 0x8d8) <= 0.0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
  }
  if (*(int *)(param_1 + 0x910) != 0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
    *(undefined1 *)(param_1 + 0x908) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x908) == '\0') {
    iVar2 = FUN_00d45b10();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x870);
    fVar3 = (float10)FUN_00a92ff0();
    fVar3 = fVar3 * (float10)*(float *)(iVar2 + 0x14) + (float10)*(float *)(param_1 + 0x8cc);
    *(float *)(param_1 + 0x8cc) = (float)fVar3;
    fVar3 = (float10)*(float *)(param_1 + 0x8c8) - fVar3;
    *(float *)(param_1 + 0x8c8) = (float)fVar3;
    if ((fVar3 < (float10)0) && ((float10)*(float *)(iVar2 + 0x18) < ABS(fVar3))) {
      *(float *)(param_1 + 0x8c8) = -*(float *)(iVar2 + 0x18);
      *(float *)(param_1 + 0x8cc) = (float)(float10)0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    iVar2 = FUN_00d45b10();
    if (iVar2 == 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x8d4) + 1.0;
    *(float *)(param_1 + 0x8d4) = fVar1;
    if (*(float *)(*(int *)(param_1 + 0x870) + 0x10) <= fVar1) {
      *(undefined4 *)(param_1 + 0x8d4) = 0;
      fVar1 = *(float *)(*(int *)(param_1 + 0x870) + 0x14);
      *(undefined1 *)(param_1 + 0x908) = 0;
      *(float *)(param_1 + 0x8c8) = -fVar1;
    }
  }
  uStack_60 = 0;
  uStack_5c = *(undefined4 *)(param_1 + 0x8c8);
  uStack_58 = *(undefined4 *)(param_1 + 0x8d0);
  uStack_54 = 0x3f800000;
  D3DXMatrixRotationY(auStack_50,*(float *)(param_1 + 0x8c0) * 0.017453292);
  D3DXVec3TransformNormal(param_1 + 0x890,auStack_68,&uStack_58);
  FUN_005ec7b0();
  return;
}

// 00AB1420  cItemFixBase::cItemFixBase  size=56  [class]
undefined4 * __fastcall cItemFixBase::cItemFixBase(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = cItemObjectBase::vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = vftable;
  return param_1;
}

// 00AB1460  cItemFixBase::vf04  size=6  [class]
undefined * cItemFixBase::vf04(void)

{
  return &DAT_01b35394;
}

// 00AB1470  cItemFixBase::destruct  size=30  [class]
undefined4 __thiscall cItemFixBase::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

