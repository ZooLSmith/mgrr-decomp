// src/collision/BoundingSphere.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A66730..00A6AB10, 8 functions

#include "types.h"

// 00A66730  BoundingSphere::vf0C  size=34  [class]
void __thiscall BoundingSphere::vf0C(int param_1,undefined4 param_2)

{
  FUN_00f96110(param_1 + 0x70,*(undefined4 *)(param_1 + 0x100),param_2,0,0);
  return;
}

// 00A66E40  BoundingSphere::vf14  size=287  [class]
undefined4 __thiscall BoundingSphere::vf14(int *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  float *pfStack_58;
  float *pfStack_54;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (((*param_2 - *param_3 == 0.0) && (param_2[1] - param_3[1] == 0.0)) &&
     (param_2[2] - param_3[2] == 0.0)) {
    pfStack_54 = param_2;
    pfStack_58 = (float *)0xa66e93;
    uVar1 = (**(code **)(*param_1 + 0x18))();
    return uVar1;
  }
  pfStack_58 = param_2;
  pfStack_54 = (float *)(param_1 + 0x2c);
  D3DXVec3TransformNormal(&local_30);
  fStack_38 = (float)param_1[0x39] + fStack_38;
  fStack_34 = (float)param_1[0x3a] + fStack_34;
  D3DXVec3TransformNormal(&stack0xffffffb4,param_3,param_1 + 0x2c);
  pfStack_58 = (float *)((float)param_1[0x38] + (float)pfStack_58);
  pfStack_54 = (float *)((float)param_1[0x39] + (float)pfStack_54);
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  local_30 = 0;
  uStack_2c = 0;
  fVar2 = (float10)thunk_FUN_00de19d0(&fStack_38,&stack0xffffffb8,&pfStack_58,0);
  if ((float10)(float)param_1[0x40] * (float10)(float)param_1[0x40] <= fVar2 * fVar2) {
    return 0;
  }
  return 1;
}

// 00A66F60  BoundingSphere::vf10  size=33  [class]
void __thiscall BoundingSphere::vf10(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x100);
  param_2[1] = *(undefined4 *)(param_1 + 0x100);
  param_2[2] = *(undefined4 *)(param_1 + 0x100);
  return;
}

// 00A66FB0  BoundingSphere::vf00  size=6  [class]
undefined * BoundingSphere::vf00(void)

{
  return &DAT_01be99d4;
}

// 00A66FC0  BoundingSphere::vf04  size=31  [class]
undefined4 * __thiscall BoundingSphere::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = BoundingVolumeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A68890  BoundingSphere::vf18  size=80  [class]
undefined4 __thiscall BoundingSphere::vf18(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0xa0);
  fVar3 = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xa8);
  if (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 <
      *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100)) {
    return 1;
  }
  return 0;
}

// 00A69850  BoundingSphere::vf08  size=331  [class]
undefined4 __thiscall BoundingSphere::vf08(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [144];
  undefined4 local_50;
  
  FUN_0118f7b0();
  local_50 = 0;
  local_100 = *(undefined4 *)(param_1 + 0xa0);
  local_fc = *(undefined4 *)(param_1 + 0xa4);
  local_f8 = *(undefined4 *)(param_1 + 0xa8);
  local_f4 = *(undefined4 *)(param_1 + 0xac);
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  fVar4 = *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x84);
  fVar6 = *(float *)(param_1 + 0x88);
  fVar9 = SQRT(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x98) +
               *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90));
  fVar7 = *(float *)(param_1 + 0x88);
  fVar8 = *(float *)(param_1 + 0x98);
  fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x78) / fVar9));
  fVar12 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
  local_f0 = (float)fVar12;
  local_ec = (float)fVar11;
  fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x74) /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)*(float *)(param_1 + 0x70) /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  local_e8 = (float)fVar11;
  piVar10 = (int *)FUN_00910da0();
  (**(code **)(*piVar10 + 8))
            (param_2,local_e0,&local_100,&local_f0,*(undefined4 *)(param_1 + 0x100),1);
  return param_2;
}

// 00A6AB10  BoundingSphere::thunk_vf1C  size=5  [class]
byte __thiscall BoundingSphere::thunk_vf1C(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("radius");
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
    return bVar2 & bVar3;
  }
  return 0;
}

