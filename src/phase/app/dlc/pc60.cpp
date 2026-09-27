// src/phase/app/dlc/pc60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B8C0..00D709A0, 7 functions

#include "mgrr.h"
#include "cPc60.h"

// 00D4B8C0  cPc60::vf08  size=15  [class]
void __fastcall cPc60::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  return;
}

// 00D4B8D0  cPc60::vf0C  size=1  [class]
void cPc60::vf0C(void)

{
  return;
}

// 00D4B8E0  cPc60::vf18  size=1  [class]
void cPc60::vf18(void)

{
  return;
}

// 00D4B8F0  cPc60::vf1C  size=3  [class]
void cPc60::vf1C(void)

{
  return;
}

// 00D566B0  cPc60::vf10  size=39  [class]
void cPc60::vf10(void)

{
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  DAT_01bea094 = DAT_01bea094 & 0xfffff79f;
  return;
}

// 00D69780  cPc60::vf14  size=213  [__FILE__]
void cPc60::vf14(void)

{
  int iVar1;
  
  iVar1 = FUN_00e03ea0("PC60_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("PC60_ARMSTRONG");
    if (DAT_018b9178 != iVar1) goto LAB_00d697d0;
  }
  FUN_00d57f10(&LAB_00d5d440,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc60.cpp",
               0x51);
  FUN_009c4b00(5);
LAB_00d697d0:
  iVar1 = FUN_00e03ea0("PC60_ARMSTRONG2");
  if (DAT_018b9178 == iVar1) {
    FUN_00d57f10(&LAB_00d5d510,0,0,
                 "d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc60.cpp",0x57);
  }
  iVar1 = FUN_00e03ea0("PC60_QTE");
  if (DAT_018b9178 == iVar1) {
    FUN_00d57f10(FUN_00d64fd0,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app\\dlc\\pc60.cpp"
                 ,0x5c);
  }
  iVar1 = FUN_00e03ea0("PC60_ARM_RESULT");
  if (DAT_018b9178 == iVar1) {
    FUN_009c6930();
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  return;
}

// 00D709A0  cPc60::vf00  size=54  [class]
undefined4 * __thiscall cPc60::vf00(undefined4 *param_1,byte param_2)

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

