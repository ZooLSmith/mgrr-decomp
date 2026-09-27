// src/unsorted/unit_00C13980.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C13980..00C140A0, 19 functions

#include "mgrr.h"

// 00C13980  FUN_00c13980  size=31  [run]
undefined4 FUN_00c13980(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a97a0 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x54);
  return 0;
}

// 00C139A0  FUN_00c139a0  size=73  [run]
undefined4 FUN_00c139a0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a97f4 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a9784 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x1c);
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a980c + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x1c);
  return 0;
}

// 00C139F0  FUN_00c139f0  size=55  [run]
undefined4 FUN_00c139f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_018a9828;
  do {
    iVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 5);
    piVar3 = piVar3 + 5;
  } while ((int)piVar3 < 0x18a997c);
  return 0;
}

// 00C13A30  FUN_00c13a30  size=55  [run]
undefined4 FUN_00c13a30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_018a9980;
  do {
    iVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
    piVar3 = piVar3 + 4;
  } while ((int)piVar3 < 0x18a99c0);
  return 0;
}

// 00C13A70  FUN_00c13a70  size=31  [run]
undefined4 FUN_00c13a70(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a99c0 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x30);
  return 0;
}

// 00C13A90  FUN_00c13a90  size=31  [run]
undefined4 FUN_00c13a90(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a99f0 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  return 0;
}

// 00C13AB0  FUN_00c13ab0  size=49  [run]
undefined4 FUN_00c13ab0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a9a08 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x30);
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a9a38 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x30);
  return 0;
}

// 00C13AF0  FUN_00c13af0  size=31  [run]
undefined4 FUN_00c13af0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a9a68 + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  return 0;
}

// 00C13B10  FUN_00c13b10  size=31  [run]
undefined4 FUN_00c13b10(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a997c + uVar1) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 4);
  return 0;
}

// 00C13B50  FUN_00c13b50  size=265  [run]
void FUN_00c13b50(void)

{
  DAT_01bea034 = 0;
  DAT_01bea038 = 0;
  DAT_01bea040 = 0xffffffff;
  DAT_01bea03c = 0xffffffff;
  DAT_01bea044 = 0;
  DAT_01bea01c = 0;
  DAT_01bea020 = 0;
  DAT_01bea028 = 0xffffffff;
  DAT_01bea024 = 0xffffffff;
  DAT_01bea02c = 0;
  DAT_01bea008 = 0;
  DAT_01bea00c = 0;
  DAT_01bea014 = 0xffffffff;
  DAT_01bea010 = 0xffffffff;
  DAT_01bea018 = 0;
  DAT_01be9ff4 = 0;
  DAT_01be9ff8 = 0;
  DAT_01bea000 = 0xffffffff;
  DAT_01be9ffc = 0xffffffff;
  DAT_01bea004 = 0;
  DAT_01be9fcc = 0;
  DAT_01be9fd0 = 0;
  DAT_01be9fd4 = 0xffffffff;
  DAT_01be9fdc = 0;
  DAT_01be9fe0 = 0;
  DAT_01be9fe4 = 0;
  DAT_01be9fe8 = 0xffffffff;
  DAT_01be9ff0 = 0;
  DAT_01bea048 = 0;
  DAT_01bea04c = 0;
  DAT_01bea054 = 0xffffffff;
  DAT_01bea050 = 0xffffffff;
  DAT_01bea058 = 0;
  DAT_01be9fb8 = 0;
  DAT_01be9fbc = 0;
  DAT_01be9fc4 = 0xffffffff;
  DAT_01be9fc0 = 0xffffffff;
  DAT_01be9fc8 = 0;
  DAT_01bea05c = 0;
  DAT_01be9fa8 = 0;
  DAT_01be9fa4 = 0;
  DAT_01be9fa0 = 0;
  DAT_01bea030 = 2;
  DAT_01be9fb4 = 0;
  DAT_01be9fac = 0;
  DAT_01be9fb0 = 0;
  DAT_01be9fd8 = 0;
  DAT_01be9fec = 0;
  return;
}

// 00C13C60  FUN_00c13c60  size=51  [run]
void FUN_00c13c60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = 0, 0 < param_2)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != -1) {
        FUN_00a00a60(iVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

// 00C13CD0  FUN_00c13cd0  size=81  [run]
bool FUN_00c13cd0(void)

{
  if ((((DAT_01bea044 == 0) && (DAT_01bea02c == 0)) && (DAT_01bea018 == 0)) &&
     (((DAT_01bea004 == 0 && (DAT_01be9fdc == 0)) && ((DAT_01be9ff0 == 0 && (DAT_01bea058 == 0))))))
  {
    return DAT_01be9fc8 != 0;
  }
  return true;
}

// 00C13D30  FUN_00c13d30  size=77  [run]
undefined4 FUN_00c13d30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 != -1) && (iVar1 = FUN_00a00da0(iVar1,0), iVar1 == 0)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 1;
}

// 00C13D80  FUN_00c13d80  size=82  [run]
undefined4 FUN_00c13d80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (DAT_01be9fa8 == 0)) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != -1) {
          iVar1 = FUN_00a00ca0(iVar1,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    return 1;
  }
  return 1;
}

// 00C13DE0  FUN_00c13de0  size=223  [run]
undefined4 FUN_00c13de0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xf00;
  uVar1 = 0;
  if (uVar2 == 0xc00) {
    return 8;
  }
  if (uVar2 == 0xd00) {
    return 9;
  }
  if (uVar2 == 0xe00) {
    if (param_1 == 0xe40) {
      return 7;
    }
    if (((int)param_1 < 0xef3) || (0xef4 < (int)param_1)) {
      return 6;
    }
  }
  else {
    if ((int)param_1 < 0xf05) {
      if (param_1 == 0xf04) {
switchD_00c13eb1_caseD_f06:
        return 2;
      }
      if ((int)param_1 < 0x751) {
        if (param_1 == 0x750) {
          return 5;
        }
        if (param_1 == 0x380) {
          return 3;
        }
        if (param_1 == 0x740) {
          return 4;
        }
      }
      else if (param_1 == 0xf01) {
        return 2;
      }
    }
    else {
      switch(param_1) {
      case 0xf06:
      case 0xf09:
      case 0xf0a:
      case 0xf0b:
      case 0xf15:
      case 0xf30:
      case 0xf31:
      case 0xf32:
      case 0xf33:
      case 0xf34:
        goto switchD_00c13eb1_caseD_f06;
      }
    }
    if ((param_1 == 0xffffffff) && (DAT_01be8e40 == 0xa1)) {
      uVar1 = 1;
    }
    if (uVar2 != 0xa00) {
      return uVar1;
    }
  }
  return 1;
}

// 00C13F00  FUN_00c13f00  size=11  [run]
void FUN_00c13f00(void)

{
  DAT_01be9fa4 = 0;
  return;
}

// 00C13F50  FUN_00c13f50  size=145  [run]
void FUN_00c13f50(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  FUN_00de3530();
  FUN_00f972f0();
  iVar1 = FUN_009fe6b0(local_8,*DAT_01bea008);
  if (iVar1 != 0) {
    uVar2 = FUN_00de44b0(&DAT_0164518c,0);
    iVar1 = FUN_00de44b0(&DAT_01645174,0);
    iVar3 = FUN_00de44b0(&DAT_01645170,0);
    if ((iVar1 != 0) && (iVar3 != 0)) {
      FUN_00fa4d00(iVar1,iVar3);
      return;
    }
    FUN_00fa25d0(uVar2);
  }
  return;
}

// 00C13FF0  FUN_00c13ff0  size=170  [run]
void FUN_00c13ff0(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_c0 [64];
  char local_80 [128];
  
  FUN_009f8ea0(local_c0,0x40,param_2,0);
  iVar6 = 0;
  do {
    pbVar5 = &DAT_016416fa;
    pbVar2 = (&PTR_s_pl0010_hair0_def_al_018a9a80)[iVar6 + DAT_01be9fac * 3];
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00c14058:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00c1405d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00c14058;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00c1405d:
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + iVar6 * 4) = 0;
    }
    else {
      _sprintf_s(local_80,0x80,"%s%s",local_c0,
                 (&PTR_s_pl0010_hair0_def_al_018a9a80)[iVar6 + DAT_01be9fac * 3]);
      uVar4 = FUN_00e03ea0(local_80);
      *(undefined4 *)(param_1 + iVar6 * 4) = uVar4;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return;
    }
  } while( true );
}

// 00C140A0  FUN_00c140a0  size=285  [run]
void FUN_00c140a0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18 [6];
  
  iVar4 = 0;
  if (DAT_01be9fa0 != 0) {
    FUN_00c13f50();
    DAT_01be9fa0 = 0;
  }
  if (DAT_01bea1bc != 0) {
    FUN_00c13ff0(local_18 + 3,*DAT_01bea008);
    if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
      uVar2 = *DAT_01bea01c;
    }
    else {
      uVar2 = 0xffffffff;
    }
    FUN_00c13ff0(local_18,uVar2);
    sVar1 = *(short *)(param_1 + 0x32c);
    iVar6 = 0;
    if (0 < sVar1) {
      do {
        if (((((-1 < iVar6) && (iVar6 < *(short *)(param_1 + 0x32c))) &&
             (iVar5 = *(int *)(param_1 + 0x328) + iVar4, iVar5 != 0)) &&
            ((*(int *)(iVar5 + 0x524) != -1 && (*(int *)(iVar5 + 0x4f4) != 0)))) &&
           (iVar5 = *(int *)(*(int *)(iVar5 + 0x4f4) + *(int *)(iVar5 + 0x524) * 4), iVar5 != 0)) {
          iVar3 = 0;
          do {
            if ((local_18[iVar3] != 0) && (*(int *)(iVar5 + 0x2c) == local_18[iVar3])) {
              if ((iVar3 != -1) && (iVar5 = FUN_00f9a050(local_18[iVar3 + 3]), iVar5 != -1)) {
                FUN_00a08de0(1,&DAT_01bea1b4,iVar5);
              }
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 3);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x560;
      } while (iVar6 < sVar1);
    }
  }
  return;
}

