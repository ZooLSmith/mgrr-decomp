// src/phase/app/p380.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48C40..00D70420, 7 functions

#include "mgrr.h"
#include "cP380.h"

// 00D48C40  cP380::vf08  size=157  [class]
void cP380::vf08(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(1,"r30b_gate_col");
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(1,"r30b_gate_col1");
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x20))("r30b_gate",0x30b);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x1c))();
  }
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x20))("floor_after",0x30b);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
  }
  iVar2 = FUN_009968d0(4);
  if (iVar2 != 0) {
    FUN_00c81e40(0x41);
  }
  return;
}

// 00D48CE0  cP380::vf0C  size=39  [class]
void cP380::vf0C(void)

{
  int iVar1;
  
  iVar1 = FUN_009968d0(4);
  if (iVar1 == 0) {
    iVar1 = FUN_00c81da0(0x41);
    if (iVar1 != 0) {
      FUN_00996910(4);
    }
  }
  return;
}

// 00D48D10  cP380::vf18  size=1  [class]
void cP380::vf18(void)

{
  return;
}

// 00D48D20  cP380::vf1C  size=3  [class]
void cP380::vf1C(void)

{
  return;
}

// 00D53FE0  cP380::vf10  size=31  [class]
void cP380::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0xfffff7bf;
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  return;
}

// 00D67F90  cP380::vf14  size=276  [__FILE__]
void cP380::vf14(void)

{
  int iVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xfffff7ff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  iVar1 = FUN_00e03ea0("P380_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("P380_MONSOON");
    if (DAT_018b9178 != iVar1) goto LAB_00d6800b;
  }
  FUN_00d57850(FUN_00d5ad80,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\App/p380.cpp",0x81);
  DAT_01bea094 = DAT_01bea094 | 0x840;
  DAT_01bea060 = DAT_01bea060 | 0x100000;
  FUN_009c4b00(1);
LAB_00d6800b:
  iVar1 = FUN_00e03ea0("P380_BOSS");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea094 = DAT_01bea094 | 0x800;
    DAT_01bea060 = DAT_01bea060 | 0x100000;
  }
  iVar1 = FUN_00e03ea0("P380_FINISH_QTE");
  if (DAT_018b9178 == iVar1) {
    FUN_00d57850(FUN_00d623f0,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\App/p380.cpp",0x96)
    ;
    DAT_01bea094 = DAT_01bea094 | 0x840;
    DAT_01bea060 = DAT_01bea060 | 0x100000;
  }
  iVar1 = FUN_00e03ea0("P380_MON_RESULT");
  if (DAT_018b9178 == iVar1) {
    FUN_009c6930();
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  return;
}

// 00D70420  cP380::vf00  size=54  [class]
undefined4 * __thiscall cP380::vf00(undefined4 *param_1,byte param_2)

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

