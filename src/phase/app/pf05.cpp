// src/phase/app/pf05.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D473B0..00D6FD40, 4 functions

#include "types.h"

// 00D473B0  cPf05::vf0C  size=273  [class]
void __fastcall cPf05::vf0C(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    iVar1 = FUN_00eb4340(DAT_01be8e4c);
    if (iVar1 == 0) goto LAB_00d4745d;
    iVar1 = FUN_009b20f0();
    *(int *)(param_1 + 0x120) = iVar1;
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016bc4e0);
      *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
      goto LAB_00d4745d;
    }
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x124);
  }
  else {
    if ((*(int *)(param_1 + 0x128) != 1) || (*(char *)(*(int *)(param_1 + 0x120) + 0x44) != '\n'))
    goto LAB_00d4745d;
    FUN_00cad0c0();
    if (DAT_018b9148 == 0xf01) {
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
    }
    else {
      FUN_00a4d650();
    }
  }
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
LAB_00d4745d:
  iVar1 = *(int *)(param_1 + 0x120);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0x44))) {
    iVar2 = 4;
    if (1 < *(int *)(iVar1 + 0x48) - 1U) {
      iVar2 = 3;
    }
    if (*(int *)(param_1 + 0x130) != iVar2) {
      FUN_00a28980(iVar2,0x3f800000);
      *(int *)(param_1 + 0x130) = iVar2;
    }
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_009b2110();
  }
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d474be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
    return;
  }
  return;
}

// 00D50600  cPf05::vf08  size=465  [class]
void __fastcall cPf05::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar2 = FUN_00a7f600(0x79000);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
  }
  DAT_01bea088 = DAT_01bea088 | 0x200000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_00c16770(0);
  iVar2 = FUN_009891c0();
  *(int *)(param_1 + 0x124) = iVar2;
  if (iVar2 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    iVar2 = FUN_009c45b0();
    if (iVar2 == 0) {
      iVar2 = FUN_009c51b0(7,0xffffffff);
      if (iVar2 != 0) {
        iVar3 = 7;
        uVar4 = 1;
      }
    }
    else {
      iVar3 = FUN_009c5530(&DAT_01b6efe0);
      uVar4 = FUN_009c4bf0();
      uVar4 = FUN_009c51b0(iVar3,uVar4);
      if (7 < iVar3) {
        iVar3 = -1;
        piVar1 = &DAT_01b6f7f4;
        do {
          if ((piVar1[-0xf0] != 0) && (iVar3 < 1)) {
            iVar3 = 0;
          }
          if ((*piVar1 != 0) && (iVar3 < 2)) {
            iVar3 = 1;
          }
          if ((piVar1[0xf0] != 0) && (iVar3 < 3)) {
            iVar3 = 2;
          }
          if ((piVar1[0x1e0] != 0) && (iVar3 < 4)) {
            iVar3 = 3;
          }
          if ((piVar1[0x2d0] != 0) && (iVar3 < 5)) {
            iVar3 = 4;
          }
          if ((piVar1[0x3c0] != 0) && (iVar3 < 6)) {
            iVar3 = 5;
          }
          if ((piVar1[0x4b0] != 0) && (iVar3 < 7)) {
            iVar3 = 6;
          }
          if ((piVar1[0x5a0] != 0) && (iVar3 < 8)) {
            iVar3 = 7;
          }
          piVar1 = piVar1 + 0x30;
        } while ((int)piVar1 < 0x1b6fbb4);
        if (iVar3 < 0) {
          iVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
    }
    FUN_00989270(iVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_00a28980(3,0x3f800000);
  *(undefined4 *)(param_1 + 0x130) = 3;
  return;
}

// 00D507E0  cPf05::vf10  size=106  [class]
void __fastcall cPf05::vf10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    FUN_0098f460();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea088 = DAT_01bea088 & 0xffdfffff;
  FUN_00a28980(0xffffffff,0x3f800000);
  return;
}

// 00D6FD40  cPf05::vf00  size=54  [class]
undefined4 * __thiscall cPf05::vf00(undefined4 *param_1,byte param_2)

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

