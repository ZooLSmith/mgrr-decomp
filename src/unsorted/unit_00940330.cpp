// src/unsorted/unit_00940330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00940330..00940B10, 8 functions

#include "mgrr.h"

// 00940330  FUN_00940330  size=90  [run]
void __fastcall FUN_00940330(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x888) != 0) {
    *(undefined4 *)(param_1 + 0x890) = 0;
    if (*(int *)(param_1 + 0x894) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x888),0);
      *(undefined4 *)(param_1 + 0x894) = 0;
    }
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 0;
  }
  iVar1 = 0xb;
  do {
    FUN_00dd7270();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 009403A0  FUN_009403a0  size=166  [run]
void __fastcall FUN_009403a0(int param_1)

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
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    p_Var4 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
    p_Var1 = (_RTL_CRITICAL_SECTION *)
             ((int)p_Var4 + (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28)
    ;
    for (; p_Var4 != p_Var1; p_Var4 = (_RTL_CRITICAL_SECTION *)&p_Var4[1].LockSemaphore) {
      if ((((lpCriticalSection[-6].SpinCount == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
          (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) && ((char)piVar3[0x11c] != '\0'))
      {
        puVar5 = &DAT_01b35300;
        (**(code **)(*piVar3 + 4))(&DAT_01b35300);
        iVar2 = FUN_00dd6d80(puVar5);
        if (iVar2 != 0) {
          thunk_FUN_009fdde0();
        }
      }
    }
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00940450  FUN_00940450  size=50  [run]
void __thiscall FUN_00940450(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x54);
  iVar2 = 0xc;
  do {
    if (*piVar1 == param_2) {
      piVar1[0x14] = 1;
      FUN_0093e740();
    }
    piVar1 = piVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00940590  FUN_00940590  size=271  [run]
void __thiscall FUN_00940590(int param_1,undefined4 param_2,int param_3)

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
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lpCriticalSection[-1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var5 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
    p_Var1 = (_RTL_CRITICAL_SECTION *)
             ((int)p_Var5 + (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28)
    ;
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
          if (param_3 == 0) {
            FUN_005d84f0(param_2);
          }
          else {
            FUN_005d8530(param_2);
          }
        }
      }
    }
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009406A0  FUN_009406a0  size=259  [run]
void __thiscall FUN_009406a0(int param_1,undefined4 param_2)

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
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    p_Var5 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
    p_Var1 = (_RTL_CRITICAL_SECTION *)
             ((int)p_Var5 + (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28)
    ;
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
          (**(code **)(*piVar4 + 200))(param_2);
        }
      }
    }
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009408B0  FUN_009408b0  size=425  [run]
void __fastcall FUN_009408b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined *puVar9;
  int local_8;
  
  piVar7 = (int *)(param_1 + 0xe0);
  local_8 = 0xc;
  do {
    if (*piVar7 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar7 + -6));
    }
    piVar7[-0xc] = 0;
    iVar6 = *(int *)(piVar7[-0x24] + 4);
    iVar1 = iVar6 + *(int *)(piVar7[-0x24] + 8) * 0x28;
    for (; iVar6 != iVar1; iVar6 = iVar6 + 0x28) {
      iVar4 = FUN_00a81330();
      if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
        puVar9 = &DAT_01b35300;
        (**(code **)(*piVar5 + 4))(&DAT_01b35300);
        iVar4 = FUN_00dd6d80(puVar9);
        if (iVar4 != 0) {
          if ((piVar7[-0x25] == 0) || (piVar7[-0x1b] == 0)) {
            piVar5[0x24a] = 0;
            piVar5[0x223] = 1;
            piVar5[0x224] = 1;
            FUN_005d9490();
          }
          else {
            fVar8 = (float10)FUN_005d85a0();
            if (fVar8 <= (float10)(float)piVar7[-0x1a]) {
              FUN_005d84f0(0x40a00000);
              piVar5[0x223] = 1;
              piVar5[0x224] = 0;
              piVar5[0x24a] = 0;
              *(undefined4 *)(iVar6 + 8) = 1;
              piVar7[-0xe] = piVar7[-0xe] + 1;
              *(int *)(iVar6 + 0x10) = piVar7[-0xe];
              fVar8 = (float10)FUN_00dde300(0,0x3f800000);
              fVar2 = (float)piVar7[-0x18];
              fVar3 = (float)piVar7[-0x19];
              *(undefined4 *)(iVar6 + 0x14) = 1;
              *(float *)(iVar6 + 0xc) = (float)(fVar8 * (float10)fVar2 + (float10)fVar3);
            }
            else {
              piVar5[0x223] = 0;
              piVar5[0x224] = 0;
              piVar5[0x24a] = 0;
              *(undefined4 *)(iVar6 + 8) = 1;
              piVar7[-0xe] = piVar7[-0xe] + 1;
              *(int *)(iVar6 + 0x10) = piVar7[-0xe];
              fVar8 = (float10)FUN_00dde300(0,0x3f800000);
              fVar2 = (float)piVar7[-0x18];
              fVar3 = (float)piVar7[-0x19];
              *(undefined4 *)(iVar6 + 0x18) = 1;
              *(float *)(iVar6 + 0xc) = (float)(fVar8 * (float10)fVar2 + (float10)fVar3);
            }
          }
        }
      }
    }
    if (*piVar7 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar7 + -6));
    }
    piVar7 = piVar7 + 0x2c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 00940A60  FUN_00940a60  size=167  [run]
void __thiscall FUN_00940a60(int param_1,PRTL_CRITICAL_SECTION_DEBUG param_2)

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
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lpCriticalSection[-1].DebugInfo = param_2;
    p_Var4 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
    p_Var1 = (_RTL_CRITICAL_SECTION *)
             ((int)p_Var4 + (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28)
    ;
    for (; p_Var4 != p_Var1; p_Var4 = (_RTL_CRITICAL_SECTION *)&p_Var4[1].LockSemaphore) {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar5 = &DAT_01b35300;
        (**(code **)(*piVar3 + 4))(&DAT_01b35300);
        iVar2 = FUN_00dd6d80(puVar5);
        if (iVar2 != 0) {
          piVar3[0x24a] = (int)param_2;
        }
      }
    }
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00940B10  FUN_00940b10  size=177  [run]
void __fastcall FUN_00940b10(int param_1)

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
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lpCriticalSection[-1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var4 = (lpCriticalSection[-5].DebugInfo)->CriticalSection;
    p_Var1 = (_RTL_CRITICAL_SECTION *)
             ((int)p_Var4 + (int)((lpCriticalSection[-5].DebugInfo)->ProcessLocksList).Flink * 0x28)
    ;
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
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[7].RecursionCount;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

