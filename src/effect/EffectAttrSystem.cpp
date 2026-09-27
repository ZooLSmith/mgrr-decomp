// src/effect/EffectAttrSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E6150..009EC820, 6 functions

#include "types.h"

// 009E6150  EffectAttrSystem::Startup  size=131  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EffectAttrSystem::Startup(undefined4 param_1)

{
  int iVar1;
  
  DAT_01b7885c = param_1;
  iVar1 = FUN_009d3590(DAT_0188f5d8,param_1);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165af50);
    return 0;
  }
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165af08);
    return 0;
  }
  iVar1 = FUN_009d3670(0x32,&DAT_01b7bd48);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165aec4);
    return 0;
  }
  _DAT_01b78854 = 0;
  DAT_01b78850 = 0;
  return 1;
}

// 009EC4B0  EffectAttrSystem::RequestCall  size=507  [class]
undefined4 EffectAttrSystem::RequestCall(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_4 [4];
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((*(int *)(param_1 + 0x44) == -1) && (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar4 + 0x4bc);
    }
    if (((*(int *)(iVar3 + 0x3c) == 0) && (iVar4 = FUN_00a7c800(), iVar4 != 0)) &&
       (iVar4 = FUN_00a12210((int)*(short *)(iVar3 + 0x24)), iVar4 != 0)) {
      *(int *)(iVar3 + 0x3c) = iVar4 + 0x10;
    }
  }
  FUN_009d1f40(iVar3);
  iVar4 = FUN_00a4a2d0();
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    uVar5 = 0;
    if ((&DAT_01b7a93c)[DAT_01b78858 * 2] != 0) {
      piVar8 = (int *)((&DAT_01b7a938)[DAT_01b78858 * 2] + 0xc);
      do {
        if (*piVar8 == iVar4) {
          iVar4 = *(int *)((&DAT_01b7a938)[DAT_01b78858 * 2] + 0x10 + uVar5 * 0x1c);
          break;
        }
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 7;
      } while (uVar5 < (uint)(&DAT_01b7a93c)[DAT_01b78858 * 2]);
    }
    *(int *)(iVar3 + 0x2c) = iVar4;
  }
  bVar2 = (byte)DAT_01bea060 & 0x40;
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  iVar4 = FUN_009f9350(uVar1);
  if (((iVar4 == 0) && (iVar4 = FUN_009f93b0(uVar1), iVar4 == 0)) && (bVar2 != 0)) {
    *(undefined4 *)(iVar3 + 0x28) = 0x13;
  }
  iVar6 = EffectAttrDataManager::searchCallData(iVar3);
  iVar4 = DAT_0188f5e0;
  if (iVar6 != 0) {
    if ((*(int *)(iVar6 + 0xc) == 2) ||
       ((*(float *)(iVar6 + 0x14) != 0.0 && (*(float *)(iVar3 + 0x40) < *(float *)(iVar6 + 0x14)))))
    {
      return 1;
    }
    iVar7 = FUN_00a4a2d0();
    if (iVar7 != 0) {
      iVar4 = DAT_0188f5e4;
    }
    if ((*(int *)(iVar3 + 0x2c) != iVar4) || (DAT_01b78850 != 1)) {
      if (DAT_01b7a968 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
      }
      iVar4 = FUN_00dd3500(0x70,DAT_01b7885c);
      if ((iVar4 == 0) || (param_1 = FUN_009dbf90(), param_1 == 0)) {
        FUN_00dd5650(&DAT_0165b4f8);
      }
      else {
        FUN_009e5d90(iVar3,iVar6);
        if (DAT_01b7a890 < DAT_01b7a88c) {
          FUN_009e7b70(local_4,&param_1);
          if (DAT_01b7a968 == 0) {
            return 1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
          return 1;
        }
      }
      if (DAT_01b7a968 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
      }
    }
  }
  return 0;
}

// 009EC6B0  FUN_009ec6b0  size=38  [between]
uint FUN_009ec6b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = EffectAttrDataManager::searchCallData(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 8) >> 0x1e & 1;
}

// 009EC6E0  FUN_009ec6e0  size=99  [between]
void FUN_009ec6e0(int param_1)

{
  undefined1 local_120 [284];
  
  FUN_00e01ca0();
  FUN_00dffb20(*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00e020f0(*(int *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dffac0(*(int *)(param_1 + 0x60));
  }
  thunk_FUN_00e00b80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),param_1,
                     local_120);
  return;
}

// 009EC750  FUN_009ec750  size=201  [between]
undefined4 FUN_009ec750(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined1 auStack_1ac [64];
  undefined1 auStack_16c [12];
  undefined1 local_160 [40];
  undefined1 auStack_138 [308];
  
  if ((*(int *)(param_1 + 0x44) != 0) && (iStack_1b4 = *(int *)(param_1 + 0x40), iStack_1b4 != 0)) {
    uStack_1b8 = 0;
    D3DXMatrixInverse(local_160);
    D3DXMatrixMultiply(auStack_1ac,param_1,auStack_16c);
    FUN_00e01ca0();
    FUN_00e020f0(*(undefined4 *)(param_1 + 0x44));
    FUN_00dffbc0(*(undefined2 *)(param_1 + 0x50));
    FUN_00e00130(&uStack_1b8);
    FUN_00dffb20(*(undefined4 *)(param_1 + 0x48));
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_00dffac0(*(int *)(param_1 + 0x60));
    }
    uVar1 = thunk_FUN_00e00b80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                               param_1,auStack_138);
    return uVar1;
  }
  return 0;
}

// 009EC820  EffectAttrSystem::CallPLParentForce  size=146  [class]
undefined4 EffectAttrSystem::CallPLParentForce(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [284];
  
  iVar1 = DAT_01be8e58;
  if (DAT_01be8e58 == 0) {
    FUN_00dd5650(&DAT_0165b548);
    return 0;
  }
  FID_conflict__memcpy(local_160,param_1,0x40);
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  FUN_00e01ca0();
  FUN_00e020f0(iVar1);
  if (*(int *)((int)param_1 + 0x60) != 0) {
    FUN_00dffac0(*(int *)((int)param_1 + 0x60));
  }
  uVar2 = thunk_FUN_00e00b80(*(undefined4 *)((int)param_1 + 0x54),
                             *(undefined4 *)((int)param_1 + 0x58),local_160,local_120);
  return uVar2;
}

