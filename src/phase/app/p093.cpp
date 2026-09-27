// src/phase/app/p093.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46B50..00D6FFA0, 5 functions

#include "mgrr.h"
#include "cP093.h"

// 00D46B50  cP093::vf08  size=1  [class]
void cP093::vf08(void)

{
  return;
}

// 00D46B60  cP093::vf0C  size=1  [class]
void cP093::vf0C(void)

{
  return;
}

// 00D46B70  cP093::vf10  size=1  [class]
void cP093::vf10(void)

{
  return;
}

// 00D5EDF0  cP093::vf34  size=90  [__FILE__]
undefined4 cP093::vf34(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = "TimerTask";
  do {
    bVar1 = *param_1;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_00d5ee20:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d5ee25;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) goto LAB_00d5ee20;
    param_1 = param_1 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d5ee25:
  if (iVar2 == 0) {
    FUN_00d57360(&LAB_00d591a0,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\App/p093.cpp",0x35
                );
    return 1;
  }
  return 0;
}

// 00D6FFA0  cP093::vf00  size=54  [class]
undefined4 * __thiscall cP093::vf00(undefined4 *param_1,byte param_2)

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

