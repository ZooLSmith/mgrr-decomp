// src/unsorted/unit_00CDB210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDB210..00CDB920, 3 functions

#include "types.h"

// 00CDB210  FUN_00cdb210  size=521  [run]
void __thiscall FUN_00cdb210(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [32];
  char local_20 [32];
  
  switch(param_2) {
  case 0:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2dc),local_40,0x20);
    break;
  case 1:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e0),local_40,0x20);
    break;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x2e4);
    goto LAB_00cdb332;
  case 3:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e8),local_40,0x20);
    break;
  case 4:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2ec),local_40,0x20);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x2f0);
    goto LAB_00cdb332;
  case 6:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f4),local_40,0x20);
    break;
  case 7:
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f8),local_40,0x20);
    break;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0x2fc);
LAB_00cdb332:
    FUN_00ca84a0(uVar2,local_40,0x20);
    break;
  default:
    goto switchD_00cdb225_default;
  }
  _sprintf_s(local_20,0x20,"+%s",local_40);
switchD_00cdb225_default:
  iVar3 = *(int *)(param_1 + 0x18 + (param_2 + 1) * 0x1c);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x23c) < *(uint *)(iVar3 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x23c) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar1,local_20);
  }
  iVar3 = *(int *)(param_1 + (param_2 + 1) * 0x1c + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x240) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x240) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar1,local_20);
  }
  FUN_00cce0e0(*(undefined4 *)(param_1 + 0x23c),1,3);
  FUN_00cce0e0(*(undefined4 *)(param_1 + 0x240),1,3);
  return;
}

// 00CDB440  FUN_00cdb440  size=1212  [run]
int __fastcall FUN_00cdb440(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  float *pfVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 fVar10;
  int local_cc;
  int local_c8;
  char local_c0;
  undefined1 local_bf [31];
  char local_a0 [32];
  char local_80 [32];
  char local_60 [32];
  char local_40 [32];
  undefined1 local_20 [32];
  
  fVar10 = (float10)0;
  iVar5 = 0;
  local_cc = 0;
  pfVar9 = (float *)(param_1 + 0x32c);
  iVar7 = 6;
  do {
    fVar2 = *pfVar9 + pfVar9[-9];
    pfVar9[-9] = fVar2;
    switch(iVar5) {
    case 0:
      if ((float10)*pfVar9 <= fVar10) {
        if (fVar2 < *(float *)(param_1 + 0x2c0)) {
          local_cc = 1;
        }
      }
      else if (*(float *)(param_1 + 0x2c0) < fVar2) {
        local_cc = 1;
      }
      break;
    case 1:
      if ((float10)*pfVar9 <= fVar10) {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_00;
        if (iVar3 < *(int *)(param_1 + 0x2c4)) {
          local_cc = 1;
        }
      }
      else {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0;
        if (*(int *)(param_1 + 0x2c4) < iVar3) {
          local_cc = 1;
        }
      }
      break;
    case 2:
      if ((float10)*pfVar9 <= fVar10) {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_02;
        if (iVar3 < *(int *)(param_1 + 0x2c8)) {
          local_cc = 1;
        }
      }
      else {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_01;
        if (*(int *)(param_1 + 0x2c8) < iVar3) {
          local_cc = 1;
        }
      }
      break;
    case 3:
      if ((float10)*pfVar9 <= fVar10) {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_04;
        if (iVar3 < *(int *)(param_1 + 0x2cc)) {
          local_cc = 1;
        }
      }
      else {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_03;
        if (*(int *)(param_1 + 0x2cc) < iVar3) {
          local_cc = 1;
        }
      }
      break;
    case 4:
      if ((float10)*pfVar9 <= fVar10) {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_06;
        if (iVar3 < *(int *)(param_1 + 0x2d0)) {
          local_cc = 1;
        }
      }
      else {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_05;
        if (*(int *)(param_1 + 0x2d0) < iVar3) {
          local_cc = 1;
        }
      }
      break;
    case 5:
      if ((float10)*pfVar9 <= fVar10) {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_08;
        if (iVar3 < *(int *)(param_1 + 0x2d4)) {
          local_cc = 1;
        }
      }
      else {
        iVar3 = FUN_00fdbc60();
        fVar10 = extraout_ST0_07;
        if (*(int *)(param_1 + 0x2d4) < iVar3) {
          local_cc = 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    pfVar9 = pfVar9 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (local_cc != 0) {
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x2c0);
    *(float *)(param_1 + 0x30c) = (float)*(int *)(param_1 + 0x2c4);
    *(float *)(param_1 + 0x310) = (float)*(int *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x314) = (float)*(int *)(param_1 + 0x2cc);
    *(float *)(param_1 + 0x318) = (float)*(int *)(param_1 + 0x2d0);
    *(float *)(param_1 + 0x31c) = (float)*(int *)(param_1 + 0x2d4);
  }
  iVar5 = FUN_00fdbc60();
  iVar7 = iVar5 / 0xe10;
  if (999 < iVar7) {
    iVar7 = 999;
  }
  iVar3 = FUN_00fdbc60();
  if (999 < iVar3) {
    iVar3 = 0;
  }
  local_c0 = '\0';
  _memset(local_bf,0,0xbf);
  _sprintf_s(&local_c0,0x20,"%02d:%02d:%02d.%02d",iVar7,(iVar5 % 0xe10) / 0x3c,
             (iVar5 % 0xe10) % 0x3c,iVar3);
  uVar4 = FUN_00fdbc60(local_a0,0x20);
  FUN_00ca84a0(uVar4);
  uVar4 = FUN_00fdbc60(local_80,0x20);
  FUN_00ca84a0(uVar4);
  uVar4 = FUN_00fdbc60(local_60,0x20);
  FUN_00ca84a0(uVar4);
  uVar4 = FUN_00fdbc60(local_40,0x20);
  FUN_00ca84a0(uVar4);
  uVar4 = FUN_00fdbc60(local_20,0x20);
  FUN_00ca84a0(uVar4);
  if (*(int *)(param_1 + 0x24c) == 0) {
    _sprintf_s(local_a0,0x20,"-");
    _sprintf_s(local_80,0x20,"-");
    _sprintf_s(local_60,0x20,"-");
  }
  iVar7 = FUN_00fdbc60();
  if (iVar7 == -1) {
    _sprintf_s(local_80,0x20,"-");
  }
  iVar7 = FUN_00fdbc60();
  if (iVar7 == -1) {
    _sprintf_s(local_60,0x20,"-");
  }
  iVar7 = FUN_00fdbc60();
  if (iVar7 == -1) {
    _sprintf_s(local_40,0x20,"-");
  }
  pcVar8 = &local_c0;
  puVar6 = (uint *)(param_1 + 0x1a4);
  local_c8 = 6;
  do {
    iVar7 = *(int *)(param_1 + 0x18);
    if ((((iVar7 != 0) && (puVar6[-6] < *(uint *)(iVar7 + 0x80))) &&
        (piVar1 = *(int **)(puVar6[-6] * 0x400 + 0x3f0 + *(int *)(iVar7 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)) {
      FUN_00cb3cc0(piVar1,pcVar8);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*puVar6 < *(uint *)(iVar7 + 0x80))) &&
       ((piVar1 = *(int **)(*puVar6 * 0x400 + 0x3f0 + *(int *)(iVar7 + 0x7c)), piVar1 != (int *)0x0
        && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)))) {
      FUN_00cb3cc0(piVar1,pcVar8);
    }
    puVar6 = puVar6 + 1;
    pcVar8 = pcVar8 + 0x20;
    local_c8 = local_c8 + -1;
  } while (local_c8 != 0);
  return local_cc;
}

// 00CDB920  FUN_00cdb920  size=1016  [run]
void __fastcall FUN_00cdb920(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  uVar1 = DAT_018b9148 & 0xf00;
  if (uVar1 < 0x401) {
    if (uVar1 == 0x400) {
      if (DAT_01b73b60 == '\0') {
        DAT_01b73b60 = '\x01';
        iVar2 = *(int *)(param_1 + 0x60c);
        if ((*(uint *)(iVar2 + 0x38) & 0x200000) == 0) {
          *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x200000;
        }
      }
      if (DAT_01b738e0 != '\0') goto LAB_00cdbb20;
      DAT_01b738e0 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 8) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 8;
    }
    else if (uVar1 == 0x100) {
      if (DAT_01b73b20 != '\0') goto LAB_00cdbb20;
      DAT_01b73b20 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x80000) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 0x80000;
    }
    else if (uVar1 == 0x200) {
      if (DAT_01b73920 != '\0') goto LAB_00cdbb20;
      DAT_01b73920 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x200) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 0x200;
    }
    else {
      if (uVar1 != 0x300) goto LAB_00cdba6c;
      if (DAT_01b73b40 != '\0') goto LAB_00cdbb20;
      DAT_01b73b40 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x100000) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 0x100000;
    }
  }
  else {
    if ((uVar1 == 0x500) || (uVar1 == 0x600)) goto LAB_00cdbb20;
    if (uVar1 == 0xa00) {
      iVar2 = FUN_009c4bf0();
      if ((iVar2 < 3) || (DAT_01b73900 != '\0')) goto LAB_00cdbb20;
      DAT_01b73900 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x100) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 0x100;
    }
    else {
LAB_00cdba6c:
      if ((uVar1 == 0xc00) || (uVar1 == 0xd00)) goto LAB_00cdbb20;
      iVar2 = FUN_009c4bf0();
      if ((1 < iVar2) && (DAT_01b73940 == '\0')) {
        DAT_01b73940 = '\x01';
        iVar2 = *(int *)(param_1 + 0x60c);
        if ((*(uint *)(iVar2 + 0x38) & 0x400) == 0) {
          *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x400;
        }
      }
      if (DAT_01b73aa0 != '\0') goto LAB_00cdbb20;
      DAT_01b73aa0 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x20000) != 0) goto LAB_00cdbb20;
      uVar1 = *(uint *)(iVar2 + 0x38) | 0x20000;
    }
  }
  *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
  *(uint *)(iVar2 + 0x38) = uVar1;
LAB_00cdbb20:
  iVar4 = 0;
  bVar3 = 0;
  iVar2 = 0x20;
  do {
    if ((DAT_01b6f3b0 & 1 << (bVar3 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    bVar3 = bVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((0x13 < iVar4) && (DAT_01b73a20 == '\0')) {
    DAT_01b73a20 = '\x01';
    iVar2 = *(int *)(param_1 + 0x60c);
    if ((*(uint *)(iVar2 + 0x38) & 0x2000) == 0) {
      *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x2000;
    }
  }
  if ((9 < iVar4) && (DAT_01b73ac0 == '\0')) {
    DAT_01b73ac0 = '\x01';
    iVar2 = *(int *)(param_1 + 0x60c);
    if ((*(uint *)(iVar2 + 0x38) & 0x2000000) == 0) {
      *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x2000000;
    }
  }
  iVar4 = 0;
  bVar3 = 0;
  iVar2 = 0x20;
  do {
    if ((DAT_01b6f3b4 & 1 << (bVar3 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    bVar3 = bVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((iVar4 == 0x1e) && (DAT_01b73a40 == '\0')) {
    DAT_01b73a40 = '\x01';
    iVar2 = *(int *)(param_1 + 0x60c);
    if ((*(uint *)(iVar2 + 0x38) & 0x4000) == 0) {
      *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x4000;
    }
  }
  if ((((DAT_01b70f34 != 0) || (DAT_01b70ff4 != 0)) || (DAT_01b710b4 != 0)) || (DAT_01b71174 != 0))
  {
    if ((9 < iVar4) && (DAT_01b73b80 == '\0')) {
      DAT_01b73b80 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x400000) == 0) {
        *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x400000;
      }
    }
    if ((0x13 < iVar4) && (DAT_01b73ba0 == '\0')) {
      DAT_01b73ba0 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x800000) == 0) {
        *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x800000;
      }
    }
    if ((((DAT_01b70ff4 != 0) || (DAT_01b710b4 != 0)) || (DAT_01b71174 != 0)) &&
       ((0x1d < iVar4 && (DAT_01b73bc0 == '\0')))) {
      DAT_01b73bc0 = '\x01';
      iVar2 = *(int *)(param_1 + 0x60c);
      if ((*(uint *)(iVar2 + 0x38) & 0x1000000) == 0) {
        *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x1000000;
      }
    }
  }
  iVar4 = 0;
  bVar3 = 0;
  iVar2 = 0x20;
  do {
    if ((DAT_01b6f3b8 & 1 << (bVar3 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    bVar3 = bVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((iVar4 == 5) && (DAT_01b73a80 == '\0')) {
    DAT_01b73a80 = '\x01';
    iVar2 = *(int *)(param_1 + 0x60c);
    if ((*(uint *)(iVar2 + 0x38) & 0x10000) == 0) {
      *(char *)(iVar2 + 0x33) = *(char *)(iVar2 + 0x33) + '\x01';
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x10000;
    }
  }
  return;
}

