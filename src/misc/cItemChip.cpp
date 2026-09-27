// src/misc/cItemChip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EA640..00AB9880, 8 functions

#include "types.h"

// 005EA640  cItemChip::vf40  size=479  [class]
undefined4 __fastcall cItemChip::vf40(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = FUN_0094b720();
  *(undefined4 *)(param_1 + 0x920) = uVar2;
  iVar3 = cItemObjectBase::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00a04500();
  FUN_00a8cb50(0);
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x93c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x938) = 0;
  *(undefined4 *)(param_1 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x954) = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  *(undefined1 *)(param_1 + 0x958) = 0;
  *(undefined4 *)(param_1 + 0x948) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x94c) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  fVar4 = (float10)FUN_00dde300(*(undefined4 *)(*(int *)(param_1 + 0x920) + 8),
                                *(undefined4 *)(*(int *)(param_1 + 0x920) + 8));
  *(float *)(param_1 + 0x8c8) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  fVar4 = (float10)FUN_00dde300(0xc3340000,0x43340000);
  *(float *)(param_1 + 0x8c0) = (float)fVar4;
  iVar3 = *(int *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined2 *)(param_1 + 0x964) = 0;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(undefined2 *)(param_1 + 0x908) = 0x100;
  *(float *)(param_1 + 0x94) = (float)fVar4;
  if (iVar3 == 0x70010) {
    uVar1 = FUN_00dde2d0(*(undefined2 *)(*(int *)(param_1 + 0x920) + 0x2c),
                         *(undefined2 *)(*(int *)(param_1 + 0x920) + 0x2e));
    *(undefined2 *)(param_1 + 0x96c) = uVar1;
    *(undefined4 *)(param_1 + 0x954) = 0x7a;
    return 1;
  }
  if (iVar3 == 0x70011) {
    uVar1 = FUN_00dde2d0(*(undefined2 *)(*(int *)(param_1 + 0x920) + 0x30),
                         *(undefined2 *)(*(int *)(param_1 + 0x920) + 0x32));
    *(undefined2 *)(param_1 + 0x96c) = uVar1;
    *(undefined4 *)(param_1 + 0x954) = 0x7b;
    return 1;
  }
  if (iVar3 == 0x70012) {
    uVar1 = FUN_00dde2d0(*(undefined2 *)(*(int *)(param_1 + 0x920) + 0x34),
                         *(undefined2 *)(*(int *)(param_1 + 0x920) + 0x36));
    *(undefined2 *)(param_1 + 0x96c) = uVar1;
    *(undefined4 *)(param_1 + 0x954) = 0x7c;
    return 1;
  }
  *(undefined2 *)(param_1 + 0x96c) = 100;
  return 1;
}

// 005EA820  cItemChip::thunk_vf44  size=5  [class]
void __fastcall cItemChip::thunk_vf44(int param_1)

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

// 005EA830  cItemChip::vf54  size=275  [class]
void __fastcall cItemChip::vf54(int *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  
  cItemObjectBase::vf54();
  iVar2 = FUN_00d467a0();
  if (iVar2 != 0) {
    if (param_1[0x186] == 2) {
                    /* WARNING: Could not recover jumptable at 0x005ea941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
    iVar2 = FUN_0094ab80();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x300))(), iVar2 != 0)) {
      fVar4 = (float10)FUN_00a92ff0();
      fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[599];
      param_1[599] = (int)(float)fVar4;
      if ((float10)*(float *)(param_1[0x248] + 0x10) < fVar4) {
        fVar4 = (float10)FUN_00a92ff0();
        fVar1 = (float)param_1[600];
        param_1[600] = (int)(float)(fVar4 + (float10)fVar1);
        if ((float10)*(float *)(param_1[0x248] + 0x18) < fVar4 + (float10)fVar1) {
          param_1[600] = 0;
          if ((char)param_1[0x259] == '\x01') {
            pcVar3 = *(code **)(*param_1 + 0x1c);
            *(undefined1 *)(param_1 + 0x259) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x259) = 1;
            pcVar3 = *(code **)(*param_1 + 0x20);
          }
          (*pcVar3)();
        }
      }
      if ((float)param_1[599] <= *(float *)(param_1[0x248] + 0x14)) {
        return;
      }
      FUN_009f8c40();
      FUN_009fdde0();
      return;
    }
    if ((char)param_1[0x259] != '\0') {
      (**(code **)(*param_1 + 0x1c))();
      *(undefined1 *)(param_1 + 0x259) = 0;
    }
    param_1[599] = 0;
  }
  return;
}

// 005EA950  FUN_005ea950  size=158  [callgraph]
void __fastcall FUN_005ea950(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00e5e050("core_se_sys_chip_get",0);
  iVar3 = *(int *)(param_1 + 0x4b0);
  uVar1 = 0x7a;
  if (iVar3 != 0x70010) {
    if (iVar3 == 0x70011) {
      uVar1 = 0x7b;
    }
    else if (iVar3 == 0x70012) {
      uVar1 = 0x7c;
    }
  }
  if (*(char *)(param_1 + 0x965) == '\0') {
    FUN_00cbac80((int)*(short *)(param_1 + 0x96c),uVar1,1);
    piVar2 = (int *)FUN_00c1b9a0();
    iVar3 = (int)*(short *)(param_1 + 0x96c);
  }
  else {
    FUN_00cbac80(*(undefined4 *)(param_1 + 0x968),uVar1,1);
    piVar2 = (int *)FUN_00c1b9a0();
    iVar3 = *(int *)(param_1 + 0x968);
  }
  (**(code **)(*piVar2 + 0x3c))(iVar3);
  FUN_009f8c40();
  FUN_009fdde0();
  return;
}

// 005EBAB0  cItemChip::vf50  size=276  [class]
void __fastcall cItemChip::vf50(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x618) != 2) {
    if (*(int *)(param_1 + 0x910) == 0) {
      fVar3 = (float10)FUN_00a92ff0();
      *(float *)(param_1 + 0x54) =
           (float)(fVar3 * (float10)*(float *)(param_1 + 0x894) +
                  (float10)*(float *)(param_1 + 0x54));
    }
    if ((*(int *)(param_1 + 0x618) == 0) && (*(char *)(param_1 + 0x908) == '\x01')) {
      *(undefined1 *)(param_1 + 0x958) = 1;
      FUN_00a8cb50(1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x618);
  if (iVar2 == 0) {
    FUN_005ea150();
    fVar3 = (float10)FUN_00e03a90(0);
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x94c);
    *(float *)(param_1 + 0x94c) = (float)fVar3;
    if ((float10)**(float **)(param_1 + 0x870) < fVar3) {
      fVar1 = **(float **)(param_1 + 0x870);
      *(undefined1 *)(param_1 + 0x958) = 1;
      *(float *)(param_1 + 0x94c) = fVar1;
    }
  }
  else if (iVar2 == 1) {
    *(undefined1 *)(param_1 + 0x958) = 1;
    FUN_005e8730();
  }
  else if (iVar2 == 2) {
    FUN_005ea950();
  }
  if ((*(char *)(param_1 + 0x908) == '\0') || ((*(uint *)(param_1 + 0x364) & 0x40000) == 0)) {
    FUN_00a93170();
  }
  Behavior::vf50();
  if (*(int *)(param_1 + 0x8f8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  FUN_00cbb410(param_1,0xffffffff,*(undefined4 *)(param_1 + 0x954),0xf00);
  if (*(int *)(param_1 + 0x8f8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  return;
}

// 005ED1A0  cItemChip::vf48  size=701  [class]
void __fastcall cItemChip::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  int aiStack_58 [2];
  undefined1 auStack_50 [76];
  
  BehaviorDebrisActor::vf48();
  if ((char)param_1[0x242] != '\0') {
    fVar4 = (float10)FUN_00a92ff0();
    param_1[0x236] = (int)(float)((float10)(float)param_1[0x236] - fVar4);
  }
  if ((float)param_1[0x236] <= 0.0) {
    param_1[0x236] = 0;
  }
  if (param_1[0x244] != 0) {
    param_1[0x236] = 0;
    *(undefined1 *)(param_1 + 0x242) = 1;
  }
  if (param_1[0x186] != 2) {
    if (param_1[0x244] == 0) {
      if ((char)param_1[0x242] == '\0') {
        iVar2 = FUN_00d45b10();
        if (iVar2 == 0) {
          param_1[0x232] = 0;
          return;
        }
        iVar2 = param_1[0x21c];
        fVar4 = (float10)FUN_00a92ff0();
        fVar4 = fVar4 * (float10)*(float *)(iVar2 + 0x14) + (float10)(float)param_1[0x233];
        param_1[0x233] = (int)(float)fVar4;
        fVar4 = (float10)(float)param_1[0x232] - fVar4;
        param_1[0x232] = (int)(float)fVar4;
        if ((fVar4 < (float10)0) && ((float10)*(float *)(iVar2 + 0x18) < ABS(fVar4))) {
          param_1[0x232] = (int)-*(float *)(iVar2 + 0x18);
          param_1[0x233] = (int)(float)(float10)0;
        }
      }
      else {
        param_1[0x232] = 0;
        iVar2 = FUN_00d45b10();
        if (iVar2 == 0) {
          return;
        }
        if (param_1[0x186] == 1) {
          fVar1 = (float)param_1[0x254];
          param_1[0x254] = (int)(fVar1 + 1.0);
          if (*(float *)(param_1[0x21c] + 0x10) <= fVar1 + 1.0) {
            param_1[0x254] = 0;
            fVar1 = *(float *)(param_1[0x21c] + 0x14);
            *(undefined1 *)(param_1 + 0x242) = 0;
            param_1[0x232] = (int)-fVar1;
          }
        }
      }
      aiStack_58[0] = param_1[0x234];
      aiStack_58[1] = 0x3f800000;
      D3DXMatrixRotationY(auStack_50,(float)param_1[0x230] * 0.017453292);
      D3DXVec3TransformNormal(param_1 + 0x224,&stack0xffffff98,aiStack_58);
      FUN_005ec7b0();
    }
    iVar2 = FUN_00d467a0();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
    iVar2 = FUN_0094ab80();
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x300))(), iVar2 == 0)) {
      if ((char)param_1[0x259] != '\0') {
        (**(code **)(*param_1 + 0x1c))();
        *(undefined1 *)(param_1 + 0x259) = 0;
      }
      param_1[599] = 0;
      return;
    }
    fVar4 = (float10)FUN_00a92ff0();
    fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[599];
    param_1[599] = (int)(float)fVar4;
    if ((float10)*(float *)(param_1[0x248] + 0x10) < fVar4) {
      fVar4 = (float10)FUN_00a92ff0();
      fVar1 = (float)param_1[600];
      param_1[600] = (int)(float)(fVar4 + (float10)fVar1);
      if ((float10)*(float *)(param_1[0x248] + 0x18) < fVar4 + (float10)fVar1) {
        param_1[600] = 0;
        if ((char)param_1[0x259] == '\x01') {
          pcVar3 = *(code **)(*param_1 + 0x1c);
          *(undefined1 *)(param_1 + 0x259) = 0;
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x259) = 1;
        }
        (*pcVar3)();
      }
    }
    if (*(float *)(param_1[0x248] + 0x14) < (float)param_1[599]) {
      FUN_009f8c40();
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AB14D0  cItemChip::vf04  size=6  [class]
undefined * cItemChip::vf04(void)

{
  return &DAT_01b3539c;
}

// 00AB9880  cItemChip::vf00  size=30  [class]
undefined4 __thiscall cItemChip::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_124();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

