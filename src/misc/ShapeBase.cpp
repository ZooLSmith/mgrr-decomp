// src/misc/ShapeBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6ACF0..00A6CA40, 11 functions

#include "types.h"

// 00A6ACF0  ShapeBase::vf10  size=1  [class]
void ShapeBase::vf10(void)

{
  return;
}

// 00A6AD10  ShapeBase::vf00  size=6  [class]
undefined * ShapeBase::vf00(void)

{
  return &DAT_01be9a0c;
}

// 00A6AD30  ShapeBase::ShapeBase_4  size=7  [class]
void __fastcall ShapeBase::ShapeBase_4(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00A6ADA0  ShapeBase::ShapeBase_3  size=7  [class]
void __fastcall ShapeBase::ShapeBase_3(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00A6AE10  ShapeBase::ShapeBase_6  size=7  [class]
void __fastcall ShapeBase::ShapeBase_6(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00A6AE30  ShapeBase::ShapeBase_5  size=7  [class]
void __fastcall ShapeBase::ShapeBase_5(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00A6B000  ShapeBase::ShapeBase_2  size=241  [class]
void __thiscall ShapeBase::ShapeBase_2(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  if (DAT_018a1398 == -1) {
    DAT_018a1398 = 1;
  }
  iVar1 = DAT_018a1398 + 1;
  param_1[4] = DAT_018a1398;
  DAT_018a1398 = iVar1;
  param_1[5] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x2e] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  return;
}

// 00A6B100  ShapeBase::vf08  size=31  [class]
undefined4 * __thiscall ShapeBase::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6B9A0  ShapeBase::ShapeBase  size=88  [class]
void __fastcall ShapeBase::ShapeBase(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = param_1[0x34];
  *param_1 = ShapeMesh::vftable;
  if ((iVar1 != 0) && (param_1[0x35] != 0)) {
    uStack_4 = param_1;
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_01192b60((int)&uStack_4 + 3,iVar1);
      param_1[0x34] = 0;
      *param_1 = vftable;
      return;
    }
    FUN_010060a0();
  }
  param_1[0x34] = 0;
  *param_1 = vftable;
  return;
}

// 00A6C300  ShapeBase::vf0C  size=288  [class]
void __fastcall ShapeBase::vf0C(int param_1)

{
  undefined4 *_Src;
  undefined1 local_50 [76];
  
  _Src = (undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *_Src = 0x3f800000;
  if (*(float *)(param_1 + 0x38) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0x38));
    D3DXMatrixMultiply(_Src,&stack0xffffffa8,_Src);
  }
  if (*(float *)(param_1 + 0x34) != 0.0) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0x34));
    D3DXMatrixMultiply(_Src,&stack0xffffffa8,_Src);
  }
  if (*(float *)(param_1 + 0x30) != 0.0) {
    D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0x30));
    D3DXMatrixMultiply(_Src,&stack0xffffffa8,_Src);
  }
  FUN_00ddd140(local_50,param_1 + 0x40);
  D3DXMatrixMultiply(_Src,local_50,_Src);
  if ((undefined4 *)(param_1 + 0x50) != _Src) {
    FID_conflict__memcpy((undefined4 *)(param_1 + 0x50),_Src,0x40);
  }
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x88);
  return;
}

// 00A6CA40  ShapeBase::vf04  size=52  [class]
undefined4 * ShapeBase::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeBase",9);
  uVar1 = FUN_008d93a0(uVar1,"ShapeBase",9);
  *param_1 = uVar1;
  return param_1;
}

