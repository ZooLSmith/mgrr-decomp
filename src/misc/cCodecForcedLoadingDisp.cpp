// src/misc/cCodecForcedLoadingDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6B60..00D39DF0, 4 functions

#include "types.h"

// 00CB6B60  cCodecForcedLoadingDisp::cCodecForcedLoadingDisp_2  size=33  [class]
void __fastcall cCodecForcedLoadingDisp::cCodecForcedLoadingDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CD11C0  FUN_00cd11c0  size=60  [callgraph]
void __fastcall FUN_00cd11c0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = FUN_00ccdda0(param_1[2]);
    if (iVar1 == 0) {
      param_1[1] = -1;
      return;
    }
    (**(code **)(*param_1 + 8))();
    param_1[1] = param_1[1] + 1;
  }
  else if (param_1[1] != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cd11fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00CD1200  cCodecForcedLoadingDisp::vf00  size=53  [class]
undefined4 * __thiscall cCodecForcedLoadingDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D39DF0  cCodecForcedLoadingDisp::cCodecForcedLoadingDisp  size=3515  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCodecForcedLoadingDisp::cCodecForcedLoadingDisp(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  byte local_5c;
  float fStack_50;
  float afStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float afStack_30 [6];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = vftable;
      puVar4[1] = 0;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar4;
  }
  local_5c = 0;
  do {
    uVar9 = (uint)local_5c;
    switch(*(undefined4 *)(param_1 + 0x1c + uVar9 * 4)) {
    case 0:
      iVar5 = *(int *)(param_1 + 0x2c + uVar9 * 4);
      *(undefined4 *)(param_1 + 0x24 + uVar9 * 4) = 0xffffffff;
      if (iVar5 != -1) {
        if (((((iVar5 == 6) || (iVar5 == 8)) || (iVar5 == 9)) || ((iVar5 == 10 || (iVar5 == 0xd))))
           || ((iVar5 == 0xb || ((iVar5 == 0x12 || (iVar5 == 7)))))) {
          *(undefined4 *)(param_1 + 0x44 + uVar9 * 4) = 0;
        }
        else {
          FUN_00984ce0(iVar5);
          *(undefined4 *)(param_1 + 0x44 + uVar9 * 4) = 1;
        }
        puVar4 = (undefined4 *)((uVar9 + 0x12) * 0x10 + param_1);
        if (*(int *)(param_1 + 0x10) == 0) {
          if (*(int *)(param_1 + 0x14) == 0) {
            *puVar4 = *(undefined4 *)(param_1 + 0xc0);
            puVar4[1] = *(undefined4 *)(param_1 + 0xc4);
            puVar4[2] = *(undefined4 *)(param_1 + 200);
            puVar4[3] = *(undefined4 *)(param_1 + 0xcc);
            iVar5 = (uVar9 + 0x14) * 0x10;
            *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)(param_1 + 0xf0);
            iVar5 = iVar5 + param_1;
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0xf4);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0xf8);
            uVar14 = *(undefined4 *)(param_1 + 0xfc);
          }
          else {
            *puVar4 = *(undefined4 *)(param_1 + 0xd0);
            puVar4[1] = *(undefined4 *)(param_1 + 0xd4);
            puVar4[2] = *(undefined4 *)(param_1 + 0xd8);
            puVar4[3] = *(undefined4 *)(param_1 + 0xdc);
            iVar5 = (uVar9 + 0x14) * 0x10;
            *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)(param_1 + 0x100);
            iVar5 = iVar5 + param_1;
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x104);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0x108);
            uVar14 = *(undefined4 *)(param_1 + 0x10c);
          }
        }
        else {
          *puVar4 = *(undefined4 *)(param_1 + 0xe0);
          puVar4[1] = *(undefined4 *)(param_1 + 0xe4);
          puVar4[2] = *(undefined4 *)(param_1 + 0xe8);
          puVar4[3] = *(undefined4 *)(param_1 + 0xec);
          iVar5 = (uVar9 + 0x14) * 0x10;
          *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)(param_1 + 0x110);
          iVar5 = iVar5 + param_1;
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x114);
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0x118);
          uVar14 = *(undefined4 *)(param_1 + 0x11c);
        }
        *(undefined4 *)(iVar5 + 0xc) = uVar14;
        *(undefined4 *)(param_1 + 0x24 + uVar9 * 4) = *(undefined4 *)(param_1 + 0x2c + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x2c + uVar9 * 4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4c + uVar9 * 4) = 0;
        *(undefined4 *)(param_1 + 0x34 + uVar9 * 4) = 0;
        *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 1;
      }
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 2;
      if (*(int *)(param_1 + 0x44 + uVar9 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x4c + uVar9 * 4) = 1;
      }
      break;
    case 2:
      iVar5 = *(int *)(param_1 + 0x24 + uVar9 * 4);
      if (iVar5 != 0) {
        uVar14 = FUN_00d2c440(0,iVar5,uVar9);
        *(undefined4 *)(param_1 + 0x10 + uVar9 * 4) = uVar14;
      }
      *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 4;
      break;
    case 4:
      if ((*(int *)(param_1 + 0x34 + uVar9 * 4) != 0) ||
         (*(int *)(param_1 + 0x2c + uVar9 * 4) != -1)) {
        *(undefined4 *)(*(int *)(param_1 + 0x10 + uVar9 * 4) + 0x170) = 1;
        *(undefined4 *)(param_1 + 0x34 + uVar9 * 4) = 1;
        *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 5;
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x4c + uVar9 * 4) == 0) {
        if (4 < *(int *)(*(int *)(param_1 + 0x10 + uVar9 * 4) + 0xf4)) {
          *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 6;
        }
        break;
      }
      goto LAB_00d3a0b6;
    case 6:
      puVar4 = *(undefined4 **)(param_1 + 0x10 + uVar9 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
        *(undefined4 *)(param_1 + 0x10 + uVar9 * 4) = 0;
      }
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a805f0();
        FUN_00a7c950();
      }
      FUN_00984660(local_5c);
      *(undefined4 *)(param_1 + 0x1c + uVar9 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x4c + uVar9 * 4) == 0) {
LAB_00d3a0da:
      iVar5 = *(int *)(param_1 + 0x10 + uVar9 * 4);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x188) = 1;
      }
    }
    else {
LAB_00d3a0b6:
      iVar5 = FUN_00cd0ca0(*(undefined4 *)(param_1 + 0x24 + uVar9 * 4),local_5c);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x4c + uVar9 * 4) = 0;
      }
      if (*(int *)(param_1 + 0x4c + uVar9 * 4) == 0) goto LAB_00d3a0da;
    }
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x24 + uVar9 * 4);
      if (((iVar5 != -1) && (iVar5 != 0)) && (*(int *)(param_1 + 0x44 + uVar9 * 4) != 0)) {
        iVar7 = *(int *)(param_1 + 0x178 + uVar9 * 4);
        if (iVar7 != -1) {
          FUN_00cb6550(iVar5,iVar7);
        }
        FUN_009860d0(uVar9,*(undefined4 *)(param_1 + 0x24 + uVar9 * 4));
        piVar6 = (int *)(param_1 + 0x160 + uVar9 * 4);
        *piVar6 = *piVar6 + -1;
        if (*(int *)(param_1 + 0x160 + uVar9 * 4) < 1) {
          uVar19 = 0x3f800000;
          uVar18 = 0xbf800000;
          uVar17 = 0x8040200;
          uVar16 = 0x3f800000;
          uVar15 = 0x3e4ccccd;
          uVar14 = 2;
          puVar12 = &DAT_016b8e88;
          FUN_00a81330(&DAT_016b8e88,2,0x3e4ccccd,0x3f800000,0x8040200,0xbf800000,0x3f800000);
          FUN_00a7c890();
          FUN_00e3ff90(puVar12,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
          sVar3 = FUN_00dde2d0(0x13,300);
          *(int *)(param_1 + 0x160 + uVar9 * 4) = (int)sVar3;
        }
        FUN_00a81330();
        iVar5 = FUN_00a7c890();
        if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
           (iVar5 = FUN_00e36060(3), iVar5 != 0)) {
          *(undefined4 *)(param_1 + 0x168 + uVar9 * 4) = 0;
        }
        else {
          piVar6 = (int *)(param_1 + 0x168 + uVar9 * 4);
          *piVar6 = *piVar6 + -1;
          if (*(int *)(param_1 + 0x168 + uVar9 * 4) < 1) {
            fVar10 = (float10)FUN_00dde300(0x3f4ccccd,0x3f800000);
            FUN_00a81330();
            FUN_00a7c890();
            iVar5 = FUN_00e26e90();
            if (iVar5 != 0) {
              FUN_00e36ac0(3,(float)fVar10);
            }
            sVar3 = FUN_00dde2d0(0x1e,0x28);
            *(int *)(param_1 + 0x168 + uVar9 * 4) = (int)sVar3;
          }
        }
        if ((*(int *)(param_1 + 0x24 + uVar9 * 4) == 4) &&
           (piVar6 = (int *)(param_1 + 0x170 + uVar9 * 4), *piVar6 = *piVar6 + -1,
           *(int *)(param_1 + 0x170 + uVar9 * 4) < 1)) {
          FUN_00a81330();
          FUN_00a7c890();
          iVar5 = FUN_00e355e0(&DAT_016457ec);
          if (iVar5 != 0) {
            uVar19 = 0x3f800000;
            uVar18 = 0xbf800000;
            uVar17 = 0;
            uVar16 = 0x3f800000;
            uVar15 = 0x3f4ccccd;
            uVar14 = 0;
            puVar13 = &DAT_016457ec;
            FUN_00a81330(&DAT_016457ec,0,0x3f4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            FUN_00a7c890();
            FUN_00e3ff90(puVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
          }
          *(undefined4 *)(param_1 + 0x188 + uVar9 * 4) =
               *(undefined4 *)(param_1 + 0x180 + uVar9 * 4);
          *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) = 4;
          *(undefined4 *)(param_1 + 400 + uVar9 * 4) = 1;
          sVar3 = FUN_00dde2d0(0xe10,0x1c20);
          *(int *)(param_1 + 0x170 + uVar9 * 4) = (int)sVar3;
        }
        iVar5 = *(int *)(param_1 + 0x188 + uVar9 * 4);
        if (iVar5 != -1) {
          iVar7 = *(int *)(param_1 + 0x180 + uVar9 * 4);
          if (iVar7 == 0) {
            FUN_00a81330();
            FUN_00a7c890();
            iVar5 = FUN_00e26e90();
            if ((iVar5 != 0) && (fVar10 = (float10)FUN_00e36970(0), (float10)0 < fVar10)) {
              *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) = 3;
            }
          }
          else if (iVar7 == 4) {
            uVar14 = 0;
            FUN_00a81330(0);
            FUN_00a7c890();
            iVar5 = FUN_0085be10(uVar14);
            if (iVar5 != 0) {
              *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) = 0xffffffff;
              *(undefined4 *)(param_1 + 400 + uVar9 * 4) = 1;
            }
          }
          else {
            if (iVar7 == iVar5) {
              *(undefined4 *)(param_1 + 400 + uVar9 * 4) = 1;
            }
            else {
              if (iVar5 != 1) {
                if (iVar5 == 2) {
                  iVar5 = *(int *)(param_1 + 400 + uVar9 * 4);
                  if (iVar5 < 1) {
                    FUN_00a81330();
                    FUN_00a7c890();
                    iVar5 = FUN_00e355e0(&DAT_01641bd4);
                    if (iVar5 != 0) {
                      uVar19 = 0x3f800000;
                      uVar18 = 0xbf800000;
                      uVar17 = 0x8000000;
                      uVar16 = 0x3f800000;
                      uVar15 = 0x3f4ccccd;
                      uVar14 = 0;
                      puVar13 = &DAT_01641bd4;
                      FUN_00a81330(&DAT_01641bd4,0,0x3f4ccccd,0x3f800000,0x8000000,0xbf800000,
                                   0x3f800000);
                      FUN_00a7c890();
                      FUN_00e3ff90(puVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
                    }
                    *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) =
                         *(undefined4 *)(param_1 + 0x188 + uVar9 * 4);
                    *(undefined4 *)(param_1 + 0x188 + uVar9 * 4) = 3;
                  }
                  else {
                    *(int *)(param_1 + 400 + uVar9 * 4) = iVar5 + -1;
                  }
                }
                else if (iVar5 == 3) {
                  FUN_00a81330();
                  FUN_00a7c890();
                  iVar5 = FUN_00e355e0(&DAT_016b7cb4);
                  if (iVar5 == 0) goto LAB_00d3a46a;
                  uVar14 = 0;
                  FUN_00a81330(0);
                  FUN_00a7c890();
                  iVar5 = FUN_0085be10(uVar14);
                  if (iVar5 != 0) {
                    uVar19 = 0x3f800000;
                    uVar18 = 0xbf800000;
                    uVar17 = 0;
                    uVar16 = 0x3f800000;
                    uVar15 = 0x3f4ccccd;
                    uVar14 = 0;
                    puVar12 = &DAT_016b7cb4;
                    FUN_00a81330(&DAT_016b7cb4,0,0x3f4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
                    FUN_00a7c890();
                    FUN_00e3ff90(puVar12,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
                    *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) =
                         *(undefined4 *)(param_1 + 0x188 + uVar9 * 4);
                    goto LAB_00d3a478;
                  }
                }
                goto LAB_00d3a483;
              }
              FUN_00a81330();
              FUN_00a7c890();
              iVar5 = FUN_00e355e0(&DAT_01641bdc);
              if (iVar5 != 0) {
                uVar19 = 0x3f800000;
                uVar18 = 0xbf800000;
                uVar17 = 0;
                uVar16 = 0x3f800000;
                uVar15 = 0x3f4ccccd;
                uVar14 = 0;
                puVar13 = &DAT_01641bdc;
                FUN_00a81330(&DAT_01641bdc,0,0x3f4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
                FUN_00a7c890();
                FUN_00e3ff90(puVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
              }
              *(undefined4 *)(param_1 + 400 + uVar9 * 4) = 1;
LAB_00d3a46a:
              *(undefined4 *)(param_1 + 0x180 + uVar9 * 4) =
                   *(undefined4 *)(param_1 + 0x188 + uVar9 * 4);
            }
LAB_00d3a478:
            *(undefined4 *)(param_1 + 0x188 + uVar9 * 4) = 0xffffffff;
          }
        }
      }
LAB_00d3a483:
      FUN_00a81330();
      iVar5 = FUN_00a7c8a0();
      if ((iVar5 != 0) && (iVar5 = *(int *)(param_1 + 0x10 + uVar9 * 4), iVar5 != 0)) {
        fStack_50 = 0.0;
        afStack_4c[1] = 0.0;
        afStack_4c[2] = 0.0;
        afStack_4c[0] = *(float *)(iVar5 + 0x84) * -0.5;
        FUN_00a81330();
        piVar6 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar6 + 0x88))(&fStack_50);
        fVar2 = fStack_50;
        local_5c = SUB41(fStack_50,0);
        FUN_00a81330();
        piVar6 = (int *)FUN_00a7c8a0();
        fVar10 = (float10)fsin((float10)fVar2);
        fVar11 = (float10)0.3;
        fStack_34 = (float)(fVar10 * fVar11);
        afStack_30[0] = -10000.0;
        fVar10 = (float10)fcos((float10)fVar2);
        afStack_30[1] = (float)(fVar11 - fVar10 * fVar11);
        (**(code **)(*piVar6 + 0x6c))(&fStack_34);
      }
    }
    fVar2 = _DAT_018b8c74;
    local_5c = local_5c + 1;
  } while (local_5c < 2);
  afStack_30[0] = *(float *)(param_1 + 0xc0);
  afStack_30[1] = (float)*(undefined4 *)(param_1 + 0xc4);
  afStack_30[2] = (float)*(undefined4 *)(param_1 + 200);
  afStack_30[3] = (float)*(undefined4 *)(param_1 + 0xcc);
  fStack_50 = *(float *)(param_1 + 0xf0);
  afStack_4c[0] = *(float *)(param_1 + 0xf4);
  afStack_4c[1] = (float)*(undefined4 *)(param_1 + 0xf8);
  afStack_4c[2] = (float)*(undefined4 *)(param_1 + 0xfc);
  afStack_30[4] = (float)*(undefined4 *)(param_1 + 0xc0);
  afStack_30[5] = (float)*(undefined4 *)(param_1 + 0xc4);
  uStack_18 = *(undefined4 *)(param_1 + 200);
  uStack_14 = *(undefined4 *)(param_1 + 0xcc);
  afStack_4c[3] = (float)*(undefined4 *)(param_1 + 0xf0);
  uStack_3c = *(undefined4 *)(param_1 + 0xf4);
  uStack_38 = *(undefined4 *)(param_1 + 0xf8);
  fStack_34 = *(float *)(param_1 + 0xfc);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    afStack_30[0] = *(float *)(param_1 + 0xd0);
    afStack_30[1] = (float)*(undefined4 *)(param_1 + 0xd4);
    afStack_30[2] = (float)*(undefined4 *)(param_1 + 0xd8);
    afStack_30[3] = (float)*(undefined4 *)(param_1 + 0xdc);
    fStack_50 = *(float *)(param_1 + 0x100);
    afStack_4c[0] = *(float *)(param_1 + 0x104);
    afStack_4c[1] = (float)*(undefined4 *)(param_1 + 0x108);
    afStack_4c[2] = (float)*(undefined4 *)(param_1 + 0x10c);
    afStack_30[4] = (float)*(undefined4 *)(param_1 + 0xe0);
    afStack_30[5] = (float)*(undefined4 *)(param_1 + 0xe4);
    uStack_18 = *(undefined4 *)(param_1 + 0xe8);
    uStack_14 = *(undefined4 *)(param_1 + 0xec);
    afStack_4c[3] = (float)*(undefined4 *)(param_1 + 0x110);
    uStack_3c = *(undefined4 *)(param_1 + 0x114);
    uStack_38 = *(undefined4 *)(param_1 + 0x118);
    fStack_34 = *(float *)(param_1 + 0x11c);
  }
  pfVar8 = (float *)(param_1 + 0x124);
  piVar6 = (int *)(param_1 + 0x10);
  iVar5 = 0;
  do {
    if (*piVar6 != 0) {
      fVar1 = *(float *)((int)afStack_30 + iVar5) - pfVar8[-1];
      if (pfVar8[-1] <= *(float *)((int)afStack_30 + iVar5)) {
        if ((pfVar8[-1] < *(float *)((int)afStack_30 + iVar5)) &&
           (fVar1 = fVar1 * fVar2 + pfVar8[-1], pfVar8[-1] = fVar1,
           *(float *)((int)afStack_30 + iVar5) - 0.01 < fVar1)) {
          pfVar8[-1] = *(float *)((int)afStack_30 + iVar5);
        }
      }
      else {
        fVar1 = fVar1 * fVar2 + pfVar8[-1];
        pfVar8[-1] = fVar1;
        if (fVar1 < *(float *)((int)afStack_30 + iVar5) + 0.01) {
          pfVar8[-1] = *(float *)((int)afStack_30 + iVar5);
        }
      }
      fVar1 = *(float *)((int)afStack_30 + iVar5 + 4) - *pfVar8;
      if (*pfVar8 <= *(float *)((int)afStack_30 + iVar5 + 4)) {
        if ((*pfVar8 < *(float *)((int)afStack_30 + iVar5 + 4)) &&
           (fVar1 = fVar1 * fVar2 + *pfVar8, *pfVar8 = fVar1,
           *(float *)((int)afStack_30 + iVar5 + 4) - 0.01 < fVar1)) {
          *pfVar8 = *(float *)((int)afStack_30 + iVar5 + 4);
        }
      }
      else {
        fVar1 = fVar1 * fVar2 + *pfVar8;
        *pfVar8 = fVar1;
        if (fVar1 < *(float *)((int)afStack_30 + iVar5 + 4) + 0.01) {
          *pfVar8 = *(float *)((int)afStack_30 + iVar5 + 4);
        }
      }
      fVar1 = *(float *)((int)afStack_30 + iVar5 + 8) - pfVar8[1];
      if (pfVar8[1] <= *(float *)((int)afStack_30 + iVar5 + 8)) {
        if ((pfVar8[1] < *(float *)((int)afStack_30 + iVar5 + 8)) &&
           (fVar1 = fVar1 * fVar2 + pfVar8[1], pfVar8[1] = fVar1,
           *(float *)((int)afStack_30 + iVar5 + 8) - 0.01 < fVar1)) {
          pfVar8[1] = *(float *)((int)afStack_30 + iVar5 + 8);
        }
      }
      else {
        fVar1 = fVar1 * fVar2 + pfVar8[1];
        pfVar8[1] = fVar1;
        if (fVar1 < *(float *)((int)afStack_30 + iVar5 + 8) + 0.01) {
          pfVar8[1] = *(float *)((int)afStack_30 + iVar5 + 8);
        }
      }
      fVar1 = *(float *)((int)afStack_4c + iVar5) - pfVar8[8];
      if (pfVar8[8] <= *(float *)((int)afStack_4c + iVar5)) {
        if ((pfVar8[8] < *(float *)((int)afStack_4c + iVar5)) &&
           (fVar1 = fVar1 * fVar2 + pfVar8[8], pfVar8[8] = fVar1,
           *(float *)((int)afStack_4c + iVar5) - 0.01 < fVar1)) {
          pfVar8[8] = *(float *)((int)afStack_4c + iVar5);
        }
      }
      else {
        fVar1 = fVar1 * fVar2 + pfVar8[8];
        pfVar8[8] = fVar1;
        if (fVar1 < *(float *)((int)afStack_4c + iVar5) + 0.01) {
          pfVar8[8] = *(float *)((int)afStack_4c + iVar5);
        }
      }
    }
    iVar5 = iVar5 + 0x10;
    piVar6 = piVar6 + 1;
    pfVar8 = pfVar8 + 4;
  } while (iVar5 < 0x20);
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xb0) == 0) {
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x18c) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) goto LAB_00d3aa10;
LAB_00d3aa06:
    *(undefined4 *)(iVar5 + 0x18c) = 0;
  }
  else {
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(iVar5 + 0x18c) = 1;
        iVar5 = *(int *)(param_1 + 0x14);
        goto LAB_00d3aa06;
      }
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x18c) = 1;
        goto LAB_00d3aa10;
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18c) = 1;
    }
  }
LAB_00d3aa10:
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x150) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(iVar5 + 0x154) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(iVar5 + 0x158) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(iVar5 + 0x15c) = *(undefined4 *)(param_1 + 300);
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar5 + 0x160) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(iVar5 + 0x164) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(iVar5 + 0x168) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(iVar5 + 0x16c) = *(undefined4 *)(param_1 + 0x14c);
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x150) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(iVar5 + 0x154) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(iVar5 + 0x158) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(iVar5 + 0x15c) = *(undefined4 *)(param_1 + 0x13c);
    iVar5 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar5 + 0x160) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(iVar5 + 0x164) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(iVar5 + 0x168) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(iVar5 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != 0) {
    iVar7 = FUN_00d45490();
    if (((DAT_01bea094 & 0x100000) == 0) || (iVar7 == 0)) {
      if (*(undefined4 **)(iVar5 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar5 + 4))(1);
        *(undefined4 *)(iVar5 + 4) = 0;
      }
    }
    else if (*(int *)(iVar5 + 4) == 0) {
      puVar4 = (undefined4 *)FUN_00dd3500(0x1c,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      else {
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 1;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *puVar4 = cCodecForcedLoadingDispParts::vftable;
        puVar4[3] = "cCodecForcedLoadingDispParts";
        puVar4[2] = 9;
        uVar14 = FUN_00d29960(10);
        puVar4[5] = uVar14;
        *(undefined4 **)(iVar5 + 4) = puVar4;
      }
    }
    if (*(int **)(iVar5 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 4) + 4))();
    }
  }
  return;
}

