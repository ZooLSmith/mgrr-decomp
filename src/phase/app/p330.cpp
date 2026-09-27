// src/phase/app/p330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48570..00D70300, 7 functions

#include "mgrr.h"
#include "P330.h"

// 00D48570  P330::vf1C  size=3  [class]
void P330::vf1C(void)

{
  return;
}

// 00D48580  P330::vf08  size=79  [class]
void __fastcall P330::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0(&DAT_0163b7d8);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  FUN_00a33520(0,0x300,1);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

// 00D485D0  P330::vf0C  size=1  [class]
void P330::vf0C(void)

{
  return;
}

// 00D52EF0  P330::vf14  size=394  [class]
void P330::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_ESI;
  int iVar9;
  bool bVar10;
  int unaff_retaddr;
  undefined4 uVar11;
  char *pcVar12;
  
  pbVar7 = param_2;
  pbVar8 = &DAT_0163b7d8;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00d52f20:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d52f25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00d52f20;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d52f25:
  if (iVar3 == 0) {
    FUN_00c81e90(0x3c);
  }
  pcVar12 = "P330_START";
  uVar11 = 1;
  uVar4 = FUN_00e03ea0("P330_START",1,"P330_START");
  iVar3 = FUN_00d4f0b0(uVar4,uVar11,pcVar12);
  if (iVar3 != 0) {
    pcVar12 = "P330_ELV";
    uVar11 = 0;
    uVar4 = FUN_00e03ea0("P330_ELV",0,"P330_ELV");
    param_2 = (byte *)FUN_00d4f0b0(uVar4,uVar11,pcVar12);
    if (param_2 == (byte *)0x0) {
      piVar5 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar5 + 0x28))(&param_2,0x305);
      if ((iVar3 != 0) && (iVar9 = 0, 0 < (int)param_2)) {
        do {
          piVar5 = *(int **)(iVar3 + iVar9 * 4);
          if (piVar5 != (int *)0x0) {
            iVar6 = (**(code **)(*piVar5 + 8))();
            if (iVar6 != 0) {
              (**(code **)(**(int **)(iVar3 + iVar9 * 4) + 0xe0))(0,"elevator_col",0,0);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)param_2);
      }
    }
  }
  pbVar2 = &DAT_016bcfec;
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00d53000:
      param_2 = (byte *)((1 - (uint)bVar10) - (uint)(bVar10 != 0));
      goto LAB_00d53005;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00d53000;
    pbVar7 = pbVar7 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  param_2 = (byte *)0x0;
LAB_00d53005:
  if (param_2 == (byte *)0x0) {
    piVar5 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar5 + 0x28))(&param_2,0x305);
    if ((iVar3 != 0) && (iVar9 = 0, 0 < unaff_retaddr)) {
      do {
        piVar5 = *(int **)(iVar3 + iVar9 * 4);
        if (piVar5 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar5 + 8))();
          if (iVar6 != 0) {
            (**(code **)(**(int **)(iVar3 + iVar9 * 4) + 0x2c))
                      (&stack0xfffffff4,"r305_musen_00.baria6");
            if (unaff_ESI != 0) {
              FUN_00917bd0(unaff_ESI,1);
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < unaff_retaddr);
    }
  }
  return;
}

// 00D53080  P330::vf10  size=33  [class]
void P330::vf10(void)

{
  FUN_00cad250(0);
  DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  return;
}

// 00D67C60  P330::vf18  size=812  [class]
void __fastcall P330::vf18(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  if ((DAT_01bea160 == 0) && (iVar3 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x11c),1), iVar3 != 0))
  {
    piVar4 = (int *)FUN_00c13920();
    (**(code **)(*piVar4 + 0x28))(0);
    uVar6 = 0;
    do {
      piVar4 = (int *)FUN_00a6e640();
      iVar3 = (**(code **)(*piVar4 + 0x24))((&DAT_016bc264)[uVar6 * 2],1,1);
      piVar4 = (int *)FUN_00a6e640();
      iVar5 = (**(code **)(*piVar4 + 0x24))((&DAT_016bc264)[uVar6 * 2],1,2);
      if ((iVar3 != 0) || (iVar5 != 0)) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0xd4))(0);
        FUN_00d664e0((&DAT_016bc268)[uVar6 * 2]);
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
  }
  iVar3 = FUN_00936700("p330_ELV");
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 300) != 0) {
      DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  else if (*(int *)(param_1 + 300) == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x20000;
    *(undefined4 *)(param_1 + 300) = 1;
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0xffffffff);
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar10);
      if (iVar3 != 0) {
        FUN_00b7ec60();
      }
    }
  }
  if ((*(char *)(param_1 + 0x130) == '\0') && (cVar2 = FUN_00c1ace0(1), cVar2 != '\0')) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0xffffffff);
    if (iVar3 != 0) {
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xb;
      FUN_00a7c8a0(0xb,0,0,0);
      FUN_00a8caf0(uVar7,uVar8,uVar9,uVar11);
    }
    DAT_01bea070 = DAT_01bea070 | 0x80000;
    DAT_01bea090 = DAT_01bea090 | 0x8000;
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar10);
      if (iVar3 != 0) {
        FUN_00b8a040(0,0,0);
      }
    }
    *(undefined1 *)(param_1 + 0x130) = 1;
    FUN_00cad250(1);
    DAT_01bea094 = DAT_01bea094 | 0x100;
  }
  if ((*(char *)(param_1 + 0x131) == '\0') && (*(char *)(param_1 + 0x130) != '\0')) {
    piVar4 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar4 + 0x24))(2,1,2);
    if (iVar3 != 0) {
      DAT_01bea070 = DAT_01bea070 & 0xfff7ffff;
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      iVar3 = FUN_00dda320(0);
      if (iVar3 != 0) {
        FUN_00dda360(0,0x41a00000,0x41a00000,10);
      }
      *(undefined1 *)(param_1 + 0x131) = 1;
    }
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      piVar4 = (int *)FUN_00a6e640();
      iVar3 = (**(code **)(*piVar4 + 0x24))(2,1,1);
      piVar4 = (int *)FUN_00a6e640();
      iVar5 = (**(code **)(*piVar4 + 0x24))(2,1,2);
      if ((iVar3 != 0) || (iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x120) = 1;
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x128) + 1.0;
      *(float *)(param_1 + 0x128) = fVar1;
      if (90.0 < fVar1) {
        FUN_00a33520(1,0x300,1);
        *(undefined4 *)(param_1 + 0x124) = 1;
      }
    }
  }
  iVar3 = FUN_00c81e00(0x3c);
  if ((iVar3 != 0) && (iVar3 = FUN_00c19110(5), iVar3 != 0)) {
    FUN_00c81e40(0x3c);
  }
  return;
}

// 00D70300  P330::vf00  size=54  [class]
undefined4 * __thiscall P330::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

