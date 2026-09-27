// src/misc/esp108.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFF00..00F2D650, 5 functions

#include "mgrr.h"
#include "esp108.h"

// 009CFF00  esp108::vf04  size=54  [class]
undefined4 __thiscall
esp108::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x428) = 0x7a;
  return 1;
}

// 009CFF40  esp108::vf08  size=5  [class]
void __fastcall esp108::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 009D42B0  esp108::esp108  size=18  [class]
undefined4 * __fastcall esp108::esp108(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF4A0  esp108::vf00  size=30  [class]
undefined4 __thiscall esp108::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F2D650  esp108::vf10  size=337  [class]
void __fastcall esp108::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x30) & 0x200000) != 0) {
    cEspDrawWork::cEspDrawWork_6();
    return;
  }
  iVar2 = FUN_00dd7ad0();
  FUN_00efed20();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    if ((DAT_01edd490 == 0) ||
       (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016da510);
      return;
    }
    *puVar3 = cEspDrawWork::vftable;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar3);
    FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar4 = FUN_009cc5a0(*(short *)(param_1 + 0x4e));
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar5 = uVar4 >> 5;
      uVar4 = 0x80000000 >> ((byte)uVar4 & 0x1f);
      (&DAT_01eddb60)[uVar5 + iVar2] = (&DAT_01eddb60)[uVar5 + iVar2] | uVar4;
      if ((uVar1 >> 0x16 & 1) == 0) {
        (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] & ~uVar4;
      }
      else {
        (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] | uVar4;
      }
      if ((uVar1 >> 7 & 1) == 0) {
        (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] & ~uVar4;
      }
      else {
        (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] | uVar4;
      }
    }
    if (0x6b < *(byte *)(puVar3 + 4)) {
      FUN_009cca90(param_1,&DAT_016da538);
    }
  }
  return;
}

