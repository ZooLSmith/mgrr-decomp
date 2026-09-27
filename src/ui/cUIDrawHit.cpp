// src/ui/cUIDrawHit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3ED0..00D0CAB0, 6 functions

#include "types.h"

// 00CB3ED0  cUIDrawHit::vf08  size=6  [class]
undefined4 cUIDrawHit::vf08(void)

{
  return 9;
}

// 00CB3EE0  cUIDrawHit::vf04  size=31  [class]
void __fastcall cUIDrawHit::vf04(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00CB3F00  FUN_00cb3f00  size=63  [between]
undefined4 __thiscall FUN_00cb3f00(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00dd3500(0x20,param_2);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  FID_conflict__memcpy(*(void **)(param_1 + 4),param_3,0x20);
  return 1;
}

// 00CB3F40  cUIDrawHit::vf14  size=3  [class]
void cUIDrawHit::vf14(void)

{
  return;
}

// 00CE78A0  cUIDrawHit::vf00  size=67  [class]
undefined4 * __thiscall cUIDrawHit::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    FUN_00dd4920(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D0CAB0  cUIDrawHit::cUIDrawHit  size=1530  [class]
undefined4 __thiscall cUIDrawHit::cUIDrawHit(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int local_c;
  uint local_8;
  
  iVar4 = FUN_00dd29b0(*param_1 << 10,0x20,0,0);
  *(int *)(param_3 + 0x7c) = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  *(uint *)(param_3 + 0x80) = *param_1;
  uVar5 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)(param_3 + 0x7c) + 0x3f0 + iVar4) = 0;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x400;
    } while (uVar5 < *param_1);
  }
  if ((param_1[4] == 0) || (iVar4 = param_1[4] + (int)param_1, iVar4 == 0)) {
    return 0;
  }
  local_8 = 0;
  if (*(int *)(param_3 + 0x80) != 0) {
    do {
      puVar10 = (undefined4 *)(local_8 * 0x1b0 + iVar4);
      puVar11 = (undefined4 *)(local_8 * 0x400 + *(int *)(param_3 + 0x7c));
      puVar11[0xfb] = 0x10100;
      puVar11[0xf4] = 0;
      puVar11[0xf5] = 0xbf800000;
      puVar11[0xf6] = 0;
      puVar11[0xf7] = 0;
      puVar11[0xf9] = puVar10[0x16];
      puVar11[0xfa] = puVar10[0x17];
      puVar11[0xff] = 0xffffffff;
      puVar11[0xec] = puVar10[0x13];
      puVar11[0xed] = 0;
      uVar1 = puVar10[10];
      uVar2 = puVar10[0xb];
      uVar3 = puVar10[0xc];
      puVar11[0xc] = puVar10[9];
      puVar11[0xd] = uVar1;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar3;
      uVar1 = puVar10[0xe];
      uVar2 = puVar10[0xf];
      uVar3 = puVar10[0x10];
      puVar11[0x10] = puVar10[0xd];
      puVar11[0x11] = uVar1;
      puVar11[0x12] = uVar2;
      puVar11[0x13] = uVar3;
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      *puVar11 = *puVar10;
      puVar11[1] = uVar1;
      puVar11[2] = uVar2;
      uVar1 = puVar10[4];
      uVar2 = puVar10[5];
      puVar11[8] = puVar10[3];
      puVar11[9] = uVar1;
      puVar11[10] = uVar2;
      uVar1 = puVar10[7];
      uVar2 = puVar10[8];
      puVar11[4] = puVar10[6];
      puVar11[5] = uVar1;
      puVar11[6] = uVar2;
      puVar7 = puVar11;
      puVar12 = puVar11 + 0x14;
      for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11[0xd8] = 0;
      puVar11[0xd9] = 0;
      puVar11[0xda] = 0;
      puVar11[0xe0] = 0;
      puVar11[0xe1] = 0;
      puVar11[0xe2] = 0;
      puVar11[0xdc] = 0x3f800000;
      puVar11[0xdd] = 0x3f800000;
      puVar11[0xde] = 0x3f800000;
      puVar11[0xe4] = 0x3f800000;
      puVar11[0xe5] = 0x3f800000;
      puVar11[0xe6] = 0x3f800000;
      puVar11[0xe7] = 0x3f800000;
      puVar11[0xe8] = 0x3f800000;
      puVar11[0xe9] = 0x3f800000;
      puVar11[0xea] = 0x3f800000;
      puVar11[0xeb] = 0x3f800000;
      puVar11[0xfc] = 0;
      iVar9 = puVar10[0x68];
      if (iVar9 == 0) goto switchD_00d0ccbb_caseD_6;
      switch(puVar10[100]) {
      case 0:
        puVar7 = (undefined4 *)FUN_00dd3500(0x1b0,param_2);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
LAB_00d0ccff:
          FUN_00dd5650(&DAT_016b9ed8);
        }
        else {
          *puVar7 = cUIDrawLocator::vftable;
          cUICtrl::cUICtrl();
          if (iVar9 + (int)param_1 == 0) goto LAB_00d0ccff;
          FUN_00ce5350(iVar9 + (int)param_1);
        }
        iVar9 = param_3;
        if (*(int *)(param_3 + 0x150) == 0) {
          uVar13 = FUN_00cc88d0(puVar7 + 4);
          iVar9 = (int)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) goto LAB_00d0cd2a;
        }
        else {
LAB_00d0cd2a:
          *(undefined4 *)(iVar9 + 0x150) = 1;
        }
        puVar11[0xfc] = puVar7;
        goto switchD_00d0ccbb_caseD_6;
      case 1:
        iVar6 = FUN_00dd3500(0x88,param_2);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
LAB_00d0cd7c:
          puVar14 = &DAT_016b9eb8;
          break;
        }
        puVar7 = (undefined4 *)cUIDrawImage::cUIDrawImage();
        if ((puVar7 == (undefined4 *)0x0) || (iVar9 + (int)param_1 == 0)) goto LAB_00d0cd7c;
        FUN_00cf9b00(iVar9 + (int)param_1);
        goto LAB_00d0cf2d;
      case 2:
        iVar6 = FUN_00dd3500(0x58,param_2);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)cUIDraw9Grid::cUIDraw9Grid();
          if ((puVar7 != (undefined4 *)0x0) && (iVar9 + (int)param_1 != 0)) {
            FUN_00cfaf70(iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9e98;
        break;
      case 3:
        iVar6 = FUN_00dd3500(0x1cc,param_2);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)cUIDrawMessage::cUIDrawMessage();
          if ((puVar7 != (undefined4 *)0x0) && (iVar9 + (int)param_1 != 0)) {
            FUN_00ce66f0(iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9e78;
        break;
      case 4:
        iVar6 = FUN_00dd3500(0x1000,param_2);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)cUIDrawString::cUIDrawString();
          if ((puVar7 != (undefined4 *)0x0) && (iVar9 + (int)param_1 != 0)) {
            FUN_00ccf210(iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9e58;
        break;
      case 5:
        puVar7 = (undefined4 *)FUN_00dd3500(0x20,param_2);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = cUIDrawMask::vftable;
          if (iVar9 + (int)param_1 != 0) {
            FUN_00cb3d40(iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9e38;
        break;
      default:
        goto switchD_00d0ccbb_caseD_6;
      case 8:
        iVar6 = FUN_00dd3500(0x5c,param_2);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)cUIDraw3Grid::cUIDraw3Grid();
          if ((puVar7 != (undefined4 *)0x0) && (iVar9 + (int)param_1 != 0)) {
            FUN_00cfb800(iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9e18;
        break;
      case 9:
        puVar7 = (undefined4 *)FUN_00dd3500(0x1c,param_2);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = vftable;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[4] = 0xffffffff;
          puVar7[5] = 0xffffffff;
          puVar7[6] = 0xffffffff;
          if (iVar9 + (int)param_1 != 0) {
            FUN_00cb3f00(param_2,iVar9 + (int)param_1);
            goto LAB_00d0cf2d;
          }
        }
        puVar14 = &DAT_016b9df8;
      }
      FUN_00dd5650(puVar14);
LAB_00d0cf2d:
      puVar11[0xfc] = puVar7;
switchD_00d0ccbb_caseD_6:
      uVar5 = 0;
      puVar11[0xfd] = 0;
      puVar11[0xfe] = 0;
      iVar9 = puVar10[0x66];
      if (iVar9 != 0) {
        if (iVar9 == 0x1f5) {
          *(undefined4 *)(param_3 + 0x150) = 1;
LAB_00d0cf7d:
          puVar11[0xfe] = 1;
        }
        else if (iVar9 == 0x1f6) {
          *(undefined4 *)(param_3 + 0x150) = 1;
          goto LAB_00d0cf7d;
        }
        if (puVar10[0x69] == 0) {
          local_c = 0;
        }
        else {
          local_c = puVar10[0x69] + (int)param_1;
        }
        iVar9 = puVar10[0x66];
        piVar8 = (int *)0x0;
        if (DAT_01dc2a90 != 0) {
          do {
            if (((&DAT_018b5cb8)[uVar5 * 2] == iVar9) &&
               (piVar8 = (int *)(*(code *)(&PTR_cUIEx0001_018b5cbc)[uVar5 * 2])(),
               piVar8 != (int *)0x0)) {
              piVar8[1] = iVar9;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < DAT_01dc2a90);
        }
        puVar11[0xfd] = piVar8;
        if ((piVar8 != (int *)0x0) && (local_c != 0)) {
          (**(code **)(*piVar8 + 8))(local_c,param_2);
        }
      }
      uVar5 = 0;
      puVar11 = puVar11 + 0x2a;
      puVar7 = puVar10 + 0x26;
      do {
        local_c._0_1_ = 0;
        switch(uVar5) {
        case 0:
        case 1:
        case 2:
          local_c._0_1_ = (undefined1)puVar10[0x1a];
          break;
        case 3:
        case 4:
        case 5:
          local_c._0_1_ = (undefined1)puVar10[0x1d];
          break;
        case 6:
        case 7:
          local_c._0_1_ = (undefined1)puVar10[0x20];
          break;
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
          local_c._0_1_ = (undefined1)puVar10[0x23];
        }
        FUN_00cab9f0(puVar11 + -2,puVar7[-2],puVar7[-1],*puVar7,*(undefined1 *)(puVar7 + 1));
        *(undefined1 *)puVar11 = (undefined1)local_c;
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 4;
        puVar11 = puVar11 + 8;
      } while (uVar5 < 0x10);
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_3 + 0x80));
  }
  *(uint **)(param_3 + 0x78) = param_1;
  return 1;
}

