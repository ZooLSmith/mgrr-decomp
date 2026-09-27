// src/misc/esp30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD440..00F358A0, 5 functions

#include "types.h"

// 00ECD440  esp30::esp30  size=18  [class]
undefined4 * __fastcall esp30::esp30(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED09C0  esp30::vf00  size=30  [class]
undefined4 __thiscall esp30::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F1A000  esp30::vf08  size=246  [class]
void __fastcall esp30::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  
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
  if (*(float *)(param_1 + 0x180) < -5.0) {
    fVar2 = *(float *)(param_1 + 0x180);
    do {
      fVar2 = fVar2 + 10.0;
    } while (fVar2 < -5.0);
    *(float *)(param_1 + 0x180) = fVar2;
  }
  if (5.0 < *(float *)(param_1 + 0x180)) {
    fVar2 = *(float *)(param_1 + 0x180);
    do {
      fVar2 = fVar2 - 10.0;
    } while (5.0 < fVar2);
    *(float *)(param_1 + 0x180) = fVar2;
  }
  if (*(float *)(param_1 + 0x184) < -5.0) {
    fVar2 = *(float *)(param_1 + 0x184);
    do {
      fVar2 = fVar2 + 10.0;
    } while (fVar2 < -5.0);
    *(float *)(param_1 + 0x184) = fVar2;
  }
  if (*(float *)(param_1 + 0x184) <= 5.0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x184);
  do {
    fVar2 = fVar2 - 10.0;
  } while (5.0 < fVar2);
  *(float *)(param_1 + 0x184) = fVar2;
  return;
}

// 00F2A6D0  esp30::vf10  size=458  [class]
void __fastcall esp30::vf10(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00efed20();
  if (*(float *)(param_1 + 0x124) <= 0.01) {
    return;
  }
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    iVar3 = FUN_00dd7ad0();
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar6 = -(int)*(short *)(param_1 + 0x4e) - 4;
    }
    else {
      FUN_00dd5650(&DAT_01659438);
      uVar6 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar7 = uVar6 >> 5;
    uVar6 = 0x80000000 >> ((byte)uVar6 & 0x1f);
    (&DAT_01eddb60)[uVar7 + iVar3] = (&DAT_01eddb60)[uVar7 + iVar3] | uVar6;
    if ((uVar1 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar7 + iVar3] = (&DAT_01eddb4c)[uVar7 + iVar3] & ~uVar6;
    }
    else {
      (&DAT_01eddb4c)[uVar7 + iVar3] = (&DAT_01eddb4c)[uVar7 + iVar3] | uVar6;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar7 + iVar3] = (&DAT_01eddb38)[uVar7 + iVar3] & ~uVar6;
    }
    else {
      (&DAT_01eddb38)[uVar7 + iVar3] = (&DAT_01eddb38)[uVar7 + iVar3] | uVar6;
    }
  }
  if ((DAT_01edd490 != 0) &&
     (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0xe0,0x20), puVar4 != (undefined4 *)0x0)) {
    iVar3 = param_1 + 0x3c8;
    puVar4[9] = 0;
    *puVar4 = cEspDrawWork30::vftable;
    FUN_00edfcd0(iVar3);
    FUN_00f20370(puVar4 + 0x10,iVar3,*(undefined4 *)(param_1 + 0x28));
    FUN_00f26b40(puVar4);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    FUN_00f45d50();
    local_14 = puVar4;
    local_10 = param_1;
    local_c = iVar3;
    local_8 = uVar2;
    local_4 = uVar5;
    FUN_00f49500(&local_14);
    puVar4[0x34] = *(undefined4 *)(param_1 + 0x180);
    puVar4[0x35] = *(undefined4 *)(param_1 + 0x184);
    puVar4[0x36] = *(undefined4 *)(param_1 + 0x188);
    puVar4[0x37] = *(undefined4 *)(param_1 + 0x18c);
    puVar8 = &DAT_01bea1d0;
    if (DAT_01beb8c0 != (undefined *)0x0) {
      puVar8 = DAT_01beb8c0;
    }
    uVar5 = FUN_00e9fe70();
    FUN_00edc9e0(puVar4,puVar4,iVar3,puVar8 + 0x2d0,uVar5);
    return;
  }
  FUN_009cca90(param_1,&DAT_016dc5e4);
  return;
}

// 00F358A0  esp30::vf04  size=29  [class]
bool esp30::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_1,param_2,param_3);
  return iVar1 != 0;
}

