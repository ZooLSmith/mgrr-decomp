// src/phase/app/p730.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AAE0..00D70590, 7 functions

#include "types.h"

// 00D4AAE0  cP730::vf0C  size=1  [class]
void cP730::vf0C(void)

{
  return;
}

// 00D4AAF0  cP730::vf18  size=1  [class]
void cP730::vf18(void)

{
  return;
}

// 00D4AB00  cP730::vf1C  size=3  [class]
void cP730::vf1C(void)

{
  return;
}

// 00D55310  cP730::vf10  size=92  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cP730::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0xfffffbbf;
  if (DAT_018b91a0 != 0x740) {
    FUN_00e51db0(&DAT_01dc5248,1);
    FUN_00de3540(0,0);
    if (DAT_01dc5250 != 0) {
      FUN_00e9d6a0(DAT_01dc5250);
      DAT_01dc5250 = 0;
    }
    _DAT_01dc5254 = 0;
  }
  return;
}

// 00D68E10  cP730::vf08  size=15  [class]
void __fastcall cP730::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x124) = 0;
  FUN_00d64440();
  return;
}

// 00D68E20  cP730::vf14  size=137  [__FILE__]
void __fastcall cP730::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00e03ea0("P730_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("P730_ARMSTRONG");
    if (DAT_018b9178 != iVar1) goto LAB_00d68e98;
  }
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x58))(iVar1);
  }
  DAT_01bea094 = DAT_01bea094 | 0x40;
  uVar3 = FUN_00d57a70(FUN_00d64300,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p730.cpp"
                       ,0x6a);
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  FUN_009c4b00(4);
LAB_00d68e98:
  FUN_00e03ea0("P730_BOSS");
  return;
}

// 00D70590  cP730::vf00  size=54  [class]
undefined4 * __thiscall cP730::vf00(undefined4 *param_1,byte param_2)

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

