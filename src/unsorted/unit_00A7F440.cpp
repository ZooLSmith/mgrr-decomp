// src/unsorted/unit_00A7F440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A7F440..00A81630, 37 functions

#include "mgrr.h"

// 00A7F440  FUN_00a7f440  size=88  [run]
int __thiscall FUN_00a7f440(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != *(int **)(param_1 + 0x50)) {
    do {
      if (*(int *)(*piVar2 + 0x24) == param_2) {
        (**(code **)(*param_3 + 8))(piVar2);
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != *(int **)(param_1 + 0x50));
  }
  iVar1 = param_3[2];
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar1;
}

// 00A7F4A0  FUN_00a7f4a0  size=115  [run]
int __thiscall FUN_00a7f4a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar2 = param_2;
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != *(int **)(param_1 + 0x50)) {
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x24) == iVar2) {
        if (iVar1 == 0) {
          param_2 = 0;
        }
        else {
          param_2 = *(int *)(iVar1 + 0x2c);
        }
        (**(code **)(*param_3 + 8))(&param_2);
      }
      piVar3 = (int *)piVar3[2];
    } while (piVar3 != *(int **)(param_1 + 0x50));
  }
  iVar2 = param_3[2];
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar2;
}

// 00A7F520  FUN_00a7f520  size=130  [run]
int __thiscall FUN_00a7f520(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar2 = param_2;
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != *(int **)(param_1 + 0x50)) {
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x24) == iVar2) && (*(int *)(*(int *)(iVar1 + 0x48) + 0x4e0) == param_3)
         ) {
        if (iVar1 == 0) {
          param_2 = 0;
        }
        else {
          param_2 = *(int *)(iVar1 + 0x2c);
        }
        (**(code **)(*param_4 + 8))(&param_2);
      }
      piVar3 = (int *)piVar3[2];
    } while (piVar3 != *(int **)(param_1 + 0x50));
  }
  iVar2 = param_4[2];
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar2;
}

// 00A7F5B0  FUN_00a7f5b0  size=73  [run]
int __thiscall FUN_00a7f5b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar2 = 0;
  for (piVar1 = *(int **)(param_1 + 0x4c); piVar1 != *(int **)(param_1 + 0x50);
      piVar1 = (int *)piVar1[2]) {
    if (*(int *)(*piVar1 + 0x24) == param_2) {
      iVar2 = iVar2 + 1;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar2;
}

// 00A7F600  FUN_00a7f600  size=90  [run]
int __thiscall FUN_00a7f600(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x50)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x24) == param_2) break;
    piVar1 = (int *)piVar1[2];
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar2;
}

// 00A7F660  FUN_00a7f660  size=165  [run]
int __thiscall FUN_00a7f660(int param_1,int param_2,float *param_3,float param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  do {
    if (piVar1 == *(int **)(param_1 + 0x50)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if (*(int *)(*piVar1 + 0x24) == param_2) {
      iVar2 = *(int *)(*piVar1 + 0x3c);
      if (iVar2 == 0) {
        pfVar4 = (float *)&DAT_01be9a50;
      }
      else {
        pfVar4 = (float *)(iVar2 + 0x50);
      }
      fVar3 = SQRT((pfVar4[2] - param_3[2]) * (pfVar4[2] - param_3[2]) +
                   (pfVar4[1] - param_3[1]) * (pfVar4[1] - param_3[1]) +
                   (*pfVar4 - *param_3) * (*pfVar4 - *param_3));
      if (fVar3 < param_4 != (fVar3 == param_4)) {
        iVar2 = *piVar1;
        if (*(int *)(param_1 + 0x30) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return iVar2;
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

// 00A7F710  FUN_00a7f710  size=148  [run]
int __thiscall FUN_00a7f710(int param_1,byte *param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  do {
    if (piVar2 == *(int **)(param_1 + 0x50)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(int *)(*piVar2 + 0x24) == param_3) &&
       (pbVar3 = (byte *)(*piVar2 + 4), pbVar5 = param_2, pbVar3 != (byte *)0x0)) {
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7f766:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7f76b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7f766;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a7f76b:
      if (iVar4 == 0) {
        iVar4 = *piVar2;
        if (*(int *)(param_1 + 0x30) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return iVar4;
      }
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

// 00A7F7B0  FUN_00a7f7b0  size=164  [run]
int __thiscall FUN_00a7f7b0(int param_1,int param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  fVar3 = 10000.0;
  iVar6 = 0;
  for (piVar1 = *(int **)(param_1 + 0x4c); piVar1 != *(int **)(param_1 + 0x50);
      piVar1 = (int *)piVar1[2]) {
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x24) == param_2) {
      if (*(int *)(iVar2 + 0x3c) == 0) {
        pfVar5 = (float *)&DAT_01be9a50;
      }
      else {
        pfVar5 = (float *)(*(int *)(iVar2 + 0x3c) + 0x50);
      }
      fVar4 = SQRT((pfVar5[2] - param_3[2]) * (pfVar5[2] - param_3[2]) +
                   (pfVar5[1] - param_3[1]) * (pfVar5[1] - param_3[1]) +
                   (*pfVar5 - *param_3) * (*pfVar5 - *param_3));
      if (fVar4 < fVar3) {
        iVar6 = iVar2;
        fVar3 = fVar4;
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar6;
}

// 00A7F860  FUN_00a7f860  size=4  [run]
undefined4 __fastcall FUN_00a7f860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 00A7F870  FUN_00a7f870  size=41  [run]
undefined4 __thiscall FUN_00a7f870(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 **)(param_1 + 0x50)) {
      return 0;
    }
    if (iVar2 == param_2) break;
    puVar1 = (undefined4 *)puVar1[2];
    iVar2 = iVar2 + 1;
  }
  return *puVar1;
}

// 00A7F8A0  FUN_00a7f8a0  size=331  [run]
int __thiscall FUN_00a7f8a0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float local_34;
  int local_30;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  local_30 = 0;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x50);
  local_34 = param_4;
  for (piVar3 = *(int **)(param_1 + 0x4c); piVar3 != piVar2; piVar3 = (int *)piVar3[2]) {
    iVar4 = *piVar3;
    if ((((iVar4 != 0) && ((*(byte *)(iVar4 + 0x28) & 2) == 0)) &&
        (piVar5 = *(int **)(iVar4 + 0x48), piVar5 != (int *)0x0)) &&
       (((piVar5[0x1a4] != 0 && (iVar6 = *(int *)(iVar4 + 0x3c), iVar6 != 0)) &&
        ((**(code **)(*piVar5 + 0x204))(&local_20), fVar7 = local_20 - *(float *)(iVar1 + 0x50),
        fVar9 = fStack_1c - *(float *)(iVar1 + 0x54), fVar8 = fStack_18 - *(float *)(iVar1 + 0x58),
        fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 <= param_5 * param_5)))) {
      fVar10 = (float10)FUN_009f8c60(iVar6 + 0x50);
      fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_3));
      if (ABS(fVar10) <= (float10)local_34) {
        local_34 = (float)ABS(fVar10);
        local_30 = iVar4;
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_30;
}

// 00A7F9F0  FUN_00a7f9f0  size=323  [run]
int __thiscall FUN_00a7f9f0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  float local_38;
  int local_34;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    return 0;
  }
  local_34 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  local_38 = param_4;
  for (piVar3 = *(int **)(param_1 + 0x4c); piVar3 != piVar2; piVar3 = (int *)piVar3[2]) {
    iVar4 = *piVar3;
    if ((((iVar4 != 0) && ((*(byte *)(iVar4 + 0x28) & 2) == 0)) &&
        (piVar5 = *(int **)(iVar4 + 0x48), piVar5 != (int *)0x0)) &&
       (iVar9 = (**(code **)(*piVar5 + 0x164))(0), iVar9 != 0)) {
      fStack_20 = (float)piVar5[0x10];
      fStack_1c = (float)piVar5[0x11];
      fStack_18 = (float)piVar5[0x12];
      iStack_14 = piVar5[0x13];
      fVar6 = fStack_20 - *(float *)(iVar1 + 0x50);
      fVar8 = fStack_1c - *(float *)(iVar1 + 0x54);
      fVar7 = fStack_18 - *(float *)(iVar1 + 0x58);
      if (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 <= param_5 * param_5) {
        fVar10 = (float10)FUN_009f8c60(&fStack_20);
        fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_3));
        if (ABS(fVar10) <= (float10)local_38) {
          local_38 = (float)ABS(fVar10);
          local_34 = iVar4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return local_34;
}

// 00A7FB40  FUN_00a7fb40  size=403  [run]
int __thiscall
FUN_00a7fb40(int param_1,int param_2,byte param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float10 fVar11;
  float local_38;
  int local_34;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    return 0;
  }
  local_34 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  local_38 = param_5;
  for (piVar3 = *(int **)(param_1 + 0x4c); piVar3 != piVar2; piVar3 = (int *)piVar3[2]) {
    iVar4 = *piVar3;
    if (((iVar4 != 0) && ((*(byte *)(iVar4 + 0x28) & 2) == 0)) &&
       (iVar5 = *(int *)(iVar4 + 0x48), iVar5 != 0)) {
      iVar6 = *(int *)(iVar5 + 0x4b0);
      bVar10 = false;
      if (((param_3 & 1) != 0) && (iVar6 == 0x310a1)) {
        bVar10 = true;
      }
      if (((param_3 & 2) != 0) && (iVar6 == 0x31081)) {
        bVar10 = true;
      }
      if (((param_3 & 4) != 0) && (iVar6 == 0x31091)) {
        bVar10 = true;
      }
      if ((((param_3 & 8) != 0) && (iVar6 == 0x31021)) || (bVar10)) {
        local_20 = *(float *)(iVar5 + 0x40);
        local_1c = *(float *)(iVar5 + 0x44);
        local_18 = *(float *)(iVar5 + 0x48);
        local_14 = *(undefined4 *)(iVar5 + 0x4c);
        fVar7 = local_20 - *(float *)(iVar1 + 0x50);
        fVar9 = local_1c - *(float *)(iVar1 + 0x54);
        fVar8 = local_18 - *(float *)(iVar1 + 0x58);
        if (fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 <= param_6 * param_6) {
          fVar11 = (float10)FUN_009f8c60(&local_20);
          fVar11 = (float10)FUN_00ddba30((float)(fVar11 - (float10)param_4));
          if (ABS(fVar11) <= (float10)local_38) {
            local_38 = (float)ABS(fVar11);
            local_34 = iVar4;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return local_34;
}

// 00A7FCE0  FUN_00a7fce0  size=252  [run]
int __thiscall FUN_00a7fce0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int local_4;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    local_4 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    piVar8 = *(int **)(param_1 + 0x4c);
    if (piVar8 != *(int **)(param_1 + 0x50)) {
      fVar5 = 10.0;
      do {
        iVar2 = *piVar8;
        if ((((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) && (iVar2 != param_2)) &&
             (iVar3 = *(int *)(iVar2 + 0x48), iVar3 != 0)) &&
            ((((iVar4 = *(int *)(iVar3 + 0x4b0), iVar4 == 0xf00a0 || (iVar4 == 0xf00b0)) ||
              (iVar4 == 0xf00c0)) &&
             ((fVar6 = *(float *)(iVar3 + 0x40) - *(float *)(iVar1 + 0x40),
              fVar7 = *(float *)(iVar3 + 0x48) - *(float *)(iVar1 + 0x48),
              fVar7 * fVar7 + fVar6 * fVar6 <= 1.0 &&
              (fVar6 = *(float *)(iVar3 + 0x44) - *(float *)(iVar1 + 0x44),
              fVar6 < 0.0 == (fVar6 == 0.0))))))) && (fVar6 < fVar5)) {
          fVar5 = fVar6;
          local_4 = iVar2;
        }
        piVar8 = (int *)piVar8[2];
      } while (piVar8 != *(int **)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return local_4;
  }
  return 0;
}

// 00A7FDE0  FUN_00a7fde0  size=156  [run]
int __fastcall FUN_00a7fde0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar3 = 0;
  for (piVar1 = *(int **)(param_1 + 0x4c); piVar1 != *(int **)(param_1 + 0x50);
      piVar1 = (int *)piVar1[2]) {
    iVar2 = *piVar1;
    if ((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) && (*(int *)(iVar2 + 0x48) != 0)) &&
       ((((iVar2 = *(int *)(*(int *)(iVar2 + 0x48) + 0x4b0), iVar2 == 0xf00a1 || (iVar2 == 0xf00a2))
         || ((iVar2 == 0xf00a3 || ((iVar2 == 0xf00b1 || (iVar2 == 0xf00b2)))))) ||
        ((iVar2 == 0xf00b3 ||
         ((((iVar2 == 0xf00c1 || (iVar2 == 0xf00d1)) || (iVar2 == 0xf00d3)) || (iVar2 == 0x2c19a))))
        )))) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar3;
}

// 00A7FE80  FUN_00a7fe80  size=438  [run]
float10 __thiscall FUN_00a7fe80(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar9;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    return (float10)0;
  }
  piVar2 = *(int **)(param_2 + 0x48);
  local_7c = param_3 * param_3;
  (**(code **)(*piVar2 + 0x24))();
  D3DXMatrixInverse(auStack_50,0,piVar2 + 4);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  for (piVar3 = *(int **)(param_1 + 0x4c); piVar3 != piVar2; piVar3 = (int *)piVar3[2]) {
    iVar4 = *piVar3;
    if (((((iVar4 != 0) && (iVar4 != param_2)) && ((*(byte *)(iVar4 + 0x28) & 2) == 0)) &&
        (piVar5 = *(int **)(iVar4 + 0x48), piVar5 != (int *)0x0)) &&
       ((((iVar4 = piVar5[300], iVar4 == 0xf00a1 || (iVar4 == 0xf00a2)) ||
         ((iVar4 == 0xf00a3 || ((iVar4 == 0xf00b1 || (iVar4 == 0xf00b2)))))) ||
        ((iVar4 == 0xf00b3 || ((iVar4 == 0xf00d1 || (iVar4 == 0xf00d3)))))))) {
      fStack_6c = (float)piVar5[0x10];
      fStack_68 = (float)piVar5[0x11];
      fStack_64 = (float)piVar5[0x12];
      iStack_60 = piVar5[0x13];
      fVar6 = fStack_6c - *(float *)(iVar1 + 0x40);
      fVar8 = fStack_68 - *(float *)(iVar1 + 0x44);
      fVar7 = fStack_64 - *(float *)(iVar1 + 0x48);
      if (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 <= unaff_EBX) {
        D3DXVec3TransformNormal(&local_7c,&fStack_6c,auStack_5c);
        local_7c = fStack_2c + local_7c;
        fStack_78 = fStack_28 + fStack_78;
        fStack_74 = fStack_24 + fStack_74;
        if (((param_4 == 0) || (1.0 < fStack_74)) &&
           (fVar9 = (float10)(**(code **)(*piVar5 + 0x24))(), fVar9 < (float10)unaff_ESI)) {
          unaff_ESI = (float)fVar9;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return (float10)unaff_ESI;
}

// 00A80040  FUN_00a80040  size=385  [run]
float10 __thiscall FUN_00a80040(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_EBX;
  float unaff_ESI;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    return (float10)0;
  }
  piVar2 = *(int **)(param_2 + 0x48);
  local_7c = param_3 * param_3;
  (**(code **)(*piVar2 + 0x24))();
  D3DXMatrixInverse(auStack_50,0,piVar2 + 4);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  for (piVar3 = *(int **)(param_1 + 0x4c); piVar3 != piVar2; piVar3 = (int *)piVar3[2]) {
    iVar4 = *piVar3;
    if ((((iVar4 != 0) && (iVar4 != param_2)) && ((*(byte *)(iVar4 + 0x28) & 2) == 0)) &&
       ((iVar4 = *(int *)(iVar4 + 0x48), iVar4 != 0 && (*(int *)(iVar4 + 0x4b0) == 0x2c19a)))) {
      fStack_6c = *(float *)(iVar4 + 0x40);
      fStack_68 = *(float *)(iVar4 + 0x44);
      fStack_64 = *(float *)(iVar4 + 0x48);
      uStack_60 = *(undefined4 *)(iVar4 + 0x4c);
      fVar5 = fStack_6c - *(float *)(iVar1 + 0x40);
      fVar7 = fStack_68 - *(float *)(iVar1 + 0x44);
      fVar6 = fStack_64 - *(float *)(iVar1 + 0x48);
      if (fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 <= unaff_EBX) {
        D3DXVec3TransformNormal(&local_7c,&fStack_6c,auStack_5c);
        local_7c = fStack_2c + local_7c;
        fStack_78 = fStack_28 + fStack_78;
        fStack_74 = fStack_24 + fStack_74;
        if (((param_4 == 0) || (1.0 < fStack_74)) && (*(float *)(iVar4 + 0x1500) < unaff_ESI)) {
          unaff_ESI = *(float *)(iVar4 + 0x1500);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return (float10)unaff_ESI;
}

// 00A80230  FUN_00a80230  size=43  [run]
void __fastcall FUN_00a80230(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  return;
}

// 00A802E0  FUN_00a802e0  size=184  [run]
int __thiscall FUN_00a802e0(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00A803A0  FUN_00a803a0  size=129  [run]
void __thiscall FUN_00a803a0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00a8040f;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00a8040f:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00A805F0  FUN_00a805f0  size=129  [run]
void __fastcall FUN_00a805f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x28) & 2) == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
    if (*(int **)(param_1 + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0xc))();
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x132) & 2) == 0)) {
      *(byte *)(piVar1 + 0x132) = *(byte *)(piVar1 + 0x132) | 2;
      (**(code **)(*piVar1 + 0x20))();
      (**(code **)(*piVar1 + 0xc))();
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00e3f600();
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 != 0) {
        Animation::Motion::NodeListener::NodeListener();
        FUN_00dd4920(iVar2);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    }
  }
  return;
}

// 00A806D0  FUN_00a806d0  size=264  [run]
void __thiscall FUN_00a806d0(LPCRITICAL_SECTION param_1,int param_2)

{
  int *piVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  piVar8 = param_1[1].OwningThread;
  piVar1 = piVar8 + (int)param_1[1].LockSemaphore;
  for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
    if (*piVar8 == param_2) {
      pvVar2 = param_1[1].LockSemaphore;
      pvVar3 = param_1[1].OwningThread;
      piVar5 = (int *)((int)pvVar3 + (int)pvVar2 * 4);
      if ((((piVar8 != piVar5) && (pvVar3 != (HANDLE)0x0)) && (pvVar2 != (HANDLE)0x0)) &&
         ((HANDLE)((int)piVar8 - (int)pvVar3 >> 2) < pvVar2)) {
        for (piVar4 = piVar8; piVar4 != piVar5 + -1; piVar4 = piVar4 + 1) {
          *piVar4 = piVar4[1];
        }
        param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + -1);
      }
      piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      iVar6 = (**(code **)(*piVar5 + 0x18))();
      if (param_2 == iVar6) {
        piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
        (**(code **)(*piVar5 + 0x1c))(0);
      }
      piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      iVar6 = *(int *)(param_2 + 0x48);
      iVar7 = (**(code **)(*piVar5 + 0x28))();
      if (iVar6 == iVar7) {
        piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
        (**(code **)(*piVar5 + 0x2c))(0);
      }
      piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      iVar6 = *(int *)(param_2 + 0x48);
      iVar7 = (**(code **)(*piVar5 + 0x20))();
      if (iVar6 == iVar7) {
        piVar5 = (int *)TargetManagerImplement::TargetManagerImplement_2();
        (**(code **)(*piVar5 + 0x24))(0);
      }
    }
  }
  FUN_00d89e60(0xd);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return;
}

// 00A807E0  FUN_00a807e0  size=133  [run]
void __thiscall FUN_00a807e0(LPCRITICAL_SECTION param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  piVar6 = param_1[1].OwningThread;
  piVar1 = piVar6 + (int)param_1[1].LockSemaphore;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (*piVar6 == param_2) {
      pvVar3 = param_1[1].LockSemaphore;
      pvVar4 = param_1[1].OwningThread;
      piVar2 = (int *)((int)pvVar4 + (int)pvVar3 * 4);
      if ((((piVar6 != piVar2) && (pvVar4 != (HANDLE)0x0)) && (pvVar3 != (HANDLE)0x0)) &&
         ((HANDLE)((int)piVar6 - (int)pvVar4 >> 2) < pvVar3)) {
        for (piVar5 = piVar6; piVar5 != piVar2 + -1; piVar5 = piVar5 + 1) {
          *piVar5 = piVar5[1];
        }
        param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + -1);
      }
    }
  }
  FUN_00d89e60(0xd);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return;
}

// 00A80870  FUN_00a80870  size=133  [run]
void __thiscall FUN_00a80870(LPCRITICAL_SECTION param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  piVar6 = param_1[1].OwningThread;
  piVar1 = piVar6 + (int)param_1[1].LockSemaphore;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (*piVar6 == param_2) {
      pvVar3 = param_1[1].LockSemaphore;
      pvVar4 = param_1[1].OwningThread;
      piVar2 = (int *)((int)pvVar4 + (int)pvVar3 * 4);
      if ((((piVar6 != piVar2) && (pvVar4 != (HANDLE)0x0)) && (pvVar3 != (HANDLE)0x0)) &&
         ((HANDLE)((int)piVar6 - (int)pvVar4 >> 2) < pvVar3)) {
        for (piVar5 = piVar6; piVar5 != piVar2 + -1; piVar5 = piVar5 + 1) {
          *piVar5 = piVar5[1];
        }
        param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + -1);
      }
    }
  }
  FUN_00d89e60(0xd);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return;
}

// 00A80900  FUN_00a80900  size=124  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a80900(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_01be9a70 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00dd3580(0x8000,&DAT_01b7bcf0);
    DAT_01be9a70 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = 0x1000;
      do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_01be9a60 = 0x1000;
      _DAT_01be9a64 = 0;
      _DAT_01be9a68 = 0;
      _DAT_01be9a6c = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00A80AD0  FUN_00a80ad0  size=80  [run]
void __thiscall FUN_00a80ad0(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != *(int **)(param_1 + 0x50)) {
    do {
      if (*(int *)(*(int *)(*piVar1 + 0x48) + 0x4b0) == param_2) {
        FUN_00a805f0();
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != *(int **)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00A80B20  FUN_00a80b20  size=374  [run]
int __thiscall FUN_00a80b20(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  int local_38;
  float local_34;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar8 = *(int *)(param_2 + 0x3c);
  if (iVar8 == 0) {
    return 0;
  }
  local_38 = 0;
  local_34 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x50);
  piVar9 = *(int **)(param_1 + 0x4c);
  if (piVar9 != piVar1) {
    do {
      iVar2 = *piVar9;
      if ((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) &&
          (iVar3 = *(int *)(iVar2 + 0x48), iVar3 != 0)) &&
         (((iVar4 = *(int *)(iVar3 + 0x4b0), iVar4 == 0xf00a0 || (iVar4 == 0xf00b0)) ||
          (iVar4 == 0xf00c0)))) {
        local_20 = *(float *)(iVar3 + 0x40);
        local_1c = *(float *)(iVar3 + 0x44);
        local_18 = *(float *)(iVar3 + 0x48);
        local_14 = *(undefined4 *)(iVar3 + 0x4c);
        fVar5 = local_20 - *(float *)(iVar8 + 0x50);
        fVar7 = local_1c - *(float *)(iVar8 + 0x54);
        fVar6 = local_18 - *(float *)(iVar8 + 0x58);
        if (fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6 <= param_5 * param_5) {
          fVar10 = (float10)FUN_009f8c60(&local_20);
          fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_3));
          if (ABS(fVar10) <= (float10)local_34) {
            local_34 = (float)ABS(fVar10);
            local_38 = iVar2;
          }
        }
      }
      piVar9 = (int *)piVar9[2];
    } while (piVar9 != piVar1);
    if (local_38 != 0) {
      iVar8 = FUN_00a7fce0(local_38);
      while (iVar2 = iVar8, iVar2 != 0) {
        iVar8 = FUN_00a7fce0(iVar2);
        local_38 = iVar2;
      }
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return local_38;
}

// 00A80CF0  FUN_00a80cf0  size=93  [run]
undefined4 __thiscall FUN_00a80cf0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_008781b0();
  return 1;
}

// 00A80D50  FUN_00a80d50  size=65  [run]
void __fastcall FUN_00a80d50(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A80DA0  FUN_00a80da0  size=21  [run]
undefined4 * __fastcall FUN_00a80da0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00A80E70  FUN_00a80e70  size=1049  [run]
undefined4 __thiscall FUN_00a80e70(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(param_2 + 0xc);
  puVar2 = (undefined4 *)puVar1[3];
  iVar7 = puVar1[1];
  bVar9 = (puVar1[5] & 0x80000000) != 0;
  iVar3 = puVar1[2];
  *(int *)(param_1 + 0x24) = iVar7;
  if ((char *)*puVar1 != (char *)0x0) {
    _strcpy_s((char *)(param_1 + 4),0x20,(char *)*puVar1);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x10);
  iVar5 = FUN_00a802e0(param_1);
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x2c) = iVar5;
    if (puVar2 == (undefined4 *)0x0) {
      uVar8 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10);
    }
    else {
      uVar8 = *puVar2;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar8;
    iVar5 = cObjReadManager::getDataAtSet(param_1 + 0x30,iVar7,uVar8);
    if (iVar5 != 0) {
      piVar4 = *(int **)(param_2 + 4);
      *(int **)(param_1 + 0x38) = piVar4;
      if (*(int *)(param_1 + 0x4c) == 0) {
        uVar6 = 0;
        if (puVar1[6] != 0) {
          uVar6 = *(undefined4 *)(puVar1[6] + 0x584);
        }
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 8);
        iVar5 = FUN_00aa4d20(param_1,iVar3,uVar6);
        *(int *)(param_1 + 0x48) = iVar5;
        if (iVar5 == 0) {
          return 0;
        }
        FUN_00de3530();
        if (puVar1[6] == 0) {
          if (bVar9) {
            FUN_00a00a60(iVar7,uVar8);
          }
          iVar5 = cObjReadManager::getDataAtSet(&local_8,iVar7,uVar8);
          if (iVar5 == 0) {
            return 0;
          }
        }
        piVar4 = *(int **)(param_1 + 0x48);
        *(int **)(param_1 + 0x3c) = piVar4;
        uVar6 = uVar8;
        iVar5 = iVar3;
        if (puVar1[6] != 0) {
          iVar5 = puVar1[6];
          local_8 = *(undefined4 *)(iVar5 + 0x494);
          local_4 = *(undefined4 *)(iVar5 + 0x498);
          uVar6 = *(undefined4 *)(iVar5 + 0x4b8);
          iVar5 = *(int *)(iVar5 + 0x4b4);
        }
        cObj::construct(iVar3,uVar8,iVar5,uVar6,&local_8);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_009f8940(puVar2);
        }
        piVar4[0x13c] = param_1;
        if ((puVar1[5] & 0x40000000) == 0) {
          iVar5 = FUN_00a008c0(puVar1[8],puVar1[10],puVar1[9],puVar1[0xb],puVar1[6]);
          if (iVar5 == 0) {
            if ((*(byte *)(piVar4 + 0x132) & 2) == 0) {
              *(byte *)(piVar4 + 0x132) = *(byte *)(piVar4 + 0x132) | 2;
              (**(code **)(*piVar4 + 0x20))();
              (**(code **)(*piVar4 + 0xc))();
            }
            FUN_00a006c0();
            return 0;
          }
        }
        else {
          iVar5 = FUN_009fd5e0(puVar1[7],puVar1[10],puVar1[9],puVar1[0xb],0);
          if (iVar5 == 0) {
            if ((*(byte *)(piVar4 + 0x132) & 2) == 0) {
              *(byte *)(piVar4 + 0x132) = *(byte *)(piVar4 + 0x132) | 2;
              (**(code **)(*piVar4 + 0x20))();
              (**(code **)(*piVar4 + 0xc))();
            }
            FUN_00a006c0();
            return 0;
          }
        }
      }
      else {
        iVar5 = (**(code **)(*piVar4 + 4))(iVar7,puVar2,bVar9);
        *(int *)(param_1 + 0x3c) = iVar5;
        if (iVar5 == 0) {
          return 0;
        }
        *(int *)(iVar5 + 0x4f0) = param_1;
      }
      if ((puVar1[6] == 0) || (iVar5 = FUN_009f95c0(*(undefined4 *)(puVar1[6] + 0x4b4)), iVar5 == 0)
         ) {
        iVar5 = FUN_009f95c0(iVar7);
        if (iVar5 != 0) {
          iVar5 = Entity::createAnimation();
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_00e3fb10(param_1,param_1 + 0x30);
          if (iVar5 == 0) goto LAB_00a81129;
          if (*(int *)(param_1 + 0x4c) == 0) {
            if (iVar7 != iVar3) {
              FUN_00e26e90();
              FUN_00e272b0(iVar7,0xffffffff);
            }
            if (*(int *)(param_1 + 0x4c) == 0) {
              lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>
                        ();
            }
          }
        }
      }
      else {
        iVar5 = Entity::createAnimation();
        if (iVar5 == 0) {
          return 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x4b0) = *(undefined4 *)(puVar1[6] + 0x4b4);
        iVar5 = FUN_00e3fb10(param_1,puVar1[6] + 0x494);
        if (iVar5 == 0) {
LAB_00a81129:
          FUN_00a7ce60();
          return 0;
        }
        if (*(int *)(param_1 + 0x4c) == 0) {
          if (*(int *)(puVar1[6] + 0x4b4) != iVar3) {
            FUN_00e26e50(1);
            uVar8 = *(undefined4 *)(puVar1[6] + 0x4b4);
            FUN_00e26e90();
            FUN_00e272b0(uVar8,0xffffffff);
          }
          if (*(int *)(param_1 + 0x4c) == 0) {
            lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>();
          }
        }
        *(int *)(*(int *)(param_1 + 0x3c) + 0x4b0) = iVar7;
      }
      thunk_FUN_00e00de0(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x5c) = 1;
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_00a8b740();
        iVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0x40))();
        if (iVar7 == 0) {
          return 0;
        }
        piVar4 = *(int **)(param_2 + 4);
        *(int **)(param_1 + 0x38) = piVar4;
        (**(code **)(*piVar4 + 8))(*(undefined4 *)(param_1 + 0x48));
      }
      else {
        iVar7 = FUN_009f9670(iVar3);
        if (iVar7 != 0) {
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 8);
          iVar7 = FUN_00aa4d20(param_1,iVar3,0);
          *(int *)(param_1 + 0x48) = iVar7;
          if (iVar7 == 0) {
            return 0;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      FUN_00aa1290(*(undefined4 *)(param_1 + 0x48));
      return 1;
    }
  }
  return 0;
}

// 00A81290  FUN_00a81290  size=148  [run]
void __fastcall FUN_00a81290(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(int *)(param_1 + 0x48));
    }
    FUN_00aa12a0(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    thunk_FUN_00e00e40(*(undefined4 *)(param_1 + 0x24));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    Animation::Motion::NodeListener::NodeListener();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xc))(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_00e060f0();
  FUN_00a803a0(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

// 00A81330  FUN_00a81330  size=62  [run]
undefined4 __fastcall FUN_00a81330(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (int)*param_1 >> 8 & 0xffff;
  if (uVar1 < DAT_01be9a60) {
    if (((*(uint *)(DAT_01be9a70 + uVar1 * 8) ^ *param_1) & 0xffffff00) == 0) {
      return *(undefined4 *)(DAT_01be9a70 + 4 + uVar1 * 8);
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 0;
}

// 00A81410  FUN_00a81410  size=187  [run]
undefined4 __thiscall FUN_00a81410(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x128) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar4 = *(int **)(param_1 + 0xfc);
  piVar1 = piVar4 + *(int *)(param_1 + 0x100);
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 1) {
  }
  if (piVar4 != (int *)(*(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0x100) * 4)) {
    uVar2 = *(uint *)(param_1 + 0x100);
    iVar3 = *(int *)(param_1 + 0xfc);
    piVar1 = (int *)(iVar3 + uVar2 * 4);
    if ((((piVar4 != piVar1) && (iVar3 != 0)) && (uVar2 != 0)) &&
       ((uint)((int)piVar4 - iVar3 >> 2) < uVar2)) {
      for (; piVar4 != piVar1 + -1; piVar4 = piVar4 + 1) {
        *piVar4 = piVar4[1];
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00A814D0  FUN_00a814d0  size=97  [run]
void __thiscall FUN_00a814d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != *(int **)(param_1 + 0x50)) {
    do {
      if (*(int *)(*piVar2 + 0x24) == param_3) {
        if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) break;
        piVar1 = (int *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = *piVar2;
        }
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != *(int **)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00A81540  FUN_00a81540  size=202  [run]
int __thiscall FUN_00a81540(int param_1,int param_2,float param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined1 auStack_4 [4];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  pfVar6 = param_4;
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  iVar9 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x4c); puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[2]
      ) {
    param_4 = (float *)*puVar2;
    if ((((param_4 != (float *)0x0) && (((uint)param_4[10] & 2) == 0)) &&
        (piVar3 = (int *)param_4[0x12], piVar3 != (int *)0x0)) &&
       ((iVar7 = FUN_009f94a0(piVar3[300]), iVar7 != 0 &&
        (pfVar8 = (float *)(**(code **)(*piVar3 + 0x68))(), fVar4 = *pfVar6 - *pfVar8,
        fVar5 = pfVar6[2] - pfVar8[2], SQRT(fVar5 * fVar5 + fVar4 * fVar4) < param_3)))) {
      if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) break;
      FUN_009360c0(auStack_4,&param_4);
      iVar9 = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return iVar9;
}

// 00A81630  FUN_00a81630  size=65  [run]
void __fastcall FUN_00a81630(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

