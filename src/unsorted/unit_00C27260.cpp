// src/unsorted/unit_00C27260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C27260..00C29A50, 32 functions

#include "types.h"

// 00C27260  FUN_00c27260  size=51  [run]
void __thiscall FUN_00c27260(int param_1,float param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(float *)(param_1 + 0x44) = param_2 * 60.0;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C272A0  FUN_00c272a0  size=51  [run]
void __thiscall FUN_00c272a0(int param_1,float param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(float *)(param_1 + 0x48) = param_2 * 60.0;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C272E0  FUN_00c272e0  size=531  [run]
int __thiscall
FUN_00c272e0(int param_1,int param_2,undefined4 param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_30;
  int local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = FUN_00a7c8a0();
  iVar1 = *(int *)(param_1 + 0x40);
  local_30 = 3.4028235e+38;
  local_2c = 0;
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    iVar5 = FUN_00a81330();
    if ((((iVar5 != 0) && (iVar5 != param_2)) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
       (((*(byte *)(iVar6 + 0x4c0) & 0x20) != 0 && (*(int *)(iVar6 + 0x4e4) == 0)))) {
      local_20 = *(float *)(iVar6 + 0x40) - *(float *)(iVar4 + 0x40);
      local_1c = *(float *)(iVar6 + 0x44) - *(float *)(iVar4 + 0x44);
      local_18 = *(float *)(iVar6 + 0x48) - *(float *)(iVar4 + 0x48);
      local_14 = *(float *)(iVar6 + 0x4c) - *(float *)(iVar4 + 0x4c);
      fVar3 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
      if ((param_4 <= fVar3) && (fVar3 <= param_5)) {
        if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
          if (fVar3 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_20 = 0.0;
            local_1c = 1.0;
            local_18 = 0.0;
          }
          else {
            FUN_00ddf460(&local_20,&local_20);
          }
        }
        fVar7 = (float10)FUN_00fdc4e0();
        if ((((float10)-0.5 * (float10)param_6 <= fVar7) &&
            (fVar7 <= (float10)param_6 * (float10)0.5)) && (fVar3 < local_30)) {
          local_30 = fVar3;
          local_2c = iVar5;
        }
      }
    }
  }
  return local_2c;
}

// 00C27500  FUN_00c27500  size=265  [run]
int __thiscall FUN_00c27500(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float local_2c;
  int local_28;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (iVar9 = FUN_00a7c8a0(), iVar9 != 0)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    fVar1 = *(float *)(iVar9 + 0x40);
    iVar4 = *(int *)(param_1 + 0x40);
    iVar5 = *(int *)(param_1 + 0x3c);
    fVar2 = *(float *)(iVar9 + 0x44);
    local_28 = 0;
    fVar3 = *(float *)(iVar9 + 0x48);
    local_2c = param_3 * param_3;
    for (; iVar5 != iVar4; iVar5 = *(int *)(iVar5 + 8)) {
      iVar9 = FUN_00a81330();
      if ((((iVar9 != 0) && (iVar9 != param_2)) &&
          ((iVar10 = FUN_00a7c8a0(), iVar10 != 0 &&
           (((*(byte *)(iVar10 + 0x4c0) & 0x20) != 0 && (*(int *)(iVar10 + 0x4e4) == 0)))))) &&
         (fVar6 = *(float *)(iVar10 + 0x40) - fVar1, fVar8 = *(float *)(iVar10 + 0x44) - fVar2,
         fVar7 = *(float *)(iVar10 + 0x48) - fVar3,
         fVar6 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7, fVar6 < local_2c)) {
        local_2c = fVar6;
        local_28 = iVar9;
      }
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    return local_28;
  }
  return 0;
}

// 00C27610  FUN_00c27610  size=51  [run]
void FUN_00c27610(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00c27500(iVar1,unaff_retaddr,param_1);
  return;
}

// 00C27650  FUN_00c27650  size=241  [run]
int __thiscall FUN_00c27650(int param_1,float *param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x3c);
  param_3 = param_3 * param_3;
  local_4 = 0;
  for (; iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    iVar6 = FUN_00a81330();
    if (((((iVar6 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
         ((*(byte *)(iVar7 + 0x4c0) & 0x20) != 0)) &&
        ((*(int *)(iVar7 + 0x4e4) == 0 && ((param_4 == -1 || (*(int *)(iVar7 + 0x4b0) == param_4))))
        )) && (fVar3 = *(float *)(iVar7 + 0x40) - *param_2,
              fVar5 = *(float *)(iVar7 + 0x44) - param_2[1],
              fVar4 = *(float *)(iVar7 + 0x48) - param_2[2],
              fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4, fVar3 < param_3)) {
      param_3 = fVar3;
      local_4 = iVar6;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return local_4;
}

// 00C27750  FUN_00c27750  size=209  [run]
int __thiscall FUN_00c27750(int param_1,float *param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    iVar6 = FUN_00a81330();
    if (((((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
         ((*(byte *)(iVar6 + 0x4c0) & 0x20) != 0)) &&
        ((*(int *)(iVar6 + 0x4e4) == 0 && ((param_4 == -1 || (*(int *)(iVar6 + 0x4b0) == param_4))))
        )) && (fVar3 = *(float *)(iVar6 + 0x40) - *param_2,
              fVar5 = *(float *)(iVar6 + 0x44) - param_2[1],
              fVar4 = *(float *)(iVar6 + 0x48) - param_2[2],
              fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 <= param_3 * param_3)) {
      local_4 = local_4 + 1;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return local_4;
}

// 00C27830  FUN_00c27830  size=254  [run]
int __thiscall FUN_00c27830(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    iVar8 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar8 + 0x40);
    iVar7 = *(int *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar8 + 0x44);
    iVar10 = 0;
    fVar3 = *(float *)(iVar8 + 0x48);
    for (iVar8 = *(int *)(param_1 + 0x3c); iVar8 != iVar7; iVar8 = *(int *)(iVar8 + 8)) {
      iVar9 = FUN_00a81330();
      if ((((iVar9 != 0) && (iVar9 = FUN_00a7c8a0(), iVar9 != 0)) &&
          ((*(byte *)(iVar9 + 0x4c0) & 0x20) != 0)) &&
         ((*(int *)(iVar9 + 0x4e4) == 0 &&
          (fVar4 = *(float *)(iVar9 + 0x40) - fVar1, fVar6 = *(float *)(iVar9 + 0x44) - fVar2,
          fVar5 = *(float *)(iVar9 + 0x48) - fVar3,
          fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 <= param_2 * param_2)))) {
        iVar10 = iVar10 + 1;
      }
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    return iVar10;
  }
  return 0;
}

// 00C27930  FUN_00c27930  size=518  [run]
int __thiscall FUN_00c27930(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_2c;
  
  iVar7 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
    iVar8 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar8 + 0x40);
    iVar7 = *(int *)(param_1 + 0x3c);
    fVar2 = *(float *)(iVar8 + 0x44);
    iStack_2c = 0;
    fVar3 = *(float *)(iVar8 + 0x48);
    iVar8 = *(int *)(param_1 + 0x40);
    *param_2 = 1e+06;
    for (; iVar7 != iVar8; iVar7 = *(int *)(iVar7 + 8)) {
      iVar9 = FUN_00a81330();
      if ((((((iVar9 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) &&
            ((*(byte *)(iVar10 + 0x4c0) & 0x20) != 0)) &&
           (((*(int *)(iVar10 + 0x4e4) == 0 &&
             (iVar11 = *(int *)(iVar10 + 0x4b0), iVar11 != 0x20221)) &&
            ((iVar11 != 0x20180 && ((iVar11 != 0x20181 && (iVar11 != 0x20182)))))))) &&
          (((iVar11 != 0x21010 &&
            ((((iVar11 != 0x20400 && (iVar11 != 0x10800)) && (iVar11 != 0x10801)) &&
             ((iVar11 != 0x10a00 && (iVar11 != 0x10a01)))))) &&
           ((((iVar11 != 0x2c700 && ((iVar11 != 0x2c300 && (iVar11 != 0x2c330)))) &&
             (iVar11 != 0x28800)) &&
            ((iVar11 = FUN_004ddcd0(iVar10), iVar11 == 0 ||
             (((*(int *)(iVar11 + 0x1744) != 1 && (*(int *)(iVar11 + 0x19b8) == 0)) &&
              ((*(uint *)(iVar11 + 0xdd8) & 0x200000) == 0)))))))))) &&
         (((iVar11 = FUN_00416d50(0x2e), iVar11 == 0 || (*(int *)(iVar10 + 0x4b0) != 0x20040)) &&
          (fVar4 = *(float *)(iVar10 + 0x40) - fVar1, fVar6 = *(float *)(iVar10 + 0x44) - fVar2,
          fVar5 = *(float *)(iVar10 + 0x48) - fVar3,
          fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5, fVar4 < *param_2)))) {
        *param_2 = fVar4;
        iStack_2c = iVar9;
      }
    }
    *param_2 = SQRT(*param_2);
    return iStack_2c;
  }
  return 0;
}

// 00C27B40  FUN_00c27b40  size=193  [run]
int __thiscall FUN_00c27b40(int param_1,float *param_2,float param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int local_4;
  
  piVar6 = param_4;
  iVar1 = *(int *)(param_1 + 0x40);
  local_4 = 0;
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    param_4 = (int *)FUN_00a81330();
    if (((((param_4 != (int *)0x0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
         ((*(byte *)(iVar7 + 0x4c0) & 0x20) != 0)) &&
        ((*(int *)(iVar7 + 0x4e4) == 0 && ((param_5 == -1 || (*(int *)(iVar7 + 0x4b0) == param_5))))
        )) && (fVar3 = *(float *)(iVar7 + 0x40) - *param_2,
              fVar5 = *(float *)(iVar7 + 0x44) - param_2[1],
              fVar4 = *(float *)(iVar7 + 0x48) - param_2[2],
              fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 <= param_3 * param_3)) {
      (**(code **)(*piVar6 + 8))(&param_4);
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}

// 00C27C10  FUN_00c27c10  size=146  [run]
int __thiscall FUN_00c27c10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int local_4;
  
  piVar1 = param_2;
  iVar4 = *(int *)(param_1 + 0x3c);
  local_4 = 0;
  iVar2 = 0;
  if (iVar4 != *(int *)(param_1 + 0x40)) {
    do {
      param_2 = (int *)FUN_00a81330();
      if (((param_2 != (int *)0x0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
         (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar5 = &DAT_01be9d20;
        (**(code **)(*piVar3 + 4))(&DAT_01be9d20);
        iVar2 = FUN_00dd6d80(puVar5);
        if ((iVar2 != 0) && (piVar3[0x139] == 0)) {
          (**(code **)(*piVar1 + 8))(&param_2);
          local_4 = local_4 + 1;
        }
      }
      iVar4 = *(int *)(iVar4 + 8);
      iVar2 = local_4;
    } while (iVar4 != *(int *)(param_1 + 0x40));
  }
  return iVar2;
}

// 00C27CB0  FUN_00c27cb0  size=71  [run]
undefined4 FUN_00c27cb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      uVar2 = FUN_00c27b40(iVar1 + 0x40,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

// 00C27D00  FUN_00c27d00  size=43  [run]
void __fastcall FUN_00c27d00(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C27D30  FUN_00c27d30  size=41  [run]
undefined4 __fastcall FUN_00c27d30(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}

// 00C27D60  FUN_00c27d60  size=116  [run]
void __thiscall FUN_00c27d60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar3 = 5;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 != param_3)) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x150))(param_2,param_3);
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C27DE0  FUN_00c27de0  size=150  [run]
undefined4 __thiscall FUN_00c27de0(int param_1,undefined4 param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 != param_3)) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x14c))(param_2,param_3);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x20) != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return 0;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

// 00C27E80  FUN_00c27e80  size=98  [run]
void __thiscall FUN_00c27e80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 == param_2) {
      FUN_00a7c950();
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c27ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}

// 00C27EF0  FUN_00c27ef0  size=78  [run]
int __fastcall FUN_00c27ef0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar3 = 5;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      FUN_00a7c950();
    }
    else {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return iVar2;
}

// 00C27F40  FUN_00c27f40  size=58  [run]
void __thiscall FUN_00c27f40(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x7c + param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 0x78 + param_2 * 8) = 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C27F80  FUN_00c27f80  size=50  [run]
void __thiscall FUN_00c27f80(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x78 + param_2 * 8) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00C27FC0  FUN_00c27fc0  size=92  [run]
void __fastcall FUN_00c27fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
       (piVar4[0x139] == 0)) {
      puVar5 = &DAT_01be9c78;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c78);
      iVar3 = FUN_00dd6d80(puVar5);
      if (iVar3 != 0) {
        *(undefined1 *)(piVar4 + 0x36d) = 0;
      }
    }
  }
  return;
}

// 00C28020  FUN_00c28020  size=321  [run]
void __thiscall FUN_00c28020(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int unaff_retaddr;
  undefined *puVar10;
  int *piStack_c;
  float local_8;
  
  local_8 = 0.0;
  iVar6 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar9 = *(int *)(param_1 + 0x3c);
    if (iVar9 != iVar1) {
      do {
        iVar7 = FUN_00a81330();
        if (((iVar7 != 0) && (piVar8 = (int *)FUN_00a7c8a0(), piVar8 != (int *)0x0)) &&
           (piVar8[0x139] == 0)) {
          puVar10 = &DAT_01be9c78;
          (**(code **)(*piVar8 + 4))(&DAT_01be9c78);
          iVar7 = FUN_00dd6d80(puVar10);
          if (((iVar7 != 0) && (iVar7 = FUN_00a82d50(), iVar7 == 4)) &&
             ((piVar8[0x36a] != -1 && (piVar8[0x36a] == unaff_retaddr)))) {
            bVar5 = true;
            piVar8[0x36c] = 1;
            fVar2 = (float)piVar8[0x10] - *(float *)(iVar6 + 0x40);
            fVar4 = (float)piVar8[0x11] - *(float *)(iVar6 + 0x44);
            fVar3 = (float)piVar8[0x12] - *(float *)(iVar6 + 0x48);
            fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
            if ((param_2 != 0) && ((*(byte *)(piVar8 + 0x36d) & 8) != 0)) {
              bVar5 = false;
            }
            if ((fVar2 < local_8) && (bVar5)) {
              piStack_c = piVar8;
              local_8 = fVar2;
            }
          }
        }
        iVar9 = *(int *)(iVar9 + 8);
      } while (iVar9 != iVar1);
      if (piStack_c != (int *)0x0) {
        piStack_c[0x36c] = 2;
      }
    }
  }
  return;
}

// 00C28170  FUN_00c28170  size=154  [run]
void __thiscall FUN_00c28170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  for (iVar2 = *(int *)(param_1 + 0x3c); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
       (piVar4[0x139] == 0)) {
      puVar5 = &DAT_01be9c78;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c78);
      iVar3 = FUN_00dd6d80(puVar5);
      if (((iVar3 != 0) && (iVar3 = FUN_00a82d50(), iVar3 == 4)) &&
         ((piVar4[0x36a] != -1 &&
          ((piVar4[0x36a] == param_2 && (piVar4[0x36c] = 1, (*(byte *)(piVar4 + 0x36d) & 1) != 0))))
         )) {
        piVar4[0x36c] = 2;
      }
    }
  }
  return;
}

// 00C28210  FUN_00c28210  size=312  [run]
void __fastcall FUN_00c28210(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int unaff_retaddr;
  undefined *puVar9;
  int *piStack_c;
  float local_8;
  
  local_8 = 0.0;
  iVar5 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar8 = *(int *)(param_1 + 0x3c);
    if (iVar8 != iVar1) {
      do {
        iVar6 = FUN_00a81330();
        if (((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) &&
           (piVar7[0x139] == 0)) {
          puVar9 = &DAT_01be9c78;
          (**(code **)(*piVar7 + 4))(&DAT_01be9c78);
          iVar6 = FUN_00dd6d80(puVar9);
          if (((iVar6 != 0) && (iVar6 = FUN_00a82d50(), iVar6 == 4)) &&
             ((piVar7[0x36a] != -1 && (piVar7[0x36a] == unaff_retaddr)))) {
            piVar7[0x36c] = 1;
            fVar2 = (float)piVar7[0x10] - *(float *)(iVar5 + 0x40);
            fVar4 = (float)piVar7[0x11] - *(float *)(iVar5 + 0x44);
            fVar3 = (float)piVar7[0x12] - *(float *)(iVar5 + 0x48);
            fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
            if (((fVar2 < local_8) && ((*(byte *)(piVar7 + 0x36d) & 4) != 0)) &&
               ((*(byte *)(piVar7 + 0x36d) & 8) == 0)) {
              piStack_c = piVar7;
              local_8 = fVar2;
            }
          }
        }
        iVar8 = *(int *)(iVar8 + 8);
      } while (iVar8 != iVar1);
      if (piStack_c != (int *)0x0) {
        piStack_c[0x36c] = 2;
      }
    }
  }
  return;
}

// 00C283D0  FUN_00c283d0  size=64  [run]
undefined4 __thiscall FUN_00c283d0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - *(float *)(param_1 + 4);
  fVar3 = param_2[1] - *(float *)(param_1 + 8);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xc);
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <
      *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}

// 00C28410  FUN_00c28410  size=83  [run]
undefined4 __thiscall FUN_00c28410(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2 - *(float *)(param_1 + 4);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xc);
  if (((fVar2 * fVar2 + fVar1 * fVar1 < *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10)) &&
      (fVar1 = param_2[1] - *(float *)(param_1 + 8), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)))
     && (fVar1 < *(float *)(param_1 + 0x14) != (fVar1 == *(float *)(param_1 + 0x14)))) {
    return 1;
  }
  return 0;
}

// 00C28510  FUN_00c28510  size=82  [run]
int __fastcall FUN_00c28510(int param_1)

{
  FUN_00a7c930();
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_00a7c950();
  return param_1;
}

// 00C28BC0  FUN_00c28bc0  size=608  [run]
float * __thiscall FUN_00c28bc0(int param_1,float *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint *puVar7;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x6980) != 0) {
    puVar7 = (uint *)(param_1 + 0x348);
    do {
      if ((puVar7[-0xd2] != 0) && (cVar2 = FUN_00ca51e0(param_2), cVar2 != '\0')) {
        uVar1 = *puVar7;
        pfVar5 = (float *)0x0;
        uVar3 = 0;
        if (3 < (int)uVar1) {
          iVar6 = (uVar1 - 4 >> 2) + 1;
          uVar3 = iVar6 * 4;
          pfVar4 = (float *)(puVar7 + -0xbb);
          do {
            if ((pfVar4[-5] != 0.0) && (((uint)pfVar4[6] & param_3) != 0)) {
              if ((pfVar5 == (float *)0x0) ||
                 (0.0 < (param_2[2] - *pfVar4) * (param_2[2] - *pfVar4) +
                        (param_2[1] - pfVar4[-1]) * (param_2[1] - pfVar4[-1]) +
                        (*param_2 - pfVar4[-2]) * (*param_2 - pfVar4[-2]))) {
                pfVar5 = pfVar4 + -5;
              }
            }
            if ((pfVar4[7] != 0.0) && (((uint)pfVar4[0x12] & param_3) != 0)) {
              if ((pfVar5 == (float *)0x0) ||
                 (0.0 < (param_2[2] - pfVar4[0xc]) * (param_2[2] - pfVar4[0xc]) +
                        (param_2[1] - pfVar4[0xb]) * (param_2[1] - pfVar4[0xb]) +
                        (*param_2 - pfVar4[10]) * (*param_2 - pfVar4[10]))) {
                pfVar5 = pfVar4 + 7;
              }
            }
            if ((pfVar4[0x13] != 0.0) && (((uint)pfVar4[0x1e] & param_3) != 0)) {
              if ((pfVar5 == (float *)0x0) ||
                 (0.0 < (param_2[2] - pfVar4[0x18]) * (param_2[2] - pfVar4[0x18]) +
                        (param_2[1] - pfVar4[0x17]) * (param_2[1] - pfVar4[0x17]) +
                        (*param_2 - pfVar4[0x16]) * (*param_2 - pfVar4[0x16]))) {
                pfVar5 = pfVar4 + 0x13;
              }
            }
            if ((pfVar4[0x1f] != 0.0) && (((uint)pfVar4[0x2a] & param_3) != 0)) {
              if ((pfVar5 == (float *)0x0) ||
                 (0.0 < (param_2[2] - pfVar4[0x24]) * (param_2[2] - pfVar4[0x24]) +
                        (param_2[1] - pfVar4[0x23]) * (param_2[1] - pfVar4[0x23]) +
                        (*param_2 - pfVar4[0x22]) * (*param_2 - pfVar4[0x22]))) {
                pfVar5 = pfVar4 + 0x1f;
              }
            }
            pfVar4 = pfVar4 + 0x30;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (uVar3 < uVar1) {
          iVar6 = uVar1 - uVar3;
          pfVar4 = (float *)(puVar7 + uVar3 * 0xc + -0xbb);
          do {
            if ((pfVar4[-5] != 0.0) && (((uint)pfVar4[6] & param_3) != 0)) {
              if ((pfVar5 == (float *)0x0) ||
                 (0.0 < (param_2[2] - *pfVar4) * (param_2[2] - *pfVar4) +
                        (param_2[1] - pfVar4[-1]) * (param_2[1] - pfVar4[-1]) +
                        (*param_2 - pfVar4[-2]) * (*param_2 - pfVar4[-2]))) {
                pfVar5 = pfVar4 + -5;
              }
            }
            pfVar4 = pfVar4 + 0xc;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (pfVar5 != (float *)0x0) {
          return pfVar5;
        }
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0xd3;
    } while (local_8 < *(uint *)(param_1 + 0x6980));
  }
  return (float *)0x0;
}

// 00C28E20  FUN_00c28e20  size=51  [run]
int __fastcall FUN_00c28e20(int param_1)

{
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}

// 00C28E60  FUN_00c28e60  size=35  [run]
int * __thiscall FUN_00c28e60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 1;
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      if (piVar1[1] == param_2) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < *param_1);
  }
  return (int *)0x0;
}

// 00C29A20  FUN_00c29a20  size=43  [run]
void FUN_00c29a20(void)

{
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  DAT_01dc0a08 = 1;
  DAT_01dc0a4c = 1;
  DAT_01dc0c50 = 1;
  DAT_01dc0c54 = 1;
  DAT_01dc1220 = 1;
  DAT_01dc136c = 1;
  return;
}

// 00C29A50  FUN_00c29a50  size=93  [run]
void FUN_00c29a50(void)

{
  int iVar1;
  
  FUN_009367e0();
  FUN_009398e0();
  (**(code **)(*DAT_01bea184 + 0x1c))();
  FUN_009c8c00(3,0xffffffff);
  iVar1 = FUN_00cac330();
  if (iVar1 != 0) {
    FUN_00ce12e0();
  }
  DAT_01bea174 = 1;
  FUN_00e5e1b0("bgm_Mission_Failed_Enter1");
  return;
}

