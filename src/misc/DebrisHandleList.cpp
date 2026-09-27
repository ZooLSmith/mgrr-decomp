// src/misc/DebrisHandleList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093E4F0..009427E0, 35 functions

#include "types.h"

// 0093E4F0  FUN_0093e4f0  size=587  [callgraph]
void __fastcall FUN_0093e4f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_10 [2];
  char local_e;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = FUN_009f93b0(*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    iVar1 = FUN_009f8ea0(local_10,0x10,*(undefined4 *)(param_1 + 0x1c),0);
    if (iVar1 != 0) {
      iVar1 = FUN_00d46780();
      if (iVar1 != 0) {
        if (local_e == 'c') {
          local_e = '0';
        }
        else if (local_e == 'd') {
          local_e = '1';
        }
      }
      iVar1 = FUN_00d467a0();
      if (iVar1 != 0) {
        if (local_e == '8') {
          local_e = '0';
        }
        else if (local_e == '9') {
          local_e = '1';
        }
      }
      uVar2 = FUN_009fde60(local_10);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  iVar1 = FUN_00d466f0();
  if ((iVar1 != 0) &&
     ((*(int *)(param_1 + 0x1c) == 0x20080 || (*(int *)(param_1 + 0x1c) == 0x20081)))) {
    *(undefined4 *)(param_1 + 0x1c) = 0x20030;
  }
  if (*(int *)(param_1 + 0x1c) == 0x30370) {
    *(undefined4 *)(param_1 + 0x1c) = 0x20220;
  }
  if (*(int *)(param_1 + 0x1c) == 0x30371) {
    *(undefined4 *)(param_1 + 0x1c) = 0x20220;
  }
  if (*(int *)(param_1 + 0x1c) == 0x30372) {
    *(undefined4 *)(param_1 + 0x1c) = 0x20220;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x1c) == 0xd6036)) {
    *(undefined4 *)(param_1 + 0x1c) = 0xd0226;
  }
  iVar1 = (**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*DAT_01b36a50 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 4))(uVar2);
    *(float *)(param_1 + 0x24) = (float)fVar5;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 8))(uVar2);
    *(float *)(param_1 + 0x28) = (float)fVar5;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    uVar4 = (**(code **)(*piVar3 + 0xc))(uVar2);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    uVar4 = (**(code **)(*piVar3 + 0x10))(uVar2);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 0x14))(uVar2);
    *(float *)(param_1 + 0x60) = (float)fVar5;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    uVar4 = (**(code **)(*piVar3 + 0x18))(uVar2);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 0x1c))(uVar2);
    *(float *)(param_1 + 0x38) = (float)fVar5;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 0x20))(uVar2);
    *(float *)(param_1 + 0x3c) = (float)fVar5;
    piVar3 = (int *)(**(code **)(*DAT_01b36a50 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
    fVar5 = (float10)(**(code **)(*piVar3 + 0x24))(uVar2);
    *(float *)(param_1 + 0x40) = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

// 0093E740  FUN_0093e740  size=244  [callgraph]
void __fastcall FUN_0093e740(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x88);
  local_4 = lpCriticalSection;
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar4 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0x28) {
    if (((*(int *)(iVar4 + 8) == 0) && (local_8 = FUN_00a81330(), local_8 != 0)) &&
       (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      iVar3 = FUN_0093dcd0(&local_8);
      if (iVar3 == 0) {
        if (*(int *)(iVar4 + 4) == 0) {
          *(undefined4 *)(iVar4 + 0x1c) = 1;
        }
      }
      else {
        puVar5 = &DAT_01b35300;
        (**(code **)(*piVar2 + 4))(&DAT_01b35300);
        iVar3 = FUN_00dd6d80(puVar5);
        if ((iVar3 == 0) || (piVar2[0x24a] != 0)) {
          FUN_009fdde0();
        }
        else if (*(int *)(param_1 + 0x78) == 0) {
          thunk_FUN_009fdde0();
        }
        else {
          FUN_005d84f0(0x40a00000);
        }
      }
    }
    lpCriticalSection = local_4;
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 0093E8E0  FUN_0093e8e0  size=323  [callgraph]
void __fastcall FUN_0093e8e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_4;
  
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar1 = iVar5 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
    local_4 = param_1;
    for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
      if (((*(int *)(iVar5 + 4) != 0) && (local_4 = FUN_00a81330(), local_4 != 0)) &&
         (iVar2 = FUN_0093dcd0(&local_4), iVar2 == 0)) {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
    }
    for (iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
      if ((((*(int *)(iVar5 + 8) == 0) && (iVar2 = FUN_00a81330(), local_4 = iVar2, iVar2 != 0)) &&
          ((((iVar3 = FUN_00d467a0(), iVar3 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
            (((iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000 || (iVar2 == 0x42005)) ||
             (iVar2 == 0x42070)))) ||
           ((((iVar2 == 0x42300 || (iVar2 == 0x42380)) || (iVar2 == 0x42220)) || (iVar2 == 0x423a0))
           )))) && ((piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0 &&
                    (iVar2 = FUN_0093dcd0(&local_4), iVar2 != 0)))) {
        puVar6 = &DAT_01b35300;
        (**(code **)(*piVar4 + 4))(&DAT_01b35300);
        iVar2 = FUN_00dd6d80(puVar6);
        if (iVar2 != 0) {
          piVar4[0x223] = 0;
          piVar4[0x224] = 0;
          if (piVar4[0x24a] != 0) {
            piVar4[0x223] = 0;
            piVar4[0x224] = 0;
          }
        }
      }
    }
  }
  return;
}

// 0093EA30  FUN_0093ea30  size=248  [callgraph]
void __thiscall FUN_0093ea30(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  pfVar5 = param_2;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2 = (float *)0x0;
  pfVar5[3] = 1.0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar7 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  if (iVar7 != iVar1) {
    do {
      if ((((*(int *)(iVar7 + 8) == 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
          (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
         (fVar2 = *(float *)(param_1 + 0x50) - *(float *)(iVar6 + 0x40),
         fVar4 = *(float *)(param_1 + 0x54) - *(float *)(iVar6 + 0x44),
         fVar3 = *(float *)(param_1 + 0x58) - *(float *)(iVar6 + 0x48),
         SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) <= *(float *)(param_1 + 0x60))) {
        param_2 = (float *)((int)param_2 + 1);
        *pfVar5 = *pfVar5 + *(float *)(iVar6 + 0x40);
        pfVar5[1] = pfVar5[1] + *(float *)(iVar6 + 0x44);
        pfVar5[2] = *(float *)(iVar6 + 0x48) + pfVar5[2];
        pfVar5[3] = *(float *)(iVar6 + 0x4c) + pfVar5[3];
      }
      iVar7 = iVar7 + 0x28;
    } while (iVar7 != iVar1);
    if (param_2 != (float *)0x0) {
      fVar2 = (float)(int)param_2;
      if ((int)param_2 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      *pfVar5 = *pfVar5 / fVar2;
      pfVar5[1] = pfVar5[1] / fVar2;
      pfVar5[2] = pfVar5[2] / fVar2;
      pfVar5[3] = pfVar5[3] / fVar2;
    }
  }
  return;
}

// 0093EB30  FUN_0093eb30  size=450  [callgraph]
void __fastcall FUN_0093eb30(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  undefined *puVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(int *)(param_1 + 0xa0) != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar1 = iVar7 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
    for (; iVar7 != iVar1; iVar7 = iVar7 + 0x28) {
      if ((((*(int *)(iVar7 + 8) == 0) && (*(int *)(iVar7 + 0x14) == 0)) &&
          (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
         (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
        puVar9 = &DAT_01b35300;
        (**(code **)(*piVar6 + 4))(&DAT_01b35300);
        iVar5 = FUN_00dd6d80(puVar9);
        if (((iVar5 != 0) && (piVar6[0x24a] == 0)) &&
           ((fVar2 = *(float *)(param_1 + 0x50) - (float)piVar6[0x10],
            fVar4 = *(float *)(param_1 + 0x54) - (float)piVar6[0x11],
            fVar3 = *(float *)(param_1 + 0x58) - (float)piVar6[0x12],
            *(float *)(param_1 + 0x60) < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) &&
            (fVar8 = (float10)FUN_005d85a0(), (float10)*(float *)(param_1 + 0x38) < fVar8)))) {
          piVar6[0x223] = 0;
          piVar6[0x224] = 0;
          *(undefined4 *)(iVar7 + 8) = 1;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(param_1 + 0x68);
          fVar8 = (float10)FUN_00dde300(0,0x3f800000);
          *(float *)(iVar7 + 0xc) =
               (float)(fVar8 * (float10)*(float *)(param_1 + 0x40) +
                      (float10)*(float *)(param_1 + 0x3c));
        }
      }
    }
    for (iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4); iVar7 != iVar1; iVar7 = iVar7 + 0x28) {
      if (((*(int *)(iVar7 + 8) != 0) && (*(int *)(iVar7 + 0x14) == 0)) &&
         ((iVar5 = FUN_00a81330(), iVar5 != 0 &&
          (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)))) {
        puVar9 = &DAT_01b35300;
        (**(code **)(*piVar6 + 4))(&DAT_01b35300);
        iVar5 = FUN_00dd6d80(puVar9);
        if (iVar5 != 0) {
          piVar6[0x223] = 0;
          piVar6[0x224] = 0;
        }
      }
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

// 0093ED00  FUN_0093ed00  size=344  [callgraph]
void __fastcall FUN_0093ed00(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *unaff_EBX;
  int iVar7;
  undefined *puVar8;
  
  bVar2 = true;
  bVar3 = true;
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if ((iVar5 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar8);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar4 + 0x32c))();
      if (iVar5 != 0) {
        return;
      }
      iVar5 = FUN_00b8bb10();
      if (iVar5 != 0) {
        return;
      }
      iVar5 = FUN_00a8e520();
      if (iVar5 != 0) {
        return;
      }
    }
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar5 = iVar7 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  if (iVar7 != iVar5) {
    do {
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        if (*(int *)(iVar7 + 4) != 0) {
          bVar2 = false;
        }
        puVar8 = &DAT_01be9c78;
        (**(code **)(*piVar4 + 4))(&DAT_01be9c78);
        iVar6 = FUN_00dd6d80(puVar8);
        if (iVar6 != 0) {
          bVar3 = false;
        }
      }
      iVar7 = iVar7 + 0x28;
    } while (iVar7 != iVar5);
    if ((bVar2) && (!bVar3)) {
      fVar1 = *unaff_EBX;
      *unaff_EBX = fVar1 + 1.0;
      if (fVar1 + 1.0 <= 60.0) {
        return;
      }
      for (iVar7 = *(int *)((int)unaff_EBX[4] + 4); iVar7 != iVar5; iVar7 = iVar7 + 0x28) {
        iVar6 = FUN_00a81330();
        if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
          FUN_009fdde0();
        }
      }
      if (*unaff_EBX <= 60.0) {
        return;
      }
      FUN_00dd5650(&DAT_0164f4b8);
      return;
    }
  }
  *unaff_EBX = 0.0;
  return;
}

// 0093EE70  DebrisHandleList::getExplosionPos  size=105  [class]
/* WARNING: Removing unreachable block (ram,0x0093ee9d) */

void __thiscall DebrisHandleList::getExplosionPos(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = *(undefined4 *)(param_1 + 0x54);
  param_2[2] = *(undefined4 *)(param_1 + 0x58);
  param_2[3] = *(undefined4 *)(param_1 + 0x5c);
  return;
}

// 0093EEE0  DebrisHandleList::callExplosion  size=215  [class]
/* WARNING: Removing unreachable block (ram,0x0093ef19) */

void __thiscall DebrisHandleList::callExplosion(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_009dbcf0();
    FUN_009d18a0(*(undefined4 *)(param_1 + 0x1c));
    local_60 = *param_2;
    local_5c = param_2[1];
    local_40 = 0;
    local_58 = param_2[2];
    local_34 = 0x401;
    local_54 = param_2[3];
    local_50 = 0;
    local_4c = 0x3f800000;
    local_48 = 0;
    EffectAttrSystem::RequestCall(&local_60);
    piVar1 = (int *)FUN_00c206d0();
    (**(code **)(*piVar1 + 8))(2,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  return;
}

// 0093EFC0  DebrisHandleList::callExplosion_2  size=210  [class]
/* WARNING: Removing unreachable block (ram,0x0093eff7) */

void __thiscall
DebrisHandleList::callExplosion_2(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_009dbcf0();
    FUN_009d18a0(param_2);
    local_60 = *param_3;
    local_5c = param_3[1];
    local_40 = 0;
    local_58 = param_3[2];
    local_34 = 0x400;
    local_54 = param_3[3];
    local_50 = 0;
    local_4c = 0x3f800000;
    local_48 = 0;
    EffectAttrSystem::RequestCall(&local_60);
    piVar1 = (int *)FUN_00c206d0();
    (**(code **)(*piVar1 + 8))(2,param_2,param_3);
  }
  return;
}

// 0093F0C0  FUN_0093f0c0  size=227  [callgraph]
void __fastcall FUN_0093f0c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar5 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) &&
        ((((((iVar3 = FUN_00d467a0(), iVar3 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
            (iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000)) ||
           ((iVar2 == 0x42005 || (iVar2 == 0x42070)))) ||
          ((iVar2 == 0x42300 || ((iVar2 == 0x42380 || (iVar2 == 0x42220)))))) || (iVar2 == 0x423a0))
        )) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar6 = &DAT_01b35300;
      (**(code **)(*piVar4 + 4))(&DAT_01b35300);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        thunk_FUN_009fdde0();
      }
    }
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  return;
}

// 0093F1B0  FUN_0093f1b0  size=261  [callgraph]
void __thiscall FUN_0093f1b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar5 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) &&
        ((((((iVar3 = FUN_00d467a0(), iVar3 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
            (iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000)) ||
           ((iVar2 == 0x42005 || (iVar2 == 0x42070)))) ||
          ((iVar2 == 0x42300 || ((iVar2 == 0x42380 || (iVar2 == 0x42220)))))) || (iVar2 == 0x423a0))
        )) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar6 = &DAT_01b35300;
      (**(code **)(*piVar4 + 4))(&DAT_01b35300);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        if (param_3 == 0) {
          FUN_005d84f0(param_2);
        }
        else {
          FUN_005d8530(param_2);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  return;
}

// 0093F4B0  FUN_0093f4b0  size=402  [callgraph]
void __fastcall FUN_0093f4b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar6 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  for (; iVar6 != iVar1; iVar6 = iVar6 + 0x28) {
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar8 = &DAT_01b35300;
      (**(code **)(*piVar5 + 4))(&DAT_01b35300);
      iVar4 = FUN_00dd6d80(puVar8);
      if (iVar4 != 0) {
        if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x34) == 0)) {
          piVar5[0x24a] = 0;
          piVar5[0x223] = 1;
          piVar5[0x224] = 1;
          FUN_005d9490();
        }
        else {
          fVar7 = (float10)FUN_005d85a0();
          if (fVar7 <= (float10)*(float *)(param_1 + 0x38)) {
            FUN_005d84f0(0x40a00000);
            piVar5[0x223] = 1;
            piVar5[0x224] = 0;
            piVar5[0x24a] = 0;
            *(undefined4 *)(iVar6 + 8) = 1;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x68);
            fVar7 = (float10)FUN_00dde300(0,0x3f800000);
            fVar2 = *(float *)(param_1 + 0x40);
            fVar3 = *(float *)(param_1 + 0x3c);
            *(undefined4 *)(iVar6 + 0x14) = 1;
            *(float *)(iVar6 + 0xc) = (float)(fVar7 * (float10)fVar2 + (float10)fVar3);
          }
          else {
            piVar5[0x223] = 0;
            piVar5[0x224] = 0;
            piVar5[0x24a] = 0;
            *(undefined4 *)(iVar6 + 8) = 1;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x68);
            fVar7 = (float10)FUN_00dde300(0,0x3f800000);
            fVar2 = *(float *)(param_1 + 0x40);
            fVar3 = *(float *)(param_1 + 0x3c);
            *(undefined4 *)(iVar6 + 0x18) = 1;
            *(float *)(iVar6 + 0xc) = (float)(fVar7 * (float10)fVar2 + (float10)fVar3);
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  return;
}

// 0093F7A0  FUN_0093f7a0  size=103  [callgraph]
void __thiscall FUN_0093f7a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = iVar4 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0x28) {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar5 = &DAT_01b35300;
      (**(code **)(*piVar3 + 4))(&DAT_01b35300);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        FUN_005d85c0(param_2);
      }
    }
  }
  return;
}

// 0093FA20  FUN_0093fa20  size=399  [callgraph]
void __fastcall FUN_0093fa20(int param_1)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  local_28 = iVar6 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  bVar2 = false;
  local_24 = param_1;
  if (iVar6 != local_28) {
    do {
      local_2c = FUN_00a81330();
      if (local_2c != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          iVar4 = FUN_0093dcd0(&local_2c);
          if (iVar4 != 0) {
            puVar7 = &DAT_01b35300;
            (**(code **)(*piVar3 + 4))(&DAT_01b35300);
            iVar4 = FUN_00dd6d80(puVar7);
            if (iVar4 != 0) {
              thunk_FUN_009fdde0();
              bVar2 = true;
            }
          }
        }
      }
      iVar6 = iVar6 + 0x28;
    } while (iVar6 != local_28);
    if (bVar2) {
      local_20 = 0.0;
      local_30 = 0;
      local_1c = 0.0;
      local_18 = 0.0;
      local_14 = 1.0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      iVar6 = iVar4 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
      if (iVar4 != iVar6) {
        do {
          iVar5 = FUN_00a81330();
          if (iVar5 != 0) {
            piVar3 = (int *)FUN_00a7c8a0();
            if (piVar3 != (int *)0x0) {
              puVar7 = &DAT_01be9c78;
              (**(code **)(*piVar3 + 4))(&DAT_01be9c78);
              iVar5 = FUN_00dd6d80(puVar7);
              if (iVar5 == 0) {
                local_30 = local_30 + 1;
                local_20 = (float)piVar3[0x10] + local_20;
                local_1c = (float)piVar3[0x11] + local_1c;
                local_18 = (float)piVar3[0x12] + local_18;
                local_14 = (float)piVar3[0x13] + local_14;
              }
            }
          }
          iVar4 = iVar4 + 0x28;
        } while (iVar4 != iVar6);
        if (local_30 != 0) {
          local_28 = local_30;
          fVar1 = (float)local_30;
          if (local_30 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          local_20 = local_20 / fVar1;
          local_1c = local_1c / fVar1;
          local_18 = local_18 / fVar1;
          local_14 = local_14 / fVar1;
        }
      }
      DebrisHandleList::callExplosion(&local_20);
    }
  }
  return;
}

// 00940C10  FUN_00940c10  size=60  [callgraph]
void __fastcall FUN_00940c10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + 0x20);
  iVar2 = 0xc;
  do {
    FUN_0093f7a0(uVar1);
    FUN_0093f1b0(0x40000000,0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00940C50  FUN_00940c50  size=251  [callgraph]
void __thiscall FUN_00940c50(int param_1,int param_2)

{
  _RTL_CRITICAL_SECTION *p_Var1;
  int iVar2;
  int iVar3;
  int *piVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  _RTL_CRITICAL_SECTION *p_Var5;
  undefined *puVar6;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  local_4 = 0xc;
  do {
    if (lpCriticalSection[-5].LockCount == param_2) {
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        EnterCriticalSection(lpCriticalSection);
      }
      p_Var5 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
      p_Var1 = (_RTL_CRITICAL_SECTION *)
               ((int)p_Var5 +
               (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28);
      for (; p_Var5 != p_Var1; p_Var5 = (_RTL_CRITICAL_SECTION *)&p_Var5[1].LockSemaphore) {
        iVar2 = FUN_00a81330();
        if (((iVar2 != 0) &&
            ((((((iVar3 = FUN_00d467a0(), iVar3 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
                (iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000)) ||
               ((iVar2 == 0x42005 || (iVar2 == 0x42070)))) ||
              ((iVar2 == 0x42300 || ((iVar2 == 0x42380 || (iVar2 == 0x42220)))))) ||
             (iVar2 == 0x423a0)))) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
          puVar6 = &DAT_01b35300;
          (**(code **)(*piVar4 + 4))(&DAT_01b35300);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            thunk_FUN_009fdde0();
          }
        }
      }
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00940D50  FUN_00940d50  size=273  [callgraph]
void __thiscall FUN_00940d50(int param_1,int param_2,undefined4 param_3)

{
  _RTL_CRITICAL_SECTION *p_Var1;
  int iVar2;
  int iVar3;
  int *piVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  _RTL_CRITICAL_SECTION *p_Var5;
  undefined *puVar6;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  local_4 = 0xc;
  do {
    if (lpCriticalSection[-5].LockCount == param_2) {
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        EnterCriticalSection(lpCriticalSection);
      }
      lpCriticalSection[-1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Var5 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
      p_Var1 = (_RTL_CRITICAL_SECTION *)
               ((int)p_Var5 +
               (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28);
      for (; p_Var5 != p_Var1; p_Var5 = (_RTL_CRITICAL_SECTION *)&p_Var5[1].LockSemaphore) {
        iVar2 = FUN_00a81330();
        if (((iVar2 != 0) &&
            ((((((iVar3 = FUN_00d467a0(), iVar3 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
                (iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000)) ||
               ((iVar2 == 0x42005 || (iVar2 == 0x42070)))) ||
              ((iVar2 == 0x42300 || ((iVar2 == 0x42380 || (iVar2 == 0x42220)))))) ||
             (iVar2 == 0x423a0)))) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
          puVar6 = &DAT_01b35300;
          (**(code **)(*piVar4 + 4))(&DAT_01b35300);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            FUN_005d84f0(param_3);
          }
        }
      }
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00941080  FUN_00941080  size=444  [callgraph]
void __thiscall FUN_00941080(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined *puVar10;
  int local_8;
  
  piVar8 = (int *)(param_1 + 0xe0);
  local_8 = 0xc;
  do {
    if (piVar8[-0x23] == param_2) {
      if (*piVar8 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar8 + -6));
      }
      iVar7 = piVar8[-0x24];
      piVar8[-0xc] = 0;
      iVar3 = *(int *)(iVar7 + 8);
      iVar4 = *(int *)(iVar7 + 4);
      for (iVar7 = *(int *)(iVar7 + 4); iVar7 != iVar4 + iVar3 * 0x28; iVar7 = iVar7 + 0x28) {
        iVar5 = FUN_00a81330();
        if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
          puVar10 = &DAT_01b35300;
          (**(code **)(*piVar6 + 4))(&DAT_01b35300);
          iVar5 = FUN_00dd6d80(puVar10);
          if (iVar5 != 0) {
            if ((piVar8[-0x25] == 0) || (piVar8[-0x1b] == 0)) {
              piVar6[0x24a] = 0;
              piVar6[0x223] = 1;
              piVar6[0x224] = 1;
              FUN_005d9490();
            }
            else {
              fVar9 = (float10)FUN_005d85a0();
              if (fVar9 <= (float10)(float)piVar8[-0x1a]) {
                FUN_005d84f0(0x40a00000);
                piVar6[0x223] = 1;
                piVar6[0x224] = 0;
                piVar6[0x24a] = 0;
                *(undefined4 *)(iVar7 + 8) = 1;
                piVar8[-0xe] = piVar8[-0xe] + 1;
                *(int *)(iVar7 + 0x10) = piVar8[-0xe];
                fVar9 = (float10)FUN_00dde300(0,0x3f800000);
                fVar1 = (float)piVar8[-0x18];
                fVar2 = (float)piVar8[-0x19];
                *(undefined4 *)(iVar7 + 0x14) = 1;
                *(float *)(iVar7 + 0xc) = (float)(fVar9 * (float10)fVar1 + (float10)fVar2);
              }
              else {
                piVar6[0x223] = 0;
                piVar6[0x224] = 0;
                piVar6[0x24a] = 0;
                *(undefined4 *)(iVar7 + 8) = 1;
                piVar8[-0xe] = piVar8[-0xe] + 1;
                *(int *)(iVar7 + 0x10) = piVar8[-0xe];
                fVar9 = (float10)FUN_00dde300(0,0x3f800000);
                fVar1 = (float)piVar8[-0x18];
                fVar2 = (float)piVar8[-0x19];
                *(undefined4 *)(iVar7 + 0x18) = 1;
                *(float *)(iVar7 + 0xc) = (float)(fVar9 * (float10)fVar1 + (float10)fVar2);
              }
            }
          }
        }
      }
      if (*piVar8 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar8 + -6));
      }
    }
    piVar8 = piVar8 + 0x2c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 00941240  FUN_00941240  size=172  [callgraph]
void __thiscall FUN_00941240(int param_1,int param_2,PRTL_CRITICAL_SECTION_DEBUG param_3)

{
  _RTL_CRITICAL_SECTION *p_Var1;
  int iVar2;
  int *piVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  _RTL_CRITICAL_SECTION *p_Var4;
  undefined *puVar5;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  local_4 = 0xc;
  do {
    if (lpCriticalSection[-5].LockCount == param_2) {
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        EnterCriticalSection(lpCriticalSection);
      }
      lpCriticalSection[-1].DebugInfo = param_3;
      p_Var4 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
      p_Var1 = (_RTL_CRITICAL_SECTION *)
               ((int)p_Var4 +
               (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28);
      for (; p_Var4 != p_Var1; p_Var4 = (_RTL_CRITICAL_SECTION *)&p_Var4[1].LockSemaphore) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar5 = &DAT_01b35300;
          (**(code **)(*piVar3 + 4))(&DAT_01b35300);
          iVar2 = FUN_00dd6d80(puVar5);
          if (iVar2 != 0) {
            piVar3[0x24a] = (int)param_3;
          }
        }
      }
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009412F0  FUN_009412f0  size=195  [callgraph]
void __thiscall FUN_009412f0(int param_1,int param_2)

{
  _RTL_CRITICAL_SECTION *p_Var1;
  int iVar2;
  int *piVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  _RTL_CRITICAL_SECTION *p_Var4;
  undefined *puVar5;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  local_4 = 0xc;
  do {
    if (lpCriticalSection[-5].LockCount == param_2) {
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        EnterCriticalSection(lpCriticalSection);
      }
      lpCriticalSection[-1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Var4 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
      p_Var1 = (_RTL_CRITICAL_SECTION *)
               ((int)p_Var4 +
               (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28);
      for (; p_Var4 != p_Var1; p_Var4 = (_RTL_CRITICAL_SECTION *)&p_Var4[1].LockSemaphore) {
        if (lpCriticalSection[-6].SpinCount == 0) {
          iVar2 = FUN_00a81330();
          if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
            puVar5 = &DAT_01b35300;
            (**(code **)(*piVar3 + 4))(&DAT_01b35300);
            iVar2 = FUN_00dd6d80(puVar5);
            if (iVar2 != 0) {
              FUN_005d9490();
            }
          }
        }
        else {
          p_Var4->LockCount = 0;
        }
      }
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009413C0  FUN_009413c0  size=135  [callgraph]
void __thiscall FUN_009413c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x50);
  local_4 = 0xc;
  do {
    if (piVar4[1] == param_2) {
      iVar5 = *(int *)(*piVar4 + 4);
      iVar1 = iVar5 + *(int *)(*piVar4 + 8) * 0x28;
      for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar6 = &DAT_01b35300;
          (**(code **)(*piVar3 + 4))(&DAT_01b35300);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            FUN_005d85c0(*(undefined4 *)(iVar5 + 0x20));
          }
        }
      }
    }
    piVar4 = piVar4 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00941450  FUN_00941450  size=136  [callgraph]
void __thiscall FUN_00941450(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x50);
  local_4 = 0xc;
  do {
    if (piVar4[1] == param_2) {
      iVar5 = *(int *)(*piVar4 + 4);
      iVar1 = iVar5 + *(int *)(*piVar4 + 8) * 0x28;
      for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar6 = &DAT_01b35300;
          (**(code **)(*piVar3 + 4))(&DAT_01b35300);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            FUN_005d85c0(param_3);
          }
        }
      }
    }
    piVar4 = piVar4 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00941570  FUN_00941570  size=134  [callgraph]
void __thiscall FUN_00941570(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x50);
  local_4 = 0xc;
  do {
    if (piVar4[1] == param_2) {
      iVar5 = *(int *)(*piVar4 + 4);
      iVar1 = iVar5 + *(int *)(*piVar4 + 8) * 0x28;
      for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar6 = &DAT_01be9c78;
          (**(code **)(*piVar3 + 4))(&DAT_01be9c78);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            piVar3[0x2ff] = param_3;
          }
        }
      }
    }
    piVar4 = piVar4 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00941600  FUN_00941600  size=134  [callgraph]
void __thiscall FUN_00941600(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x50);
  local_4 = 0xc;
  do {
    if (piVar4[1] == param_2) {
      iVar5 = *(int *)(*piVar4 + 4);
      iVar1 = iVar5 + *(int *)(*piVar4 + 8) * 0x28;
      for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar6 = &DAT_01be9c78;
          (**(code **)(*piVar3 + 4))(&DAT_01be9c78);
          iVar2 = FUN_00dd6d80(puVar6);
          if (iVar2 != 0) {
            piVar3[0x300] = param_3;
          }
        }
      }
    }
    piVar4 = piVar4 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009416E0  FUN_009416e0  size=517  [callgraph]
void __thiscall FUN_009416e0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int local_2c;
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_1 = param_1 + 0x40;
  local_28 = 0xc;
  do {
    if (*(int *)(param_1 + 0x14) == param_2) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      iVar1 = iVar7 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
      bVar3 = false;
      if (iVar7 != iVar1) {
        do {
          iVar4 = FUN_00a81330();
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_00a7c8a0();
            if (piVar5 != (int *)0x0) {
              iVar6 = FUN_00d467a0();
              if ((((((iVar6 != 0) && (*(int *)(iVar4 + 0x24) == 0x42131)) ||
                    (iVar4 = *(int *)(iVar4 + 0x24), iVar4 == 0x42000)) ||
                   ((iVar4 == 0x42005 || (iVar4 == 0x42070)))) ||
                  ((iVar4 == 0x42300 || ((iVar4 == 0x42380 || (iVar4 == 0x42220)))))) ||
                 (iVar4 == 0x423a0)) {
                puVar8 = &DAT_01b35300;
                (**(code **)(*piVar5 + 4))(&DAT_01b35300);
                iVar4 = FUN_00dd6d80(puVar8);
                if (iVar4 != 0) {
                  thunk_FUN_009fdde0();
                  bVar3 = true;
                }
              }
            }
          }
          iVar7 = iVar7 + 0x28;
        } while (iVar7 != iVar1);
        if (bVar3) {
          local_20 = 0.0;
          local_1c = 0.0;
          local_2c = 0;
          local_18 = 0.0;
          local_14 = 1.0;
          iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
          iVar1 = iVar7 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
          if (iVar7 != iVar1) {
            do {
              iVar4 = FUN_00a81330();
              if (iVar4 != 0) {
                piVar5 = (int *)FUN_00a7c8a0();
                if (piVar5 != (int *)0x0) {
                  puVar8 = &DAT_01be9c78;
                  (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
                  iVar4 = FUN_00dd6d80(puVar8);
                  if (iVar4 == 0) {
                    local_2c = local_2c + 1;
                    local_20 = (float)piVar5[0x10] + local_20;
                    local_1c = (float)piVar5[0x11] + local_1c;
                    local_18 = (float)piVar5[0x12] + local_18;
                    local_14 = (float)piVar5[0x13] + local_14;
                  }
                }
              }
              iVar7 = iVar7 + 0x28;
            } while (iVar7 != iVar1);
            if (local_2c != 0) {
              fVar2 = (float)local_2c;
              if (local_2c < 0) {
                fVar2 = fVar2 + 4.2949673e+09;
              }
              local_20 = local_20 / fVar2;
              local_1c = local_1c / fVar2;
              local_18 = local_18 / fVar2;
              local_14 = local_14 / fVar2;
            }
          }
          DebrisHandleList::callExplosion(&local_20);
        }
      }
    }
    param_1 = param_1 + 0xb0;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return;
}

// 009418F0  FUN_009418f0  size=246  [callgraph]
void __fastcall FUN_009418f0(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_30 [12];
  
  local_30[0] = -1;
  local_30[1] = 0xffffffff;
  local_30[2] = 0xffffffff;
  local_30[3] = 0xffffffff;
  local_30[4] = 0xffffffff;
  local_30[5] = 0xffffffff;
  local_30[6] = 0xffffffff;
  local_30[7] = 0xffffffff;
  local_30[8] = 0xffffffff;
  local_30[9] = 0xffffffff;
  local_30[10] = 0xffffffff;
  local_30[0xb] = 0xffffffff;
  iVar3 = FUN_00c15900();
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x18);
    for (iVar3 = *(int *)(iVar3 + 0x14); iVar3 != iVar1; iVar3 = *(int *)(iVar3 + 8)) {
      iVar4 = FUN_00a81330();
      if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
         (iVar5 = FUN_009f93b0(*(undefined4 *)(iVar4 + 0x4b0)), iVar5 != 0)) {
        uVar6 = 0;
        do {
          if (local_30[uVar6] < 0) {
            local_30[uVar6] = *(int *)(iVar4 + 0x51c);
            break;
          }
          bVar2 = (char)uVar6 + 1;
          uVar6 = (uint)bVar2;
        } while (bVar2 < 0xc);
      }
    }
  }
  iVar3 = 0xc;
  piVar7 = param_1;
  do {
    uVar6 = 0;
    do {
      if (*piVar7 == local_30[uVar6]) goto LAB_009419e2;
      bVar2 = (char)uVar6 + 1;
      uVar6 = (uint)bVar2;
    } while (bVar2 < 0xc);
    uVar6 = 0;
    do {
      if ((param_1[uVar6 * 0x2c + 0x15] != -1) && (param_1[uVar6 * 0x2c + 0x15] == *piVar7))
      goto LAB_009419e2;
      bVar2 = (char)uVar6 + 1;
      uVar6 = (uint)bVar2;
    } while (bVar2 < 0xc);
    *piVar7 = -1;
LAB_009419e2:
    piVar7 = piVar7 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

// 009419F0  FUN_009419f0  size=153  [callgraph]
void __fastcall FUN_009419f0(undefined4 *param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1[4] + 4) != 0) {
    *(undefined4 *)(param_1[4] + 8) = 0;
  }
  param_1[6] = 0xbf800000;
  param_1[5] = 0xffffffff;
  param_1[7] = 0x10010;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0x447a0000;
  param_1[0xd] = 0;
  param_1[0xf] = 0xbf800000;
  param_1[0x10] = 0xbf800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x1a] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 1;
  *param_1 = 0;
  param_1[0x1f] = 0;
  param_1[2] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  return;
}

// 00941A90  DebrisHandleList::addHandle  size=657  [class]
undefined4 __thiscall
DebrisHandleList::addHandle(undefined4 *param_1,undefined4 param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 auStack_50 [24];
  undefined1 local_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x22);
  if (param_1[0x28] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar3 = (int *)FUN_00a7c8a0();
  if ((piVar3 == (int *)0x0) || (piVar3[0x20f] == 0)) {
    pcVar10 = "DebrisHandleList:addHandle() failure.";
  }
  else {
    if ((*(int *)(param_1[4] + 4) == 0) || (*(int *)(param_1[4] + 8) == 0)) {
      param_1[5] = piVar3[0x20f];
      param_1[7] = piVar3[0x12f];
      FUN_0093e4f0();
      param_1[6] = param_1[9];
      param_1[0x19] = 0;
      uVar4 = FUN_009f8b40();
      param_1[0x1d] = uVar4;
      uVar4 = FUN_00cb74a0(param_1[7]);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = 0;
      param_1[0x1e] = 0;
      puVar9 = &DAT_01b35300;
      (**(code **)(*piVar3 + 4))(&DAT_01b35300);
      iVar5 = FUN_00dd6d80(puVar9);
      if (iVar5 == 0) {
        param_1[0x14] = piVar3[0x10];
        param_1[0x15] = piVar3[0x11];
        param_1[0x16] = piVar3[0x12];
        param_1[0x17] = piVar3[0x13];
      }
      else {
        FUN_0093e110(piVar3);
        puVar6 = (undefined4 *)FUN_005d9b40(auStack_50);
        param_1[0x14] = *puVar6;
        param_1[0x15] = puVar6[1];
        param_1[0x16] = puVar6[2];
        param_1[0x17] = puVar6[3];
      }
    }
    else {
      fVar1 = (float)param_1[6];
      param_1[6] = (float)param_1[10] + fVar1;
      if ((float)param_1[9] < (float)param_1[10] + fVar1) {
        param_1[6] = param_1[9];
      }
      if ((param_3 != 0) && (param_1[7] != piVar3[0x12f])) {
        param_1[7] = piVar3[0x12f];
        FUN_0093e4f0();
        param_1[6] = param_1[9];
      }
    }
    FUN_00a7c930();
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    uStack_2c = 0xbf800000;
    uStack_18 = param_1[0x1d];
    iStack_34 = param_3;
    uStack_30 = 0;
    uStack_28 = 0xffffffff;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_14 = FUN_009f8b40();
    piVar3 = (int *)param_1[4];
    if ((uint)piVar3[2] < (uint)piVar3[3]) {
      cVar2 = (**(code **)(*piVar3 + 8))(local_38);
      if (cVar2 != '\0') {
        param_1[0x20] = 0x41f00000;
        *param_1 = 0;
        iVar8 = *(int *)(param_1[4] + 4);
        iVar5 = iVar8 + *(int *)(param_1[4] + 8) * 0x28;
        for (; iVar8 != iVar5; iVar8 = iVar8 + 0x28) {
          iVar7 = FUN_00a81330();
          if ((((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
              (iVar7 = FUN_00606e40(iVar7), iVar7 != 0)) &&
             ((*(int *)(iVar7 + 0x944) == 0 && (*(int *)(iVar7 + 0x89c) == 0)))) {
            *(undefined4 *)(iVar7 + 0x884) = 0;
          }
        }
        iVar5 = FUN_00d466f0();
        if (iVar5 != 0) {
          param_1[2] = 0x43960000;
        }
        if (param_1[0x28] != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return 1;
      }
      pcVar10 = "DebrisHandleList:addHandle() no blank, failure.";
    }
    else {
      pcVar10 = &DAT_0164f5d4;
    }
  }
  FUN_00dd5650(pcVar10);
  if (param_1[0x28] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00941D30  FUN_00941d30  size=280  [callgraph]
void __fastcall FUN_00941d30(int param_1)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  undefined *puVar4;
  int local_c;
  int local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x88);
  local_4 = lpCriticalSection;
  if (*(int *)(param_1 + 0xa0) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  local_8 = iVar3 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
  if (iVar3 != local_8) {
    do {
      if ((((*(int *)(iVar3 + 8) != 0) && (local_c = FUN_00a81330(), local_c != 0)) &&
          (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) &&
         (iVar2 = FUN_0093dcd0(&local_c), iVar2 != 0)) {
        puVar4 = &DAT_01b35300;
        (**(code **)(*piVar1 + 4))(&DAT_01b35300);
        iVar2 = FUN_00dd6d80(puVar4);
        if (iVar2 != 0) {
          thunk_FUN_009fdde0();
        }
      }
      iVar3 = iVar3 + 0x28;
      lpCriticalSection = local_4;
    } while (iVar3 != local_8);
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0x10010;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 00941E50  FUN_00941e50  size=237  [callgraph]
void __fastcall FUN_00941e50(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar2 + 8) != 0) &&
     (iVar4 = *(int *)(iVar2 + 4), iVar4 != iVar4 + *(int *)(iVar2 + 8) * 0x28)) {
    do {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_0093fea0(iVar4);
      }
      else {
        iVar4 = iVar4 + 0x28;
      }
    } while (iVar4 != *(int *)(*(int *)(param_1 + 0x10) + 4) +
                      *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28);
  }
  if ((-1 < *(int *)(param_1 + 0x14)) && (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0)) {
    FUN_00941d30();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 8) != 0) {
    iVar4 = *(int *)(iVar2 + 4);
    iVar2 = iVar4 + *(int *)(iVar2 + 8) * 0x28;
    bVar1 = false;
    if (iVar4 != iVar2) {
      do {
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          bVar1 = true;
        }
        iVar4 = iVar4 + 0x28;
      } while (iVar4 != iVar2);
      if (bVar1) goto LAB_00941ef7;
    }
    FUN_00941d30();
  }
LAB_00941ef7:
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 8) != 0) {
    iVar4 = *(int *)(iVar2 + 4);
    iVar2 = iVar4 + *(int *)(iVar2 + 8) * 0x28;
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x28) {
      if ((*(int *)(iVar4 + 0x1c) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
        FUN_00a81330();
        FUN_00a805f0();
      }
    }
  }
  return;
}

// 00941F50  FUN_00941f50  size=917  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00942239) */
/* WARNING: Removing unreachable block (ram,0x0094223b) */
/* WARNING: Removing unreachable block (ram,0x0094223d) */
/* WARNING: Removing unreachable block (ram,0x0094223f) */

void __fastcall FUN_00941f50(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [32];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    return;
  }
  local_40 = param_1;
  if (*(int *)(param_1 + 100) != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar5 = *(int *)(iVar3 + 4);
    local_34 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * 0x28;
    local_3c = iVar5 + *(int *)(iVar3 + 8) * 0x28;
    iVar3 = 1000;
    if (iVar5 != local_34) {
      do {
        iVar6 = iVar5;
        if (((((*(int *)(iVar6 + 8) != 0) && (*(int *)(iVar6 + 0x14) == 0)) &&
             (local_38 = FUN_00a81330(), param_1 = local_40, local_38 != 0)) &&
            ((iVar5 = FUN_0093dcd0(&local_38), param_1 = local_40, iVar5 != 0 &&
             (iVar5 = FUN_00a7c8a0(), param_1 = local_40, iVar5 != 0)))) &&
           ((iVar5 = FUN_00606e40(iVar5), param_1 = local_40, iVar5 != 0 &&
            ((*(int *)(iVar5 + 0x928) == 0 && (*(int *)(iVar6 + 0x10) < iVar3)))))) {
          iVar3 = *(int *)(iVar6 + 0x10);
          local_3c = iVar6;
        }
        iVar5 = iVar6 + 0x28;
      } while (iVar6 + 0x28 != local_34);
      if (iVar3 != 1000) {
        piVar2 = (int *)FUN_00c13920();
        iVar3 = (**(code **)(*piVar2 + 0x28))(0);
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00a7c8a0();
          piVar2 = (int *)0x0;
          if (piVar4 != (int *)0x0) {
            puVar8 = &DAT_01be9db8;
            (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
            iVar3 = FUN_00dd6d80(puVar8);
            piVar2 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
          }
          iVar3 = (**(code **)(*piVar2 + 0x32c))();
          param_1 = iStack_44;
          if (iVar3 == 0) {
            *(float *)(local_40 + 0xc) = *(float *)(local_40 + 0xc) - 1.0;
          }
          else {
            fVar7 = (float10)FUN_00e049b0();
            *(float *)(local_40 + 0xc) = (float)((float10)*(float *)(local_40 + 0xc) - fVar7);
            if ((*(int *)(iStack_44 + 0x30) != 0) && (*(float *)(iVar6 + 0x34) < 0.0)) {
              *(undefined4 *)(local_40 + 0xc) = 0x3f800000;
            }
          }
        }
        if (0.0 <= *(float *)(local_40 + 0xc)) {
          return;
        }
        iStack_44 = FUN_00a81330();
        if (iStack_44 == 0) {
          return;
        }
        iVar3 = FUN_0093dcd0(&iStack_44);
        if (iVar3 == 0) {
          return;
        }
        iVar3 = FUN_00a7c8a0();
        if (iVar3 == 0) {
          return;
        }
        iVar5 = FUN_00606e40(iVar3);
        if (iVar5 == 0) {
          return;
        }
        local_34 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        iStack_28 = 0x3f800000;
        piVar2 = (int *)FUN_005d9b40(auStack_24);
        local_34 = *piVar2;
        iStack_30 = piVar2[1];
        iStack_2c = piVar2[2];
        iStack_28 = piVar2[3];
        DebrisHandleList::callExplosion_2(*(undefined4 *)(iVar3 + 0x4bc),&local_34);
        *(undefined4 *)(local_40 + 0x14) = 1;
        iVar5 = FUN_0093dcd0(&iStack_44);
        if (iVar5 == 0) {
          FUN_00a805f0();
          return;
        }
        iVar3 = FUN_00606e40(iVar3);
        if (iVar3 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x78) != 0) {
          FUN_005d8530(0x40a00000);
          return;
        }
        thunk_FUN_009fdde0();
        return;
      }
    }
    FUN_00941d30();
    return;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    piVar2 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      piVar2 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
    iVar3 = (**(code **)(*piVar2 + 0x32c))();
    if (iVar3 == 0) {
      fVar1 = *(float *)(param_1 + 0x18) - 1.0;
    }
    else {
      fVar7 = (float10)FUN_00e049b0();
      *(float *)(param_1 + 0x18) = (float)((float10)*(float *)(param_1 + 0x18) - fVar7);
      if ((*(int *)(param_1 + 0x30) == 0) || (0.0 <= *(float *)(param_1 + 0x18))) goto LAB_00941fff;
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x18) = fVar1;
  }
LAB_00941fff:
  if (*(float *)(param_1 + 0x18) < 0.0) {
    *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(float *)(param_1 + 0x18) < 0.0)) {
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    return;
  }
  return;
}

// 009422F0  FUN_009422f0  size=207  [callgraph]
void __fastcall FUN_009422f0(int param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00d467a0();
  if (iVar1 == 0) {
    FUN_0093ea30(&local_20);
    if ((((local_20 == 0.0) && (local_1c == 0.0)) && (local_18 == 0.0)) ||
       ((*(int *)(*(int *)(param_1 + 0x10) + 4) == 0 ||
        (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0)))) {
      local_20 = *(float *)(param_1 + 0x50);
      local_1c = *(float *)(param_1 + 0x54);
      local_18 = *(float *)(param_1 + 0x58);
      local_14 = *(undefined4 *)(param_1 + 0x5c);
    }
    *(float *)(param_1 + 0x50) = local_20;
    *(float *)(param_1 + 0x54) = local_1c;
    *(float *)(param_1 + 0x58) = local_18;
    *(undefined4 *)(param_1 + 0x5c) = local_14;
    iVar1 = FUN_00d46780();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1c) == 0x20030)) {
      FUN_0093fc70((float *)(param_1 + 0x50));
    }
    return;
  }
  FUN_0093fc70(param_1 + 0x50);
  return;
}

// 009423C0  FUN_009423c0  size=954  [callgraph]
/* WARNING: Removing unreachable block (ram,0x009426de) */
/* WARNING: Removing unreachable block (ram,0x009426e0) */
/* WARNING: Removing unreachable block (ram,0x009426e2) */

void __fastcall FUN_009423c0(int param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  float10 fVar14;
  undefined *puVar15;
  int iStack_74;
  int local_70;
  int local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [48];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar11 = *(int *)(param_1 + 0x10);
  local_68 = *(int *)(iVar11 + 4) + *(int *)(iVar11 + 8) * 0x28;
  iVar6 = *(int *)(iVar11 + 4);
  local_70 = iVar6 + *(int *)(iVar11 + 8) * 0x28;
  iVar11 = 1000;
  if (iVar6 != local_68) {
    do {
      iVar12 = iVar6;
      if (((((*(int *)(iVar12 + 8) != 0) && (*(int *)(iVar12 + 0x14) == 0)) &&
           (*(int *)(iVar12 + 0x18) != 0)) &&
          (((local_64 = (float)FUN_00a81330(), local_64 != 0.0 &&
            (iVar6 = FUN_0093dcd0(&local_64), iVar6 != 0)) &&
           ((iVar6 = FUN_00a7c8a0(), iVar6 != 0 &&
            ((iVar6 = FUN_00606e40(iVar6), iVar6 != 0 && (*(int *)(iVar6 + 0x928) == 0)))))))) &&
         (*(int *)(iVar12 + 0x10) < iVar11)) {
        iVar11 = *(int *)(iVar12 + 0x10);
        local_70 = iVar12;
      }
      iVar6 = iVar12 + 0x28;
    } while (iVar12 + 0x28 != local_68);
    if (iVar11 != 1000) {
      piVar7 = (int *)FUN_00c13920();
      iVar11 = (**(code **)(*piVar7 + 0x28))(0);
      if (iVar11 != 0) {
        piVar8 = (int *)FUN_00a7c8a0();
        piVar7 = (int *)0x0;
        if (piVar8 != (int *)0x0) {
          puVar15 = &DAT_01be9db8;
          (**(code **)(*piVar8 + 4))(&DAT_01be9db8);
          iVar11 = FUN_00dd6d80(puVar15);
          piVar7 = (int *)(-(uint)(iVar11 != 0) & (uint)piVar8);
        }
        iVar11 = (**(code **)(*piVar7 + 0x32c))();
        if (iVar11 == 0) {
          *(float *)(iStack_74 + 0xc) = *(float *)(iStack_74 + 0xc) - 1.0;
        }
        else {
          fVar1 = *(float *)(iStack_74 + 0xc);
          fVar14 = (float10)FUN_00e049b0();
          *(float *)(iStack_74 + 0xc) = (float)((float10)fVar1 - fVar14);
          if ((*(int *)(local_70 + 0x30) != 0) && (*(float *)(iVar12 + 0x34) < 0.0)) {
            *(undefined4 *)(iStack_74 + 0xc) = 0x3f800000;
          }
        }
      }
      if ((((*(float *)(iStack_74 + 0xc) < 0.0) && (local_68 = FUN_00a81330(), local_68 != 0)) &&
          (iVar11 = FUN_0093dcd0(&local_68), iVar11 != 0)) &&
         (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
        puVar15 = &DAT_01b35300;
        (**(code **)(*piVar7 + 4))(&DAT_01b35300);
        iVar11 = FUN_00dd6d80(puVar15);
        if (iVar11 != 0) {
          fVar1 = 0.0;
          local_64 = 0.0;
          fVar5 = 0.0;
          fStack_60 = 0.0;
          fStack_5c = 0.0;
          fVar3 = 1.0;
          fStack_58 = 1.0;
          iVar11 = piVar7[0xcc];
          if (iVar11 != 0) {
            piVar8 = (int *)(iVar11 + 0xc4);
            iVar6 = 0;
            fVar4 = fVar1;
            if (0 < *piVar8) {
              psVar13 = (short *)(*(int *)(iVar11 + 0xc0) + 0x68);
              do {
                sVar2 = *psVar13;
                if (sVar2 < 0) {
LAB_0094263b:
                  piVar9 = piVar7 + 4;
                }
                else {
                  piVar9 = (int *)piVar7[0xd8];
                  piVar10 = piVar9;
                  if (piVar9 == (int *)0x0) {
                    piVar10 = piVar7;
                  }
                  if ((short)piVar10[0xd6] <= sVar2) goto LAB_0094263b;
                  if (piVar9 == (int *)0x0) {
                    piVar9 = piVar7;
                  }
                  iVar11 = (int)sVar2;
                  if ((iVar11 < 0) || ((short)piVar9[0xd6] <= iVar11)) {
                    piVar9 = (int *)0x10;
                  }
                  else {
                    piVar9 = (int *)(iVar11 * 0xb0 + piVar9[0xd4] + 0x10);
                  }
                }
                D3DXMatrixMultiply(auStack_54,psVar13 + -0x24,piVar9);
                fVar1 = fStack_24 + local_64;
                iVar6 = iVar6 + 1;
                psVar13 = psVar13 + 0x38;
                fVar5 = fStack_20 + fStack_60;
                fVar4 = fStack_1c + fStack_5c;
                fVar3 = fStack_18 + fStack_58;
                local_64 = fVar1;
                fStack_60 = fVar5;
                fStack_5c = fVar4;
                fStack_58 = fVar3;
              } while (iVar6 < *piVar8);
            }
            fStack_58 = (float)*piVar8;
            local_64 = fVar1 / fStack_58;
            fStack_60 = fVar5 / fStack_58;
            fStack_5c = fVar4 / fStack_58;
            fStack_58 = fVar3 / fStack_58;
          }
          DebrisHandleList::callExplosion_2(piVar7[0x12f],&local_64);
          *(undefined4 *)(iStack_74 + 0x14) = 1;
          iVar11 = FUN_0093dcd0(&local_68);
          if (iVar11 != 0) {
            puVar15 = &DAT_01b35300;
            (**(code **)(*piVar7 + 4))(&DAT_01b35300);
            iVar11 = FUN_00dd6d80(puVar15);
            if (iVar11 != 0) {
              if (*(int *)(local_70 + 0x78) != 0) {
                FUN_005d8530(0x40a00000);
                return;
              }
              thunk_FUN_009fdde0();
            }
          }
        }
      }
    }
  }
  return;
}

// 00942790  FUN_00942790  size=68  [callgraph]
void __fastcall FUN_00942790(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [28];
  
  if ((*(int *)(param_1 + 0x6c) != 0) && (10 < *(uint *)(*(int *)(param_1 + 0x10) + 8))) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = 5;
    uVar2 = DebrisHandleList::getExplosionPos(local_20);
    FUN_00cd1a40(uVar1,uVar2,uVar3);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

// 009427E0  FUN_009427e0  size=42  [callgraph]
void __fastcall FUN_009427e0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_20 [28];
  
  *(undefined4 *)(param_1 + 100) = 1;
  uVar1 = DebrisHandleList::getExplosionPos(local_20);
  DebrisHandleList::callExplosion(uVar1);
  return;
}

