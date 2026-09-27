// src/phase/app/p750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4ABC0..00D70610, 7 functions

#include "mgrr.h"
#include "cP750.h"

// 00D4ABC0  cP750::vf08  size=15  [class]
void __fastcall cP750::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

// 00D4ABD0  cP750::vf0C  size=1  [class]
void cP750::vf0C(void)

{
  return;
}

// 00D4ABE0  cP750::vf18  size=1  [class]
void cP750::vf18(void)

{
  return;
}

// 00D4ABF0  cP750::vf1C  size=3  [class]
void cP750::vf1C(void)

{
  return;
}

// 00D55400  cP750::vf10  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cP750::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0xfffffb9f;
  FUN_00e51db0(&DAT_01dc5248,1);
  FUN_00de3540(0,0);
  if (DAT_01dc5250 != 0) {
    FUN_00e9d6a0(DAT_01dc5250);
    DAT_01dc5250 = 0;
  }
  _DAT_01dc5254 = 0;
  return;
}

// 00D647D0  cP750::vf14  size=309  [__FILE__]
void __fastcall cP750::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00e03ea0("P750_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("P750_ARMSTRONG");
    if (DAT_018b9178 != iVar1) goto LAB_00d64861;
  }
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x58))(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x58))(iVar1);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar3 = FUN_00d57c90(&LAB_00d5c920,0,0,
                       "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p750.cpp",0x5f);
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  DAT_01bea094 = DAT_01bea094 | 0x40;
LAB_00d64861:
  FUN_00e03ea0("P750_BOSS");
  iVar1 = FUN_00e03ea0("P750_QTE");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x124);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x124) = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    uVar3 = FUN_00d57c90(&LAB_00d5ca10,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p750.cpp",0x6a);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    DAT_01bea094 = DAT_01bea094 | 0x40;
  }
  iVar1 = FUN_00e03ea0("P750_EVENT");
  if (DAT_018b9178 == iVar1) {
    FUN_009c6930();
  }
  return;
}

// 00D70610  cP750::vf00  size=54  [class]
undefined4 * __thiscall cP750::vf00(undefined4 *param_1,byte param_2)

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

