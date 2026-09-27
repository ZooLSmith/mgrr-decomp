// src/collision/BoundingCylinder.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A67C30..00A6AB30, 9 functions

#include "mgrr.h"
#include "BoundingCylinder.h"

// 00A67C30  BoundingCylinder::vf0C  size=780  [class]
void __thiscall BoundingCylinder::vf0C(int param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint local_494;
  int local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  float afStack_468 [2];
  undefined1 local_460 [64];
  float afStack_420 [104];
  float local_280;
  float local_27c;
  float local_278;
  float local_26c [46];
  float afStack_1b4 [108];
  
  iVar1 = param_1 + 0x70;
  FUN_00f961b0(iVar1,*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),param_2,0,0);
  local_480 = 0;
  local_47c = 0;
  local_494 = 1;
  local_478 = *(undefined4 *)(param_1 + 0x100);
  local_474 = 0;
  local_280 = 0.0;
  local_27c = *(float *)(param_1 + 0x104) * -0.5;
  local_278 = 0.0;
  pfVar2 = local_26c;
  do {
    local_490 = local_494 - 1;
    D3DXMatrixRotationY(local_460,(float)local_490 * -22.5 * 0.017453292);
    D3DXVec3TransformNormal(&local_494,&fStack_488,afStack_468);
    local_494 = local_494 + 1;
    pfVar2[-2] = fStack_48c + local_280;
    pfVar2[-1] = fStack_488 + local_27c;
    *pfVar2 = fStack_484 + local_278;
    pfVar2 = pfVar2 + 3;
  } while (local_494 < 0x12);
  local_494 = 0x12;
  pfVar2 = &local_280;
  do {
    D3DXVec3TransformNormal(pfVar2,pfVar2,iVar1);
    local_494 = local_494 - 1;
    *pfVar2 = *pfVar2 + *(float *)(param_1 + 0xa0);
    pfVar2[1] = *(float *)(param_1 + 0xa4) + pfVar2[1];
    pfVar2[2] = pfVar2[2] + *(float *)(param_1 + 0xa8);
    pfVar2 = pfVar2 + 3;
  } while (local_494 != 0);
  FUN_00f96080(&local_280,0x12,param_2 & 0x70ffffff,0);
  afStack_468[0] = *(float *)(param_1 + 0x104) * 0.5;
  local_494 = 0;
  iVar4 = 0;
  do {
    local_490 = (local_494 >> 1) - 1;
    D3DXMatrixRotationY(local_460,(float)local_490 * -22.5 * 0.017453292);
    D3DXVec3TransformNormal(&local_494,&fStack_488,afStack_468);
    *(float *)((int)afStack_420 + iVar4 + 8) = fStack_48c;
    local_494 = local_494 + 2;
    iVar3 = iVar4 + 0x18;
    *(float *)((int)afStack_420 + iVar4 + 0xc) = fStack_488 + afStack_468[0];
    *(float *)((int)afStack_420 + iVar4 + 0x10) = fStack_484;
    *(undefined4 *)((int)afStack_420 + iVar4 + 0x14) = *(undefined4 *)((int)afStack_420 + iVar4 + 8)
    ;
    *(undefined4 *)((int)afStack_420 + iVar4 + 0x18) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0xc);
    *(undefined4 *)((int)afStack_420 + iVar4 + 0x1c) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0x10);
    *(float *)((int)afStack_420 + iVar4 + 0x18) = *(float *)(param_1 + 0x104) * -0.5;
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0xc) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0x14);
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0x10) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0x18);
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0x14) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0x1c);
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0x18) = *(undefined4 *)((int)afStack_420 + iVar4 + 8)
    ;
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0x1c) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0xc);
    *(undefined4 *)((int)afStack_1b4 + iVar4 + 0x20) =
         *(undefined4 *)((int)afStack_420 + iVar4 + 0x10);
    iVar4 = iVar3;
  } while (iVar3 < 0x198);
  local_494 = 0x22;
  iVar4 = 0;
  do {
    pfVar2 = (float *)((int)afStack_420 + iVar4 + 8);
    D3DXVec3TransformNormal(pfVar2,pfVar2,iVar1);
    *pfVar2 = *(float *)(param_1 + 0xa0) + *pfVar2;
    pfVar2 = (float *)((int)afStack_1b4 + iVar4);
    *(float *)((int)afStack_420 + iVar4) =
         *(float *)(param_1 + 0xa4) + *(float *)((int)afStack_420 + iVar4);
    *(float *)((int)afStack_420 + iVar4 + 4) =
         *(float *)(param_1 + 0xa8) + *(float *)((int)afStack_420 + iVar4 + 4);
    D3DXVec3TransformNormal(pfVar2,pfVar2,iVar1);
    local_494 = local_494 - 1;
    *pfVar2 = *pfVar2 + *(float *)(param_1 + 0xa0);
    *(float *)((int)afStack_1b4 + iVar4 + 0x10) =
         *(float *)(param_1 + 0xa4) + *(float *)((int)afStack_1b4 + iVar4 + 0x10);
    *(float *)((int)afStack_1b4 + iVar4 + 0x14) =
         *(float *)(param_1 + 0xa8) + *(float *)((int)afStack_1b4 + iVar4 + 0x14);
    iVar4 = iVar4 + 0xc;
  } while (local_494 != 0);
  FUN_00f96060(afStack_420 + 2,0x22,param_2 & 0x30ffffff,0);
  FUN_00f96060(afStack_1b4 + 3,0x22,param_2 & 0x30ffffff,0);
  return;
}

// 00A67F50  BoundingCylinder::vf18  size=157  [class]
undefined4 __thiscall BoundingCylinder::vf18(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_ESI;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal(local_20,param_2,param_1 + 0xb0);
  fVar1 = *(float *)(param_1 + 0xe0) + unaff_ESI;
  fVar3 = *(float *)(param_1 + 0xe4) + fStack_28;
  fVar2 = *(float *)(param_1 + 0xe8) + fStack_24;
  if (((*(float *)(param_1 + 0x104) * -0.5 < fVar3) &&
      (fVar4 = *(float *)(param_1 + 0x104) * 0.5, fVar4 < fVar3 == (fVar4 == fVar3))) &&
     (fVar2 * fVar2 + fVar1 * fVar1 < *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100))) {
    return 1;
  }
  return 0;
}

// 00A67FF0  BoundingCylinder::vf14  size=443  [class]
undefined4 __thiscall BoundingCylinder::vf14(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfStack_78;
  float *pfStack_74;
  float fStack_64;
  float local_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  float fStack_54;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  
  if (((*param_2 - *param_3 == 0.0) && (param_2[1] - param_3[1] == 0.0)) &&
     (param_2[2] - param_3[2] == 0.0)) {
    pfStack_74 = param_2;
    pfStack_78 = (float *)0xa68043;
    uVar2 = (**(code **)(*param_1 + 0x18))();
    return uVar2;
  }
  pfStack_78 = param_2;
  pfStack_74 = (float *)(param_1 + 0x2c);
  D3DXVec3TransformNormal(&local_60);
  fVar1 = (float)param_1[0x3a];
  D3DXVec3TransformNormal(auStack_5c,param_3,param_1 + 0x2c);
  fVar1 = (float)param_1[0x39] + fVar1 + fStack_64;
  local_60 = (float)param_1[0x3a] + local_60;
  if (((float)pfStack_74 <= (float)param_1[0x41]) || (fVar1 <= (float)param_1[0x41])) {
    if (((float)pfStack_74 < -(float)param_1[0x41]) && (fVar1 < -(float)param_1[0x41])) {
      return 0;
    }
    uStack_48 = 0;
    iStack_44 = param_1[0x41];
    uStack_40 = 0;
    uStack_38 = 0;
    fStack_34 = -(float)param_1[0x41];
    uStack_30 = 0;
    iVar3 = FUN_00d9d800(auStack_58,&pfStack_78,&stack0xffffff98,&uStack_48,&uStack_38,param_1[0x40]
                        );
    if (((iVar3 != 0) && (fStack_54 <= (float)param_1[0x41])) &&
       (-(float)param_1[0x41] <= fStack_54)) {
      return 1;
    }
  }
  return 0;
}

// 00A681B0  BoundingCylinder::vf10  size=61  [class]
void __thiscall BoundingCylinder::vf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0x104) < *(float *)(param_1 + 0x100)) {
    uVar1 = *(undefined4 *)(param_1 + 0x100);
    *param_2 = uVar1;
    param_2[1] = uVar1;
    param_2[2] = uVar1;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  return;
}

// 00A68220  BoundingCylinder::vf00  size=6  [class]
undefined * BoundingCylinder::vf00(void)

{
  return &DAT_01be99dc;
}

// 00A68230  BoundingCylinder::vf04  size=31  [class]
undefined4 * __thiscall BoundingCylinder::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = BoundingVolumeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A69C20  BoundingCylinder::vf08  size=391  [class]
undefined4 __thiscall BoundingCylinder::vf08(int param_1,undefined4 param_2)

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
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [144];
  undefined4 local_50;
  
  FUN_0118f7b0();
  local_50 = 0;
  local_120 = *(undefined4 *)(param_1 + 0xa0);
  local_11c = *(undefined4 *)(param_1 + 0xa4);
  local_118 = *(undefined4 *)(param_1 + 0xa8);
  local_114 = *(undefined4 *)(param_1 + 0xac);
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
  local_100 = (float)fVar12;
  local_fc = (float)fVar11;
  fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x74) /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)*(float *)(param_1 + 0x70) /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  local_f8 = (float)fVar11;
  local_110 = 0;
  local_10c = *(float *)(param_1 + 0x104) * 0.5;
  local_108 = 0;
  local_f0 = 0;
  local_ec = *(float *)(param_1 + 0x104) * -0.5;
  local_e8 = 0;
  piVar10 = (int *)FUN_00910da0();
  (**(code **)(*piVar10 + 0x10))
            (param_2,local_e0,&local_120,&local_100,&local_110,&local_f0,
             *(undefined4 *)(param_1 + 0x100),1);
  return param_2;
}

// 00A6A8B0  BoundingCylinder::vf1C  size=170  [class]
byte __thiscall BoundingCylinder::vf1C(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar1 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x104);
  (**(code **)(*param_2 + 0x14))("height",0xb);
  return bVar2 & bVar3;
}

// 00A6AB30  BoundingCylinder::thunk_vf1C  size=5  [class]
byte __thiscall BoundingCylinder::thunk_vf1C(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar1 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x104);
  (**(code **)(*param_2 + 0x14))("height",0xb);
  return bVar2 & bVar3;
}

