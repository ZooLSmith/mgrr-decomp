// src/unsorted/unit_00D45860.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D45860..00D469A0, 24 functions

#include "mgrr.h"

// 00D45860  FUN_00d45860  size=164  [run]
int __thiscall FUN_00d45860(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar4 = *(int **)(param_1 + 0x110);
    while (*piVar4 != param_2) {
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar2) {
        return -1;
      }
    }
    piVar4 = *(int **)(param_1 + 0x110) + iVar2 * 4;
    if (piVar4 != (int *)0x0) {
      iVar2 = 0;
      if (0 < piVar4[1]) {
        pbVar5 = (byte *)piVar4[2];
        pbVar7 = param_3;
        pbVar3 = pbVar5;
LAB_00d458c0:
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 == *pbVar7) {
            if (bVar1 != 0) {
              bVar1 = pbVar5[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00d458e0;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
              if (bVar1 != 0) goto LAB_00d458c0;
            }
            iVar6 = 0;
          }
          else {
LAB_00d458e0:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          }
          if (iVar6 == 0) {
            return iVar2;
          }
          iVar2 = iVar2 + 1;
          pbVar5 = pbVar3 + 0x2c;
          pbVar7 = param_3;
          pbVar3 = pbVar5;
        } while (iVar2 < piVar4[1]);
      }
      return -1;
    }
  }
  return -1;
}

// 00D45910  FUN_00d45910  size=100  [run]
int __thiscall FUN_00d45910(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar2 = *(int **)(param_1 + 0x110);
    while (*piVar2 != param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar1) {
        return -1;
      }
    }
    piVar2 = *(int **)(param_1 + 0x110) + iVar1 * 4;
    if (piVar2 != (int *)0x0) {
      iVar1 = 0;
      if (0 < piVar2[1]) {
        piVar3 = (int *)(piVar2[2] + 0x20);
        do {
          if (*piVar3 == param_3) {
            return iVar1;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 0xb;
        } while (iVar1 < piVar2[1]);
      }
    }
  }
  return -1;
}

// 00D45980  FUN_00d45980  size=149  [run]
int __fastcall FUN_00d45980(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar6 = *(int **)(param_1 + 0x110);
    while (*piVar6 != *(int *)(param_1 + 0x34)) {
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar2) {
        return -1;
      }
    }
    piVar6 = *(int **)(param_1 + 0x110) + iVar2 * 4;
    if (piVar6 != (int *)0x0) {
      iVar2 = 0;
      if (0 < piVar6[1]) {
        pbVar4 = (byte *)piVar6[2];
        pbVar7 = (byte *)(param_1 + 0x3c);
        pbVar3 = pbVar4;
LAB_00d459d5:
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 == *pbVar7) {
            if (bVar1 != 0) {
              bVar1 = pbVar4[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00d459f5;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
              if (bVar1 != 0) goto LAB_00d459d5;
            }
            iVar5 = 0;
          }
          else {
LAB_00d459f5:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          }
          if (iVar5 == 0) {
            return iVar2;
          }
          iVar2 = iVar2 + 1;
          pbVar4 = pbVar3 + 0x2c;
          pbVar7 = (byte *)(param_1 + 0x3c);
          pbVar3 = pbVar4;
        } while (iVar2 < piVar6[1]);
      }
      return -1;
    }
  }
  return -1;
}

// 00D45A20  FUN_00d45a20  size=79  [run]
int __thiscall FUN_00d45a20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar2 = *(int **)(param_1 + 0x110);
    while (*piVar2 != param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar1) {
        return 0;
      }
    }
    piVar2 = *(int **)(param_1 + 0x110) + iVar1 * 4;
    if ((piVar2 != (int *)0x0) && (piVar2[1] != 0)) {
      return piVar2[2];
    }
  }
  return 0;
}

// 00D45A70  FUN_00d45a70  size=30  [run]
bool __thiscall FUN_00d45a70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e03ea0(param_2);
  return *(int *)(param_1 + 0x38) == iVar1;
}

// 00D45A90  FUN_00d45a90  size=50  [run]
bool __thiscall FUN_00d45a90(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0x34)) {
    return false;
  }
  iVar1 = FUN_00e03ea0(param_2);
  return *(int *)(param_1 + 0xbc) == iVar1;
}

// 00D45B10  FUN_00d45b10  size=10  [run]
bool __fastcall FUN_00d45b10(int param_1)

{
  return *(int *)(param_1 + 4) == 9;
}

// 00D45B80  FUN_00d45b80  size=142  [run]
undefined4 __thiscall FUN_00d45b80(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))
                      (*(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x28),param_4);
  }
  *param_2 = 0;
  *param_3 = -1;
  if (iVar1 != -1) {
    iVar2 = param_1 + 0x1d8;
LAB_00d45bcd:
    *param_2 = iVar2;
    *param_3 = iVar1;
    return 1;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar2 = param_1 + 0x1b8;
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1b8) + 0x18))
                      (*(undefined4 *)(*(int *)(param_1 + 0x118) + 0xc),param_4);
    if (iVar1 != -1) goto LAB_00d45bcd;
  }
  return 0;
}

// 00D45E00  FUN_00d45e00  size=71  [run]
undefined4 FUN_00d45e00(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_00d45b80(&param_1,&local_4,param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x58))(local_4,param_2);
    return 1;
  }
  *param_2 = param_3;
  return 0;
}

// 00D46200  FUN_00d46200  size=76  [run]
bool __thiscall FUN_00d46200(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 0x210) != 1)) {
    return false;
  }
  bVar1 = *(int *)(param_1 + 0x1a4) != 0;
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 400);
  }
  bVar2 = *(int *)(param_1 + 0x1a8) != 0;
  if (bVar2) {
    param_2[1] = *(undefined4 *)(param_1 + 0x194);
  }
  return bVar2 || bVar1;
}

// 00D46540  FUN_00d46540  size=86  [run]
void __thiscall FUN_00d46540(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (param_3 != (char *)0x0) {
    uVar1 = FUN_00e03ea0(param_3);
    *(undefined4 *)(param_1 + 100) = uVar1;
    _strcpy_s((char *)(param_1 + 0x68),0x20,param_3);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}

// 00D46690  FUN_00d46690  size=91  [run]
void FUN_00d46690(byte param_1)

{
  char local_20 [32];
  
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = '\0';
  _sprintf_s(local_20,0x20,"_EnemyWay%02x.bxm",(uint)param_1);
  FUN_00de4550(local_20,0);
  return;
}

// 00D466F0  FUN_00d466f0  size=31  [run]
undefined4 __fastcall FUN_00d466f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x34) & 0xf00;
  if ((uVar1 != 0xc00) && (uVar1 != 0xd00)) {
    return 0;
  }
  return 1;
}

// 00D46710  FUN_00d46710  size=65  [run]
undefined4 __fastcall FUN_00d46710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (((0x2f < iVar1 - 0xe21U) && (((iVar1 < 0xc71 || (0xc75 < iVar1)) && (0xf0 < iVar1 - 0xc00U))))
     && ((iVar1 < 0xd71 || (0xc75 < iVar1)))) {
    return 0;
  }
  return 1;
}

// 00D46780  FUN_00d46780  size=21  [run]
bool __fastcall FUN_00d46780(int param_1)

{
  return (*(uint *)(param_1 + 0x34) & 0xf00) == 0xc00;
}

// 00D467A0  FUN_00d467a0  size=21  [run]
bool __fastcall FUN_00d467a0(int param_1)

{
  return (*(uint *)(param_1 + 0x34) & 0xf00) == 0xd00;
}

// 00D467C0  FUN_00d467c0  size=36  [run]
undefined4 __fastcall FUN_00d467c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (((iVar1 < 0xc71) || (0xc7f < iVar1)) && (0xe < iVar1 - 0xd71U)) {
    return 0;
  }
  return 1;
}

// 00D46850  FUN_00d46850  size=164  [run]
undefined4 __fastcall FUN_00d46850(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar6 = *(int **)(param_1 + 0x110);
    while (*piVar6 != *(int *)(param_1 + 0x34)) {
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar3) {
        return 0;
      }
    }
    piVar6 = *(int **)(param_1 + 0x110) + iVar3 * 4;
    if (piVar6 != (int *)0x0) {
      iVar3 = 0;
      if (0 < piVar6[1]) {
        pbVar2 = (byte *)piVar6[2];
        pbVar8 = pbVar2;
        pbVar5 = (byte *)(param_1 + 0x3c);
        pbVar7 = pbVar2;
LAB_00d468b0:
        do {
          bVar1 = *pbVar8;
          bVar9 = bVar1 < *pbVar5;
          if (bVar1 == *pbVar5) {
            if (bVar1 != 0) {
              bVar1 = pbVar8[1];
              bVar9 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d468d0;
              pbVar8 = pbVar8 + 2;
              pbVar5 = pbVar5 + 2;
              if (bVar1 != 0) goto LAB_00d468b0;
            }
            iVar4 = 0;
          }
          else {
LAB_00d468d0:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          }
          if (iVar4 == 0) {
            return *(undefined4 *)(pbVar2 + iVar3 * 0x2c + 0x24);
          }
          iVar3 = iVar3 + 1;
          pbVar8 = pbVar7 + 0x2c;
          pbVar5 = (byte *)(param_1 + 0x3c);
          pbVar7 = pbVar8;
        } while (iVar3 < piVar6[1]);
      }
      return 0;
    }
  }
  return 0;
}

// 00D46900  FUN_00d46900  size=7  [run]
int __fastcall FUN_00d46900(int param_1)

{
  return param_1 + 0x230;
}

// 00D46910  FUN_00d46910  size=11  [run]
void __fastcall FUN_00d46910(int param_1)

{
  *(undefined4 *)(param_1 + 0x25c) = 1;
  return;
}

// 00D46920  FUN_00d46920  size=11  [run]
void __fastcall FUN_00d46920(int param_1)

{
  *(undefined4 *)(param_1 + 0x260) = 1;
  return;
}

// 00D46930  FUN_00d46930  size=49  [run]
void __fastcall FUN_00d46930(int param_1)

{
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x5c);
  FID_conflict__memcpy((void *)(param_1 + 0x238),(void *)(param_1 + 0x3c),0x20);
  return;
}

// 00D46970  FUN_00d46970  size=42  [run]
void __thiscall FUN_00d46970(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x220) = *param_2;
  *(undefined4 *)(param_1 + 0x224) = param_2[1];
  *(undefined4 *)(param_1 + 0x228) = param_2[2];
  *(undefined4 *)(param_1 + 0x22c) = param_2[3];
  return;
}

// 00D469A0  FUN_00d469a0  size=113  [run]
void __fastcall FUN_00d469a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  return;
}

