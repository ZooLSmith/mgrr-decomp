// src/misc/esp160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0B70..009DF690, 5 functions

#include "types.h"

// 009D0B70  esp160::vf08  size=1  [class]
void esp160::vf08(void)

{
  return;
}

// 009D0B80  esp160::vf10  size=1  [class]
void esp160::vf10(void)

{
  return;
}

// 009D4470  esp160::esp160  size=18  [class]
undefined4 * __fastcall esp160::esp160(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DAA00  esp160::vf04  size=623  [class]
/* WARNING: Removing unreachable block (ram,0x009dabe5) */

undefined4 __thiscall
esp160::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x458) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x46c) = 0x459c4000;
    *(undefined4 *)(param_1 + 0x470) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x47c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar5;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar6 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      fVar2 = 0.0;
      if (psVar1 != (short *)0x0) {
        fVar3 = (float)(int)*psVar1;
        *(float *)(param_1 + 0x480) = fVar3;
        if (fVar3 != 0.0) {
          fVar2 = 1.0 / fVar3;
        }
        *(float *)(param_1 + 0x484) = fVar2;
        *(float *)(param_1 + 0x488) = (float)((int)psVar1[1] + (int)*psVar1);
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (undefined4 *)0x0)) {
      puVar5 = (undefined4 *)*puVar5;
      if ((undefined4 *)((int)puVar5 + 0xfU & 0xfffffff0) != puVar5) {
        uVar6 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x450) = *puVar5;
        *(undefined4 *)(param_1 + 0x454) = puVar5[1];
        *(undefined4 *)(param_1 + 0x458) = puVar5[2];
        *(undefined4 *)(param_1 + 0x45c) = puVar5[3];
        *(undefined4 *)(param_1 + 0x460) = puVar5[4];
        *(undefined4 *)(param_1 + 0x464) = puVar5[5];
        *(undefined4 *)(param_1 + 0x468) = puVar5[6];
        *(undefined4 *)(param_1 + 0x46c) = puVar5[7];
        if ((float)puVar5[8] != 0.0) {
          *(undefined4 *)(param_1 + 0x470) = puVar5[8];
        }
        uVar7 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar7;
        fVar2 = (float)(uVar7 >> 8) * 5.960465e-08;
        *(float *)(param_1 + 0x478) = (1.0 - (fVar2 + fVar2)) * (float)puVar5[10] + (float)puVar5[9]
        ;
        if (((float)puVar5[0xb] != 0.0) || ((float)puVar5[0xc] != 0.0)) {
          fVar8 = (float10)FUN_00dde300(0,0x3f800000);
          *(float *)(param_1 + 0x47c) =
               (float)((float10)(float)puVar5[0xb] - fVar8 * (float10)(float)puVar5[0xc]);
        }
      }
    }
    uVar6 = 0;
    if (*(float *)(param_1 + 0x480) <= 0.0) {
      uVar6 = *(undefined4 *)(param_1 + 0x478);
    }
    *(undefined4 *)(param_1 + 0x474) = uVar6;
    *(undefined4 *)(param_1 + 0x48c) = 0;
    return 1;
  }
  return 0;
}

// 009DF690  esp160::vf00  size=30  [class]
undefined4 __thiscall esp160::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

