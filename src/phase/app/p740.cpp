// src/phase/app/p740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AB50..00D705D0, 7 functions

#include "mgrr.h"
#include "cP740.h"

// 00D4AB50  cP740::vf0C  size=1  [class]
void cP740::vf0C(void)

{
  return;
}

// 00D4AB60  cP740::vf18  size=1  [class]
void cP740::vf18(void)

{
  return;
}

// 00D4AB70  cP740::vf1C  size=3  [class]
void cP740::vf1C(void)

{
  return;
}

// 00D55370  cP740::vf10  size=130  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cP740::vf10(void)

{
  int iVar1;
  int *piVar2;
  
  DAT_01bea094 = DAT_01bea094 & 0xfffffb3f;
  iVar1 = FUN_009c4bf0();
  if (iVar1 < 3) {
    DAT_01bea094 = DAT_01bea094 & 0xfffffff7;
  }
  if (DAT_018b91a0 != 0x750) {
    FUN_00e51db0(&DAT_01dc5248,1);
    FUN_00de3540(0,0);
    if (DAT_01dc5250 != 0) {
      FUN_00e9d6a0(DAT_01dc5250);
      DAT_01dc5250 = 0;
    }
    _DAT_01dc5254 = 0;
  }
  piVar2 = (int *)FUN_00c13920();
                    /* WARNING: Could not recover jumptable at 0x00d553f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x84))();
  return;
}

// 00D68EB0  cP740::vf08  size=47  [class]
void __fastcall cP740::vf08(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  iVar1 = FUN_009c4bf0();
  if (iVar1 < 3) {
    DAT_01bea094 = DAT_01bea094 | 8;
  }
  FUN_00d646c0();
  return;
}

// 00D68EE0  cP740::vf14  size=284  [__FILE__]
void __fastcall cP740::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00e03ea0("P740_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("P740_ARMSTRONG");
    if (DAT_018b9178 != iVar1) goto LAB_00d68f74;
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
  uVar3 = FUN_00d57b80(FUN_00d64550,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p740.cpp"
                       ,0x6e);
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  DAT_01bea094 = DAT_01bea094 | 0xc0;
LAB_00d68f74:
  FUN_00e03ea0("P740_BOSS");
  iVar1 = FUN_00e03ea0("P740_QTE");
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
    uVar3 = FUN_00d57b80(FUN_00d5c720,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p740.cpp",0x7b);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    DAT_01bea094 = DAT_01bea094 | 0xc0;
  }
  return;
}

// 00D705D0  cP740::vf00  size=54  [class]
undefined4 * __thiscall cP740::vf00(undefined4 *param_1,byte param_2)

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

