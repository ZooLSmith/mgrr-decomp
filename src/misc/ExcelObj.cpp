// src/misc/ExcelObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0980..00AB76C0, 10 functions

#include "mgrr.h"
#include "ExcelObj.h"

// 005B0980  ExcelObj::vf44  size=30  [class]
void ExcelObj::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a8c820();
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 005B09A0  ExcelObj::vf48  size=29  [class]
void __fastcall ExcelObj::vf48(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  BehaviorAppBase::vf48();
  return;
}

// 005B7760  ExcelObj::getAttackInfo  size=198  [class]
int __thiscall ExcelObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *puVar1 = (uint)*param_2;
      uVar4 = 0;
      uVar5 = 0;
      if (*param_2 == 4) {
        *puVar1 = 0x12f;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        puVar1[0x23] = puVar1[0x23] | 0x20001000;
        uVar4 = 0x32;
        uVar5 = 8;
      }
      else if (*param_2 == 5) {
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        *puVar1 = 0x12f;
        puVar1[0x23] = puVar1[0x23] | 0x401000;
        puVar1[3] = 10;
        puVar1[2] = 10;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        return iVar2;
      }
      puVar1[3] = 10;
      puVar1[2] = 10;
      puVar1[1] = uVar4;
      *(undefined1 *)(puVar1 + 4) = uVar5;
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_016431a0);
  return 0;
}

// 005B7830  ExcelObj::vf50  size=39  [class]
void __fastcall ExcelObj::vf50(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b7853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 005B7860  FUN_005b7860  size=77  [callgraph]
uint FUN_005b7860(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 005BDF10  ExcelObj::startup  size=873  [class]
undefined4 __fastcall ExcelObj::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = BehaviorAppBase::startup();
  if (iVar2 != 0) {
    FUN_00dd7240();
    *(undefined4 *)(param_1 + 0x640) = 2;
    lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
    uVar4 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar4);
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x870) = 10;
      iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
      if (iVar2 != 0) {
        iVar3 = 0;
        iVar2 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x70;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        if (*(int *)(param_1 + 0x4b0) == 0xf0070) {
          iVar2 = FUN_00a82090("ExcelParts",0xf0071,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0072,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0073,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0074,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar2,4,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0075,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(4,*(undefined4 *)(param_1 + 0x4f0),iVar2,5,0xffffffff);
          }
        }
        if (*(int *)(param_1 + 0x4b0) == 0xf0076) {
          iVar2 = FUN_00a82090("ExcelParts",0xf0077,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0078,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0079,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,0xffffffff);
          }
          FUN_00a7c950();
          FUN_00a7c950();
        }
        *(undefined1 *)(param_1 + 0xae4) = 0;
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a81330();
          uVar4 = FUN_00a7c8a0();
          FUN_005b0c10(uVar4);
          FUN_005b7de0();
        }
        FUN_00a04500();
        return 1;
      }
    }
  }
  return 0;
}

// 005BE280  FUN_005be280  size=255  [between]
void FUN_005be280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  undefined *puVar5;
  int iVar6;
  
  FUN_009f8ae0(param_1);
  iVar6 = 5;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar5 = &DAT_01b351d0;
        (**(code **)(*piVar2 + 4))(&DAT_01b351d0);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
      FUN_009f8ae0(unaff_retaddr);
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar5 = &DAT_01b351c0;
        (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
        FUN_00dd6d80(puVar5);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(undefined4 *)(uVar4 + 0xaf0) = param_2;
      *(undefined4 *)(uVar4 + 0xaec) = param_1;
      *(undefined4 *)(uVar4 + 0xaf4) = param_3;
      *(undefined4 *)(uVar4 + 0xaf8) = param_4;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

// 005BE380  ExcelObj::vf4C  size=402  [class]
void __fastcall ExcelObj::vf4C(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1[0x2ac] == 0) {
    Behavior::vf4C();
    if (param_1[300] == 0xf0070) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_005b7860();
        iVar3 = (**(code **)(*piVar4 + 0x32c))();
        if (iVar3 == 0) {
          cVar2 = (char)param_1[0x2b9];
          if (cVar2 < '\x04') {
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              uVar5 = FUN_00a7c8a0();
              FUN_005b0c10(uVar5);
              FUN_005b7de0();
              *(char *)(param_1 + 0x2b9) = (char)param_1[0x2b9] + '\x01';
            }
          }
          else if (cVar2 == '\x04') {
            *(undefined1 *)(param_1 + 0x2b9) = 0xfe;
          }
          else if (cVar2 == '\x05') {
            E3_EnemyBoardDebrisSokushi::vf4C();
          }
        }
      }
    }
    if (param_1[300] == 0xf0076) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_005b7860();
        iVar3 = (**(code **)(*piVar4 + 0x32c))();
        if (iVar3 == 0) {
          cVar2 = (char)param_1[0x2b9];
          if (cVar2 < '\x02') {
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              uVar5 = FUN_00a7c8a0();
              FUN_005b0c10(uVar5);
              FUN_005b7de0();
              *(char *)(param_1 + 0x2b9) = (char)param_1[0x2b9] + '\x01';
            }
          }
          else {
            if (cVar2 == '\x02') {
              *(undefined1 *)(param_1 + 0x2b9) = 0xfe;
              return;
            }
            if (cVar2 == '\x03') {
              E3_EnemyBoardDebrisSokushi::vf4C();
              return;
            }
          }
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))();
    fVar1 = (float)param_1[0x2ad];
    param_1[0x2ad] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x2ac] = 0;
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00AAEA90  ExcelObj::vf04  size=6  [class]
undefined * ExcelObj::vf04(void)

{
  return &DAT_01b351cc;
}

// 00AB76C0  ExcelObj::destruct  size=30  [class]
undefined4 __thiscall ExcelObj::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

