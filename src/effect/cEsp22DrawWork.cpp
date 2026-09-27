// src/effect/cEsp22DrawWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8650..00F3F9E0, 3 functions

#include "mgrr.h"
#include "cEsp22DrawWork.h"

// 00ED8650  cEsp22DrawWork::vf04  size=25  [class]
void cEsp22DrawWork::vf04(void)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  FUN_00f45940();
  return;
}

// 00F2A130  cEsp22DrawWork::cEsp22DrawWork  size=290  [class]
void __fastcall cEsp22DrawWork::cEsp22DrawWork(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00efed20();
  if (*(float *)(param_1 + 0x124) <= 0.01) {
    return;
  }
  if ((DAT_01edd490 != 0) &&
     (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xe0,0x20), puVar3 != (undefined4 *)0x0)) {
    puVar3[9] = 0;
    *puVar3 = vftable;
    *(undefined2 *)(puVar3 + 0x35) = *(undefined2 *)(param_1 + 0x45c);
    *(undefined2 *)((int)puVar3 + 0xd6) = *(undefined2 *)(param_1 + 0x45e);
    iVar1 = param_1 + 0x3c8;
    puVar3[0x34] = *(undefined4 *)(param_1 + 0x460);
    FUN_00edfcd0(iVar1);
    FUN_00f20370(puVar3 + 0x10,iVar1,*(undefined4 *)(param_1 + 0x28));
    FUN_00f26b40(puVar3);
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    FUN_00f45d50();
    local_14 = puVar3;
    local_10 = param_1;
    local_c = iVar1;
    local_8 = uVar2;
    local_4 = uVar4;
    FUN_00f49500(&local_14);
    puVar5 = &DAT_01bea1d0;
    if (DAT_01beb8c0 != (undefined *)0x0) {
      puVar5 = DAT_01beb8c0;
    }
    uVar4 = FUN_00e9fe70();
    FUN_00edc9e0(puVar3,puVar3,iVar1,puVar5 + 0x2d0,uVar4);
    return;
  }
  FUN_009cca90(param_1,&DAT_016dbfa0);
  return;
}

// 00F3F9E0  cEsp22DrawWork::vf00  size=31  [class]
undefined4 * __thiscall cEsp22DrawWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

