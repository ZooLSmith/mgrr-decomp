// src/unsorted/unit_009ACA10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009ACA10..009ACA10, 1 functions

#include "mgrr.h"

// 009ACA10  FUN_009aca10  size=3458  [run]
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009aca10(int param_1)

{
  int *piVar1;
  char *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  undefined4 local_fc;
  char local_f4 [32];
  uint local_d4;
  undefined4 local_d0 [51];
  
  cVar7 = *(char *)(param_1 + 0x56);
  switch(cVar7) {
  case '\0':
    if (*(char *)(*(int *)(param_1 + 4) + 0x4ed) != '\x03') goto switchD_009aca38_caseD_9;
    if (*(char *)(param_1 + 0x16) != '\0') {
      iVar8 = FUN_00999fa0();
      if (iVar8 == 2) {
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x4ed) = 10;
        *(undefined1 *)(param_1 + 0x5f) = 1;
      }
      goto switchD_009aca38_caseD_9;
    }
    cVar7 = FUN_00d0d3e0(0x13,0);
    bVar5 = true;
    if ((cVar7 == '\0') &&
       (('\t' < *(char *)(param_1 + 0x5c) || (cVar7 = FUN_00d0d3e0(0x13,1), cVar7 == '\0')))) {
      cVar7 = FUN_00d0d3e0(0x13,2);
      if (((cVar7 != '\0') || (cVar7 = FUN_00d0d3e0(0x13,3), bVar4 = false, cVar7 != '\0')) &&
         (bVar4 = bVar5, *(int *)(param_1 + 0x58) != 1)) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        uVar9 = 1;
LAB_009acae0:
        FUN_00989930(uVar9);
        FUN_00e5e050("core_se_sys_cursor",0);
        bVar4 = bVar5;
      }
    }
    else {
      bVar4 = bVar5;
      if (*(int *)(param_1 + 0x58) != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        uVar9 = 0;
        goto LAB_009acae0;
      }
    }
    cVar7 = FUN_00ce12f0(0);
    if (cVar7 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))(0x36,0,1);
      *(undefined1 *)(param_1 + 0x56) = 0x14;
      FUN_00e5e050("core_se_sys_decide_l",0);
      goto switchD_009aca38_caseD_9;
    }
    cVar7 = FUN_00ce1360(0);
    if ((cVar7 != '\0') || (cVar7 = FUN_00cac960(), cVar7 != '\0')) {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))(0x35,0,1);
      FUN_00e5e050("core_se_sys_cancel",0);
      goto switchD_009aca38_caseD_9;
    }
    cVar7 = FUN_00cac7e0(2,0);
    if (((cVar7 == '\0') && (cVar7 = FUN_00cac7e0(0x20000,0), cVar7 == '\0')) && (!bVar4)) {
      cVar7 = FUN_00cac7e0(1,0);
      if ((cVar7 == '\0') && (cVar7 = FUN_00cac7e0(0x10000,0), cVar7 == '\0')) {
        cVar7 = FUN_00cac7e0(8,0);
        if ((cVar7 == '\0') && (cVar7 = FUN_00cac640(0x40000,0), cVar7 == '\0')) {
          cVar7 = FUN_00cac7e0(4,0);
          if (((cVar7 == '\0') && (cVar7 = FUN_00cac640(0x80000,0), cVar7 == '\0')) &&
             (cVar7 = FUN_00d0d410(0x13,2), cVar7 == '\0')) {
            cVar7 = FUN_00cac640(0x40,0);
            if ((((cVar7 == '\0') && (iVar8 = FUN_00dd93a0(0x58), iVar8 == 0)) ||
                ((iVar8 = FUN_009c5030(0xffffffff,1), iVar8 == 0 &&
                 ((iVar8 = FUN_009c5130(8,0xffffffff), iVar8 == 0 &&
                  (iVar8 = FUN_009c5130(9,0xffffffff), iVar8 == 0)))))) ||
               ('\t' < *(char *)(param_1 + 0x5c))) goto switchD_009aca38_caseD_9;
            if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 4))(1);
              *(undefined4 *)(param_1 + 4) = 0;
            }
            *(undefined4 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 100) = 0;
            goto LAB_009ad74c;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          if (1 < *(int *)(param_1 + 0x58)) {
            *(undefined4 *)(param_1 + 0x58) = 0;
          }
          uVar9 = *(undefined4 *)(param_1 + 0x58);
        }
        else {
          piVar1 = (int *)(param_1 + 0x58);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            *(undefined4 *)(param_1 + 0x58) = 1;
          }
          uVar9 = *(undefined4 *)(param_1 + 0x58);
        }
        FUN_00989930(uVar9);
        FUN_00e5e050("core_se_sys_cursor",0);
        goto switchD_009aca38_caseD_9;
      }
      cVar7 = '\0';
      if (*(int *)(param_1 + 0x58) == 0) {
        pcVar2 = (char *)(param_1 + 0x5c);
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 < '\0') {
          *(undefined1 *)(param_1 + 0x5c) =
               *(undefined1 *)(*(char *)(param_1 + 0x5d) + 0x4e2 + *(int *)(param_1 + 4));
        }
        cVar7 = *(char *)(param_1 + 0x5c);
        FUN_00989ad0((int)cVar7);
        cVar6 = *(char *)(param_1 + 0x5c);
LAB_009acd1e:
        if (cVar6 < '\n') {
          uVar16 = *(undefined1 *)(*(char *)(param_1 + 0x5d) + 0x24 + cVar6 * 5 + param_1);
        }
        else {
          uVar16 = 1;
        }
        FUN_00989270(cVar6,uVar16);
      }
      else if (*(int *)(param_1 + 0x58) == 1) {
        cVar6 = *(char *)(param_1 + 0x5c);
        cVar10 = '\0';
        do {
          pcVar2 = (char *)(param_1 + 0x5d);
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 < '\0') {
            *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(*(int *)(param_1 + 4) + 0x4e7);
          }
          if (cVar6 <= *(char *)(*(char *)(param_1 + 0x5d) + 0x4e2 + *(int *)(param_1 + 4))) {
            cVar7 = *(char *)(param_1 + 0x5d);
            break;
          }
          cVar10 = cVar10 + '\x01';
        } while (cVar10 < '\x05');
        goto LAB_009acd1e;
      }
      FUN_009ab100(*(undefined4 *)(param_1 + 0x58),cVar7);
      FUN_00d192b0((int)*(char *)(param_1 + 0x5c),(int)*(char *)(param_1 + 0x5d));
      FUN_00ce4d70(0xb);
      FUN_00e5e050("core_se_sys_cursor",0);
      goto switchD_009aca38_caseD_9;
    }
    cVar7 = '\0';
    if (*(int *)(param_1 + 0x58) == 0) {
      *(char *)(param_1 + 0x5c) = *(char *)(param_1 + 0x5c) + '\x01';
      if (*(char *)(*(char *)(param_1 + 0x5d) + 0x4e2 + *(int *)(param_1 + 4)) <
          *(char *)(param_1 + 0x5c)) {
        *(undefined1 *)(param_1 + 0x5c) = 0;
      }
      cVar7 = *(char *)(param_1 + 0x5c);
      FUN_00989ad0((int)cVar7);
      cVar6 = *(char *)(param_1 + 0x5c);
      if (cVar6 < '\n') {
        uVar16 = *(undefined1 *)(*(char *)(param_1 + 0x5d) + 0x24 + cVar6 * 5 + param_1);
      }
      else {
        uVar16 = 1;
      }
LAB_009ace6b:
      FUN_00989270(cVar6,uVar16);
    }
    else if (*(int *)(param_1 + 0x58) == 1) {
      cVar6 = *(char *)(param_1 + 0x5c);
      cVar10 = '\0';
      do {
        *(char *)(param_1 + 0x5d) = *(char *)(param_1 + 0x5d) + '\x01';
        if (*(char *)(*(int *)(param_1 + 4) + 0x4e7) < *(char *)(param_1 + 0x5d)) {
          *(undefined1 *)(param_1 + 0x5d) = 0;
        }
        if (cVar6 <= *(char *)(*(char *)(param_1 + 0x5d) + 0x4e2 + *(int *)(param_1 + 4))) {
          cVar7 = *(char *)(param_1 + 0x5d);
          break;
        }
        cVar10 = cVar10 + '\x01';
      } while (cVar10 < '\x05');
      if (cVar6 < '\n') {
        uVar16 = *(undefined1 *)(*(char *)(param_1 + 0x5d) + 0x24 + cVar6 * 5 + param_1);
      }
      else {
        uVar16 = 1;
      }
      goto LAB_009ace6b;
    }
    FUN_009ab290(*(undefined4 *)(param_1 + 0x58),cVar7);
    FUN_00d192b0((int)*(char *)(param_1 + 0x5c),(int)*(char *)(param_1 + 0x5d));
    FUN_00ce4d70(0xb);
    FUN_00e5e050("core_se_sys_cursor",0);
    goto switchD_009aca38_caseD_9;
  case '\x01':
    iVar8 = *(int *)(param_1 + 0x68);
    if (2 < iVar8) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(char *)(param_1 + 0x5c) == '\t') {
          uVar9 = FUN_00d37af0();
          *(undefined4 *)(param_1 + 0x1c) = uVar9;
        }
        if (*(char *)(param_1 + 0x5c) == '\b') {
          uVar9 = FUN_00d37b50();
          *(undefined4 *)(param_1 + 0x1c) = uVar9;
        }
        if (*(int *)(param_1 + 0x1c) == 0) {
          iVar8 = FUN_00d37bb0();
          *(int *)(param_1 + 0x1c) = iVar8;
          if (iVar8 == 0) {
            uVar9 = FUN_00d37c10();
            *(undefined4 *)(param_1 + 0x1c) = uVar9;
          }
        }
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_00989540(3,(int)*(char *)(param_1 + 0x5d));
          if (*(char *)(param_1 + 0x5c) == '\t') {
            FUN_00989540(5,(int)*(char *)(param_1 + 0x5d));
          }
          if (*(char *)(param_1 + 0x5c) == '\b') {
            FUN_00989540(4,(int)*(char *)(param_1 + 0x5d));
          }
          *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x632) = 1;
          FUN_00cc4df0();
        }
      }
      else {
        fVar3 = *(float *)(param_1 + 100) + 0.125;
        *(float *)(param_1 + 100) = fVar3;
        if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
          *(char *)(param_1 + 0x56) = cVar7 + '\x01';
        }
        iVar8 = FUN_00cb2620();
        if (iVar8 == 0) {
          FUN_00cb2600(1);
        }
        FUN_00cb2740(*(undefined4 *)(param_1 + 100));
      }
      goto switchD_009aca38_caseD_9;
    }
    goto LAB_009acfc4;
  case '\x02':
    cVar7 = FUN_00cac640(0x40,0);
    if (((cVar7 == '\0') && (iVar8 = FUN_00dd93a0(0x58), iVar8 == 0)) ||
       (*(char *)(*(int *)(param_1 + 0x1c) + 0x631) == '\0')) goto switchD_009aca38_caseD_9;
    *(undefined4 *)(param_1 + 100) = 0;
    goto LAB_009ad74c;
  case '\x03':
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    goto LAB_009ad74c;
  case '\x04':
    iVar8 = *(int *)(param_1 + 0x68);
    if (2 < iVar8) {
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar8 = FUN_00d37f40();
        *(int *)(param_1 + 0x20) = iVar8;
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0xa32) = 1;
        }
      }
      else {
        fVar3 = *(float *)(param_1 + 100) + 0.125;
        *(float *)(param_1 + 100) = fVar3;
        if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
          *(char *)(param_1 + 0x56) = cVar7 + '\x01';
        }
        iVar8 = FUN_00cb2620();
        if (iVar8 == 0) {
          FUN_00cb2600(1);
        }
        FUN_00cb2740(*(undefined4 *)(param_1 + 100));
      }
      goto switchD_009aca38_caseD_9;
    }
LAB_009acfc4:
    *(int *)(param_1 + 0x68) = iVar8 + 1;
    goto switchD_009aca38_caseD_9;
  case '\x05':
    cVar7 = FUN_00cac640(0x40,0);
    if (((cVar7 == '\0') && (iVar8 = FUN_00dd93a0(0x58), iVar8 == 0)) ||
       (puVar12 = *(undefined4 **)(param_1 + 0x20), *(char *)((int)puVar12 + 0xa31) == '\0'))
    goto switchD_009aca38_caseD_9;
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)(1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    goto LAB_009ad74c;
  case '\x06':
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 < 3) goto LAB_009acfc4;
    if (*(int *)(param_1 + 4) == 0) {
      iVar8 = FUN_0099aa30(*(undefined1 *)(param_1 + 0x5c),*(undefined1 *)(param_1 + 0x5d));
      *(int *)(param_1 + 4) = iVar8;
      *(undefined1 *)(iVar8 + 0x4f0) = 1;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x4ef) = 1;
    }
    goto LAB_009ad74c;
  case '\a':
    cVar7 = *(char *)(param_1 + 0x5d);
    iVar8 = *(int *)(param_1 + 4);
    *(int *)(iVar8 + 0x4f8) = (int)*(char *)(param_1 + 0x5c);
    *(int *)(iVar8 + 0x4fc) = (int)cVar7;
    FUN_0098a1c0();
    FUN_00989930(*(undefined4 *)(param_1 + 0x58));
    FUN_00989cf0(0,*(undefined1 *)(param_1 + 0x5c));
    FUN_00989cf0(1,*(undefined1 *)(param_1 + 0x5d));
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar8 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar8 + 0x528) = 0;
      *(undefined4 *)(iVar8 + 0x4bc) = 0;
      *(undefined4 *)(iVar8 + 0x4c4) = 0;
      FUN_00cb28a0(*(undefined4 *)(iVar8 + 900),
                   *(float *)(iVar8 + 0x508) + *(float *)(iVar8 + 0x504));
      FUN_00ce4ce0(*(undefined4 *)(iVar8 + 0x394),0xc);
      FUN_00ce4ce0(*(undefined4 *)(iVar8 + 0x3b8),0xc);
      puVar12 = (undefined4 *)(iVar8 + 0x3e0);
      iVar14 = 10;
      do {
        FUN_00ce4ce0(*puVar12,0xc);
        puVar12 = puVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      puVar12 = (undefined4 *)(iVar8 + 0x43c);
      iVar8 = 8;
      do {
        FUN_00ce4ce0(*puVar12,0xc);
        puVar12 = puVar12 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar9 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar8 + 0x528) = 0;
      *(undefined4 *)(iVar8 + 0x4bc) = 0;
      *(undefined4 *)(iVar8 + 0x4c4) = 0;
      FUN_00cb28a0(*(undefined4 *)(iVar8 + 900),
                   *(float *)(iVar8 + 0x508) + *(float *)(iVar8 + 0x504));
      uVar9 = 1;
    }
    FUN_0099aa80(1,uVar9,0,0);
    FUN_00989ad0((int)*(char *)(param_1 + 0x5c));
    FUN_00d192b0((int)*(char *)(param_1 + 0x5c),(int)*(char *)(param_1 + 0x5d));
    FUN_0098a320((int)*(char *)(param_1 + 0x5c));
    goto LAB_009ad74c;
  case '\b':
    fVar3 = *(float *)(param_1 + 100) + 0.125;
    *(float *)(param_1 + 100) = fVar3;
    if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x4ef) = 0;
      *(undefined1 *)(param_1 + 0x56) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      iVar8 = FUN_00cb2620();
      if (iVar8 == 0) {
        FUN_00cb2600(1);
      }
      FUN_00cb2740(*(undefined4 *)(param_1 + 100));
    }
  default:
    goto switchD_009aca38_caseD_9;
  case '\x14':
    iVar8 = FUN_00999fa0();
    if (iVar8 == 1) {
      *(undefined1 *)(param_1 + 0x56) = 0;
    }
    else if (iVar8 == 2) {
      if (*(char *)(param_1 + 0x5d) == '\0') {
        (**(code **)(*(int *)(param_1 + 0xc) + 4))(0x28,0,1);
        *(undefined1 *)(param_1 + 0x60) = 1;
        *(undefined1 *)(param_1 + 0x56) = 0x1e;
      }
      else {
        if (*(char *)(param_1 + 0x60) != '\0') {
          (**(code **)(*(int *)(param_1 + 0xc) + 4))(0x29,1,1);
        }
        *(undefined1 *)(param_1 + 0x56) = 0x1e;
      }
    }
    goto switchD_009aca38_caseD_9;
  case '\x1e':
    if (*(char *)(param_1 + 0x60) != '\0') {
      iVar8 = FUN_00999fa0();
      if ((iVar8 == -1) || (iVar8 == 1)) {
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      else {
        if (iVar8 != 2) goto switchD_009aca38_caseD_9;
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
    }
  }
  FUN_0049cc90(0x41);
  FUN_0049cc90(0x40);
  uVar13 = 0;
  local_fc = 0xffffffff;
  switch(*(undefined1 *)(param_1 + 0x5c)) {
  case 0:
    uVar13 = 0xa10;
    local_fc = 0;
    _strcpy_s(local_f4,0x20,"btl_01_start");
    break;
  case 1:
    uVar13 = 0x118;
    local_fc = 0x1000;
    _strcpy_s(local_f4,0x20,"P118_BEACH");
    break;
  case 2:
    uVar13 = 0x210;
    local_fc = 0x3000;
    _strcpy_s(local_f4,0x20,"P210_SEWER_MOVIE");
    break;
  case 3:
    uVar13 = 0x310;
    local_fc = 0x4000;
    _strcpy_s(local_f4,0x20,"P310_BTL1");
    break;
  case 4:
    uVar13 = 0x410;
    _strcpy_s(local_f4,0x20,"P410_START");
    break;
  case 5:
    uVar13 = 0x510;
    local_fc = 0x6000;
    _strcpy_s(local_f4,0x20,"P510_IN");
    break;
  case 6:
    uVar13 = 0x610;
    local_fc = 0x6020;
    _strcpy_s(local_f4,0x20,"P610_MOVIE");
    break;
  case 7:
    uVar13 = 0x710;
    local_fc = 0x7010;
    _strcpy_s(local_f4,0x20,"P710_IN");
    break;
  case 8:
    uVar13 = 0xc10;
    local_fc = 0xc000;
    _strcpy_s(local_f4,0x20,"PC10_MOVIE");
    FUN_00cad0a0(3);
    break;
  case 9:
    uVar13 = 0xd10;
    _strcpy_s(local_f4,0x20,"PD10_START");
    FUN_00cad0a0(4);
    break;
  case 10:
    uVar13 = 0x170;
    _strcpy_s(local_f4,0x20,"P170_START");
    goto LAB_009ad609;
  case 0xb:
    uVar13 = 0x380;
    _strcpy_s(local_f4,0x20,"P380_START");
    goto LAB_009ad609;
  case 0xc:
    uVar13 = 0x470;
    _strcpy_s(local_f4,0x20,"P470_START");
    goto LAB_009ad609;
  case 0xd:
    uVar13 = 0x610;
    _strcpy_s(local_f4,0x20,"P610_BOSS");
    goto LAB_009ad609;
  case 0xe:
    uVar13 = 0x720;
    _strcpy_s(local_f4,0x20,"P720_START");
    goto LAB_009ad609;
  case 0xf:
    uVar13 = 0x730;
    _strcpy_s(local_f4,0x20,"P730_START");
    goto LAB_009ad609;
  case 0x10:
    uVar13 = 0xc60;
    _strcpy_s(local_f4,0x20,"PC60_ARMSTRONG");
    uVar9 = 3;
    goto LAB_009ad5ff;
  case 0x11:
    uVar13 = 0xd60;
    _strcpy_s(local_f4,0x20,"PD60_KHAMSIN");
    uVar9 = 4;
LAB_009ad5ff:
    FUN_00cad0a0(uVar9);
LAB_009ad609:
    _DAT_01bea098 = _DAT_01bea098 | 0xc0000000;
  }
  iVar8 = FUN_00416d50(0x40);
  if (iVar8 == 0) {
    DAT_01b391c8 = 0;
    DAT_0188dfe0 = 1;
  }
  else {
    DAT_01b391c8 = *(undefined1 *)(param_1 + 0x5c);
    DAT_0188dfe0 = *(undefined1 *)(param_1 + 0x5d);
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x4ed) = 10;
  local_d4 = _DAT_01b76388 >> 0x18;
  puVar12 = &DAT_01b762c0;
  puVar15 = local_d0;
  for (iVar8 = 0x32; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_00c1f560();
  uVar11 = uVar13 & 0xf00;
  uVar9 = 0;
  if (uVar11 == 0xc00) {
    uVar9 = 1;
  }
  else if (uVar11 == 0xd00) {
    uVar9 = 2;
  }
  FUN_009c8990((int)*(char *)(param_1 + 0x5d),(int)*(char *)(param_1 + 0x60),
               (int)*(char *)(param_1 + 0x5c),0,uVar9);
  puVar12 = local_d0;
  puVar15 = &DAT_01b762c0;
  for (iVar8 = 0x32; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  _DAT_01b76388 = _DAT_01b76388 | local_d4 << 0x18;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    FUN_009c52d0(0);
  }
  if (uVar11 == 0xc00) {
    uVar9 = 3;
  }
  else if (uVar11 == 0xd00) {
    uVar9 = 4;
  }
  else {
    uVar9 = 2;
  }
  FUN_00cad0a0(uVar9);
  if (*(char *)(param_1 + 0x5c) == '\a') {
    FUN_00d5ea40("EV6030",1,0);
  }
  else {
    FUN_00a4ac40(uVar13,local_f4,local_fc);
  }
LAB_009ad74c:
  *(char *)(param_1 + 0x56) = *(char *)(param_1 + 0x56) + '\x01';
switchD_009aca38_caseD_9:
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  }
  return;
}

