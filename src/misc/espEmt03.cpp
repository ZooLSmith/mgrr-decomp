// src/misc/espEmt03.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1CC0..00F0A4E0, 4 functions

#include "mgrr.h"
#include "espEmt03.h"

// 00ED1CC0  espEmt03::espEmt03  size=28  [class]
undefined4 * __fastcall espEmt03::espEmt03(undefined4 *param_1)

{
  cEspBase::cEspBase_8();
  param_1[0x148] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00ED1DD0  espEmt03::vf00  size=30  [class]
undefined4 __thiscall espEmt03::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDADA0  espEmt03::vf20  size=153  [class]
void __thiscall espEmt03::vf20(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)param_4;
  if (param_4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar2 = (float)param_3;
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (fVar3 * *(float *)(param_1 + 0x554)) / fVar2 + *(float *)(param_1 + 0x558);
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == 0) {
    *(float *)(param_2 + 0x1b0) = *(float *)(param_2 + 0x1b0) + fVar3;
    return;
  }
  if (iVar1 == 1) {
    *(float *)(param_2 + 0x1b4) = *(float *)(param_2 + 0x1b4) + fVar3;
    return;
  }
  if (iVar1 == 2) {
    *(float *)(param_2 + 0x1b8) = *(float *)(param_2 + 0x1b8) + fVar3;
  }
  return;
}

// 00F0A4E0  espEmt03::vf04  size=321  [class]
undefined4 __thiscall
espEmt03::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar3 = espEmt00::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x554) = 0x40c90fdb;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0xe0), puVar4 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar4;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar5 = FUN_00f59ed0(0xe);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x550) = (int)*psVar1;
        if (psVar1[1] != 0) {
          *(float *)(param_1 + 0x554) = ((float)(int)psVar1[1] * 2.0 * 3.1415927) / 360.0;
        }
        *(float *)(param_1 + 0x558) = ((float)(int)psVar1[2] * 2.0 * 3.1415927) / 360.0;
        if (psVar1[3] != 0) {
          fVar2 = ((float)(int)psVar1[3] * 2.0 * 3.1415927) / 360.0;
          fVar6 = (float10)FUN_00dde300(-fVar2,fVar2);
          *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x558) + (float)fVar6;
        }
      }
    }
    if (*(uint *)(param_1 + 0x550) < 3) {
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd748,*(uint *)(param_1 + 0x550));
  }
  return 0;
}

