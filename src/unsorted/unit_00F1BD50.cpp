// src/unsorted/unit_00F1BD50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F1BD50..00F1C260, 4 functions

#include "types.h"

// 00F1BD50  FUN_00f1bd50  size=181  [run]
void __fastcall FUN_00f1bd50(int param_1)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  
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
  sVar3 = *(short *)(param_1 + 0x428);
  if (sVar3 == 0x51) {
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x100);
    fVar2 = *(float *)(param_1 + 0x104);
  }
  else {
    if ((sVar3 != 0x5b) && (sVar3 != 0x5c)) goto LAB_00f1bde6;
    *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x488) * *(float *)(param_1 + 0x100) * 0.003;
    fVar2 = *(float *)(param_1 + 0x104) * 0.003 * *(float *)(param_1 + 0x488);
  }
  *(float *)(param_1 + 0x494) = fVar2;
LAB_00f1bde6:
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  return;
}

// 00F1BE10  FUN_00f1be10  size=732  [run]
void __fastcall FUN_00f1be10(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float10 fVar8;
  float local_28;
  
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  iVar3 = *(int *)(param_1 + 0x50);
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
  iVar4 = *(int *)(param_1 + 0x480);
  *(undefined4 *)(param_1 + 300) = 0x43fa0000;
  *(float *)(param_1 + 0x478) =
       *(float *)(param_1 + 0x47c) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x478);
  if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
    *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x104);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  }
  *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
  if ((*(float *)(param_1 + 0x488) != 0.0) &&
     (pfVar7 = (float *)FUN_00e9fe70(), fVar2 = *(float *)(param_1 + 400) - *pfVar7,
     fVar5 = *(float *)(param_1 + 0x194) - pfVar7[1],
     fVar6 = *(float *)(param_1 + 0x198) - pfVar7[2],
     *(float *)(param_1 + 0x484) * *(float *)(param_1 + 0x484) <
     fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2)) {
    fVar8 = (float10)FUN_00fdef70();
    local_28 = ((float)fVar8 - *(float *)(param_1 + 0x484)) / *(float *)(param_1 + 0x488);
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    fVar2 = (1.0 - local_28) * (1.0 - local_28);
    if (fVar2 <= *(float *)(param_1 + 0x48c)) {
      *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x48c);
    }
    else {
      *(float *)(param_1 + 0x490) = fVar2;
    }
  }
  if (*(float *)(param_1 + 0x490) <= 0.01) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  }
  fVar2 = *(float *)(param_1 + 0x490);
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x490) = fVar2;
  return;
}

// 00F1C0F0  FUN_00f1c0f0  size=357  [run]
void __fastcall FUN_00f1c0f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
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
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  }
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x474) + *(float *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x164);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x474) * 1.2 + *(float *)(param_1 + 0x470);
  return;
}

// 00F1C260  FUN_00f1c260  size=945  [run]
void __fastcall FUN_00f1c260(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float10 fVar7;
  float local_28;
  
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  iVar4 = *(int *)(param_1 + 0x50);
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
  *(undefined4 *)(param_1 + 300) = 0x43fa0000;
  *(float *)(param_1 + 0x468) =
       *(float *)(param_1 + 0x46c) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x484) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x488) = 0x3f800000;
  *(float *)(param_1 + 0x450) =
       *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x450);
  *(float *)(param_1 + 0x454) =
       *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x454);
  *(float *)(param_1 + 0x458) =
       *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x458);
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  }
  *(undefined4 *)(param_1 + 0x480) = 0x3f800000;
  if ((*(float *)(param_1 + 0x478) != 0.0) &&
     (pfVar6 = (float *)FUN_00e9fe70(), fVar2 = *(float *)(param_1 + 400) - *pfVar6,
     fVar3 = *(float *)(param_1 + 0x194) - pfVar6[1],
     fVar5 = *(float *)(param_1 + 0x198) - pfVar6[2],
     *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) <
     fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3)) {
    fVar7 = (float10)FUN_00fdef70();
    local_28 = ((float)fVar7 - *(float *)(param_1 + 0x474)) / *(float *)(param_1 + 0x478);
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    fVar2 = (1.0 - local_28) * (1.0 - local_28);
    if (fVar2 <= *(float *)(param_1 + 0x47c)) {
      *(float *)(param_1 + 0x480) = *(float *)(param_1 + 0x47c);
    }
    else {
      *(float *)(param_1 + 0x480) = fVar2;
    }
  }
  if (*(float *)(param_1 + 0x4a0) != 0.0) {
    if (*(float *)(param_1 + 0x49c) <= 0.0) {
      fVar2 = *(float *)(param_1 + 0x110);
      if (fVar2 == 1.0) {
        fVar3 = *(float *)(param_1 + 0x4a0);
      }
      else {
        fVar3 = *(float *)(param_1 + 0x4a0);
        if (fVar3 < 2.0) {
          fVar3 = fVar3 / ((fVar2 - fVar3 * fVar2) + fVar3);
        }
        else {
          fVar7 = (float10)FUN_00fdc1f0();
          fVar3 = (float)fVar7;
        }
      }
      fVar3 = fVar3 * *(float *)(param_1 + 0x48c);
      *(float *)(param_1 + 0x48c) = fVar3;
      if (fVar3 < 0.01) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      }
    }
    else {
      *(float *)(param_1 + 0x49c) = *(float *)(param_1 + 0x49c) - *(float *)(param_1 + 0x110);
    }
  }
  *(float *)(param_1 + 0x494) =
       (*(float *)(param_1 + 0x48c) / *(float *)(param_1 + 0x490)) * *(float *)(param_1 + 0x498);
  return;
}

