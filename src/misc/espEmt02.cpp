// src/misc/espEmt02.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1C90..00F0A410, 4 functions

#include "mgrr.h"
#include "espEmt02.h"

// 00ED1C90  espEmt02::espEmt02  size=28  [class]
undefined4 * __fastcall espEmt02::espEmt02(undefined4 *param_1)

{
  cEspBase::cEspBase_8();
  param_1[0x148] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00ED1DB0  espEmt02::vf00  size=30  [class]
undefined4 __thiscall espEmt02::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDAD00  espEmt02::vf1C  size=150  [class]
void __thiscall
espEmt02::vf1C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  fVar2 = (float)param_5;
  if (param_5 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar1 = *(int *)(param_1 + 0x550);
  fVar2 = fVar2 * *(float *)(param_1 + 0x554);
  fVar3 = fVar2;
  fVar4 = local_18;
  if (((iVar1 != 0) && (fVar3 = local_1c, fVar4 = fVar2, iVar1 != 1)) &&
     (fVar4 = local_18, iVar1 == 2)) {
    local_20 = fVar2;
  }
  local_18 = fVar4;
  local_1c = fVar3;
  D3DXMatrixTranslation(param_2,local_20,local_1c,local_18);
  D3DXMatrixMultiply(param_2,param_2,param_3);
  return;
}

// 00F0A410  espEmt02::vf04  size=195  [class]
undefined4 __thiscall
espEmt02::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = espEmt00::vf04(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0xe0), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(0xe);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x550) = (int)*psVar1;
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0xd0), puVar3 != (undefined4 *)0x0)) {
      puVar3 = (undefined4 *)*puVar3;
      if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
        uVar4 = FUN_00f59ed0(0xd);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x554) = *puVar3;
      }
    }
    if (*(uint *)(param_1 + 0x550) < 4) {
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd730,*(uint *)(param_1 + 0x550));
  }
  return 0;
}

