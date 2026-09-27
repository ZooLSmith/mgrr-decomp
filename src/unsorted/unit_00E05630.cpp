// src/unsorted/unit_00E05630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E05630..00E060F0, 11 functions

#include "mgrr.h"

// 00E05630  FUN_00e05630  size=179  [run]
ulonglong __thiscall FUN_00e05630(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 4);
  if (pbVar4 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - (int)pbVar4;
  }
  if (param_3 <= uVar1) {
    pbVar3 = *(byte **)(param_2 + 4);
    if (pbVar3 == (byte *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_2 + 8) - (int)pbVar3;
    }
    if (param_3 <= uVar1) {
      for (; 3 < param_3; param_3 = param_3 - 4) {
        if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_00e05688;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
      }
      if (param_3 == 0) {
        return 1;
      }
LAB_00e05688:
      iVar2 = (uint)*pbVar4 - (uint)*pbVar3;
      if (iVar2 == 0) {
        if (param_3 < 2) {
          return 1;
        }
        iVar2 = (uint)pbVar4[1] - (uint)pbVar3[1];
        if (iVar2 == 0) {
          if (param_3 < 3) {
            return 1;
          }
          iVar2 = (uint)pbVar4[2] - (uint)pbVar3[2];
          if (iVar2 == 0) {
            if (param_3 < 4) {
              return 1;
            }
            iVar2 = (uint)pbVar4[3] - (uint)pbVar3[3];
          }
        }
      }
      return (ulonglong)CONCAT31((int3)(iVar2 >> 0x1f),(iVar2 >> 0x1f | 1U) == 0);
    }
  }
  return CONCAT44(pbVar4,uVar1) & 0xffffffffffffff00;
}

// 00E056F0  FUN_00e056f0  size=195  [run]
ulonglong __thiscall FUN_00e056f0(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 4);
  if (pbVar5 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - (int)pbVar5;
  }
  if (uVar2 < param_3) {
    return CONCAT44(pbVar5,uVar2) & 0xffffffffffffff00;
  }
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if ((uint)((int)pbVar3 - (int)(param_2 + 1)) < param_3) {
    return CONCAT44(pbVar5,(int)pbVar3 - (int)(param_2 + 1)) & 0xffffffffffffff00;
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)pbVar5 != *(int *)param_2) goto LAB_00e05758;
    param_2 = param_2 + 4;
    pbVar5 = pbVar5 + 4;
  }
  if (param_3 == 0) {
    return 1;
  }
LAB_00e05758:
  iVar4 = (uint)*pbVar5 - (uint)*param_2;
  if (iVar4 == 0) {
    if (param_3 < 2) {
      return 1;
    }
    iVar4 = (uint)pbVar5[1] - (uint)param_2[1];
    if (iVar4 == 0) {
      if (param_3 < 3) {
        return 1;
      }
      iVar4 = (uint)pbVar5[2] - (uint)param_2[2];
      if (iVar4 == 0) {
        if (param_3 < 4) {
          return 1;
        }
        iVar4 = (uint)pbVar5[3] - (uint)param_2[3];
      }
    }
  }
  return (ulonglong)CONCAT31((int3)(iVar4 >> 0x1f),(iVar4 >> 0x1f | 1U) == 0);
}

// 00E057C0  FUN_00e057c0  size=181  [run]
undefined4 __thiscall FUN_00e057c0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  if ((param_4 + param_5 <= uVar2) && (param_4 <= param_3)) {
    uVar2 = 0;
    if (param_4 != 0) {
      do {
        pcVar1 = (char *)(uVar2 + param_5 + *(int *)(param_1 + 4));
        if (((uint)(int)*pcVar1 >> 7 & 1) == 0) {
          iVar3 = _toupper((int)*(char *)(uVar2 + param_2));
          iVar4 = _toupper((int)*pcVar1);
          if (iVar4 != iVar3) {
            return 0;
          }
          uVar2 = uVar2 + 1;
        }
        else {
          if (((param_4 <= uVar2 + 1 + param_5) || (*pcVar1 != *(char *)(uVar2 + param_2))) ||
             (pcVar1[1] != *(char *)(uVar2 + 1 + param_2))) {
            return 0;
          }
          uVar2 = uVar2 + 2;
        }
      } while (uVar2 < param_4);
    }
    return 1;
  }
  return 0;
}

// 00E05880  FUN_00e05880  size=111  [run]
undefined4 __thiscall FUN_00e05880(int param_1,char param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar3 = FUN_00e13c00();
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar6 = 1;
    do {
      cVar1 = *(char *)(iVar2 + uVar5);
      if (((uint)(int)cVar1 >> 7 & 1) == 0) {
        if (cVar1 == param_2) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar5;
          }
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 1;
      }
      else {
        uVar4 = FUN_00e13c00();
        if (uVar4 <= uVar6) {
          return 0;
        }
        uVar5 = uVar5 + 2;
        uVar6 = uVar6 + 2;
      }
    } while (uVar5 < uVar3);
  }
  return 0;
}

// 00E058F0  FUN_00e058f0  size=125  [run]
undefined4 __thiscall FUN_00e058f0(int param_1,char param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_00e13c00();
  if (iVar1 != 0) {
    uVar4 = 1;
    do {
      if (((uint)(int)*(char *)(*(int *)(param_1 + 4) + uVar5) >> 7 & 1) == 0) {
        iVar1 = _toupper((int)*(char *)(*(int *)(param_1 + 4) + uVar5));
        iVar3 = _toupper((int)param_2);
        if (iVar1 == iVar3) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar5;
          }
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 1;
      }
      else {
        uVar2 = FUN_00e13c00();
        if (uVar2 <= uVar4) {
          return 0;
        }
        uVar5 = uVar5 + 2;
        uVar4 = uVar4 + 2;
      }
      uVar2 = FUN_00e13c00();
    } while (uVar5 < uVar2);
  }
  return 0;
}

// 00E05970  FUN_00e05970  size=106  [run]
undefined1 __thiscall FUN_00e05970(int param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - iVar3;
  }
  if (uVar2 < param_3) {
    return 0;
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - iVar3;
  }
  uVar2 = 0;
  do {
    cVar1 = FUN_00e057c0(param_2,param_3,param_3,uVar2);
    if (cVar1 != '\0') {
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar2;
      }
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 <= iVar3 - param_3);
  return 0;
}

// 00E05A40  FUN_00e05a40  size=96  [run]
undefined4 __thiscall FUN_00e05a40(int param_1,char *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 8) - iVar2;
  }
  uVar5 = 0;
  do {
    uVar4 = 0;
    do {
      if (*(char *)(iVar2 + uVar5) == param_2[uVar4]) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar5;
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)((int)pcVar3 - (int)(param_2 + 1)));
    uVar5 = uVar5 + 1;
  } while (uVar5 <= uVar6);
  return 0;
}

// 00E05AA0  FUN_00e05aa0  size=182  [run]
ulonglong __thiscall FUN_00e05aa0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar4 = *(byte **)(param_1 + 4);
  if (pbVar4 == (byte *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 8) - (int)pbVar4;
  }
  pbVar3 = *(byte **)(param_2 + 4);
  if (pbVar3 == (byte *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 8) - (int)pbVar3;
  }
  if (iVar5 != iVar1) {
    return CONCAT44(pbVar3,iVar1) & 0xffffffffffffff00;
  }
  if (pbVar4 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - (int)pbVar4;
  }
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_00e05afb;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  if (uVar2 == 0) {
    return 1;
  }
LAB_00e05afb:
  iVar5 = (uint)*pbVar4 - (uint)*pbVar3;
  if (iVar5 == 0) {
    if (uVar2 < 2) {
      return 1;
    }
    iVar5 = (uint)pbVar4[1] - (uint)pbVar3[1];
    if (iVar5 == 0) {
      if (uVar2 < 3) {
        return 1;
      }
      iVar5 = (uint)pbVar4[2] - (uint)pbVar3[2];
      if (iVar5 == 0) {
        if (uVar2 < 4) {
          return 1;
        }
        iVar5 = (uint)pbVar4[3] - (uint)pbVar3[3];
      }
    }
  }
  return (ulonglong)CONCAT31((int3)(iVar5 >> 0x1f),(iVar5 >> 0x1f | 1U) == 0);
}

// 00E05B60  FUN_00e05b60  size=186  [run]
ulonglong __thiscall FUN_00e05b60(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  pbVar4 = *(byte **)(param_1 + 4);
  if (pbVar4 == (byte *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 8) - (int)pbVar4;
  }
  if (iVar5 != (int)pbVar2 - (int)(param_2 + 1)) {
    return CONCAT44(param_2,(int)pbVar2 - (int)(param_2 + 1)) & 0xffffffffffffff00;
  }
  if (pbVar4 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 8) - (int)pbVar4;
  }
  for (; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar4 != *(int *)param_2) goto LAB_00e05bbf;
    param_2 = param_2 + 4;
    pbVar4 = pbVar4 + 4;
  }
  if (uVar3 == 0) {
    return 1;
  }
LAB_00e05bbf:
  iVar5 = (uint)*pbVar4 - (uint)*param_2;
  if (iVar5 == 0) {
    if (uVar3 < 2) {
      return 1;
    }
    iVar5 = (uint)pbVar4[1] - (uint)param_2[1];
    if (iVar5 == 0) {
      if (uVar3 < 3) {
        return 1;
      }
      iVar5 = (uint)pbVar4[2] - (uint)param_2[2];
      if (iVar5 == 0) {
        if (uVar3 < 4) {
          return 1;
        }
        iVar5 = (uint)pbVar4[3] - (uint)param_2[3];
      }
    }
  }
  return (ulonglong)CONCAT31((int3)(iVar5 >> 0x1f),(iVar5 >> 0x1f | 1U) == 0);
}

// 00E05F70  FUN_00e05f70  size=79  [run]
char * FUN_00e05f70(char *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_2;
  do {
    iVar4 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar4 != '\0');
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if ((int)piVar2 - (int)((int)param_2 + 1) <= iVar4) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (*(int *)(param_1 + iVar5) == *param_2) {
          return param_1 + iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return (char *)0x0;
}

// 00E060F0  FUN_00e060f0  size=27  [run]
void __fastcall FUN_00e060f0(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedDecrement((LONG *)(*param_1 + 8));
    *param_1 = 0;
  }
  return;
}

