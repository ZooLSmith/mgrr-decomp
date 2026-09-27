// src/misc/esp46.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED06B0..00F37FF0, 6 functions

#include "types.h"

// 00ED06B0  esp46::esp46  size=18  [class]
undefined4 * __fastcall esp46::esp46(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0B60  esp46::vf00  size=30  [class]
undefined4 __thiscall esp46::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF5A80  esp46::vf14  size=46  [class]
void __fastcall esp46::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  if (*(int *)(param_1 + 0x4c0) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4c0),0);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  return;
}

// 00F1CE70  esp46::vf08  size=611  [class]
void __fastcall esp46::vf08(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_8 [2];
  
  FUN_00f1be10(local_8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x4d8);
  *(float *)(param_1 + 0x4d8) =
       *(float *)(param_1 + 0x4d8) - (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x11c));
  fVar2 = *(float *)(param_1 + 0x4d8);
  while (fVar2 <= 0.0) {
    fVar2 = (float)*(int *)(param_1 + 0x4d4) + 0.999999;
    if (*(float *)(param_1 + 0x4d8) < -100.0 == (*(float *)(param_1 + 0x4d8) == -100.0)) {
      *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x4d8);
      *(float *)(param_1 + 0x4d8) = *(float *)(param_1 + 0x4d8) + fVar2;
    }
    else {
      *(float *)(param_1 + 0x4d8) = fVar2;
      *(float *)(param_1 + 0x4dc) = fVar2 - 1.0;
    }
    if (*(int *)(param_1 + 0x4cc) == 0) {
      *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4c8) + -1;
      *(undefined4 *)(param_1 + 0x4d0) = 1;
    }
    else {
      *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + -1;
    }
    pfVar1 = (float *)(*(int *)(param_1 + 0x4c4) + *(int *)(param_1 + 0x4cc) * 0xc);
    *pfVar1 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    pfVar1[1] = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
    pfVar1[2] = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
    fVar2 = *(float *)(param_1 + 0x4d8);
  }
  if (*(int *)(param_1 + 0x4d0) == 0) {
    iVar6 = *(int *)(param_1 + 0x4cc);
    iVar7 = *(int *)(param_1 + 0x4c8) + -1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4cc);
    iVar7 = (iVar6 + 1) % *(int *)(param_1 + 0x4c8);
  }
  iVar3 = *(int *)(param_1 + 0x4c4);
  iVar7 = iVar7 * 0xc;
  iVar6 = iVar6 * 0xc;
  *(float *)(param_1 + 0x130) = *(float *)(iVar7 + iVar3) + *(float *)(iVar6 + iVar3);
  *(float *)(param_1 + 0x134) = *(float *)(iVar7 + 4 + iVar3) + *(float *)(iVar6 + 4 + iVar3);
  *(float *)(param_1 + 0x138) = *(float *)(iVar7 + 8 + iVar3) + *(float *)(iVar6 + 8 + iVar3);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
  *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
  *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
  iVar3 = *(int *)(param_1 + 0x4c4);
  fVar2 = *(float *)(iVar7 + iVar3) - *(float *)(iVar6 + iVar3);
  fVar4 = *(float *)(iVar7 + 4 + iVar3) - *(float *)(iVar6 + 4 + iVar3);
  fVar5 = *(float *)(iVar7 + 8 + iVar3) - *(float *)(iVar6 + 8 + iVar3);
  local_8[0] = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  fVar8 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 300) = (float)fVar8;
  return;
}

// 00F2C0F0  esp46::vf10  size=472  [class]
void __fastcall esp46::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  _AFX_EDIT_STATE *this;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    iVar2 = FUN_00dd7ad0();
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar5 = -(int)*(short *)(param_1 + 0x4e) - 4;
    }
    else {
      FUN_00dd5650(&DAT_01659438);
      uVar5 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar6 = uVar5 >> 5;
    uVar5 = 0x80000000 >> ((byte)uVar5 & 0x1f);
    (&DAT_01eddb60)[uVar6 + iVar2] = (&DAT_01eddb60)[uVar6 + iVar2] | uVar5;
    if ((uVar1 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar6 + iVar2] = (&DAT_01eddb4c)[uVar6 + iVar2] & ~uVar5;
    }
    else {
      (&DAT_01eddb4c)[uVar6 + iVar2] = (&DAT_01eddb4c)[uVar6 + iVar2] | uVar5;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar6 + iVar2] = (&DAT_01eddb38)[uVar6 + iVar2] & ~uVar5;
    }
    else {
      (&DAT_01eddb38)[uVar6 + iVar2] = (&DAT_01eddb38)[uVar6 + iVar2] | uVar5;
    }
  }
  FUN_00efed20();
  if (*(float *)(param_1 + 0x124) <= 0.01) {
    return;
  }
  if ((DAT_01edd490 == 0) ||
     (this = (_AFX_EDIT_STATE *)cPrimHeap::allocBuffer(0x58,0x20), this == (_AFX_EDIT_STATE *)0x0))
  {
    FUN_009cca90(param_1,&DAT_016dd19c);
    return;
  }
  _AFX_EDIT_STATE::_AFX_EDIT_STATE(this);
  *(undefined ***)this = EspPrimitiveWorkMultiParticle_Esp64::vftable;
  if (*(int *)(param_1 + 0x4d0) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c4) + *(int *)(param_1 + 0x4cc) * 0xc;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c4);
  }
  iVar7 = *(int *)(param_1 + 0x4c8);
  if (*(int *)(param_1 + 0x4d0) == 0) {
    iVar7 = (iVar7 - *(int *)(param_1 + 0x4cc)) + 1;
  }
  uVar3 = FUN_00f4e7c0();
  iVar2 = FUN_00f3ed30(iVar2,iVar7,uVar3);
  if (iVar2 != 0) {
    if ((DAT_01edd490 != 0) &&
       (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar4 != (undefined4 *)0x0)) {
      puVar4[9] = 0;
      *puVar4 = cEspDrawWorkMulti::vftable;
      FUN_00edfcd0(param_1 + 0x3c8);
      FUN_00f26b40(puVar4);
      FUN_00f204b0(puVar4,puVar4,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                   *(int *)(param_1 + 0x28));
      puVar4[0x4c] = iVar7;
      puVar4[9] = this;
      return;
    }
    FUN_009cca90(param_1,&DAT_016dd1e0);
    return;
  }
  FUN_009cca90(param_1,&DAT_016dd1c4);
  return;
}

// 00F37FF0  esp46::vf04  size=231  [class]
undefined4 __thiscall
esp46::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 uVar4;
  
  iVar1 = esp41::vf04(param_2,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4d4) = 1;
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar2 == (undefined4 *)0x0)) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = (short *)*puVar2;
      if ((short *)((int)psVar3 + 0xfU & 0xfffffff0) != psVar3) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    iVar1 = (int)*psVar3;
    *(int *)(param_1 + 0x4cc) = iVar1;
    *(int *)(param_1 + 0x4c8) = iVar1;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    iVar1 = FUN_00dd29b0(iVar1 * 0xc,4,0,0);
    *(int *)(param_1 + 0x4c0) = iVar1;
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x4c4) = iVar1;
      *(undefined4 *)(param_1 + 0x4d8) = 0xc2c80000;
      *(undefined4 *)(param_1 + 0x4dc) = 0xc2ca0000;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd16c);
  }
  return 0;
}

