// src/unsorted/unit_00C24C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C24C70..00C26450, 16 functions

#include "types.h"

// 00C24C70  FUN_00c24c70  size=81  [run]
undefined1 * __fastcall FUN_00c24c70(undefined1 *param_1)

{
  FUN_00a7c930();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
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
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  FUN_00a7c950();
  return param_1;
}

// 00C24CD0  FUN_00c24cd0  size=81  [run]
undefined1 * __fastcall FUN_00c24cd0(undefined1 *param_1)

{
  FUN_00a7c930();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
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
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  FUN_00a7c950();
  return param_1;
}

// 00C24D30  FUN_00c24d30  size=611  [run]
int __thiscall
FUN_00c24d30(int param_1,int param_2,float param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float local_38;
  int local_34;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_34 = 0;
    iVar7 = FUN_00a7c800();
    if (iVar7 != 0) {
      piVar1 = *(int **)(param_1 + 0x48);
      local_38 = param_3 * param_3;
      for (piVar2 = *(int **)(param_1 + 0x44); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
        iVar3 = *piVar2;
        if (((iVar3 != param_2) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) {
          if ((param_4 != 0) && (iVar8 = 0, 0 < param_5)) {
            do {
              if (*(int *)(param_4 + iVar8 * 4) == iVar3) goto LAB_00c24e76;
              iVar8 = iVar8 + 1;
            } while (iVar8 < param_5);
          }
          piVar9 = (int *)FUN_00a7c8a0();
          if (((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0)) &&
             ((piVar9[0x1bb] != 0 && (iVar8 = FUN_00a7c800(), iVar8 != 0)))) {
            (**(code **)(*piVar9 + 0x204))(&fStack_20);
            fVar4 = fStack_20 - *(float *)(iVar7 + 0x50);
            fVar6 = fStack_1c - *(float *)(iVar7 + 0x54);
            fVar5 = fStack_18 - *(float *)(iVar7 + 0x58);
            fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4;
            if (fVar4 <= local_38) {
              local_38 = fVar4;
              local_34 = iVar3;
            }
          }
        }
LAB_00c24e76:
      }
      if (param_7 != 0) {
        piVar1 = *(int **)(param_1 + 100);
        for (piVar2 = *(int **)(param_1 + 0x60); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
          iVar3 = *piVar2;
          if (((iVar3 != param_2) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) {
            if ((param_4 != 0) && (iVar8 = 0, 0 < param_5)) {
              do {
                if (*(int *)(param_4 + iVar8 * 4) == iVar3) goto LAB_00c24f68;
                iVar8 = iVar8 + 1;
              } while (iVar8 < param_5);
            }
            piVar9 = (int *)FUN_00a7c8a0();
            if (((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0))
               && ((piVar9[0x1bb] != 0 && ((param_8 == 0 && (iVar8 = FUN_00a7c800(), iVar8 != 0)))))
               ) {
              (**(code **)(*piVar9 + 0x204))(&fStack_20);
              fVar4 = fStack_20 - *(float *)(iVar7 + 0x50);
              fVar6 = fStack_1c - *(float *)(iVar7 + 0x54);
              fVar5 = fStack_18 - *(float *)(iVar7 + 0x58);
              fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4;
              if (fVar4 <= local_38) {
                local_38 = fVar4;
                local_34 = iVar3;
              }
            }
          }
LAB_00c24f68:
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_34;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C24FA0  FUN_00c24fa0  size=352  [run]
int __thiscall FUN_00c24fa0(int param_1,int param_2,float param_3,int param_4,int param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float local_34;
  int local_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_2c = 0;
    iVar7 = FUN_00a7c800();
    if (iVar7 != 0) {
      piVar1 = *(int **)(param_1 + 0x48);
      piVar2 = *(int **)(param_1 + 0x44);
      local_34 = param_3 * param_3;
      do {
        if (piVar2 == piVar1) {
          if (*(int *)(param_1 + 0x28) != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return local_2c;
        }
        iVar3 = *piVar2;
        if (((iVar3 != param_2) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) {
          if ((param_4 != 0) && (iVar8 = 0, 0 < param_5)) {
            do {
              if (*(int *)(param_4 + iVar8 * 4) == iVar3) goto LAB_00c250df;
              iVar8 = iVar8 + 1;
            } while (iVar8 < param_5);
          }
          iVar8 = FUN_00a7c800();
          if (((iVar8 != 0) && (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) &&
             (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0)) {
            (**(code **)(*piVar9 + 0x204))(&fStack_20);
            fVar4 = fStack_20 - *(float *)(iVar7 + 0x50);
            fVar6 = fStack_1c - *(float *)(iVar7 + 0x54);
            fVar5 = fStack_18 - *(float *)(iVar7 + 0x58);
            fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
            if (fVar4 <= local_34) {
              local_34 = fVar4;
              local_2c = iVar3;
            }
          }
        }
LAB_00c250df:
        piVar2 = (int *)piVar2[2];
      } while( true );
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C25110  FUN_00c25110  size=752  [run]
int __thiscall
FUN_00c25110(int param_1,int param_2,float param_3,float param_4,float param_5,int param_6,
            int param_7,undefined4 param_8,int param_9,int param_10)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float local_3c;
  int local_34;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_34 = 0;
    iVar7 = FUN_00a7c800();
    if (iVar7 != 0) {
      piVar1 = *(int **)(param_1 + 0x48);
      local_3c = param_4;
      for (piVar2 = *(int **)(param_1 + 0x44); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
        iVar3 = *piVar2;
        if (((iVar3 != param_2) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) {
          if ((param_6 != 0) && (iVar8 = 0, 0 < param_7)) {
            do {
              if (*(int *)(param_6 + iVar8 * 4) == iVar3) goto LAB_00c2529d;
              iVar8 = iVar8 + 1;
            } while (iVar8 < param_7);
          }
          piVar9 = (int *)FUN_00a7c8a0();
          if (((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0)) &&
             ((piVar9[0x1bb] != 0 &&
              ((iVar8 = FUN_00a7c800(), iVar8 != 0 &&
               ((**(code **)(*piVar9 + 0x204))(&fStack_20),
               fVar4 = fStack_20 - *(float *)(iVar7 + 0x50),
               fVar6 = fStack_1c - *(float *)(iVar7 + 0x54),
               fVar5 = fStack_18 - *(float *)(iVar7 + 0x58),
               fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4 <= param_5 * param_5)))))) {
            fVar10 = (float10)FUN_009f8c60(iVar8 + 0x50);
            fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_3));
            if (ABS(fVar10) <= (float10)local_3c) {
              local_3c = (float)ABS(fVar10);
              local_34 = iVar3;
            }
          }
        }
LAB_00c2529d:
      }
      if (param_9 != 0) {
        piVar1 = *(int **)(param_1 + 100);
        for (piVar2 = *(int **)(param_1 + 0x60); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
          iVar3 = *piVar2;
          if ((iVar3 != param_2) && (iVar3 != 0)) {
            if ((param_6 != 0) && (iVar8 = 0, 0 < param_7)) {
              do {
                if (*(int *)(param_6 + iVar8 * 4) == iVar3) goto LAB_00c253d3;
                iVar8 = iVar8 + 1;
              } while (iVar8 < param_7);
            }
            piVar9 = (int *)FUN_00a7c8a0();
            if (((((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0))
                 && (piVar9[0x1bb] != 0)) &&
                ((param_10 == 0 && (iVar8 = FUN_00a7c800(), iVar8 != 0)))) &&
               ((**(code **)(*piVar9 + 0x204))(&fStack_20),
               fVar4 = fStack_20 - *(float *)(iVar7 + 0x50),
               fVar6 = fStack_1c - *(float *)(iVar7 + 0x54),
               fVar5 = fStack_18 - *(float *)(iVar7 + 0x58),
               fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4 <= param_5 * param_5)) {
              fVar10 = (float10)FUN_009f8c60(iVar8 + 0x50);
              fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_3));
              if (ABS(fVar10) <= (float10)local_3c) {
                local_3c = (float)ABS(fVar10);
                local_34 = iVar3;
              }
            }
          }
LAB_00c253d3:
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_34;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C25410  FUN_00c25410  size=314  [run]
int __thiscall FUN_00c25410(int param_1,int param_2,float param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_34;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar6 = FUN_00a7c800();
    if (iVar6 != 0) {
      piVar1 = *(int **)(param_1 + 0x48);
      piVar2 = *(int **)(param_1 + 0x44);
      local_34 = 0;
      for (; piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
        iVar8 = *piVar2;
        if (((((iVar8 != param_2) && (iVar8 != 0)) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
            ((piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0 &&
             (iVar8 = (**(code **)(*piVar7 + 0x200))(), iVar8 != 0)))) &&
           ((piVar7[0x1bb] != 0 &&
            ((iVar8 = FUN_00a7c800(), iVar8 != 0 &&
             ((**(code **)(*piVar7 + 0x204))(&fStack_20),
             fVar3 = fStack_20 - *(float *)(iVar6 + 0x50),
             fVar5 = fStack_1c - *(float *)(iVar6 + 0x54),
             fVar4 = fStack_18 - *(float *)(iVar6 + 0x58),
             fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 <= param_3 * param_3)))))) {
          local_34 = local_34 + 1;
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_34;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C25550  FUN_00c25550  size=385  [run]
int __thiscall FUN_00c25550(int param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_8;
  
  if (((param_2 == 0) || (param_3 == 0)) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar9 = FUN_00a7c800();
  if (iVar9 != 0) {
    iVar10 = FUN_00a7c800();
    if (iVar10 != 0) {
      piVar1 = *(int **)(param_1 + 0x48);
      fVar3 = *(float *)(iVar9 + 0x50) - *(float *)(iVar10 + 0x50);
      piVar2 = *(int **)(param_1 + 0x44);
      local_8 = 0;
      fVar5 = *(float *)(iVar9 + 0x54) - *(float *)(iVar10 + 0x54);
      fVar4 = *(float *)(iVar9 + 0x58) - *(float *)(iVar10 + 0x58);
      for (; piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
        iVar9 = *piVar2;
        if (((((iVar9 != param_2) && (iVar9 != param_3)) &&
             ((iVar9 != 0 &&
              (((*(byte *)(iVar9 + 0x28) & 2) == 0 &&
               (piVar11 = (int *)FUN_00a7c8a0(), piVar11 != (int *)0x0)))))) &&
            (iVar9 = (**(code **)(*piVar11 + 0x200))(), iVar9 != 0)) &&
           (((piVar11[0x1bb] != 0 && (iVar9 = FUN_00a7c800(), iVar9 != 0)) &&
            (fVar6 = *(float *)(iVar9 + 0x50) - *(float *)(iVar10 + 0x50),
            fVar8 = *(float *)(iVar9 + 0x54) - *(float *)(iVar10 + 0x54),
            fVar7 = *(float *)(iVar9 + 0x58) - *(float *)(iVar10 + 0x58),
            fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6 <=
            fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4)))) {
          local_8 = local_8 + 1;
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_8;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C256E0  FUN_00c256e0  size=727  [run]
int __thiscall
FUN_00c256e0(int param_1,int param_2,float *param_3,float *param_4,float param_5,float param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_40;
  int local_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  local_3c = 0;
  local_20 = *param_4;
  local_1c = param_4[1];
  local_18 = param_4[2];
  local_14 = param_4[3];
  fVar4 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
  if (fVar4 < 0.0 == (fVar4 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  piVar1 = *(int **)(param_1 + 0x48);
  piVar2 = *(int **)(param_1 + 0x44);
  local_40 = param_5;
  do {
    if (piVar2 == piVar1) {
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      return local_3c;
    }
    iVar3 = *piVar2;
    if (((iVar3 != param_2) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) {
      if ((param_7 != 0) && (iVar6 = 0, 0 < param_8)) {
        do {
          if (*(int *)(param_7 + iVar6 * 4) == iVar3) goto LAB_00c25984;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_8);
      }
      piVar7 = (int *)FUN_00a7c8a0();
      if (((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 0x200))(), iVar6 != 0)) &&
         ((piVar7[0x1bb] != 0 &&
          ((iVar6 = FUN_00a7c800(), iVar6 != 0 && (iVar6 = FUN_00a12210(0), iVar6 != 0)))))) {
        fStack_30 = *(float *)(iVar6 + 0x40) - *param_3;
        fStack_2c = *(float *)(iVar6 + 0x44) - param_3[1];
        fStack_28 = *(float *)(iVar6 + 0x48) - param_3[2];
        fStack_24 = *(float *)(iVar6 + 0x4c) - param_3[3];
        fVar4 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
        fVar5 = SQRT(fVar4);
        if (fVar5 <= param_6) {
          if (fVar5 <= 0.0) {
            local_40 = 0.0;
            local_3c = iVar3;
          }
          else {
            if (fVar4 <= 0.0) {
              FUN_00dd5650(&DAT_0163d0ac);
              fStack_30 = 0.0;
              fStack_2c = 1.0;
              fStack_28 = 0.0;
            }
            else {
              FUN_00ddf460(&fStack_30,&fStack_30);
            }
            fVar8 = (float10)FUN_00fdc4e0();
            if (fVar8 <= (float10)local_40) {
              local_40 = (float)fVar8;
              local_3c = iVar3;
            }
          }
        }
      }
    }
LAB_00c25984:
    piVar2 = (int *)piVar2[2];
  } while( true );
}

// 00C259C0  FUN_00c259c0  size=370  [run]
int __thiscall
FUN_00c259c0(int param_1,int param_2,float *param_3,float param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float local_30;
  int local_2c;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar4 = *(int **)(param_1 + 0x48);
  piVar5 = *(int **)(param_1 + 0x44);
  local_2c = 0;
  local_30 = param_4;
  do {
    if (piVar5 == piVar4) {
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      return local_2c;
    }
    iVar6 = *piVar5;
    if (((iVar6 != param_2) && (iVar6 != 0)) && ((*(byte *)(iVar6 + 0x28) & 2) == 0)) {
      if ((param_5 != 0) && (iVar7 = 0, 0 < param_6)) {
        do {
          if (*(int *)(param_5 + iVar7 * 4) == iVar6) goto LAB_00c25b07;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_6);
      }
      piVar8 = (int *)FUN_00a7c8a0();
      if (((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 0x200))(), iVar7 != 0)) &&
         ((piVar8[0x1bb] != 0 && (iVar7 = FUN_00a7c800(), iVar7 != 0)))) {
        fVar1 = *(float *)(iVar7 + 0x50);
        fVar2 = *(float *)(iVar7 + 0x54);
        fVar3 = *(float *)(iVar7 + 0x58);
        iVar7 = FUN_00a12210(0);
        if (iVar7 != 0) {
          fVar1 = *(float *)(iVar7 + 0x40);
          fVar2 = *(float *)(iVar7 + 0x44);
          fVar3 = *(float *)(iVar7 + 0x48);
        }
        fVar1 = SQRT((fVar3 - param_3[2]) * (fVar3 - param_3[2]) +
                     (fVar1 - *param_3) * (fVar1 - *param_3) +
                     (fVar2 - param_3[1]) * (fVar2 - param_3[1]));
        if (fVar1 <= local_30) {
          local_30 = fVar1;
          local_2c = iVar6;
        }
      }
    }
LAB_00c25b07:
    piVar5 = (int *)piVar5[2];
  } while( true );
}

// 00C25B40  FUN_00c25b40  size=1000  [run]
undefined4 __thiscall
FUN_00c25b40(int param_1,int param_2,int param_3,float param_4,float param_5,int param_6,int param_7
            )

{
  LPCRITICAL_SECTION p_Var1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float unaff_EBX;
  int *piVar7;
  float unaff_EDI;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  int *local_104;
  LPCRITICAL_SECTION local_f4;
  float afStack_f0 [2];
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [100];
  
  if (((param_2 != 0) && (param_3 != 0)) && (*(int *)(param_1 + 0x28) != 0)) {
    p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x10);
    local_f4 = p_Var1;
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(p_Var1);
    }
    iVar4 = FUN_00a7c800();
    iVar5 = FUN_00a7c800();
    if ((iVar4 == 0) || (iVar5 == 0)) {
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(p_Var1);
        return 0;
      }
    }
    else {
      local_120 = *(float *)(iVar4 + 0x50);
      local_11c = *(float *)(iVar4 + 0x54);
      local_118 = *(float *)(iVar4 + 0x58);
      local_114 = *(undefined4 *)(iVar4 + 0x5c);
      local_110 = *(undefined4 *)(iVar5 + 0x50);
      local_10c = *(undefined4 *)(iVar5 + 0x54);
      local_108 = *(float *)(iVar5 + 0x58);
      local_104 = *(int **)(iVar5 + 0x5c);
      fVar12 = (float)(iVar4 + 0xf0);
      D3DXVec3TransformNormal(&local_120);
      fVar2 = *(float *)(iVar4 + 0x124);
      fVar3 = *(float *)(iVar4 + 0x128);
      D3DXVec3TransformNormal(&local_11c,&local_11c,iVar4 + 0xf0);
      fVar9 = (float10)*(float *)(iVar4 + 0x124) + (float10)(fVar3 + fStack_124);
      p_Var1 = (LPCRITICAL_SECTION)(float)fVar9;
      fVar10 = (float10)*(float *)(iVar4 + 0x128) + (float10)local_120;
      local_120 = (float)fVar10;
      fVar11 = ((float10)(fVar2 + unaff_EBX) + (float10)*(float *)(iVar4 + 0x120)) -
               (float10)(float)&local_120;
      fVar9 = fVar9 - (float10)fVar12;
      fVar10 = fVar10 - (float10)unaff_EDI;
      afStack_f0[0] = (float)SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
      fVar9 = (float10)fpatan(fVar9,SQRT(fVar10 * fVar10 + fVar11 * fVar11));
      fVar9 = -fVar9;
      local_108 = (float)fVar9;
      fVar10 = (float10)fpatan(fVar11,fVar10);
      fVar11 = (float10)0;
      fStack_b0 = (float)fVar11;
      fStack_b4 = (float)fVar11;
      fStack_b8 = (float)fVar11;
      fStack_bc = (float)fVar11;
      fStack_c4 = (float)fVar11;
      fStack_c8 = (float)fVar11;
      fStack_cc = (float)fVar11;
      fStack_d0 = (float)fVar11;
      fStack_d8 = (float)fVar11;
      fStack_dc = (float)fVar11;
      fStack_e0 = (float)fVar11;
      fStack_e4 = (float)fVar11;
      uStack_ac = 0x3f800000;
      uStack_c0 = 0x3f800000;
      uStack_d4 = 0x3f800000;
      uStack_e8 = 0x3f800000;
      if (fVar11 != fVar10) {
        D3DXMatrixRotationY(auStack_68,(float)fVar10);
        D3DXMatrixMultiply(afStack_f0,auStack_70,afStack_f0);
        fVar9 = (float10)local_108;
      }
      if (fVar9 != (float10)0) {
        D3DXMatrixRotationX(auStack_68,(float)fVar9);
        D3DXMatrixMultiply(afStack_f0,auStack_70,afStack_f0);
      }
      D3DXMatrixMultiply(&uStack_e8,&uStack_e8,iVar4 + 0xb0);
      fStack_c4 = *(float *)(iVar4 + 0x50);
      uStack_c0 = *(undefined4 *)(iVar4 + 0x54);
      fStack_bc = *(float *)(iVar4 + 0x58);
      D3DXMatrixInverse(&fStack_b4,0,&local_f4);
      piVar8 = *(int **)(param_1 + 0x48);
      piVar7 = *(int **)(param_1 + 0x44);
      local_104 = piVar8;
      if (piVar7 != piVar8) {
        do {
          iVar4 = *piVar7;
          if (((iVar4 != param_2) && (iVar4 != param_3)) &&
             ((iVar4 != 0 && ((*(byte *)(iVar4 + 0x28) & 2) == 0)))) {
            if ((param_6 != 0) && (iVar5 = 0, 0 < param_7)) {
              do {
                if (*(int *)(param_6 + iVar5 * 4) == iVar4) goto LAB_00c25f01;
                iVar5 = iVar5 + 1;
              } while (iVar5 < param_7);
            }
            piVar6 = (int *)FUN_00a7c8a0();
            piVar8 = local_104;
            if ((((piVar6 != (int *)0x0) &&
                 (iVar4 = (**(code **)(*piVar6 + 0x200))(), piVar8 = local_104, iVar4 != 0)) &&
                (piVar6[0x1bb] != 0)) && (iVar4 = FUN_00a7c800(), piVar8 = local_104, iVar4 != 0)) {
              D3DXVec3TransformNormal(&local_120,iVar4 + 0x50,&uStack_c0);
              local_120 = fStack_90 + local_120;
              local_11c = fStack_8c + local_11c;
              local_118 = fStack_88 + local_118;
              piVar8 = local_104;
              if ((((local_120 <= param_4) && (-param_4 <= local_120)) &&
                  ((local_11c <= param_5 && ((-param_5 <= local_11c && (local_118 <= local_108))))))
                 && (0.0 <= local_118)) {
                if (p_Var1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                  LeaveCriticalSection(p_Var1);
                }
                return 1;
              }
            }
          }
LAB_00c25f01:
          piVar7 = (int *)piVar7[2];
        } while (piVar7 != piVar8);
      }
      if (p_Var1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(p_Var1);
      }
    }
  }
  return 0;
}

// 00C25FA0  FUN_00c25fa0  size=91  [run]
int __fastcall FUN_00c25fa0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar1 = *(int **)(param_1 + 0x48);
  for (piVar2 = *(int **)(param_1 + 0x44); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
    if ((((*piVar2 != 0) && ((*(byte *)(*piVar2 + 0x28) & 2) == 0)) &&
        (iVar3 = FUN_00a7c800(), iVar3 != 0)) && ((*(byte *)(iVar3 + 0x4c0) & 0x20) != 0)) {
      iVar4 = iVar4 + 1;
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return iVar4;
}

// 00C26000  FUN_00c26000  size=259  [run]
int __thiscall FUN_00c26000(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_4;
  
  local_4 = 0;
  if (DAT_01be8e54 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  iVar6 = DAT_01be8e54;
  piVar2 = *(int **)(param_1 + 0x48);
  for (piVar1 = *(int **)(param_1 + 0x44); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
    if (((((*piVar1 != 0) && ((*(byte *)(*piVar1 + 0x28) & 2) == 0)) &&
         (iVar7 = FUN_00a7c800(), iVar7 != 0)) &&
        (((*(byte *)(iVar7 + 0x4c0) & 0x20) != 0 &&
         (piVar8 = (int *)FUN_00a7c8a0(), piVar8 != (int *)0x0)))) &&
       ((iVar9 = (**(code **)(*piVar8 + 0x200))(), iVar9 != 0 &&
        ((piVar8[0x1bb] != 0 &&
         (fVar3 = *(float *)(iVar7 + 0x50) - *(float *)(iVar6 + 0x50),
         fVar5 = *(float *)(iVar7 + 0x54) - *(float *)(iVar6 + 0x54),
         fVar4 = *(float *)(iVar7 + 0x58) - *(float *)(iVar6 + 0x58),
         fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 <= param_2 * param_2)))))) {
      local_4 = local_4 + 1;
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return local_4;
}

// 00C26110  FUN_00c26110  size=113  [run]
void __fastcall FUN_00c26110(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  piVar2 = *(int **)(param_1 + 0x48);
  for (piVar1 = *(int **)(param_1 + 0x44); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
    if ((*piVar1 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x204))(local_30);
      uStack_40 = *puVar4;
      uStack_3c = puVar4[1];
      uStack_38 = puVar4[2];
      uStack_34 = puVar4[3];
      FUN_00d9fa80(auStack_20,&uStack_40);
    }
  }
  return;
}

// 00C26190  FUN_00c26190  size=137  [run]
bool __fastcall FUN_00c26190(int param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    return false;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if (*(int *)(iVar1 + 0x6ec) == 0) {
        return false;
      }
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if (*(int *)(iVar1 + 0x4e4) != 0) {
        return false;
      }
    }
  }
  return *(int *)(param_1 + 0x34) != 0;
}

// 00C262A0  FUN_00c262a0  size=430  [run]
undefined4 __thiscall
FUN_00c262a0(int param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  FUN_00c15370(&local_20);
  fVar1 = *(float *)(param_1 + 0x30) + local_1c;
  param_4 = *(float *)(param_1 + 0x14) + param_4;
  fVar2 = (local_20 - *param_2) * (local_20 - *param_2) +
          (local_18 - param_2[2]) * (local_18 - param_2[2]);
  param_4 = param_4 * param_4;
  if (fVar2 < param_4 == (fVar2 == param_4)) {
    return 0;
  }
  if ((((local_1c < param_2[1]) && (param_2[1] <= fVar1)) ||
      ((param_5 = param_2[1] + param_5, local_1c <= param_5 && (param_5 < fVar1)))) ||
     ((param_2[1] < local_1c != (param_2[1] == local_1c) && (fVar1 <= param_5)))) {
    fVar1 = *(float *)(param_1 + 0x34);
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
    }
    bVar3 = true;
    if (iVar4 == 0) {
      fVar5 = (float10)fVar1;
    }
    else {
      fVar5 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x94) + *(float *)(param_1 + 0x34));
      if (*(int *)(iVar4 + 0x4e4) != 0) {
        bVar3 = false;
      }
    }
    fVar6 = (float10)fpatan((float10)*param_2 - (float10)local_20,
                            (float10)param_2[2] - (float10)local_18);
    fVar5 = (float10)FUN_00ddba30((float)(fVar6 - fVar5));
    if ((bVar3) &&
       (fVar5 * fVar5 <= (float10)*(float *)(param_1 + 0x38) * (float10)*(float *)(param_1 + 0x38)))
    {
      if ((*(int *)(param_1 + 0x5c) == 8) || (*(int *)(param_1 + 0x5c) == 10)) {
        fVar5 = (float10)fpatan((float10)local_20 - (float10)*param_2,
                                (float10)local_18 - (float10)param_2[2]);
        fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)param_3));
        if (fVar5 * fVar5 < (float10)0.6168503 == (fVar5 * fVar5 == (float10)0.6168503)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00C26450  FUN_00c26450  size=133  [run]
void __thiscall FUN_00c26450(int param_1,undefined4 param_2)

{
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_30 = 0;
    local_2c = 0.0;
    local_28 = 0;
    FUN_00c15370(&local_30);
    local_20 = local_30;
    local_18 = local_28;
    local_14 = local_24;
    local_1c = *(float *)(param_1 + 0x30) + local_2c;
    FUN_00f961d0(&local_30,&local_20,*(undefined4 *)(param_1 + 0x14),param_2,0,0);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_00c155e0(param_2);
  }
  return;
}

