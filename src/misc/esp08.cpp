// src/misc/esp08.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD3A0..00F2F2D0, 5 functions

#include "mgrr.h"
#include "esp08.h"

// 00ECD3A0  esp08::esp08  size=18  [class]
undefined4 * __fastcall esp08::esp08(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0840  esp08::vf00  size=30  [class]
undefined4 __thiscall esp08::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED7E10  esp08::vf10  size=1  [class]
void esp08::vf10(void)

{
  return;
}

// 00F14900  esp08::vf08  size=84  [class]
void __fastcall esp08::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  iVar2 = FUN_009d5b00(param_1);
  if (iVar2 != 0) {
    FUN_00f00ad0();
    return;
  }
  return;
}

// 00F2F2D0  esp08::vf04  size=629  [class]
undefined4 __thiscall esp08::vf04(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0x460) = 0x1f;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar5;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar6 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x450) = (int)*psVar1;
        *(int *)(param_1 + 0x458) = (int)psVar1[1];
        *(int *)(param_1 + 0x45c) = (int)psVar1[2];
        *(int *)(param_1 + 0x454) = (int)psVar1[3];
        *(int *)(param_1 + 0x478) = (int)psVar1[4];
      }
    }
    *(undefined4 *)(param_1 + 0x464) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x468) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x47c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x480) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x484) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x488) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (undefined4 *)0x0)) {
      pfVar2 = (float *)*puVar5;
      if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
        uVar6 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (pfVar2 != (float *)0x0) {
        if (*pfVar2 != 0.0) {
          *(float *)(param_1 + 0x464) = *pfVar2;
        }
        if (pfVar2[1] != 0.0) {
          *(float *)(param_1 + 0x468) = pfVar2[1];
        }
        if (pfVar2[2] != 0.0) {
          *(float *)(param_1 + 0x474) = pfVar2[2];
        }
        param_4 = pfVar2[9] + 1.0;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x47c) = param_4;
        param_4 = pfVar2[10] + 1.0;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x480) = param_4;
        param_4 = pfVar2[0xb] + 1.0;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x484) = param_4;
        param_4 = pfVar2[0xc] + 1.0;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x488) = param_4;
        param_4 = pfVar2[0xd] + 1.0;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x48c) = param_4;
        fVar3 = pfVar2[0xe] + 1.0;
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        *(float *)(param_1 + 0x490) = fVar3;
      }
    }
    return 1;
  }
  return 0;
}

