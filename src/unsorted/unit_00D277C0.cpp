// src/unsorted/unit_00D277C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D277C0..00D277C0, 1 functions

#include "types.h"

// 00D277C0  FUN_00d277c0  size=2428  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d277c0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar13;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  undefined8 uVar14;
  undefined4 uVar15;
  char local_5;
  float local_4;
  
  if (*(char *)(param_1 + 0x245) == '\0') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x244)) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c0) = DAT_01b76140;
    *(undefined4 *)(param_1 + 0x2c4) = DAT_01b7614c;
    *(undefined4 *)(param_1 + 0x2cc) = DAT_01b76150;
    *(undefined4 *)(param_1 + 0x2d0) = DAT_01b7616c;
    *(undefined4 *)(param_1 + 0x2c8) = DAT_01b76154;
    *(undefined4 *)(param_1 + 0x2d4) = DAT_01b761ec;
    iVar12 = FUN_009c5530(&DAT_01b6efe0);
    iVar3 = FUN_009c4bf0();
    cXmlBinary::cXmlBinary_82(iVar12);
    if ((*(char *)(param_1 + 0x246) != '\0') && (-1 < iVar12)) {
      DAT_01b76194 = *(int *)(param_1 + 0x2d8);
      puVar8 = &DAT_01b76140;
      puVar10 = &DAT_01b759c0 + iVar12 * 0x30;
      for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar3 = iVar3 + iVar12 * 5;
      if ((*(float *)(&DAT_01b6f3e0 + iVar3 * 0xc0) == 0.0) ||
         (DAT_01b76194 < (int)(&DAT_01b6f434)[iVar3 * 0x30])) {
        pfVar9 = (float *)&DAT_01b76140;
        pfVar11 = (float *)(&DAT_01b6f3e0 + iVar3 * 0xc0);
        for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
        _DAT_01b76388 = _DAT_01b76388 | 1 << ((byte)iVar12 & 0x1f);
      }
      (&DAT_01b762c0)[iVar3] = 1;
    }
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
    return;
  case 1:
    if (*(int *)(param_1 + 0x24c) != 9) {
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x218),0xc2080000);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x21c),0xc2080000);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x220),0xc2080000);
    }
    local_5 = '\0';
    if (*(char *)(param_1 + 0x246) == '\0') {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x228),1);
      cVar7 = '\0';
      do {
        uVar14 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x144 + cVar7 * 4));
        if ((int)uVar14 != 0) {
          *(float *)((int)uVar14 + 0xd0) = (float)extraout_ST0;
        }
        if ((*(int *)(param_1 + 0x24c) == 9) || (cVar7 != '\x05')) {
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x118 + (int)((ulonglong)uVar14 >> 0x20) * 4),1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x15c + extraout_EDX * 4),1);
          uVar4 = *(undefined4 *)(param_1 + 0x174 + extraout_EDX_00 * 4);
          uVar15 = 1;
        }
        else {
          FUN_00cb2310(*(undefined4 *)(param_1 + 300),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),0);
          uVar4 = *(undefined4 *)(param_1 + 0x188);
          uVar15 = 0;
        }
        FUN_00cb2310(uVar4,uVar15);
        cVar7 = cVar7 + '\x01';
      } while (cVar7 < '\x06');
LAB_00d27b22:
      *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
      *(float *)(param_1 + 0x32c) =
           (*(float *)(param_1 + 0x2c0) - *(float *)(param_1 + 0x308)) * 0.1;
      *(float *)(param_1 + 0x330) =
           ((float)*(int *)(param_1 + 0x2c4) - *(float *)(param_1 + 0x30c)) * 0.1;
      *(float *)(param_1 + 0x334) =
           ((float)*(int *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x310)) * 0.1;
      *(float *)(param_1 + 0x338) =
           ((float)*(int *)(param_1 + 0x2cc) - *(float *)(param_1 + 0x314)) * 0.1;
      *(float *)(param_1 + 0x33c) =
           ((float)*(int *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x318)) * 0.1;
      *(float *)(param_1 + 0x340) =
           ((float)*(int *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x31c)) * 0.1;
    }
    else {
      cVar7 = '\0';
      do {
        iVar12 = (int)cVar7;
        iVar3 = *(int *)(param_1 + 0x250 + iVar12 * 4);
        if (iVar3 == 0x10) {
          if ((*(int *)(param_1 + 0x24c) == 9) || (cVar7 != '\x05')) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x118 + iVar12 * 4),1);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x15c + iVar12 * 4),1);
            uVar4 = *(undefined4 *)(param_1 + 0x174 + iVar12 * 4);
            uVar15 = 1;
          }
          else {
            FUN_00cb2310(*(undefined4 *)(param_1 + 300),0);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),0);
            uVar4 = *(undefined4 *)(param_1 + 0x188);
            uVar15 = 0;
          }
          FUN_00cb2310(uVar4,uVar15);
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x15c + iVar12 * 4),1,3);
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x174 + iVar12 * 4),1,3);
        }
        else if (((iVar3 < 0x11) &&
                 (iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x144 + iVar12 * 4)), iVar3 != 0))
                && (fVar13 = (float10)*(float *)(param_1 + 0x29c + iVar12 * 4) +
                             (float10)*(float *)(iVar3 + 0xd0),
                   *(float *)(iVar3 + 0xd0) = (float)fVar13, extraout_ST0_00 < fVar13)) {
          local_5 = local_5 + '\x01';
          *(float *)(iVar3 + 0xd0) = (float)extraout_ST0_00;
        }
        piVar1 = (int *)(param_1 + 0x250 + iVar12 * 4);
        *piVar1 = *piVar1 + -1;
        cVar7 = cVar7 + '\x01';
      } while (cVar7 < '\x06');
      if ('\x05' < local_5) goto LAB_00d27b22;
    }
    if (*(char *)(param_1 + 0x246) != '\0') {
      return;
    }
    break;
  case 2:
    break;
  case 3:
    goto LAB_00d27d3c;
  case 4:
    goto LAB_00d27dcc;
  case 5:
    goto LAB_00d27e5c;
  case 6:
    goto LAB_00d27eec;
  case 7:
    goto switchD_00d277f4_caseD_7;
  case 8:
    goto LAB_00d28094;
  case 9:
    if (*(int *)(param_1 + 0x248) != 0) {
      return;
    }
    uVar4 = FUN_00cdb440();
    *(undefined4 *)(param_1 + 0x248) = uVar4;
    return;
  default:
    return;
  }
  iVar3 = FUN_00cdb440();
  if ((*(char *)(param_1 + 0x246) == '\0') || (iVar3 != 0)) {
    uVar4 = 0;
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
    local_4 = 0.0;
    if (*(int *)(param_1 + 0x24c) != 9) {
      uVar4 = 0xc2080000;
      local_4 = -34.0;
    }
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x130),uVar4);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x134),local_4);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x138),local_4);
    if (*(int *)(param_1 + 0x2f4) == 0) {
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x134));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = *(float *)(iVar3 + 0xc4) - 34.0;
      }
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x21c));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = (float)((float10)*(float *)(iVar3 + 0xc4) - extraout_ST0_01);
      }
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x138));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = (float)((float10)*(float *)(iVar3 + 0xc4) - extraout_ST0_02);
      }
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x220));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = (float)((float10)*(float *)(iVar3 + 0xc4) - extraout_ST0_03);
      }
    }
    if (*(int *)(param_1 + 0x2f8) == 0) {
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x138));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = (float)((float10)*(float *)(iVar3 + 0xc4) - extraout_ST0_04);
      }
      iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x220));
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0xc4) = (float)((float10)*(float *)(iVar3 + 0xc4) - extraout_ST0_05);
      }
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    return;
  }
LAB_00d27d3c:
  if (*(int *)(param_1 + 0x2f4) == 0) {
LAB_00d27db5:
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
  }
  else {
    if ((*(int *)(param_1 + 0x268) == 0) && (*(char *)(param_1 + 0x246) != '\0')) {
      FUN_00e5e050("core_se_sys_mission_bonus",0);
    }
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
    if (*(char *)(param_1 + 0x246) == '\0') {
      *(undefined4 *)(param_1 + 0x268) = 0x15;
    }
    uVar6 = *(uint *)(param_1 + 0x268) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x130),uVar6);
    if (0xc < *(int *)(param_1 + 0x268)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x130),1);
      goto LAB_00d27db5;
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    return;
  }
LAB_00d27dcc:
  if (*(int *)(param_1 + 0x2f8) == 0) {
LAB_00d27e45:
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
  }
  else {
    if ((*(int *)(param_1 + 0x26c) == 0) && (*(char *)(param_1 + 0x246) != '\0')) {
      FUN_00e5e050("core_se_sys_mission_bonus",0);
    }
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
    if (*(char *)(param_1 + 0x246) == '\0') {
      *(undefined4 *)(param_1 + 0x26c) = 0x15;
    }
    uVar6 = *(uint *)(param_1 + 0x26c) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x134),uVar6);
    if (0xc < *(int *)(param_1 + 0x26c)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x134),1);
      goto LAB_00d27e45;
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    return;
  }
LAB_00d27e5c:
  if (*(int *)(param_1 + 0x2fc) == 0) {
LAB_00d27ed5:
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
  }
  else {
    if ((*(int *)(param_1 + 0x270) == 0) && (*(char *)(param_1 + 0x246) != '\0')) {
      FUN_00e5e050("core_se_sys_mission_bonus",0);
    }
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    if (*(char *)(param_1 + 0x246) == '\0') {
      *(undefined4 *)(param_1 + 0x260) = 0x15;
    }
    uVar6 = *(uint *)(param_1 + 0x260) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),uVar6);
    if (0xc < *(int *)(param_1 + 0x260)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
      goto LAB_00d27ed5;
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    return;
  }
LAB_00d27eec:
  iVar12 = 0;
  puVar8 = (undefined4 *)(param_1 + 0x274);
  iVar3 = 9;
  do {
    *puVar8 = 0;
    puVar8[-9] = 0;
    FUN_00cdb210(iVar12);
    iVar12 = iVar12 + 1;
    puVar8 = puVar8 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
  if (*(char *)(param_1 + 0x246) != '\0') {
    return;
  }
switchD_00d277f4_caseD_7:
  if (*(char *)(param_1 + 0x246) == '\0') {
    fVar2 = 0.0;
    if (*(int *)(param_1 + 0x24c) != 9) {
      fVar2 = -34.0;
    }
    if (*(int *)(param_1 + 0x2f4) == 0) {
      fVar2 = fVar2 - 34.0;
    }
    if (*(int *)(param_1 + 0x2f8) == 0) {
      fVar2 = fVar2 - 34.0;
    }
    if (*(int *)(param_1 + 0x2fc) == 0) {
      fVar2 = fVar2 - 34.0;
    }
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x140),fVar2 - 45.0);
LAB_00d2807d:
    *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
  }
  else {
    iVar3 = FUN_00d19580();
    if (iVar3 != 0) {
      fVar2 = 0.0;
      local_4 = 0.0;
      *(undefined4 *)(param_1 + 0x298) = 0;
      if (*(int *)(param_1 + 0x24c) != 9) {
        fVar2 = -34.0;
        local_4 = -34.0;
      }
      if (*(int *)(param_1 + 0x2f4) == 0) {
        fVar2 = fVar2 - 34.0;
        local_4 = fVar2;
      }
      if (*(int *)(param_1 + 0x2f8) == 0) {
        fVar2 = fVar2 - 34.0;
        local_4 = fVar2;
      }
      if (*(int *)(param_1 + 0x2fc) == 0) {
        fVar2 = fVar2 - 34.0;
        local_4 = fVar2;
      }
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x13c),fVar2 + 45.0);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x140),local_4 - 45.0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x140),1);
      FUN_00d074b0(*(undefined4 *)(param_1 + 0x2d8));
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x22c),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x234),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x230),6);
      goto LAB_00d2807d;
    }
  }
  if (*(char *)(param_1 + 0x246) == '\0') {
LAB_00d28094:
    if (*(char *)(param_1 + 0x246) == '\0') {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x140),1);
      FUN_00d074b0(*(undefined4 *)(param_1 + 0x2d8));
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x22c),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x234),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x230),6);
      *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
      return;
    }
    iVar3 = FUN_00d19bd0();
    if (iVar3 != 0) {
      *(char *)(param_1 + 0x244) = *(char *)(param_1 + 0x244) + '\x01';
      return;
    }
  }
  return;
}

