// src/misc/esp07.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD380..00F2F020, 4 functions

#include "mgrr.h"
#include "esp07.h"

// 00ECD380  esp07::esp07  size=18  [class]
undefined4 * __fastcall esp07::esp07(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0820  esp07::vf00  size=30  [class]
undefined4 __thiscall esp07::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F148F0  esp07::vf08  size=16  [class]
void esp07::vf08(void)

{
  undefined1 local_c [12];
  
  FUN_00f0dd70(local_c);
  return;
}

// 00F2F020  esp07::vf04  size=675  [class]
undefined4 __thiscall
esp07::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_14;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
      psVar2 = (short *)*puVar4;
      if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
        uVar5 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (psVar2 != (short *)0x0) {
        *(float *)(param_1 + 0x480) = (float)(int)*psVar2;
        *(float *)(param_1 + 0x484) = (float)(int)psVar2[1];
        *(float *)(param_1 + 0x488) =
             *(float *)(param_1 + 0x484) +
             *(float *)(param_1 + 0x484) * ((float)(int)psVar2[2] / 100.0);
        *(float *)(param_1 + 0x48c) = 1.0 - (float)(int)psVar2[3] / 100.0;
        sVar1 = psVar2[4];
        if (sVar1 != 0) {
          FUN_009cca90(param_1,&DAT_016daf50);
        }
        *(float *)(param_1 + 0x494) = (float)(int)sVar1 / 10.0;
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (undefined4 *)0x0)) {
      puVar4 = (undefined4 *)*puVar4;
      if ((undefined4 *)((int)puVar4 + 0xfU & 0xfffffff0) != puVar4) {
        uVar5 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x460) = *puVar4;
        *(undefined4 *)(param_1 + 0x464) = puVar4[1];
        *(undefined4 *)(param_1 + 0x468) = puVar4[2];
        *(undefined4 *)(param_1 + 0x46c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x470) = puVar4[3];
        *(undefined4 *)(param_1 + 0x474) = puVar4[4];
        *(undefined4 *)(param_1 + 0x478) = puVar4[5];
        *(undefined4 *)(param_1 + 0x47c) = 0x3f800000;
      }
    }
    fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x484),*(undefined4 *)(param_1 + 0x484));
    fVar7 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x488));
    fVar8 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x484),*(undefined4 *)(param_1 + 0x484));
    *(float *)(param_1 + 0x180) = (float)fVar6;
    *(float *)(param_1 + 0x184) = (float)fVar7;
    *(float *)(param_1 + 0x188) = (float)fVar8;
    *(undefined4 *)(param_1 + 0x18c) = local_14;
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x25c);
    if (*(float *)(param_1 + 0x48c) <= 100.0) {
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016daf80);
  }
  return 0;
}

