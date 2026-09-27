// src/phase/app/dlc/pc30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B590..00D708E0, 7 functions

#include "mgrr.h"
#include "cPc30.h"

// 00D4B590  cPc30::vf08  size=64  [class]
void __fastcall cPc30::vf08(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  iVar1 = FUN_0094e9c0(0x3855170f,8);
  if (iVar1 != 0) {
    FUN_00c82240(0x15);
    FUN_00c82240(0x16);
  }
  return;
}

// 00D4B5D0  cPc30::vf0C  size=1  [class]
void cPc30::vf0C(void)

{
  return;
}

// 00D4B5E0  cPc30::vf18  size=1  [class]
void cPc30::vf18(void)

{
  return;
}

// 00D4B5F0  cPc30::vf1C  size=3  [class]
void cPc30::vf1C(void)

{
  return;
}

// 00D56420  cPc30::vf10  size=43  [class]
void cPc30::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0xfffff7bf;
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  FUN_00c1bdb0(0);
  return;
}

// 00D69610  cPc30::vf14  size=357  [__FILE__]
void cPc30::vf14(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(0,"ray_pl_col");
  iVar2 = FUN_00e03ea0("PC30_START");
  if (DAT_018b9178 != iVar2) {
    iVar2 = FUN_00e03ea0("PC30_RAY");
    if (DAT_018b9178 != iVar2) goto LAB_00d69681;
  }
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(1,"ray_pl_col");
  FUN_00d57dc0(&LAB_00d5d330,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc30.cpp",
               0x93);
LAB_00d69681:
  iVar2 = FUN_00e03ea0("PC30_RAY_HEAD");
  if (DAT_018b9178 == iVar2) {
    FUN_00d57dc0(FUN_00d64bb0,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc30.cpp"
                 ,0x9a);
  }
  iVar2 = FUN_00e03ea0("PC30_RAY_DEAD");
  if (DAT_018b9178 == iVar2) {
    FUN_00d57dc0(FUN_00d64dc0,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc30.cpp"
                 ,0x9f);
  }
  iVar2 = FUN_00e03ea0("PC30_RAY_RESULT");
  if (DAT_018b9178 == iVar2) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  pcVar5 = "PC30_RAY";
  uVar4 = 1;
  uVar3 = FUN_00e03ea0("PC30_RAY",1,"PC30_RAY");
  iVar2 = FUN_00d4f0b0(uVar3,uVar4,pcVar5);
  if (iVar2 != 0) {
    pcVar5 = "PC30_RAY_DEAD";
    uVar4 = 0;
    uVar3 = FUN_00e03ea0("PC30_RAY_DEAD",0,"PC30_RAY_DEAD");
    iVar2 = FUN_00d4f0b0(uVar3,uVar4,pcVar5);
    if (iVar2 == 0) {
      FUN_00c1bdb0(1);
    }
  }
  iVar2 = FUN_00e03ea0("PC30_RAY_RESULT");
  if (DAT_018b9178 == iVar2) {
    FUN_00c1bdb0(0);
  }
  return;
}

// 00D708E0  cPc30::vf00  size=54  [class]
undefined4 * __thiscall cPc30::vf00(undefined4 *param_1,byte param_2)

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

