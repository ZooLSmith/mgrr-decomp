// src/phase/app/pa10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D477F0..00D6FFE0, 8 functions

#include "mgrr.h"
#include "Pa10.h"

// 00D477F0  Pa10::vf14  size=3  [class]
void Pa10::vf14(void)

{
  return;
}

// 00D47800  Pa10::vf18  size=1  [class]
void Pa10::vf18(void)

{
  return;
}

// 00D47810  Pa10::vf1C  size=3  [class]
void Pa10::vf1C(void)

{
  return;
}

// 00D47820  Pa10::vf0C  size=1  [class]
void Pa10::vf0C(void)

{
  return;
}

// 00D514A0  Pa10::vf08  size=53  [class]
void Pa10::vf08(void)

{
  int iVar1;
  int *piVar2;
  
  DAT_01bea094 = DAT_01bea094 | 0x81000000;
  EffectAreaScrSystem::SetEffectAreaEnable(0xa00,0x14,0);
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    (**(code **)(*piVar2 + 0x30))(0);
  }
  return;
}

// 00D514E0  Pa10::vf10  size=11  [class]
void Pa10::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0x7effffff;
  return;
}

// 00D60470  Pa10::vf34  size=90  [__FILE__]
undefined4 Pa10::vf34(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = "moviePlay";
  do {
    bVar1 = *param_1;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_00d604a0:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d604a5;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) goto LAB_00d604a0;
    param_1 = param_1 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d604a5:
  if (iVar2 == 0) {
    FUN_00d5dc50(&LAB_00d59270,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa10.cpp",0x4f
                );
    return 1;
  }
  return 0;
}

// 00D6FFE0  Pa10::vf00  size=54  [class]
undefined4 * __thiscall Pa10::vf00(undefined4 *param_1,byte param_2)

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

