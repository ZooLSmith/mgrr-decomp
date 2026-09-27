// src/misc/esp104.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFE70..009F6AA0, 5 functions

#include "mgrr.h"
#include "esp104.h"

// 009CFE70  esp104::vf10  size=1  [class]
void esp104::vf10(void)

{
  return;
}

// 009D4230  esp104::esp104  size=29  [class]
undefined4 * __fastcall esp104::esp104(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 009D86D0  esp104::vf04  size=446  [class]
undefined4 __thiscall
esp104::vf04(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = 0x10;
  if (*(int *)(param_1 + 0x50) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x450);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0x450);
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x50) + 0x10);
    puVar9 = puVar5;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    D3DXMatrixMultiply(puVar5,param_3,puVar5);
  }
  *(undefined4 *)(param_1 + 0x49c) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar5;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (psVar2 != (short *)0x0) {
      *(int *)(param_1 + 0x494) = (int)*psVar2;
      sVar1 = psVar2[3];
      if (sVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4a8) = 0;
      }
      else if (sVar1 == 1) {
        *(undefined4 *)(param_1 + 0x4a8) = 1;
      }
      else {
        if (sVar1 != 2) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x4a8) = 2;
      }
      if (psVar2[4] == 1) {
        *(undefined4 *)(param_1 + 0x498) = 1;
      }
      else if (psVar2[4] == 2) {
        *(undefined4 *)(param_1 + 0x498) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x498) = 0;
      }
      switch(*(undefined1 *)((int)psVar2 + 0x11)) {
      case 0:
        *(undefined4 *)(param_1 + 0x49c) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x49c) = 1;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x49c) = 2;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x49c) = 3;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x49c) = 4;
      }
      if ((char)psVar2[8] != '\0') {
        *(undefined4 *)(param_1 + 0x4a4) = 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x490) = 0x42480000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar7 != (uint *)0x0)) {
    uVar3 = *puVar7;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if ((uVar3 != 0) && (1e-06 < *(float *)(uVar3 + 0x38))) {
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(uVar3 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfbffffff;
  FUN_00a7c960(param_1 + 0x8c);
  return 1;
}

// 009DF420  esp104::vf00  size=30  [class]
undefined4 __thiscall esp104::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F6AA0  esp104::vf08  size=38  [class]
void __fastcall esp104::vf08(int param_1)

{
  esp39::vf08();
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4a8) != 0) {
    FUN_009f4ba0();
    return;
  }
  FUN_009f3f30();
  return;
}

