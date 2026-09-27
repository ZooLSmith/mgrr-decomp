// src/unsorted/unit_00EF7E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF7E60..00EF7FE0, 3 functions

#include "types.h"

// 00EF7E60  FUN_00ef7e60  size=83  [run]
undefined4 __fastcall FUN_00ef7e60(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (((*(byte *)(*(int *)(param_1 + 0x4a0) + 0x3c) & 8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x4a0) + 0x120) == 0)) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c800();
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x470) != '\0')) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x4a0) + 0x30);
        *puVar1 = *puVar1 | 0x80000000;
        return 0;
      }
    }
  }
  return 1;
}

// 00EF7EC0  FUN_00ef7ec0  size=276  [run]
undefined4 __fastcall FUN_00ef7ec0(int param_1)

{
  char cVar1;
  short sVar2;
  float fVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  sVar2 = *(short *)(param_1 + 0x4c);
  if (sVar2 == 4) {
    return 1;
  }
  if (sVar2 == 0xf) {
    return 1;
  }
  if (sVar2 == 0x10) {
    return 1;
  }
  if (sVar2 == 0x5d) {
    return 1;
  }
  if (uVar7 == 0) {
    return 1;
  }
  if (*(char *)(uVar7 + 0x10) != '\0') {
    *(char *)(param_1 + 0x4c4) = (*(char *)(uVar7 + 0x10) < '\x01') + '\x01';
  }
  *(short *)(param_1 + 0x4c2) = (short)*(char *)(uVar7 + 0x11);
  fVar3 = (float)(int)*(char *)(uVar7 + 0x12) * 0.01;
  *(float *)(param_1 + 0x4b8) = fVar3;
  if (fVar3 == 0.0) {
    *(undefined4 *)(param_1 + 0x4b8) = 0x3f800000;
  }
  cVar1 = *(char *)(uVar7 + 0x10);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) goto LAB_00ef7fab;
    iVar6 = -(int)cVar1;
  }
  else {
    iVar6 = (int)cVar1;
  }
  *(float *)(param_1 + 0x4b8) = (float)iVar6 * *(float *)(param_1 + 0x4b8);
LAB_00ef7fab:
  if (*(char *)(param_1 + 0x4c4) < '\x03') {
    return 1;
  }
  FUN_009cca90(param_1,&DAT_016de820,(int)*(char *)(param_1 + 0x4c4));
  return 0;
}

// 00EF7FE0  FUN_00ef7fe0  size=391  [run]
undefined4 __fastcall FUN_00ef7fe0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  if ((*(short *)(param_1 + 0x4c) == 0x17) || (*(char *)(param_1 + 0x4c4) == '\0')) {
    return 1;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_00a7c800();
  *(int *)(iVar3 + 0x4b0) = *(int *)(*(int *)(param_1 + 0x4b0) + 4) + 0x50000;
  sVar1 = *(short *)(param_1 + 0x4c2);
  iVar3 = *(int *)(param_1 + 0x4b0);
  if (0x1f < sVar1) {
    FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
  }
  iVar3 = *(int *)(iVar3 + 0x20 + sVar1 * 4);
  if (iVar3 == 0) {
    FUN_009cca90(param_1,&DAT_016de8ac);
    return 0;
  }
  iVar4 = FUN_00a7c890();
  if (iVar4 == 0) {
    iVar4 = Entity::createAnimation();
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_016de928,*(undefined4 *)(*(int *)(param_1 + 0x4b0) + 4));
      return 0;
    }
    FUN_00a7c890();
  }
  FUN_00e2d720();
  iVar2 = FUN_00e3fb10(iVar2,*(int *)(param_1 + 0x4b0) + 8);
  if (iVar2 == 0) {
    FUN_009cca90(param_1,&DAT_016de978,*(undefined4 *)(*(int *)(param_1 + 0x4b0) + 4));
    return 0;
  }
  FUN_00e26e50(1);
  sVar1 = *(short *)(param_1 + 0x4c2);
  if (0x1f < sVar1) {
    FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
  }
  Animation::Unit::setAnimation
            (iVar3,&DAT_018d7170 + sVar1 * 8,0,0,0x3f800000,0,0xbf800000,
             *(undefined4 *)(param_1 + 0x4b8));
  *(undefined4 *)(param_1 + 0x4bc) = 1;
  return 1;
}

