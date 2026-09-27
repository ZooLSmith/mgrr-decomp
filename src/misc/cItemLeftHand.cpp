// src/misc/cItemLeftHand.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EA9F0..00AB9860, 7 functions

#include "mgrr.h"
#include "cItemLeftHand.h"

// 005EA9F0  cItemLeftHand::startup  size=365  [class]
undefined4 __fastcall cItemLeftHand::startup(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  undefined *puVar8;
  
  uVar2 = FUN_0094b770();
  *(undefined4 *)(param_1 + 0x920) = uVar2;
  iVar3 = cItemObjectBase::startup();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00a04500();
  FUN_00a8cb50(0);
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x92c) = 0;
  *(undefined1 *)(param_1 + 0x938) = 0;
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined2 *)(param_1 + 0x908) = 0x100;
  *(undefined2 *)(param_1 + 0x939) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x93c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x948) = 0x40000000;
  iVar3 = FUN_00932720();
  if (iVar3 == 0x140) {
    pbVar6 = (byte *)0x163cba0;
    pbVar4 = DAT_018b925c;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005eaae0:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005eaae5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005eaae0;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005eaae5:
    if (iVar3 == 0) {
      FUN_00c81e40(0x3d);
    }
  }
  FUN_00aa92c0(1);
  piVar5 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar5 + 0x28))(0xffffffff);
  if (iVar3 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      if (iVar3 != 0) {
        FUN_00b7ab80(0x41f00000,0x3d4ccccd);
      }
    }
  }
  return 1;
}

// 005EAB60  cItemLeftHand::thunk_vf44  size=5  [class]
void __fastcall cItemLeftHand::thunk_vf44(int param_1)

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

// 005EAB70  cItemLeftHand::vf50  size=428  [class]
void __fastcall cItemLeftHand::vf50(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  
  if (((*(char *)((int)param_1 + 0x939) == '\0') || ((char)param_1[0x242] == '\0')) ||
     (*(char *)((int)param_1 + 0x93a) != '\0')) {
    if (param_1[0x244] == 0) {
      fVar9 = (float10)FUN_00a92ff0();
      param_1[0x15] =
           (int)(float)(fVar9 * (float10)(float)param_1[0x225] + (float10)(float)param_1[0x15]);
    }
    if ((char)param_1[0x242] == '\x01') {
      *(undefined1 *)(param_1 + 0x24b) = 1;
    }
    if (((char)param_1[0x242] == '\0') || ((param_1[0xd9] & 0x40000U) == 0)) {
      FUN_00a93170();
    }
    Behavior::vf50();
    return;
  }
  iVar2 = FUN_00932720();
  iVar3 = FUN_0094ea60(0x6f2396e8,param_1[0x24f]);
  bVar7 = false;
  if (iVar3 == 0) {
    FUN_00951d60(0x6f2396e8,param_1[0x24f]);
    uVar4 = FUN_0094ea80(0x6f2396e8,0);
    FUN_00cc1250(1,uVar4);
    bVar7 = true;
    if (iVar2 == 0x140) {
      pbVar6 = (byte *)0x163cba0;
      pbVar5 = DAT_018b925c;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_005eac21:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005eac26;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_005eac21;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005eac26:
      bVar7 = true;
      if (iVar3 == 0) {
        param_1[0x251] = 1;
      }
    }
  }
  FUN_00cbac80(0xffffffff,0x7f,0);
  (**(code **)(*param_1 + 0x20))();
  *(undefined2 *)((int)param_1 + 0x939) = 0x101;
  FUN_00e5e050("core_se_sys_chip_get",0);
  if (iVar2 == 0x140) {
    pbVar6 = (byte *)0x163cba0;
    pbVar5 = DAT_018b925c;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005eac91:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_005eac96;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005eac91;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_005eac96:
    if (iVar2 == 0) {
      param_1[0x252] = 0x40000000;
      param_1[0x250] = 1;
      return;
    }
  }
  if (bVar7) {
    FUN_0094ea90(0x6f2396e8);
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 005ED460  cItemLeftHand::vf48  size=641  [class]
void __fastcall cItemLeftHand::vf48(int *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  int iStack_5c;
  int aiStack_58 [2];
  undefined1 auStack_50 [76];
  
  BehaviorDebrisActor::vf48();
  if ((char)param_1[0x242] != '\0') {
    fVar7 = (float10)FUN_00a92ff0();
    param_1[0x236] = (int)(float)((float10)(float)param_1[0x236] - fVar7);
  }
  if ((float)param_1[0x236] <= 0.0) {
    param_1[0x236] = 0;
  }
  if (param_1[0x244] == 0) {
    if ((char)param_1[0x242] == '\0') {
      iVar3 = FUN_00d45b10();
      if (iVar3 == 0) {
        param_1[0x232] = 0;
        return;
      }
      iVar3 = param_1[0x21c];
      fVar7 = (float10)FUN_00a92ff0();
      fVar7 = fVar7 * (float10)*(float *)(iVar3 + 0x14) + (float10)(float)param_1[0x233];
      param_1[0x233] = (int)(float)fVar7;
      fVar7 = (float10)(float)param_1[0x232] - fVar7;
      param_1[0x232] = (int)(float)fVar7;
      if ((fVar7 < (float10)0) && ((float10)*(float *)(iVar3 + 0x18) < ABS(fVar7))) {
        param_1[0x232] = (int)-*(float *)(iVar3 + 0x18);
        param_1[0x233] = (int)(float)(float10)0;
      }
    }
    else {
      param_1[0x232] = 0;
      iVar3 = FUN_00d45b10();
      if (iVar3 == 0) {
        return;
      }
      if (param_1[0x186] == 0) {
        fVar1 = (float)param_1[0x24a];
        param_1[0x24a] = (int)(fVar1 + 1.0);
        if (*(float *)(param_1[0x21c] + 0x10) <= fVar1 + 1.0) {
          param_1[0x24a] = 0;
          fVar1 = *(float *)(param_1[0x21c] + 0x14);
          *(undefined1 *)(param_1 + 0x242) = 0;
          param_1[0x232] = (int)-fVar1;
        }
      }
    }
    uStack_60 = 0;
    iStack_5c = param_1[0x232];
    aiStack_58[0] = param_1[0x234];
    aiStack_58[1] = 0x3f800000;
    D3DXMatrixRotationY(auStack_50,(float)param_1[0x230] * 0.017453292);
    D3DXVec3TransformNormal(param_1 + 0x224,auStack_68,aiStack_58);
    FUN_005ec7b0();
  }
  else {
    param_1[0x236] = 0;
    *(undefined1 *)(param_1 + 0x242) = 1;
  }
  if ((char)param_1[0x24e] != '\0') {
    (**(code **)(*param_1 + 0x1c))();
    *(undefined1 *)(param_1 + 0x24e) = 0;
  }
  param_1[0x24c] = 0;
  if ((param_1[0x250] != 0) && (iVar3 = FUN_00932720(), iVar3 == 0x140)) {
    pbVar5 = (byte *)0x163cba0;
    pbVar4 = DAT_018b925c;
    do {
      bVar2 = *pbVar4;
      bVar6 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_005ed660:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005ed665;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar6 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_005ed660;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_005ed665:
    if (iVar3 == 0) {
      fVar7 = (float10)FUN_00a92ff0();
      fVar7 = (float10)(float)param_1[0x252] - fVar7 * (float10)0.016666668;
      param_1[0x252] = (int)(float)fVar7;
      if (fVar7 <= (float10)0) {
        FUN_0093b4a0("p140_DOGTAG_GET",0,0);
        if (param_1[0x251] != 0) {
          FUN_0094ea90(0x6f2396e8);
        }
        FUN_00d5ea40("P140_DOGTAG_GET",1,0);
        FUN_00945210(1,1);
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
    }
  }
  return;
}

// 00AB13C0  cItemLeftHand::cItemLeftHand  size=56  [class]
undefined4 * __fastcall cItemLeftHand::cItemLeftHand(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = cItemObjectBase::vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = vftable;
  return param_1;
}

// 00AB1400  cItemLeftHand::vf04  size=6  [class]
undefined * cItemLeftHand::vf04(void)

{
  return &DAT_01b353b0;
}

// 00AB9860  cItemLeftHand::destruct  size=30  [class]
undefined4 __thiscall cItemLeftHand::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

