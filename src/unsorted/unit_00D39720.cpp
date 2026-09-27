// src/unsorted/unit_00D39720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D39720..00D39720, 1 functions

#include "types.h"

// 00D39720  FUN_00d39720  size=1706  [run]
void __fastcall FUN_00d39720(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_44;
  uint local_40;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar6 = &local_28;
  local_40 = local_40 & 0xffffff00;
  local_44 = 0;
  piVar5 = (int *)(param_1 + 0x28);
  do {
    switch(piVar5[-4]) {
    case 0:
      piVar5[-2] = -1;
      if (*piVar5 != -1) {
        FUN_00984ce0(*piVar5);
        piVar5[-2] = *piVar5;
        *piVar5 = -1;
        piVar5[6] = 0;
        piVar5[2] = 0;
        piVar5[-4] = 1;
      }
      break;
    case 1:
      piVar5[6] = 1;
      piVar5[-4] = 2;
      break;
    case 2:
      if (piVar5[-2] != 0) {
        iVar4 = FUN_00d2c440(1,piVar5[-2],local_44);
        piVar5[-6] = iVar4;
        local_28 = 0;
        uStack_20 = 0x44390000;
        uStack_1c = 0x43960000;
        uStack_18 = 0;
        uStack_14 = uStack_24;
        *(undefined4 *)(iVar4 + 0x150) = puVar6[-2];
        *(undefined4 *)(iVar4 + 0x154) = puVar6[-1];
        *(undefined4 *)(iVar4 + 0x158) = *puVar6;
        *(undefined4 *)(iVar4 + 0x15c) = puVar6[1];
      }
      piVar5[-4] = 3;
      break;
    case 3:
      piVar5[-4] = 4;
      break;
    case 4:
      if ((piVar5[2] != 0) || (*piVar5 != -1)) {
        *(undefined4 *)(piVar5[-6] + 0x170) = 1;
        piVar5[2] = 1;
        piVar5[-4] = 5;
      }
      break;
    case 5:
      if (piVar5[6] == 0) {
        if (4 < *(int *)(piVar5[-6] + 0xf4)) {
          piVar5[-4] = 6;
        }
        break;
      }
      goto LAB_00d398d6;
    case 6:
      if ((undefined4 *)piVar5[-6] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[-6])(1);
        piVar5[-6] = 0;
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a805f0();
        FUN_00a7c950();
      }
      FUN_00984660(local_40);
      piVar5[-4] = 0;
    }
    if (piVar5[6] == 0) {
LAB_00d398f5:
      if (piVar5[-6] != 0) {
        *(undefined4 *)(piVar5[-6] + 0x188) = 1;
      }
    }
    else {
LAB_00d398d6:
      iVar4 = FUN_00cd0ad0(piVar5[-2],local_40);
      if (iVar4 != 0) {
        piVar5[6] = 0;
      }
      if (piVar5[6] == 0) goto LAB_00d398f5;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = piVar5[-2], iVar4 != -1)) && (iVar4 != 0)) {
      if (piVar5[0x18] != -1) {
        FUN_00cb5ff0(iVar4,piVar5[0x18]);
      }
      FUN_009860d0(local_44,piVar5[-2]);
      piVar5[0x12] = piVar5[0x12] + -1;
      if (piVar5[0x12] < 1) {
        uVar15 = 0x3f800000;
        uVar14 = 0xbf800000;
        uVar13 = 0x8040200;
        uVar12 = 0x3f800000;
        uVar11 = 0x3e4ccccd;
        uVar10 = 2;
        puVar8 = &DAT_016b8e88;
        FUN_00a81330(&DAT_016b8e88,2,0x3e4ccccd,0x3f800000,0x8040200,0xbf800000,0x3f800000);
        FUN_00a7c890();
        FUN_00e3ff90(puVar8,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
        sVar3 = FUN_00dde2d0(0x13,300);
        piVar5[0x12] = (int)sVar3;
      }
      FUN_00a81330();
      iVar4 = FUN_00a7c890();
      if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
         (iVar4 = FUN_00e36060(3), iVar4 != 0)) {
        piVar5[0x14] = 0;
      }
      else {
        piVar5[0x14] = piVar5[0x14] + -1;
        if (piVar5[0x14] < 1) {
          fVar7 = (float10)FUN_00dde300(0x3f4ccccd,0x3f800000);
          FUN_00a81330();
          FUN_00a7c890();
          iVar4 = FUN_00e26e90();
          if (iVar4 != 0) {
            FUN_00e36ac0(3,(float)fVar7);
          }
          sVar3 = FUN_00dde2d0(0x1e,0x28);
          piVar5[0x14] = (int)sVar3;
        }
      }
      if ((piVar5[-2] == 4) && (piVar5[0x16] = piVar5[0x16] + -1, piVar5[0x16] < 1)) {
        FUN_00a81330();
        FUN_00a7c890();
        iVar4 = FUN_00e355e0(&DAT_016457ec);
        if (iVar4 != 0) {
          uVar15 = 0x3f800000;
          uVar14 = 0xbf800000;
          uVar13 = 0;
          uVar12 = 0x3f800000;
          uVar11 = 0x3e4ccccd;
          uVar10 = 0;
          puVar9 = &DAT_016457ec;
          FUN_00a81330(&DAT_016457ec,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a7c890();
          FUN_00e3ff90(puVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
        }
        piVar5[0x1c] = piVar5[0x1a];
        piVar5[0x1a] = 4;
        piVar5[0x1e] = 1;
        sVar3 = FUN_00dde2d0(0xe10,0x1c20);
        piVar5[0x16] = (int)sVar3;
      }
      iVar4 = piVar5[0x1c];
      if (iVar4 != -1) {
        iVar1 = piVar5[0x1a];
        if (iVar1 == 0) {
          FUN_00a81330();
          FUN_00a7c890();
          iVar4 = FUN_00e26e90();
          if ((iVar4 != 0) && (fVar7 = (float10)FUN_00e36970(0), (float10)0 < fVar7)) {
            piVar5[0x1a] = 3;
          }
        }
        else if (iVar1 == 4) {
          uVar10 = 0;
          FUN_00a81330(0);
          FUN_00a7c890();
          iVar4 = FUN_0085be10(uVar10);
          if (iVar4 != 0) {
            piVar5[0x1a] = -1;
            piVar5[0x1e] = 1;
          }
        }
        else {
          if (iVar1 == iVar4) {
            piVar5[0x1e] = 1;
          }
          else {
            if (iVar4 != 1) {
              if (iVar4 == 2) {
                if (piVar5[0x1e] < 1) {
                  FUN_00a81330();
                  FUN_00a7c890();
                  iVar4 = FUN_00e355e0(&DAT_01641bd4);
                  if (iVar4 != 0) {
                    uVar15 = 0x3f800000;
                    uVar14 = 0xbf800000;
                    uVar13 = 0x8000000;
                    uVar12 = 0x3f800000;
                    uVar11 = 0x3f4ccccd;
                    uVar10 = 0;
                    puVar9 = &DAT_01641bd4;
                    FUN_00a81330(&DAT_01641bd4,0,0x3f4ccccd,0x3f800000,0x8000000,0xbf800000,
                                 0x3f800000);
                    FUN_00a7c890();
                    FUN_00e3ff90(puVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
                  }
                  piVar5[0x1a] = piVar5[0x1c];
                  piVar5[0x1c] = 3;
                }
                else {
                  piVar5[0x1e] = piVar5[0x1e] + -1;
                }
              }
              else if (iVar4 == 3) {
                FUN_00a81330();
                FUN_00a7c890();
                iVar4 = FUN_00e355e0(&DAT_016b7cb4);
                if (iVar4 == 0) goto LAB_00d39c14;
                uVar10 = 0;
                FUN_00a81330(0);
                FUN_00a7c890();
                iVar4 = FUN_0085be10(uVar10);
                if (iVar4 != 0) {
                  uVar15 = 0x3f800000;
                  uVar14 = 0xbf800000;
                  uVar13 = 0;
                  uVar12 = 0x3f800000;
                  uVar11 = 0x3f4ccccd;
                  uVar10 = 0;
                  puVar8 = &DAT_016b7cb4;
                  FUN_00a81330(&DAT_016b7cb4,0,0x3f4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
                  FUN_00a7c890();
                  FUN_00e3ff90(puVar8,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
                  piVar5[0x1a] = piVar5[0x1c];
                  goto LAB_00d39c1a;
                }
              }
              goto LAB_00d39c1d;
            }
            FUN_00a81330();
            FUN_00a7c890();
            iVar4 = FUN_00e355e0(&DAT_01641bdc);
            if (iVar4 != 0) {
              uVar15 = 0x3f800000;
              uVar14 = 0xbf800000;
              uVar13 = 0;
              uVar12 = 0x3f800000;
              uVar11 = 0x3f4ccccd;
              uVar10 = 0;
              puVar9 = &DAT_01641bdc;
              FUN_00a81330(&DAT_01641bdc,0,0x3f4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
              FUN_00a7c890();
              FUN_00e3ff90(puVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            }
            piVar5[0x1e] = 1;
LAB_00d39c14:
            piVar5[0x1a] = piVar5[0x1c];
          }
LAB_00d39c1a:
          piVar5[0x1c] = -1;
        }
      }
    }
LAB_00d39c1d:
    if ((int *)piVar5[-6] != (int *)0x0) {
      (**(code **)(*(int *)piVar5[-6] + 4))();
    }
    local_44 = local_44 + 1;
    puVar6 = puVar6 + 4;
    bVar2 = (char)local_40 + 1;
    piVar5 = piVar5 + 1;
    local_40 = CONCAT31(local_40._1_3_,bVar2);
    if (1 < bVar2) {
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x150) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(iVar4 + 0x154) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar4 + 0x158) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(iVar4 + 0x15c) = *(undefined4 *)(param_1 + 0x5c);
      }
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x150) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(iVar4 + 0x154) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(iVar4 + 0x158) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(iVar4 + 0x15c) = *(undefined4 *)(param_1 + 0x6c);
      }
      return;
    }
  } while( true );
}

