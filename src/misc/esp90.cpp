// src/misc/esp90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD5C0..00F38790, 5 functions

#include "mgrr.h"
#include "esp90.h"

// 00ECD5C0  esp90::esp90  size=18  [class]
undefined4 * __fastcall esp90::esp90(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0C40  esp90::vf00  size=30  [class]
undefined4 __thiscall esp90::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDACE0  esp90::addOtTransList  size=1  [class]
void esp90::addOtTransList(void)

{
  return;
}

// 00F1DA30  esp90::vf08  size=145  [class]
void __fastcall esp90::vf08(int param_1)

{
  int *piVar1;
  short sVar2;
  
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
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) == 0) {
    sVar2 = *(short *)(param_1 + 0x450);
    if (sVar2 == 0) {
      FUN_00f42d30();
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
    else {
      if (sVar2 == 1) {
        FUN_00f41ea0(*(undefined4 *)(param_1 + 0x25c));
        return;
      }
      if (sVar2 == 2) {
        FUN_00f41110(*(undefined2 *)(param_1 + 0x452));
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
        return;
      }
    }
  }
  return;
}

// 00F38790  esp90::preTrans  size=203  [class]
undefined4 __thiscall
esp90::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
      puVar2 = (undefined2 *)*puVar4;
      if ((undefined2 *)((int)puVar2 + 0xfU & 0xfffffff0) != puVar2) {
        uVar5 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (puVar2 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x450) = *puVar2;
        *(undefined2 *)(param_1 + 0x452) = puVar2[1];
      }
    }
    sVar1 = *(short *)(param_1 + 0x450);
    if (sVar1 < 3) {
      if ((sVar1 == 2) && (*(short *)(param_1 + 0x452) == 0)) {
        FUN_009cca90(param_1,&DAT_016dd660);
        return 0;
      }
      if (sVar1 == 1) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 1;
      }
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd64c,(int)sVar1);
  }
  return 0;
}

