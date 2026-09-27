// src/unsorted/unit_005723E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005723E0..005723E0, 1 functions

#include "mgrr.h"

// 005723E0  FUN_005723e0  size=1877  [run]
void __fastcall FUN_005723e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float *pfVar7;
  float fStack_64;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar4 = (int *)FUN_00c13920();
  (**(code **)(*piVar4 + 0x28))(0);
  iVar5 = FUN_00a7c8a0();
  if (iVar5 != 0) {
    fVar6 = (float10)FUN_00a5e410(*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(iVar5 + 0x44),
                                  *(undefined4 *)(iVar5 + 0x48),auStack_30);
    fStack_5c = (float)fVar6;
  }
  local_58 = 1.15;
  uVar3 = 0x3f933333;
  if ((float)param_1[0x249] < fStack_5c * 1.1) {
    uVar3 = 0x3fa00000;
    local_58 = 1.25;
  }
  local_60 = 1;
  iStack_54 = 0;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9e290(&DAT_01641be4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x3d9] = 0;
    param_1[0x3d8] = 1;
    goto LAB_005724fe;
  case 1:
LAB_005724fe:
    FUN_00a96030(0,local_58);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar7 = &fStack_44;
    FUN_00a92f90(pfVar7);
    FUN_0044fd10(pfVar7);
    fStack_64 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) *
                (float)param_1[0x244];
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a9e290(&DAT_01641bdc,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    local_60 = 0;
    FUN_00a96030(0,uVar3);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar7 = &fStack_44;
    FUN_00a92f90(pfVar7);
    FUN_0044fd10(pfVar7);
    fStack_64 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) *
                (float)param_1[0x244];
    if (param_1[0x3d8] == 0) {
      FUN_00a9e290(&DAT_01641bd4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 6;
    }
    if (((fStack_5c * 1.15 < (float)param_1[0x249]) && (0.0 < fStack_5c)) &&
       (iVar5 = FUN_00a94ce0(0), iVar5 != 0)) {
      FUN_00a9e290(&DAT_01641bcc,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[0x187] = 3;
      iVar5 = FUN_00932720();
      if ((iVar5 == 0x210) && (param_1[0x1d9] != 0)) {
        FUN_008e0ae0(0);
      }
    }
    break;
  case 3:
    local_60 = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar7 = &fStack_44;
    FUN_00a92f90(pfVar7);
    FUN_0044fd10(pfVar7);
    fStack_64 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) *
                (float)param_1[0x244];
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      iVar5 = FUN_00a8c760(10);
      if (iVar5 == 0) {
        iStack_54 = 1;
      }
      else if (param_1[0x3d9] != 0) {
        fStack_50 = (float)param_1[0x14];
        iStack_4c = param_1[0x15];
        fStack_48 = (float)param_1[0x16];
        fVar6 = (float10)FUN_00a5e410(fStack_50,iStack_4c,fStack_48,&fStack_50);
        param_1[0x249] = (int)(float)fVar6;
      }
    }
    else {
      iVar5 = FUN_00932720();
      if ((iVar5 == 0x210) && (param_1[0x1d9] != 0)) {
        FUN_008e0ae0(1);
      }
      FUN_00a9e290(&DAT_0163b5f4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x249] < fStack_5c * 1.05) {
      FUN_00a9e290(&DAT_01641be4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
    }
    if (param_1[0x3d8] == 0) {
      FUN_00a9e290(&DAT_01641bc4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 5;
    }
    break;
  case 5:
    local_60 = 0;
    FUN_00a96030(0,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar7 = &fStack_44;
    FUN_00a92f90(pfVar7);
    FUN_0044fd10(pfVar7);
    fStack_64 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) *
                (float)param_1[0x244];
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a9e290(&DAT_01641bd4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 6;
    }
    break;
  case 6:
    local_60 = 0;
    FUN_00a96030(0,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar7 = &fStack_44;
    FUN_00a92f90(pfVar7);
    FUN_0044fd10(pfVar7);
    fStack_64 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) *
                (float)param_1[0x244];
  }
  param_1[0x3d9] = iStack_54;
  if ((param_1[0x187] != 7) && (iStack_54 == 0)) {
    fVar6 = (float10)FUN_00a581b0(&fStack_44,local_58 * fStack_64,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar6;
    FUN_00a585a0(&fStack_50,local_58 * fStack_64,(float)fVar6);
    fVar1 = (float)param_1[0x25];
    fVar6 = (float10)fpatan((float10)fStack_50,(float10)fStack_48);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = (int)fStack_44;
    param_1[0x16] = (int)fStack_3c;
    iVar5 = FUN_00a54a60(param_1[0x249]);
    if (iVar5 != 0) {
      if (param_1[0x128] == 3) {
        FUN_00a8caf0(2,0,0,0);
        return;
      }
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x187] = 7;
      (*pcVar2)();
      param_1[0x139] = 1;
      FUN_00a805f0();
    }
  }
  iVar5 = param_1[0x2a1];
  uStack_24 = *(undefined4 *)(iVar5 + 0x40);
  uStack_20 = *(undefined4 *)(iVar5 + 0x44);
  uStack_1c = *(undefined4 *)(iVar5 + 0x48);
  uStack_18 = *(undefined4 *)(iVar5 + 0x4c);
  FUN_00a82640();
  FUN_00a83330(&uStack_24,local_60);
  return;
}

