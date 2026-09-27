// src/misc/esp25.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8820..00F408B0, 6 functions

#include "mgrr.h"
#include "esp25.h"

// 00ED8820  esp25::vf14  size=35  [class]
void __fastcall esp25::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x454) == 1) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x458),0x40400000);
  }
  return;
}

// 00ED8850  esp25::vf10  size=1  [class]
void esp25::vf10(void)

{
  return;
}

// 00F18B40  esp25::esp25  size=44  [class]
undefined4 * __fastcall esp25::esp25(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00F18B70  esp25::vf08  size=246  [class]
void __fastcall esp25::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
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
  if (*(int *)(param_1 + 0x45c) == 0) {
    uVar2 = FUN_00e5e130(*(undefined4 *)(param_1 + 0x450),param_1 + 400,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x458) = uVar2;
    *(undefined4 *)(param_1 + 0x45c) = 1;
  }
  if (*(int *)(param_1 + 0x454) != 0) {
    thunk_FUN_00e58e40(*(undefined4 *)(param_1 + 0x458),param_1 + 400,0,0xffffffff);
    if (*(int *)(param_1 + 0x460) == 0) {
      return;
    }
    iVar3 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
      if ((*(byte *)(iVar3 + 0x4c0) & 1) != 0) {
        return;
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
    FUN_009cca90(param_1,&DAT_016dc17c);
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

// 00F34D30  esp25::vf04  size=276  [class]
undefined4 __thiscall
esp25::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar3;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = (*psVar1 * 10000 + (int)psVar1[1]) * 10000 + (int)psVar1[2];
      iVar2 = (int)psVar1[3];
      *(int *)(param_1 + 0x454) = iVar2;
      if (1 < iVar2) {
        FUN_009cca90(param_1,&DAT_016dc100,iVar2);
        return 0;
      }
      *(int *)(param_1 + 0x460) = (int)(char)psVar1[8];
      goto LAB_00f34de7;
    }
  }
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
LAB_00f34de7:
  if (*(int *)(param_1 + 0x450) == 0) {
    FUN_009cca90(param_1,&DAT_016dc128);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  if ((*(int *)(param_1 + 0x460) != 0) && (*(short *)(param_1 + 0x400) != -1)) {
    FUN_009cca90(param_1,&DAT_016dc144);
    return 0;
  }
  return 1;
}

// 00F408B0  esp25::vf00  size=72  [class]
undefined4 * __thiscall esp25::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

