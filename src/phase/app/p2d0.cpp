// src/phase/app/p2d0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47FB0..00D702C0, 7 functions

#include "types.h"

// 00D47FB0  cP2d0::vf08  size=65  [class]
void __fastcall cP2d0::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x20))("kgk_pl",0x204);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d47fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  return;
}

// 00D48000  cP2d0::vf0C  size=1  [class]
void cP2d0::vf0C(void)

{
  return;
}

// 00D48010  cP2d0::vf10  size=1  [class]
void cP2d0::vf10(void)

{
  return;
}

// 00D48020  cP2d0::vf18  size=1  [class]
void cP2d0::vf18(void)

{
  return;
}

// 00D48030  cP2d0::vf1C  size=3  [class]
void cP2d0::vf1C(void)

{
  return;
}

// 00D61A50  cP2d0::vf14  size=408  [__FILE__]
void __fastcall cP2d0::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00c81e90(0x16);
  FUN_00c81e90(0x17);
  iVar1 = FUN_00e03ea0("P2D0_BOX_START");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x124);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x128);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57710(&LAB_00d5a5e0,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p2d0.cpp",0x62);
    *(undefined4 *)(param_1 + 0x120) = uVar3;
  }
  iVar1 = FUN_00e03ea0("P2D0_EVENT");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x124);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x128);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57710(&LAB_00d5a670,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p2d0.cpp",0x6a);
    *(undefined4 *)(param_1 + 0x124) = uVar3;
  }
  iVar1 = FUN_00e03ea0("P2D0_ROBO_START");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x124);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x128);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57710(FUN_00d5a780,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p2d0.cpp",0x72);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
  }
  return;
}

// 00D702C0  cP2d0::vf00  size=54  [class]
undefined4 * __thiscall cP2d0::vf00(undefined4 *param_1,byte param_2)

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

