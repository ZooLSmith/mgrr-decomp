// src/effect/et9200/Et9200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7860..00AB8F50, 8 functions

#include "mgrr.h"
#include "Et9200.h"

// 005D7860  Et9200::vf50  size=32  [class]
void __fastcall Et9200::vf50(int param_1)

{
  if (*(char *)(param_1 + 0x8ac) == '\0') {
    FUN_00a93170();
    *(undefined1 *)(param_1 + 0x8ac) = 1;
  }
  Behavior::vf50();
  return;
}

// 005D7880  Et9200::vf44  size=96  [class]
void __fastcall Et9200::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x8a0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x888));
  }
  RayCastManager::getWork(param_1 + 0x884);
  RayCastManager::getWork(param_1 + 0x8a8);
  if (*(int *)(param_1 + 0x8a0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x888));
  }
  FUN_00dd7270();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 005D78E0  FUN_005d78e0  size=26  [between]
void __fastcall FUN_005d78e0(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x876) = 1;
  (*pcVar1)();
  *(undefined1 *)(param_1 + 0x21e) = 1;
  return;
}

// 005D7900  Et9200::vf4C  size=1332  [class]
void __fastcall Et9200::vf4C(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  int iStack_c4;
  int iStack_bc;
  int iStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1[0x22d] == 0) {
    if ((DAT_018b9174 == 0x168) && (iVar4 = FUN_00d4f040(param_1[0x22c],1), iVar4 != 0)) {
      param_1[0x22d] = 1;
      Behavior::vf4C();
      return;
    }
    goto LAB_005d7e26;
  }
  piVar5 = (int *)FUN_00a6e640();
  uVar19 = 1;
  iVar4 = *piVar5;
  uVar17 = 1;
  uVar6 = FUN_00c1be00(param_1[0x13b]);
  iVar4 = (**(code **)(iVar4 + 0x24))(uVar6,uVar17,uVar19);
  if ((char)param_1[0x21e] != '\0') goto LAB_005d7e26;
  if (param_1[0x228] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x222));
  }
  piVar5 = (int *)FUN_00c13920();
  iVar7 = (**(code **)(*piVar5 + 0x28))(0xffffffff);
  iStack_b8 = iVar7;
  pfVar8 = (float *)FUN_00a7c8b0();
  pfVar9 = (float *)(**(code **)(*param_1 + 0x68))();
  fVar3 = SQRT((pfVar9[2] - pfVar8[2]) * (pfVar9[2] - pfVar8[2]) +
               (*pfVar9 - *pfVar8) * (*pfVar9 - *pfVar8));
  if (param_1[0x13b] != 0) {
    if (*(char *)((int)param_1 + 0x877) == '\0') {
      piVar5 = (int *)FUN_00c14bb0();
      iVar10 = (**(code **)(*piVar5 + 0x2c))(param_1[0x13b]);
      if (iVar10 != 0) {
        uVar6 = FUN_00910a40(iVar10);
        FUN_00910ab0(uVar6);
        FUN_00916360();
        *(undefined1 *)((int)param_1 + 0x877) = 1;
      }
    }
    bVar12 = false;
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar20 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar10 = FUN_00dd6d80(puVar20);
      if (((iVar10 != 0) && (iVar10 = (**(code **)(*piVar5 + 0x368))(), iVar10 != 0)) &&
         (iVar10 = FUN_00b7f610(), iVar10 == 8)) {
        bVar12 = true;
      }
    }
    iVar10 = FUN_00c1bd80();
    if (((iVar10 == 0) && (!bVar12)) && (iVar4 != 0)) {
      iVar4 = FUN_00907640(param_1 + 0x221,&iStack_bc,0);
      if (((iVar4 != 0) && (FUN_0112bcf0(), iVar7 != 0)) &&
         ((iStack_b8 = FUN_00a7c8a0(), iStack_b8 != 0 &&
          (iStack_c4 = 0, 0 < *(int *)(iStack_bc + 0x14))))) {
        iVar4 = 0;
        do {
          iVar7 = *(int *)(*(int *)(iStack_bc + 0x10) + 0x28 + iVar4);
          if ((((*(char *)(iVar7 + 0x18) == '\x02') && (iVar7 = FUN_00445cc0(iVar7), iVar7 != 0)) &&
              (uVar11 = *(uint *)(iVar7 + 0xc), uVar11 != 0)) &&
             ((*(int *)((-(uint)(uVar11 != 0) & uVar11) + 0x28) != 0 &&
              (iVar7 = FUN_008f7780(iVar7), iVar7 == iStack_b8)))) {
            if (DAT_018b9174 == 0x168) {
              FUN_00c81e40(0x27);
            }
            pcVar2 = *(code **)(*param_1 + 0x1c);
            *(undefined1 *)((int)param_1 + 0x876) = 1;
            (*pcVar2)();
            FUN_00c50bf0(param_1[0x13b]);
            FUN_0040e950();
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_34 = 0xffffffff;
            uStack_38 = 0;
            uStack_68 = 0xffffffff;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_5c = 0;
            uStack_64 = 1;
            uStack_60 = 2;
            FUN_00c5e350(param_1,&uStack_84,&uStack_60);
            *(undefined1 *)(param_1 + 0x21e) = 1;
            if (*(char *)((int)param_1 + 0x877) != '\0') {
              FUN_0091a8a0();
            }
            break;
          }
          iStack_c4 = iStack_c4 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iStack_c4 < *(int *)(iStack_bc + 0x14));
      }
      iVar4 = FUN_00a12210(1);
      iVar7 = FUN_00a12210(2);
      if ((iVar4 != 0) && (iVar7 != 0)) {
        uVar6 = FUN_009f8b40(0,0,0);
        uVar6 = FUN_00410130(7,uVar6);
        fStack_b0 = *(float *)(iVar4 + 0x40);
        fStack_ac = *(float *)(iVar4 + 0x44);
        fStack_a8 = *(float *)(iVar4 + 0x48);
        fStack_a4 = *(float *)(iVar4 + 0x4c);
        fStack_a0 = *(float *)(iVar7 + 0x40) - fStack_b0;
        fStack_9c = *(float *)(iVar7 + 0x44) - fStack_ac;
        fStack_98 = *(float *)(iVar7 + 0x48) - fStack_a8;
        fStack_94 = *(float *)(iVar7 + 0x4c) - fStack_a4;
        FUN_004688f0(param_1 + 0x221,0,&fStack_b0,&fStack_a0,0x3dcccccd,uVar6,0,0,0,"InfraredLine");
        FUN_0090fb00(&uStack_60);
      }
    }
  }
  if (*(char *)((int)param_1 + 0x876) == '\0') {
    fVar1 = (float)param_1[0x220];
    uVar11 = DAT_01bea090 >> 6;
    bVar12 = false;
    param_1[0x220] = (int)(fVar1 + 1.0);
    *(byte *)(param_1 + 0x21d) = (byte)uVar11 & 1;
    if (10.0 < fVar1 + 1.0) {
      param_1[0x220] = 0;
      if (fVar3 < 30.0) {
        uVar21 = 0;
        uVar18 = 0;
        pcVar16 = "InfraredLine";
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar19 = 0x1e;
        uVar6 = FUN_00a7c8b0(0x1e,0,0,0,"InfraredLine",0,0);
        uVar17 = (**(code **)(*param_1 + 0x68))(uVar6);
        FUN_00468970(param_1 + 0x22a,0,uVar17,uVar6,uVar19,uVar13,uVar14,uVar15,pcVar16,uVar18,
                     uVar21);
        HavokRayCastManager::set(&uStack_60);
      }
      if ((param_1[0x22a] != 0) && (fVar3 < 30.0)) {
        iVar4 = FUN_00907560(param_1 + 0x22a,&fStack_b0,0,0,0,0,0,0);
        bVar12 = iVar4 == 0;
      }
    }
    if (((char)param_1[0x21d] != '\0') && (bVar12)) {
      if (param_1[0x13b] != 0) {
        if (*(char *)((int)param_1 + 0x877) == '\0') goto LAB_005d7e10;
        FUN_0091a8a0();
      }
      (**(code **)(*param_1 + 0x1c))();
      *(undefined1 *)((int)param_1 + 0x876) = 1;
    }
  }
LAB_005d7e10:
  if (param_1[0x228] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x222));
  }
LAB_005d7e26:
  Behavior::vf4C();
  return;
}

// 005D7E40  Et9200::vf40  size=263  [class]
undefined4 __fastcall Et9200::vf40(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    FUN_00dd7240();
    *(undefined1 *)((int)param_1 + 0x877) = 0;
    piVar2 = (int *)FUN_00c14bb0();
    iVar1 = (**(code **)(*piVar2 + 0x2c))(param_1[0x13b]);
    if (iVar1 != 0) {
      uVar3 = FUN_00910a40(iVar1);
      FUN_00910ab0(uVar3);
      FUN_00916360();
      *(undefined1 *)((int)param_1 + 0x877) = 1;
    }
    param_1[0x21f] = 0;
    *(undefined1 *)(param_1 + 0x21d) = 0;
    *(undefined2 *)((int)param_1 + 0x875) = 0;
    *(undefined1 *)(param_1 + 0x21e) = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_174 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_174);
    if (iVar1 != 0) {
      uVar3 = FUN_004039a0(1,param_1,0);
      FUN_00a963e0(uVar3);
      (**(code **)(*param_1 + 0x20))();
      param_1[0x220] = 0;
      *(undefined1 *)(param_1 + 0x22b) = 0;
      iVar1 = FUN_00e03ea0("P168_IN");
      param_1[0x22c] = iVar1;
      param_1[0x22d] = 0;
      return 1;
    }
  }
  return 0;
}

// 00AA6DF0  Et9200::Et9200  size=60  [class]
undefined4 * __fastcall Et9200::Et9200(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x21c] = 0;
  FUN_00904d60();
  param_1[0x228] = 0;
  FUN_00904d60();
  return param_1;
}

// 00AA6E30  Et9200::vf04  size=6  [class]
undefined * Et9200::vf04(void)

{
  return &DAT_01b352e0;
}

// 00AB8F50  Et9200::vf00  size=30  [class]
undefined4 __thiscall Et9200::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_42();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

