// src/unsorted/unit_00C47830.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C47830..00C48EA0, 17 functions

#include "mgrr.h"

// 00C47830  FUN_00c47830  size=118  [run]
void __fastcall FUN_00c47830(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if ((*(int *)(iVar1 + 0xc) != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar5 = &DAT_01b34b48;
        (**(code **)(*piVar2 + 4))(&DAT_01b34b48);
        iVar3 = FUN_00dd6d80(puVar5);
        if (iVar3 != 0) {
          FUN_00409080();
        }
      }
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      FUN_00dd4920(iVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C478B0  FUN_00c478b0  size=383  [run]
undefined4 __thiscall FUN_00c478b0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *local_c;
  undefined4 local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x44);
  local_8 = 0;
  local_4 = lpCriticalSection;
  if (param_1[0x4a] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = puVar3 + param_1[2];
  for (; (local_c = (int *)0x0, puVar3 != puVar1 &&
         (local_c = (int *)*puVar3, lpCriticalSection = local_4, local_c[1] != param_2));
      puVar3 = puVar3 + 1) {
  }
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
    if (local_c == (int *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      *local_c = 0;
    }
    local_c[3] = 0;
    local_c[1] = param_2;
    local_c[2] = local_c[2] & 0xfffffffb;
    local_c[2] = local_c[2] | 0x10000;
    if (((local_c != (int *)0x0) && (local_c[3] != 0)) && ((local_c[2] & 8U) == 0)) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      if ((local_c[2] & 4U) == 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 4;
      }
      FUN_00a7c8a0(uVar4,0,0,0);
      FUN_00a8caf0(uVar4,uVar5,uVar6,uVar7);
    }
    cVar2 = (**(code **)(*param_1 + 8))(&local_c);
    if (cVar2 == '\x01') {
      local_c[2] = local_c[2] | 1;
      *local_c = param_1[2];
      local_8 = 1;
    }
    else {
      FUN_00dd5650(&DAT_016a4184,0x40,param_2);
      if (local_c != (int *)0x0) {
        if (local_c[3] != 0) {
          local_c[3] = 0;
        }
        FUN_00dd4920(local_c);
        local_c = (int *)0x0;
      }
    }
  }
  else if (((local_c[2] & 2U) == 0) && ((local_c[2] & 4U) != 0)) {
    if (local_c[3] != 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      if (param_3 == 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 1;
      }
      FUN_00a7c8a0(uVar4,0,0,0);
      FUN_00a8caf0(uVar4,uVar5,uVar6,uVar7);
    }
    local_c[2] = local_c[2] & 0xfffffffb;
    local_8 = 1;
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_8;
}

// 00C47A30  FUN_00c47a30  size=370  [run]
undefined4 __thiscall FUN_00c47a30(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *local_c;
  undefined4 local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x44);
  local_8 = 0;
  local_4 = lpCriticalSection;
  if (param_1[0x4a] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = puVar3 + param_1[2];
  for (; (local_c = (int *)0x0, puVar3 != puVar1 &&
         (local_c = (int *)*puVar3, lpCriticalSection = local_4, local_c[1] != param_2));
      puVar3 = puVar3 + 1) {
  }
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
    if (local_c == (int *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      *local_c = 0;
    }
    local_c[3] = 0;
    local_c[1] = param_2;
    local_c[2] = local_c[2] | 4;
    local_c[2] = local_c[2] | 0x10000;
    if (((local_c != (int *)0x0) && (local_c[3] != 0)) && ((local_c[2] & 8U) == 0)) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      if ((local_c[2] & 4U) == 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 4;
      }
      FUN_00a7c8a0(uVar4,0,0,0);
      FUN_00a8caf0(uVar4,uVar5,uVar6,uVar7);
    }
    cVar2 = (**(code **)(*param_1 + 8))(&local_c);
    if (cVar2 == '\x01') {
      local_c[2] = local_c[2] | 1;
      *local_c = param_1[2];
      local_8 = 1;
    }
    else {
      FUN_00dd5650(&DAT_016a4184,0x40,param_2);
      if (local_c != (int *)0x0) {
        if (local_c[3] != 0) {
          local_c[3] = 0;
        }
        FUN_00dd4920(local_c);
        local_c = (int *)0x0;
      }
    }
  }
  else {
    if ((*(byte *)(local_c + 2) & 4) == 0) {
      if (local_c[3] != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        if (param_3 == 0) {
          uVar4 = 4;
        }
        else {
          uVar4 = 2;
        }
        FUN_00a7c8a0(uVar4,0,0,0);
        FUN_00a8caf0(uVar4,uVar5,uVar6,uVar7);
      }
      local_c[2] = local_c[2] | 4;
    }
    local_8 = 1;
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_8;
}

// 00C47BB0  FUN_00c47bb0  size=52  [run]
undefined4 __thiscall FUN_00c47bb0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 4) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 2;
    }
  }
  return 0;
}

// 00C47BF0  FUN_00c47bf0  size=52  [run]
undefined4 __thiscall FUN_00c47bf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 4) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffd;
    }
  }
  return 0;
}

// 00C47C30  FUN_00c47c30  size=63  [run]
bool __thiscall FUN_00c47c30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  bVar4 = false;
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 4) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return bVar4;
      }
    }
    if (iVar2 != 0) {
      bVar4 = (*(uint *)(iVar2 + 8) & 4) != 0;
    }
  }
  return bVar4;
}

// 00C47C70  FUN_00c47c70  size=126  [run]
undefined4 __thiscall FUN_00c47c70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar3 = piVar2 + *(int *)(param_1 + 8);
  do {
    if (piVar2 == piVar3) {
LAB_00c47cd9:
      if (*(int *)(param_1 + 0x128) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
      }
      return uVar5;
    }
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 4) == param_2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        uVar5 = 1;
        piVar3 = (int *)FUN_00a7c8a0();
        if (param_3 == 1) {
          pcVar4 = *(code **)(*piVar3 + 0x1c);
        }
        else {
          pcVar4 = *(code **)(*piVar3 + 0x20);
        }
        (*pcVar4)();
      }
      goto LAB_00c47cd9;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

// 00C47CF0  FUN_00c47cf0  size=115  [run]
undefined4 __thiscall FUN_00c47cf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar3 = piVar2 + *(int *)(param_1 + 8);
  do {
    if (piVar2 == piVar3) {
LAB_00c47d4e:
      if (*(int *)(param_1 + 0x128) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
      }
      return uVar4;
    }
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 4) == param_2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
        uVar4 = 1;
      }
      goto LAB_00c47d4e;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

// 00C47D70  FUN_00c47d70  size=115  [run]
undefined4 __thiscall FUN_00c47d70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar3 = piVar2 + *(int *)(param_1 + 8);
  do {
    if (piVar2 == piVar3) {
LAB_00c47dce:
      if (*(int *)(param_1 + 0x128) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
      }
      return uVar4;
    }
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 4) == param_2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
        uVar4 = 1;
      }
      goto LAB_00c47dce;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

// 00C47E40  FUN_00c47e40  size=559  [run]
void __thiscall FUN_00c47e40(int *param_1,LPCRITICAL_SECTION param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x44);
  if (param_1[0x4a] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      puVar8 = &DAT_01be9c20;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c20);
      iVar6 = FUN_00dd6d80(puVar8);
      piVar3 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar3);
    }
    piVar4 = (int *)param_1[1];
    piVar1 = piVar4 + param_1[2];
    iVar6 = piVar3[0x13b];
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      iVar7 = *piVar4;
      if (*(int *)(iVar7 + 4) == iVar6) {
        if (iVar7 != 0) {
          iVar5 = FUN_00e03ea0(&DAT_0163bbd8);
          if ((((iVar6 == iVar5) || (iVar5 = FUN_00e03ea0(&DAT_0163bbd0), iVar6 == iVar5)) ||
              (iVar5 = FUN_00e03ea0(&DAT_0163bbc8), iVar6 == iVar5)) ||
             (iVar5 = FUN_00e03ea0(&DAT_0163bbc0), iVar6 == iVar5)) {
            *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 8;
          }
          if (*(int *)(iVar7 + 0xc) == 0) {
            *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 1;
            *(LPCRITICAL_SECTION *)(iVar7 + 0xc) = param_2;
            FUN_00c1e3c0(iVar7);
            puVar8 = &DAT_01b34b48;
            (**(code **)(*piVar3 + 4))(&DAT_01b34b48);
            iVar6 = FUN_00dd6d80(puVar8);
            if (iVar6 != 0) {
              FUN_004090a0(iVar7);
            }
          }
          else {
            FUN_00dd5650(&DAT_016a68f0,iVar6);
          }
          goto LAB_00c48053;
        }
        break;
      }
    }
    if ((uint)param_1[2] < 0x40) {
      if (iVar6 != 0) {
        param_2 = (LPCRITICAL_SECTION)FUN_00c1e410(param_2,iVar6);
        iVar7 = FUN_00e03ea0(&DAT_0163bbd8);
        if (((iVar6 == iVar7) || (iVar7 = FUN_00e03ea0(&DAT_0163bbd0), iVar6 == iVar7)) ||
           ((iVar7 = FUN_00e03ea0(&DAT_0163bbc8), iVar6 == iVar7 ||
            (iVar7 = FUN_00e03ea0(&DAT_0163bbc0), iVar6 == iVar7)))) {
          *(uint *)((int)param_2 + 8) = *(uint *)((int)param_2 + 8) | 8;
        }
        FUN_00c1e3c0(param_2);
        cVar2 = (**(code **)(*param_1 + 8))(&stack0x00000004);
        if (cVar2 == '\x01') {
          *(uint *)((int)param_2 + 8) = *(uint *)((int)param_2 + 8) | 1;
          *(int *)param_2 = param_1[2];
          FUN_00c315d0(piVar3,param_2);
        }
        else {
          FUN_00dd5650(&DAT_016a4184,0x40,iVar6);
          if (param_2 != (LPCRITICAL_SECTION)0x0) {
            if (*(int *)((int)param_2 + 0xc) != 0) {
              *(int *)((int)param_2 + 0xc) = 0;
            }
            FUN_00dd4920(param_2);
          }
        }
      }
    }
    else {
      FUN_00dd5650(&DAT_016a4184,0x40,iVar6);
    }
  }
LAB_00c48053:
  if (param_1[0x4a] != 0) {
    param_2 = lpCriticalSection;
                    /* WARNING: Could not recover jumptable at 0x00c48065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}

// 00C48070  FUN_00c48070  size=198  [run]
void __thiscall FUN_00c48070(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x128) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    }
    piVar1 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar1 != (int *)0x0) {
      puVar6 = &DAT_01be9c20;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c20);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    piVar4 = *(int **)(param_1 + 4);
    piVar1 = piVar4 + *(int *)(param_1 + 8);
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 4) == *(int *)(uVar3 + 0x4ec)) {
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
          if ((*(int *)(iVar2 + 0xc) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)
             ) {
            puVar6 = &DAT_01b34b48;
            (**(code **)(*piVar1 + 4))(&DAT_01b34b48);
            iVar5 = FUN_00dd6d80(puVar6);
            if (iVar5 != 0) {
              FUN_00409080();
            }
          }
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
        break;
      }
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    }
  }
  return;
}

// 00C48140  FUN_00c48140  size=60  [run]
void __fastcall FUN_00c48140(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00dd4920(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1] + -0x10);
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

// 00C481A0  FUN_00c481a0  size=553  [run]
void __thiscall FUN_00c481a0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *puVar5;
  int iStack_d0;
  undefined1 *puStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined1 local_60 [92];
  
  if (*(int *)(param_1 + 4) != 0) {
    param_3 = param_3 - *(float *)(param_1 + 0x60);
    if (param_3 < 0.0) {
      param_3 = 0.0;
    }
    fStack_c4 = (float)(*(int *)(param_1 + 4) + 0x10);
    fStack_c8 = (float)(param_1 + 0x20);
    puStack_cc = local_60;
    iStack_d0 = 0xc481eb;
    D3DXVec3TransformNormal();
    iVar3 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(param_1 + 0x34);
    iStack_d0 = iVar3 + 0x10;
    fVar2 = *(float *)(param_1 + 0x38);
    puVar5 = auStack_ac;
    D3DXVec3TransformNormal(puVar5,*(int *)(param_1 + 4) + 0x50);
    fStack_c8 = ((*(float *)(iVar3 + 0x40) + fVar1) - fStack_c8) * *(float *)(param_1 + 0x68) +
                fStack_c8;
    fStack_c4 = ((*(float *)(iVar3 + 0x44) + fVar2) - fStack_c4) * *(float *)(param_1 + 0x68) +
                fStack_c4;
    FUN_00c32390(auStack_98);
    FUN_00c32440(auStack_a8,&fStack_c8,auStack_98);
    fVar1 = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x50);
    if (0.0 < fVar1) {
      FUN_00ddcfe0(auStack_68,param_1 + 0x40,fVar1);
      D3DXVec3TransformNormal(auStack_a8,auStack_a8,auStack_68);
    }
    FUN_00c1ecb0(auStack_a8,auStack_98);
    FUN_00c1edd0(auStack_a8,param_2,param_3);
    FUN_00c32630(auStack_88,&puStack_cc,auStack_a8,auStack_98);
    iVar3 = *(int *)(param_1 + 4);
    D3DXQuaternionRotationAxis(iVar3 + 0x60,auStack_88,puStack_cc);
    pfVar4 = &fStack_c4;
    D3DXQuaternionRotationAxis(pfVar4,auStack_94,(float)puVar5 * 0.5);
    FUN_00ddb9f0(auStack_80,&iStack_d0);
    D3DXVec3TransformNormal(iVar3 + 0x50,param_1 + 0x10,auStack_80);
    FUN_00a15310();
    iVar3 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar3 + 0x4c);
    FUN_00c1efd0(param_1 + 0x40,param_1 + 0x50,auStack_9c);
    *(float **)(param_1 + 0x54) = pfVar4;
  }
  return;
}

// 00C483E0  FUN_00c483e0  size=21  [run]
void __fastcall FUN_00c483e0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 00C484A0  FUN_00c484a0  size=184  [run]
void __fastcall FUN_00c484a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_14 [4];
  undefined4 local_10;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != piVar3 + *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x1c) != 0) {
        if ((void *)(iVar1 + 0x2208) != (void *)0x0) {
          _memset((void *)(iVar1 + 0x2208),0,0x40);
        }
        *(undefined4 *)(iVar1 + 0x2268) = 1;
        if (*(int *)(iVar1 + 0x226c) == 0) {
          *(undefined4 *)(iVar1 + 0x18) = 1;
          *(undefined4 *)(iVar1 + 0x2264) = 1;
        }
        else if (*(int *)(iVar1 + 0x226c) == 1) {
          puVar4 = local_14;
          *(undefined4 *)(iVar1 + 0x18) = 1;
          uVar2 = FUN_00c33ee0(*(undefined4 *)(iVar1 + 0x2258));
          FUN_00c33fc0(uVar2,puVar4);
          *(undefined4 *)(iVar1 + 0x2258) = local_10;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4));
  }
  return;
}

// 00C48B60  FUN_00c48b60  size=574  [run]
undefined4 __thiscall
FUN_00c48b60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str1;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int local_430;
  int iStack_42c;
  int local_428;
  undefined4 local_424 [8];
  undefined2 local_404;
  undefined2 local_402;
  undefined1 local_400 [1024];
  
  iVar2 = FUN_00de3560();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_00959930(local_400,"%sp%03x%02x00.syn",param_2,param_3,param_4);
  _Str1 = (char *)FUN_00de4500(uVar3);
  if (_Str1 == (char *)0x0) {
    FUN_00dd5650(&DAT_016a6a48,uVar3);
    return 0xffffffff;
  }
  iVar2 = _strncmp(_Str1,"SYN",3);
  if (iVar2 != 0) {
    FUN_00dd5650(&DAT_016a6a18,uVar3);
    return 0xffffffff;
  }
  FUN_00dd5650(&DAT_016a69f4);
  if (*(int *)(_Str1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)_Str1;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(_Str1 + 4);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(_Str1 + 8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(_Str1 + 0xc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(_Str1 + 0x10);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(_Str1 + 0x14);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(_Str1 + 0x18);
    FUN_00dd5650("magic : %s",param_1 + 0x28);
    FUN_00dd5650("version : %08d",*(undefined4 *)(param_1 + 0x2c));
    FUN_00dd5650("date : %08x",*(undefined4 *)(param_1 + 0x30));
    FUN_00dd5650("time : %d",*(undefined4 *)(param_1 + 0x34));
    FUN_00dd5650("comSize : %d",*(undefined4 *)(param_1 + 0x38));
    FUN_00dd5650("checkSum : %d",*(undefined4 *)(param_1 + 0x40));
    local_430 = *(int *)(_Str1 + 0x1c);
    pcVar4 = _Str1 + 0x20;
    iVar2 = local_430;
    if (local_430 != 0) {
      do {
        local_428 = iVar2;
        uVar1 = *(undefined2 *)(pcVar4 + 0x22);
        pcVar6 = pcVar4;
        puVar7 = local_424;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          puVar7 = puVar7 + 1;
        }
        local_404 = *(undefined2 *)(pcVar4 + 0x20);
        local_402 = uVar1;
        (**(code **)(*(int *)(param_1 + 0x5c) + 8))(local_424);
        pcVar4 = pcVar4 + 0x24;
        iVar2 = local_428 + -1;
      } while (local_428 + -1 != 0);
      local_428 = 0;
    }
    iVar2 = 0;
    *(int *)(param_1 + 0x224c) = *(int *)(_Str1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    piVar5 = (int *)(_Str1 + local_430 * 0x24 + 0x20);
    if (*(int *)(param_1 + 0x224c) != -1 && -1 < *(int *)(param_1 + 0x224c) + 1) {
      do {
        local_430 = *piVar5;
        iStack_42c = piVar5[1];
        (**(code **)(*(int *)(param_1 + 0x48) + 8))(&local_430);
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x224c) + 1);
    }
    if (**(short **)(param_1 + 0x4c) == 0x12) {
      *(undefined4 *)(param_1 + 0x225c) = *(undefined4 *)(*(short **)(param_1 + 0x4c) + 2);
    }
    return 0;
  }
  FUN_00dd5650(&DAT_016a69bc,uVar3);
  return 0xffffffff;
}

// 00C48EA0  FUN_00c48ea0  size=971  [run]
void __thiscall FUN_00c48ea0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_1c;
  int local_18;
  
  iVar8 = *(int *)(param_1 + 0x2298);
  local_18 = param_3;
  puVar10 = *(undefined4 **)(param_1 + 0x22a4);
  iVar9 = 0;
  if (puVar10 != puVar10 + *(int *)(param_1 + 0x22a8) * 7) {
    local_1c = iVar8 + 0x1a;
    do {
      if (*param_4 <= iVar9) {
        if ((param_5 == 0) || (*(int *)(param_1 + 0x22a8) < *param_4)) break;
        if (*(int *)(param_1 + 0x2294) < iVar8) {
          iVar8 = iVar8 + -1;
          local_1c = local_1c + -1;
        }
        else if (local_1c < *(int *)(param_1 + 0x2294)) {
          iVar8 = iVar8 + 1;
          local_1c = local_1c + 1;
        }
        *(int *)(param_1 + 0x2298) = iVar8;
        puVar4 = puVar10;
        if (0xf < (uint)puVar10[5]) {
          puVar4 = (undefined4 *)*puVar10;
        }
        FUN_00f96580((float)param_2,(float)local_18,0x41200000,0xffffffff,1,&DAT_016575ac,puVar4);
        local_18 = local_18 + 10;
        param_5 = param_5 + -1;
      }
      puVar10 = puVar10 + 7;
      iVar9 = iVar9 + 1;
    } while (puVar10 !=
             (undefined4 *)(*(int *)(param_1 + 0x22a4) + *(int *)(param_1 + 0x22a8) * 0x1c));
  }
  if (((-1 < *(int *)(param_1 + 0x2278)) && (*(int *)(param_1 + 0x2264) == 0)) &&
     (puVar6 = *(uint **)(param_1 + 0x2274), puVar6 != puVar6 + *(int *)(param_1 + 0x2278))) {
    do {
      puVar5 = *(uint **)(param_1 + 0x22b8);
      uVar2 = *puVar6;
      puVar1 = puVar5 + *(int *)(param_1 + 0x22bc) * 5;
      for (; (uVar7 = 0xffffffff, puVar5 != puVar1 &&
             ((uVar7 = puVar5[3], uVar2 < *puVar5 || (puVar5[1] < uVar2)))); puVar5 = puVar5 + 5) {
      }
      if (((-1 < (int)uVar2) && (iVar8 <= (int)uVar7)) && ((int)uVar7 <= iVar8 + 0x1a)) {
        FUN_00f96580((float)(param_2 + -10),(float)(int)((uVar7 - *param_4) * 10) + (float)param_3,
                     0x41200000,0xffffff00,1,&DAT_016a41f4);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (uint *)(*(int *)(param_1 + 0x2274) + *(int *)(param_1 + 0x2278) * 4));
  }
  iVar9 = *(int *)(param_1 + 0x2294);
  if (((-1 < iVar9) && (iVar8 <= iVar9)) && (iVar9 <= iVar8 + 0x1a)) {
    fVar3 = (float)((iVar9 - *param_4) * 10) + (float)param_3;
    FUN_00f95e00((float)param_2,fVar3,(float)(param_2 + 0xda),fVar3 + 10.0,0xffa9a9a9);
  }
  puVar6 = *(uint **)(param_1 + 0x22b8);
  uVar2 = *(uint *)(param_1 + 0x2250);
  uVar7 = 0xffffffff;
  if (puVar6 != puVar6 + *(int *)(param_1 + 0x22bc) * 5) {
    puVar1 = puVar6 + *(int *)(param_1 + 0x22bc) * 5;
    do {
      if ((*puVar6 <= uVar2) && (uVar7 = puVar6[3], uVar2 <= puVar6[1])) break;
      puVar6 = puVar6 + 5;
      uVar7 = 0xffffffff;
    } while (puVar6 != puVar1);
  }
  if ((((int)uVar2 < 0) || ((int)uVar7 < iVar8)) || (iVar8 + 0x1a < (int)uVar7)) {
    return;
  }
  fVar3 = (float)(int)((uVar7 - *param_4) * 10) + (float)param_3;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00f96580((float)(param_2 + -0x14),fVar3,0x41200000,0xffff0000,1,&DAT_016a41e8);
    return;
  }
  if (*(int *)(param_1 + 0x18) != 1) {
    FUN_00f96580((float)(param_2 + -0x14),fVar3,0x41200000,0xffffff00,1,&DAT_016a41f0);
    return;
  }
  FUN_00f96580((float)(param_2 + -0x14),fVar3,0x41200000,0xff90ee90,1,&DAT_016a41ec);
  return;
}

