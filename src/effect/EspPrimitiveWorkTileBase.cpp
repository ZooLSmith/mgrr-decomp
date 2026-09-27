// src/effect/EspPrimitiveWorkTileBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F910..00F59510, 9 functions

#include "mgrr.h"
#include "EspPrimitiveWorkTileBase.h"

// 00F4F910  EspPrimitiveWorkTileBase::vf08  size=36  [class]
void EspPrimitiveWorkTileBase::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4F940  EspPrimitiveWorkTileBase::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkTileBase::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(4);
  return;
}

// 00F4F9A0  FUN_00f4f9a0  size=195  [between]
void FUN_00f4f9a0(ushort param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 float param_6,int *param_7)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  undefined4 local_84;
  int iVar4;
  int *piStack_74;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined1 local_60 [32];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&piStack_74;
  local_68 = param_2;
  local_84 = 0;
  D3DXMatrixTranslation(local_60,param_2,param_3);
  piStack_74 = param_7;
  pfVar3 = (float *)(param_5 + 8 + (uint)param_1 * 0x10);
  iVar4 = 6;
  do {
    pfVar1 = pfVar3 + -2;
    D3DXVec3TransformNormal(pfVar1,param_4,auStack_70);
    *pfVar1 = *pfVar1 + fStack_40;
    pfVar3[-1] = pfVar3[-1] + fStack_3c;
    *pfVar3 = *pfVar3 + fStack_38;
    fVar2 = param_6;
    if (*piStack_74 == 0) {
      fVar2 = 0.5;
    }
    piStack_74 = piStack_74 + 1;
    pfVar3[1] = fVar2;
    param_4 = param_4 + 0x10;
    pfVar3 = pfVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  __security_check_cookie(uStack_24 ^ (uint)&local_84);
  return;
}

// 00F4FA70  FUN_00f4fa70  size=190  [between]
void FUN_00f4fa70(ushort param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 local_84;
  int iVar4;
  float *pfStack_74;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined1 local_60 [32];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&pfStack_74;
  local_68 = param_2;
  local_84 = 0;
  D3DXMatrixTranslation(local_60,param_2,param_3);
  if (param_6 != (float *)0x0) {
    pfStack_74 = param_6;
    iVar4 = 6;
    pfVar3 = (float *)(param_5 + 8 + (uint)param_1 * 0x10);
    do {
      pfVar1 = pfVar3 + -2;
      D3DXVec3TransformNormal(pfVar1,param_4,auStack_70);
      pfVar2 = pfStack_74 + 1;
      param_4 = param_4 + 0x10;
      *pfVar1 = *pfVar1 + fStack_40;
      iVar4 = iVar4 + -1;
      pfVar3[-1] = pfVar3[-1] + fStack_3c;
      *pfVar3 = *pfVar3 + fStack_38;
      pfVar3[1] = *pfStack_74;
      pfVar3 = pfVar3 + 4;
      pfStack_74 = pfVar2;
    } while (iVar4 != 0);
  }
  __security_check_cookie(uStack_24 ^ (uint)&local_84);
  return;
}

// 00F4FB30  FUN_00f4fb30  size=174  [between]
void FUN_00f4fb30(ushort param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  float unaff_EBX;
  int iVar1;
  float unaff_ESI;
  float *pfVar2;
  undefined4 local_84;
  float fStack_74;
  undefined4 local_70 [4];
  undefined1 local_60 [32];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_74;
  local_70[0] = param_2;
  local_84 = 0;
  D3DXMatrixTranslation(local_60,param_2,param_3);
  iVar1 = 6;
  pfVar2 = (float *)(param_5 + (uint)param_1 * 8);
  do {
    D3DXVec3TransformNormal(&stack0xffffff84,param_4,local_70);
    unaff_ESI = fStack_40 + unaff_ESI;
    param_4 = param_4 + 0xc;
    iVar1 = iVar1 + -1;
    unaff_EBX = fStack_3c + unaff_EBX;
    fStack_74 = fStack_38 + fStack_74;
    *pfVar2 = unaff_ESI;
    pfVar2[1] = unaff_EBX;
    pfVar2 = pfVar2 + 2;
  } while (iVar1 != 0);
  __security_check_cookie(uStack_24 ^ (uint)&local_84);
  return;
}

// 00F4FBE0  EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase  size=54  [class]
undefined4 * __fastcall EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkTile3x3::vftable;
  return param_1;
}

// 00F4FC80  EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase_2  size=54  [class]
undefined4 * __fastcall EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkTile4x4::vftable;
  return param_1;
}

// 00F4FD20  EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase_3  size=54  [class]
undefined4 * __fastcall EspPrimitiveWorkTileBase::EspPrimitiveWorkTileBase_3(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkTile6x6::vftable;
  return param_1;
}

// 00F59510  EspPrimitiveWorkTileBase::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkTileBase::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

