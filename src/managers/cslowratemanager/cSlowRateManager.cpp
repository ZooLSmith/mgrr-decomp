// src/managers/cslowratemanager/cSlowRateManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E054C0..00E08740, 92 functions

#include "types.h"

// 00E054C0  FUN_00e054c0  size=90  [callgraph]
int __thiscall FUN_00e054c0(int param_1,uint param_2)

{
  undefined1 *puVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + param_2 * 8);
    param_2 = CONCAT13(*puVar1,CONCAT12(puVar1[1],CONCAT11(puVar1[2],puVar1[3])));
    return *(int *)(param_1 + 0x18) + param_2;
  }
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  param_2 = (uint)CONCAT11(*puVar1,puVar1[1]);
  return param_2 + *(int *)(param_1 + 0x18);
}

// 00E05520  FUN_00e05520  size=110  [callgraph]
undefined * __thiscall FUN_00e05520(int param_1,uint param_2)

{
  undefined1 *puVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + 2 + param_2 * 4);
    param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
    param_2 = (uint)(ushort)param_2;
    if (param_2 == 0xffff) {
      return &DAT_016cc1ab;
    }
  }
  else {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + 4 + param_2 * 8);
    param_2._0_2_ = CONCAT11(puVar1[2],puVar1[3]);
    param_2 = CONCAT13(*puVar1,CONCAT12(puVar1[1],(ushort)param_2));
  }
  if ((int)param_2 < 0) {
    return &DAT_016cc1ab;
  }
  return (undefined *)(*(int *)(param_1 + 0x18) + param_2);
}

// 00E05590  FUN_00e05590  size=23  [callgraph]
undefined4 FUN_00e05590(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0;
  }
  uVar1 = FUN_00e05520();
  return uVar1;
}

// 00E05630  FUN_00e05630  size=179  [callgraph]
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

// 00E056F0  FUN_00e056f0  size=195  [callgraph]
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

// 00E057C0  FUN_00e057c0  size=181  [callgraph]
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

// 00E05880  FUN_00e05880  size=111  [callgraph]
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

// 00E058F0  FUN_00e058f0  size=125  [callgraph]
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

// 00E05970  FUN_00e05970  size=106  [callgraph]
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

// 00E05A40  FUN_00e05a40  size=96  [callgraph]
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

// 00E05AA0  FUN_00e05aa0  size=182  [callgraph]
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

// 00E05B60  FUN_00e05b60  size=186  [callgraph]
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

// 00E05F70  FUN_00e05f70  size=79  [callgraph]
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

// 00E060F0  FUN_00e060f0  size=27  [callgraph]
void __fastcall FUN_00e060f0(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedDecrement((LONG *)(*param_1 + 8));
    *param_1 = 0;
  }
  return;
}

// 00E06230  cSlowRateManager::allocUnit  size=116  [class]
undefined4 * __fastcall cSlowRateManager::allocUnit(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined4 *)FUN_00e14fb0();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[3] = 0x3f800000;
      puVar1[6] = 0x3f800000;
      puVar1[4] = 0x3f800000;
      puVar1[1] = 3;
      puVar1[5] = 0x3f800000;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[7] = 0;
      puVar1[2] = 0;
      InterlockedIncrement(puVar1 + 2);
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      FUN_00e14350(puVar1);
      return puVar1;
    }
  }
  FUN_00dd5650(&DAT_016cc2d0);
  return (undefined4 *)0x0;
}

// 00E062B0  FUN_00e062b0  size=220  [between]
undefined4 __thiscall FUN_00e062b0(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = param_2;
  *(uint *)(param_1 + 0xc) = param_2;
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = (undefined1 *)(param_2 + 0xd);
  param_2._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf));
  param_2 = CONCAT13(*(undefined1 *)(iVar4 + 0xc),CONCAT12(*puVar1,(ushort)param_2));
  if (0xfffe < param_2) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  }
  *(int *)(param_1 + 0x10) = iVar4 + 0x10;
  param_2._0_2_ = CONCAT11(*(undefined1 *)(iVar4 + 8),*(undefined1 *)(iVar4 + 9));
  iVar3 = iVar4 + 0x10 + (uint)(ushort)param_2 * 8;
  *(int *)(param_1 + 0x14) = iVar3;
  param_2._0_2_ = CONCAT11(*(undefined1 *)(iVar4 + 10),*(undefined1 *)(iVar4 + 0xb));
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    iVar2 = (uint)(ushort)param_2 * 4;
  }
  else {
    iVar2 = (uint)(ushort)param_2 * 8;
  }
  *(int *)(param_1 + 0x18) = iVar3 + iVar2;
  *(int *)(param_1 + 4) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return 1;
  }
  param_2._0_2_ = CONCAT11(*(undefined1 *)(iVar4 + 8),*(undefined1 *)(iVar4 + 9));
  puVar5 = (undefined4 *)FUN_00dd29b0((uint)(ushort)param_2 * 4,0x20,0,0);
  *(undefined4 **)(param_1 + 8) = puVar5;
  *puVar5 = 0xffffffff;
  FUN_00e05380(0);
  return 1;
}

// 00E06390  FUN_00e06390  size=291  [between]
int __thiscall FUN_00e06390(int param_1,int param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined2 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  iVar5 = param_2;
  if (param_2 == -1) {
    return -1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  param_2._0_2_ =
       CONCAT11(*(undefined1 *)(iVar3 + param_2 * 8),*(undefined1 *)(iVar3 + 1 + param_2 * 8));
  uVar8 = (uint)(ushort)param_2;
  iVar9 = 0;
  param_2._0_2_ =
       CONCAT11(*(undefined1 *)(iVar3 + 2 + iVar5 * 8),*(undefined1 *)(iVar3 + 3 + iVar5 * 8));
  if (uVar8 != 0) {
    puVar6 = (undefined1 *)(iVar3 + 6 + (uint)(ushort)param_2 * 8);
    do {
      local_10 = CONCAT11(*puVar6,puVar6[1]);
      pbVar7 = param_3;
      if ((*(uint *)(param_1 + 0x1c) & 1) == 0) {
        puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + (uint)local_10 * 4);
        local_c = CONCAT11(*puVar1,puVar1[1]);
        pbVar4 = (byte *)((uint)local_c + *(int *)(param_1 + 0x18));
      }
      else {
        puVar1 = (undefined1 *)(*(int *)(param_1 + 0x14) + (uint)local_10 * 8);
        local_8 = CONCAT13(*puVar1,CONCAT12(puVar1[1],CONCAT11(puVar1[2],puVar1[3])));
        pbVar4 = (byte *)(*(int *)(param_1 + 0x18) + local_8);
      }
      do {
        bVar2 = *pbVar7;
        bVar10 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_00e06480:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00e06485;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar10 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_00e06480;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00e06485:
      if (iVar5 == 0) {
        return (uint)(ushort)param_2 + iVar9;
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar9 < (int)uVar8);
  }
  return -1;
}

// 00E064C0  FUN_00e064c0  size=295  [between]
int __thiscall FUN_00e064c0(int param_1,int param_2,byte *param_3,int param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  undefined2 local_10;
  undefined2 local_c;
  int local_8;
  undefined4 local_4;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar3 = (uint)(ushort)param_2;
  iVar9 = 0;
  param_2._0_2_ = CONCAT11(puVar1[2],puVar1[3]);
  local_8 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  iVar7 = (uint)(ushort)param_2 * 8;
  do {
    iVar6 = *(int *)(param_1 + 0x14);
    local_10 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x10) + 6 + iVar7),
                        *(undefined1 *)(*(int *)(param_1 + 0x10) + 7 + iVar7));
    uVar4 = (uint)local_10;
    pbVar8 = param_3;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      local_c = CONCAT11(*(undefined1 *)(iVar6 + uVar4 * 4),*(undefined1 *)(iVar6 + 1 + uVar4 * 4));
      pbVar5 = (byte *)((uint)local_c + *(int *)(param_1 + 0x18));
    }
    else {
      puVar1 = (undefined1 *)(iVar6 + uVar4 * 8);
      local_4 = CONCAT13(*puVar1,CONCAT12(puVar1[1],
                                          CONCAT11(puVar1[2],*(undefined1 *)(iVar6 + 3 + uVar4 * 8))
                                         ));
      pbVar5 = (byte *)(*(int *)(param_1 + 0x18) + local_4);
    }
    do {
      bVar2 = *pbVar8;
      bVar10 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_00e065a0:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00e065a5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar10 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_00e065a0;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00e065a5:
    if (iVar6 == 0) {
      if (param_4 != 0) {
        *(uint *)(param_4 + local_8 * 4) = (uint)(ushort)param_2 + iVar9;
      }
      local_8 = local_8 + 1;
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 8;
    if ((int)uVar3 <= iVar9) {
      return local_8;
    }
  } while( true );
}

// 00E065F0  FUN_00e065f0  size=86  [between]
int __thiscall FUN_00e065f0(int param_1,int param_2,char *param_3,rsize_t param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *_Src;
  
  puVar2 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar2,puVar2[1]);
  _Src = (char *)FUN_00e054c0((undefined2)param_2);
  if (param_3 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar3 = *_Src;
      _Src = _Src + 1;
    } while (cVar3 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_3,param_4,_Src,param_4 - 1);
  return 0;
}

// 00E06650  FUN_00e06650  size=98  [between]
bool __thiscall FUN_00e06650(int param_1,int param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  pbVar3 = (byte *)FUN_00e054c0((undefined2)param_2);
  while( true ) {
    bVar2 = *pbVar3;
    bVar4 = bVar2 < *param_3;
    if (bVar2 != *param_3) break;
    if (bVar2 == 0) {
      return true;
    }
    bVar2 = pbVar3[1];
    bVar4 = bVar2 < param_3[1];
    if (bVar2 != param_3[1]) break;
    pbVar3 = pbVar3 + 2;
    param_3 = param_3 + 2;
    if (bVar2 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

// 00E066F0  FUN_00e066f0  size=86  [between]
int __thiscall FUN_00e066f0(int param_1,int param_2,char *param_3,rsize_t param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *_Src;
  
  puVar2 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar2,puVar2[1]);
  _Src = (char *)FUN_00e05520((undefined2)param_2);
  if (param_3 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar3 = *_Src;
      _Src = _Src + 1;
    } while (cVar3 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_3,param_4,_Src,param_4 - 1);
  return 0;
}

// 00E06750  FUN_00e06750  size=86  [between]
int __thiscall FUN_00e06750(int param_1,int param_2,char *param_3,rsize_t param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *_Src;
  
  puVar2 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar2,puVar2[1]);
  _Src = (char *)FUN_00e05520((undefined2)param_2);
  if (param_3 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar3 = *_Src;
      _Src = _Src + 1;
    } while (cVar3 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_3,param_4,_Src,param_4 - 1);
  return 0;
}

// 00E067B0  FUN_00e067b0  size=57  [between]
void __thiscall FUN_00e067b0(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,10);
  *param_3 = (char)uVar2;
  return;
}

// 00E067F0  FUN_00e067f0  size=58  [between]
void __thiscall FUN_00e067f0(int param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,10);
  *param_3 = (short)uVar2;
  return;
}

// 00E06830  FUN_00e06830  size=57  [between]
void __thiscall FUN_00e06830(int param_1,int param_2,ulong *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,10);
  *param_3 = uVar2;
  return;
}

// 00E06870  FUN_00e06870  size=60  [between]
void __thiscall FUN_00e06870(int param_1,int param_2,ulonglong *param_3)

{
  undefined1 *puVar1;
  char *_String;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _String = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = __strtoui64(_String,(char **)0x0,10);
  *param_3 = uVar2;
  return;
}

// 00E068B0  FUN_00e068b0  size=53  [between]
void __thiscall FUN_00e068b0(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar3 = FUN_00e05520((undefined2)param_2);
  uVar2 = FUN_00fdd33b(uVar3);
  *param_3 = uVar2;
  return;
}

// 00E068F0  FUN_00e068f0  size=54  [between]
void __thiscall FUN_00e068f0(int param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar3 = FUN_00e05520((undefined2)param_2);
  uVar2 = FUN_00fdd33b(uVar3);
  *param_3 = uVar2;
  return;
}

// 00E06930  FUN_00e06930  size=53  [between]
void __thiscall FUN_00e06930(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  uVar2 = FUN_00fdd33b(uVar2);
  *param_3 = uVar2;
  return;
}

// 00E06970  FUN_00e06970  size=53  [between]
void __thiscall FUN_00e06970(int param_1,int param_2,float *param_3)

{
  undefined1 *puVar1;
  char *_String;
  double dVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _String = (char *)FUN_00e05520((undefined2)param_2);
  dVar2 = _atof(_String);
  *param_3 = (float)dVar2;
  return;
}

// 00E069B0  FUN_00e069b0  size=53  [between]
void __thiscall FUN_00e069b0(int param_1,int param_2,double *param_3)

{
  undefined1 *puVar1;
  char *_String;
  double dVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _String = (char *)FUN_00e05520((undefined2)param_2);
  dVar2 = _atof(_String);
  *param_3 = dVar2;
  return;
}

// 00E069F0  FUN_00e069f0  size=52  [between]
void __thiscall FUN_00e069f0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e144a0(uVar2,param_3);
  return;
}

// 00E06A30  FUN_00e06a30  size=52  [between]
void __thiscall FUN_00e06a30(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e14500(uVar2,param_3);
  return;
}

// 00E06A70  FUN_00e06a70  size=52  [between]
void __thiscall FUN_00e06a70(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e14560(uVar2,param_3);
  return;
}

// 00E06AB0  FUN_00e06ab0  size=52  [between]
void __thiscall FUN_00e06ab0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e145c0(uVar2,param_3);
  return;
}

// 00E06AF0  FUN_00e06af0  size=52  [between]
void __thiscall FUN_00e06af0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e14650(uVar2,param_3);
  return;
}

// 00E06B30  FUN_00e06b30  size=53  [between]
void __thiscall FUN_00e06b30(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar3 = FUN_00e05520((undefined2)param_2);
  uVar2 = FUN_00fdd33b(uVar3);
  *param_3 = uVar2;
  return;
}

// 00E06B70  FUN_00e06b70  size=52  [between]
void __thiscall FUN_00e06b70(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  uVar2 = FUN_00e05520((undefined2)param_2);
  FUN_00e146d0(uVar2,param_3);
  return;
}

// 00E06BF0  FUN_00e06bf0  size=53  [between]
void __thiscall FUN_00e06bf0(int param_1,int param_2,float *param_3)

{
  undefined1 *puVar1;
  char *_String;
  double dVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _String = (char *)FUN_00e05520((undefined2)param_2);
  dVar2 = _atof(_String);
  *param_3 = (float)dVar2;
  return;
}

// 00E06C30  FUN_00e06c30  size=57  [between]
void __thiscall FUN_00e06c30(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,0x10);
  *param_3 = (char)uVar2;
  return;
}

// 00E06C70  FUN_00e06c70  size=58  [between]
void __thiscall FUN_00e06c70(int param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,0x10);
  *param_3 = (short)uVar2;
  return;
}

// 00E06CB0  FUN_00e06cb0  size=57  [between]
void __thiscall FUN_00e06cb0(int param_1,int param_2,ulong *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = _strtoul(_Str,(char **)0x0,0x10);
  *param_3 = uVar2;
  return;
}

// 00E06CF0  FUN_00e06cf0  size=60  [between]
void __thiscall FUN_00e06cf0(int param_1,int param_2,ulonglong *param_3)

{
  undefined1 *puVar1;
  char *_String;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _String = (char *)FUN_00e05520((undefined2)param_2);
  uVar2 = __strtoui64(_String,(char **)0x0,0x10);
  *param_3 = uVar2;
  return;
}

// 00E06D30  FUN_00e06d30  size=57  [between]
void __thiscall FUN_00e06d30(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  long lVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  lVar2 = _strtol(_Str,(char **)0x0,0x10);
  *param_3 = (char)lVar2;
  return;
}

// 00E06D70  FUN_00e06d70  size=58  [between]
void __thiscall FUN_00e06d70(int param_1,int param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  long lVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  lVar2 = _strtol(_Str,(char **)0x0,0x10);
  *param_3 = (short)lVar2;
  return;
}

// 00E06DB0  FUN_00e06db0  size=57  [between]
void __thiscall FUN_00e06db0(int param_1,int param_2,long *param_3)

{
  undefined1 *puVar1;
  char *_Str;
  long lVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x10) + 6 + param_2 * 8);
  param_2._0_2_ = CONCAT11(*puVar1,puVar1[1]);
  _Str = (char *)FUN_00e05520((undefined2)param_2);
  lVar2 = _strtol(_Str,(char **)0x0,0x10);
  *param_3 = lVar2;
  return;
}

// 00E06DF0  FUN_00e06df0  size=202  [between]
int __thiscall FUN_00e06df0(int param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char *_Str2;
  int iVar4;
  int iVar5;
  undefined2 local_c;
  undefined2 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x10) + param_2 * 8;
  iVar5 = 0;
  while( true ) {
    param_2._0_2_ = CONCAT11(*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5));
    if ((int)(uint)(ushort)param_2 <= iVar5) {
      return -1;
    }
    local_c = CONCAT11(*(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7));
    iVar3 = local_c + 1 + iVar5;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      local_8 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x14) + iVar3 * 4),
                         *(undefined1 *)(*(int *)(param_1 + 0x14) + 1 + iVar3 * 4));
      _Str2 = (char *)((uint)local_8 + *(int *)(param_1 + 0x18));
    }
    else {
      puVar2 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar3 * 8);
      local_4 = CONCAT13(*puVar2,CONCAT12(puVar2[1],
                                          CONCAT11(puVar2[2],
                                                   *(undefined1 *)
                                                    (*(int *)(param_1 + 0x14) + 3 + iVar3 * 8))));
      _Str2 = (char *)(*(int *)(param_1 + 0x18) + local_4);
    }
    iVar4 = __stricmp(param_3,_Str2);
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
  }
  return iVar3;
}

// 00E06EC0  FUN_00e06ec0  size=59  [between]
int FUN_00e06ec0(undefined4 param_1,char *param_2,rsize_t param_3)

{
  char *pcVar1;
  char cVar2;
  char *_Src;
  
  _Src = (char *)FUN_00e054c0(param_1);
  if (param_2 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar2 = *_Src;
      _Src = _Src + 1;
    } while (cVar2 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_2,param_3,_Src,param_3 - 1);
  return 0;
}

// 00E06F00  FUN_00e06f00  size=75  [between]
bool FUN_00e06f00(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  pbVar2 = (byte *)FUN_00e054c0(param_1);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    pbVar2 = pbVar2 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar3 == (uint)(bVar3 != 0);
}

// 00E06F50  FUN_00e06f50  size=32  [between]
void FUN_00e06f50(undefined4 param_1,undefined1 *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = (char)uVar1;
  return;
}

// 00E06F70  FUN_00e06f70  size=33  [between]
void FUN_00e06f70(undefined4 param_1,undefined2 *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = (short)uVar1;
  return;
}

// 00E06FA0  FUN_00e06fa0  size=32  [between]
void FUN_00e06fa0(undefined4 param_1,ulong *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = uVar1;
  return;
}

// 00E06FC0  FUN_00e06fc0  size=35  [between]
void FUN_00e06fc0(undefined4 param_1,ulonglong *param_2)

{
  char *_String;
  ulonglong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 10;
  _EndPtr = (char **)0x0;
  _String = (char *)FUN_00e05520(param_1);
  uVar1 = __strtoui64(_String,_EndPtr,_Radix);
  *param_2 = uVar1;
  return;
}

// 00E06FF0  FUN_00e06ff0  size=28  [between]
void FUN_00e06ff0(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00e05520(param_1);
  uVar1 = FUN_00fdd33b(uVar2);
  *param_2 = uVar1;
  return;
}

// 00E07010  FUN_00e07010  size=29  [between]
void FUN_00e07010(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00e05520(param_1);
  uVar1 = FUN_00fdd33b(uVar2);
  *param_2 = uVar1;
  return;
}

// 00E07030  FUN_00e07030  size=28  [between]
void FUN_00e07030(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  uVar1 = FUN_00fdd33b(uVar1);
  *param_2 = uVar1;
  return;
}

// 00E07050  FUN_00e07050  size=28  [between]
void FUN_00e07050(undefined4 param_1,float *param_2)

{
  char *_String;
  double dVar1;
  
  _String = (char *)FUN_00e05520(param_1);
  dVar1 = _atof(_String);
  *param_2 = (float)dVar1;
  return;
}

// 00E07070  FUN_00e07070  size=28  [between]
void FUN_00e07070(undefined4 param_1,double *param_2)

{
  char *_String;
  double dVar1;
  
  _String = (char *)FUN_00e05520(param_1);
  dVar1 = _atof(_String);
  *param_2 = dVar1;
  return;
}

// 00E07090  FUN_00e07090  size=32  [between]
void FUN_00e07090(undefined4 param_1,ulong *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = uVar1;
  return;
}

// 00E070B0  FUN_00e070b0  size=27  [between]
void FUN_00e070b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e144a0(uVar1,param_2);
  return;
}

// 00E070D0  FUN_00e070d0  size=27  [between]
void FUN_00e070d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14500(uVar1,param_2);
  return;
}

// 00E070F0  FUN_00e070f0  size=27  [between]
void FUN_00e070f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14560(uVar1,param_2);
  return;
}

// 00E07110  FUN_00e07110  size=27  [between]
void FUN_00e07110(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e145c0(uVar1,param_2);
  return;
}

// 00E07130  FUN_00e07130  size=27  [between]
void FUN_00e07130(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14650(uVar1,param_2);
  return;
}

// 00E07150  FUN_00e07150  size=28  [between]
void FUN_00e07150(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00e05520(param_1);
  uVar1 = FUN_00fdd33b(uVar2);
  *param_2 = uVar1;
  return;
}

// 00E07170  FUN_00e07170  size=27  [between]
void FUN_00e07170(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e146d0(uVar1,param_2);
  return;
}

// 00E07190  FUN_00e07190  size=27  [between]
void FUN_00e07190(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14730(uVar1,param_2);
  return;
}

// 00E071B0  FUN_00e071b0  size=28  [between]
void FUN_00e071b0(undefined4 param_1,float *param_2)

{
  char *_String;
  double dVar1;
  
  _String = (char *)FUN_00e05520(param_1);
  dVar1 = _atof(_String);
  *param_2 = (float)dVar1;
  return;
}

// 00E071D0  FUN_00e071d0  size=59  [between]
int FUN_00e071d0(undefined4 param_1,char *param_2,rsize_t param_3)

{
  char *pcVar1;
  char cVar2;
  char *_Src;
  
  _Src = (char *)FUN_00e05520(param_1);
  if (param_2 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar2 = *_Src;
      _Src = _Src + 1;
    } while (cVar2 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_2,param_3,_Src,param_3 - 1);
  return 0;
}

// 00E07210  FUN_00e07210  size=59  [between]
int FUN_00e07210(undefined4 param_1,char *param_2,rsize_t param_3)

{
  char *pcVar1;
  char cVar2;
  char *_Src;
  
  _Src = (char *)FUN_00e05520(param_1);
  if (param_2 == (char *)0x0) {
    pcVar1 = _Src + 1;
    do {
      cVar2 = *_Src;
      _Src = _Src + 1;
    } while (cVar2 != '\0');
    return (int)_Src - (int)pcVar1;
  }
  _strncpy_s(param_2,param_3,_Src,param_3 - 1);
  return 0;
}

// 00E07250  FUN_00e07250  size=32  [between]
void FUN_00e07250(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e147b0(uVar1,param_2,param_3);
  return;
}

// 00E07270  FUN_00e07270  size=32  [between]
void FUN_00e07270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14810(uVar1,param_2,param_3);
  return;
}

// 00E07290  FUN_00e07290  size=32  [between]
void FUN_00e07290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14870(uVar1,param_2,param_3);
  return;
}

// 00E072B0  FUN_00e072b0  size=32  [between]
void FUN_00e072b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e148d0(uVar1,param_2,param_3);
  return;
}

// 00E072D0  FUN_00e072d0  size=32  [between]
void FUN_00e072d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14930(uVar1,param_2,param_3);
  return;
}

// 00E072F0  FUN_00e072f0  size=32  [between]
void FUN_00e072f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14990(uVar1,param_2,param_3);
  return;
}

// 00E07310  FUN_00e07310  size=32  [between]
void FUN_00e07310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e149f0(uVar1,param_2,param_3);
  return;
}

// 00E07330  FUN_00e07330  size=32  [between]
void FUN_00e07330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e05520(param_1);
  FUN_00e14a50(uVar1,param_2,param_3);
  return;
}

// 00E07350  FUN_00e07350  size=32  [between]
void FUN_00e07350(undefined4 param_1,undefined1 *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = (char)uVar1;
  return;
}

// 00E07370  FUN_00e07370  size=33  [between]
void FUN_00e07370(undefined4 param_1,undefined2 *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = (short)uVar1;
  return;
}

// 00E073A0  FUN_00e073a0  size=32  [between]
void FUN_00e073a0(undefined4 param_1,ulong *param_2)

{
  char *_Str;
  ulong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  uVar1 = _strtoul(_Str,_EndPtr,_Radix);
  *param_2 = uVar1;
  return;
}

// 00E073C0  FUN_00e073c0  size=35  [between]
void FUN_00e073c0(undefined4 param_1,ulonglong *param_2)

{
  char *_String;
  ulonglong uVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _String = (char *)FUN_00e05520(param_1);
  uVar1 = __strtoui64(_String,_EndPtr,_Radix);
  *param_2 = uVar1;
  return;
}

// 00E073F0  FUN_00e073f0  size=32  [between]
void FUN_00e073f0(undefined4 param_1,undefined1 *param_2)

{
  char *_Str;
  long lVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  lVar1 = _strtol(_Str,_EndPtr,_Radix);
  *param_2 = (char)lVar1;
  return;
}

// 00E07410  FUN_00e07410  size=33  [between]
void FUN_00e07410(undefined4 param_1,undefined2 *param_2)

{
  char *_Str;
  long lVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  lVar1 = _strtol(_Str,_EndPtr,_Radix);
  *param_2 = (short)lVar1;
  return;
}

// 00E07440  FUN_00e07440  size=32  [between]
void FUN_00e07440(undefined4 param_1,long *param_2)

{
  char *_Str;
  long lVar1;
  char **_EndPtr;
  int _Radix;
  
  _Radix = 0x10;
  _EndPtr = (char **)0x0;
  _Str = (char *)FUN_00e05520(param_1);
  lVar1 = _strtol(_Str,_EndPtr,_Radix);
  *param_2 = lVar1;
  return;
}

// 00E07460  FUN_00e07460  size=49  [between]
undefined4 FUN_00e07460(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0;
  }
  uVar1 = FUN_00e05520();
  return uVar1;
}

// 00E08440  FUN_00e08440  size=127  [between]
void __thiscall FUN_00e08440(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = FUN_00e13c00();
  if (iVar3 != 0) {
    do {
      cVar2 = FUN_00e057c0(param_2,param_3,param_3,uVar7);
      if (cVar2 != '\0') {
        puVar6 = (undefined1 *)(*(int *)(param_1 + 4) + uVar7);
        puVar4 = puVar6 + param_3;
        if (puVar6 != puVar4) {
          puVar1 = *(undefined1 **)(param_1 + 8);
          for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            *puVar6 = *puVar4;
            puVar6 = puVar6 + 1;
          }
          *(undefined1 **)(param_1 + 8) = puVar6;
        }
        FUN_00e173a0(*(int *)(param_1 + 4) + uVar7,param_4,param_4 + param_5);
        uVar7 = (uVar7 - 1) + param_5;
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN_00e13c00();
    } while (uVar7 < uVar5);
  }
  return;
}

// 00E085E0  FUN_00e085e0  size=27  [between]
void __fastcall FUN_00e085e0(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedDecrement((LONG *)(*param_1 + 8));
    *param_1 = 0;
  }
  return;
}

// 00E08600  FUN_00e08600  size=56  [between]
int * __thiscall FUN_00e08600(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    if (*param_1 != 0) {
      InterlockedDecrement((LONG *)(*param_1 + 8));
      *param_1 = 0;
    }
    iVar1 = *param_2;
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_1;
}

// 00E08640  FUN_00e08640  size=81  [between]
undefined4 __thiscall FUN_00e08640(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01dd9160 == 0) {
    FUN_00dd5650(&DAT_016cc124);
  }
  else {
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 4) = param_2;
      return 1;
    }
    iVar1 = cSlowRateManager::allocUnit();
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = param_2;
      return 1;
    }
  }
  return 0;
}

// 00E086A0  FUN_00e086a0  size=145  [between]
undefined4 __thiscall FUN_00e086a0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e198a0(0x400,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(float *)(param_1 + 0x88) = 1.0 / ((1.0 / param_3) * 1000.0);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  return 1;
}

// 00E08740  cSlowRateManager::cleanup  size=163  [class]
void __fastcall cSlowRateManager::cleanup(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  while (uVar4 = uVar2, uVar4 != 0) {
    puVar1 = (uint *)(uVar4 + 0x2c);
    uVar2 = *puVar1;
    if (0 < *(int *)(uVar4 + 8)) {
      FUN_00dd5650(&DAT_016cc398);
    }
    if (*(int *)(uVar4 + 0x28) == 0) {
      *(uint *)(param_1 + 0x38) = *puVar1;
    }
    else {
      *(uint *)(*(int *)(uVar4 + 0x28) + 0x2c) = *puVar1;
    }
    if (*puVar1 != 0) {
      *(undefined4 *)(*puVar1 + 0x28) = *(undefined4 *)(uVar4 + 0x28);
    }
    *(undefined4 *)(uVar4 + 0x28) = 0;
    *puVar1 = 0;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < *(int *)(param_1 + 0x1c) * 0x34 + uVar3)) {
      FUN_00e14f60(uVar4);
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

