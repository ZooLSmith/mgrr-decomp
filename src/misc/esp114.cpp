// src/misc/esp114.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D00D0..009DF570, 5 functions

#include "mgrr.h"
#include "esp114.h"

// 009D00D0  esp114::addOtTransList  size=1  [class]
void esp114::addOtTransList(void)

{
  return;
}

// 009D4350  esp114::esp114  size=18  [class]
undefined4 * __fastcall esp114::esp114(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009D94E0  esp114::preTrans  size=226  [class]
undefined4 __thiscall
esp114::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x450) = (int)*psVar1;
        *(int *)(param_1 + 0x454) = (int)psVar1[1];
        *(int *)(param_1 + 0x45c) = (int)(char)psVar1[8];
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
      puVar3 = (undefined4 *)*puVar3;
      if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x458) = *puVar3;
      }
    }
    if ((((0.0 <= *(float *)(param_1 + 0x458)) && (-1 < *(int *)(param_1 + 0x454))) &&
        (-1 < *(int *)(param_1 + 0x450))) && (*(int *)(param_1 + 0x450) < 3)) {
      return 1;
    }
  }
  return 0;
}

// 009D95D0  esp114::vf08  size=170  [class]
void __fastcall esp114::vf08(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  
  esp39::vf08();
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar4 = FUN_009d58f0(param_1);
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
  }
  if (*(float *)(param_1 + 0x458) <= 0.0) {
    FUN_009cf120(*(undefined4 *)(param_1 + 0x450),*(undefined4 *)(param_1 + 0x454));
    return;
  }
  pfVar5 = (float *)FUN_00e9fe70();
  fVar1 = *pfVar5 - *(float *)(param_1 + 400);
  fVar3 = pfVar5[1] - *(float *)(param_1 + 0x194);
  fVar2 = pfVar5[2] - *(float *)(param_1 + 0x198);
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar1 < *(float *)(param_1 + 0x458) != (fVar1 == *(float *)(param_1 + 0x458))) {
    FUN_009cf120(*(undefined4 *)(param_1 + 0x450),*(undefined4 *)(param_1 + 0x454));
  }
  return;
}

// 009DF570  esp114::vf00  size=30  [class]
undefined4 __thiscall esp114::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

