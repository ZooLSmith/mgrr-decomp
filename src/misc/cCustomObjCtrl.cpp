// src/misc/cCustomObjCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCDA90..00D1F8F0, 13 functions

#include "mgrr.h"
#include "cCustomObjCtrl.h"

// 00CCDA90  cCustomObjCtrl::vf0C  size=68  [class]
void __fastcall cCustomObjCtrl::vf0C(int param_1)

{
  FUN_00cc7640();
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  return;
}

// 00CCDAE0  cCustomObjCtrl::vf18  size=535  [class]
void __thiscall cCustomObjCtrl::vf18(int param_1,undefined4 *param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  if (iVar5 == 0) {
    if (*(char *)((int)param_2 + 0x3ee) != '\0') {
      FUN_00cc83e0(param_2,param_3,param_2[0xf4],*(undefined1 *)((int)param_2 + 0x3ef));
    }
    puVar7 = param_2;
    puVar4 = param_2 + 0x14;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00cc8070(param_2 + 0x14,param_2);
  }
  else if ((param_3 < *(uint *)(iVar5 + 0x80)) &&
          (puVar7 = (undefined4 *)(param_3 * 0x400 + *(int *)(iVar5 + 0x7c)),
          puVar7 != (undefined4 *)0x0)) {
    puVar4 = puVar7;
    puVar8 = param_2;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = puVar7 + 0x14;
    puVar8 = param_2 + 0x14;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar5 = 0x10;
    puVar4 = param_2 + 0x28;
    do {
      iVar5 = iVar5 + -1;
      puVar8 = (undefined4 *)(((int)puVar7 - (int)param_2) + (int)puVar4);
      puVar9 = puVar4;
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = puVar4 + 8;
    } while (iVar5 != 0);
  }
  if ((int *)param_2[0xfc] != (int *)0x0) {
    (**(code **)(*(int *)param_2[0xfc] + 0x10))
              (*(undefined4 *)(param_1 + 0x78),param_3,param_2[0xf4],
               *(undefined1 *)((int)param_2 + 0x3ef));
  }
  if ((0.0 < param_4) && ((int *)param_2[0xfd] != (int *)0x0)) {
    (**(code **)(*(int *)param_2[0xfd] + 0x10))(param_2[0xf6],param_2[0xf7]);
    (**(code **)(*(int *)param_2[0xfd] + 0x14))(param_2[0xf4]);
  }
  fVar1 = (float)param_2[0xf4];
  if (*(char *)((int)param_2 + 0x3ed) == '\0') {
    fVar2 = (float)param_2[0xf4];
    param_2[0xf4] = param_4 + fVar2;
    if ((param_4 + fVar2 < (float)param_2[0xf6]) && (0.0 <= (float)param_2[0xf6])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        uVar3 = param_2[0xf6];
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
      }
      else {
        uVar3 = param_2[0xf7];
      }
      param_2[0xf4] = uVar3;
    }
    if (((float)param_2[0xf7] < (float)param_2[0xf4]) && (0.0 <= (float)param_2[0xf7])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
        param_2[0xf4] = param_2[0xf7];
      }
      else {
        param_2[0xf4] = param_2[0xf6];
      }
    }
  }
  param_2[0xf5] = fVar1;
  if ((float)param_2[0xf4] == fVar1) {
    *(undefined1 *)((int)param_2 + 0x3ee) = 0;
    return;
  }
  *(undefined1 *)((int)param_2 + 0x3ee) = 1;
  return;
}

// 00CE4B20  cCustomObjCtrl::cCustomObjCtrl_2  size=48  [class]
undefined4 * __fastcall cCustomObjCtrl::cCustomObjCtrl_2(undefined4 *param_1)

{
  cUICtrl::cUICtrl();
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *param_1 = vftable;
  param_1[0x69] = 1;
  return param_1;
}

// 00CE4B50  cCustomObjCtrl::vf10  size=181  [class]
void __thiscall cCustomObjCtrl::vf10(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[0x1e] != 0) && (param_1[0x1f] != 0)) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c);
    if ((1.0 < fVar1) && (fVar1 < 1.1)) {
      fVar1 = 1.0;
    }
    param_1[0x21] = (int)(fVar1 * param_2 + (float)param_1[0x21]);
    iVar2 = *(int *)(param_1[0x1e] + 0x10);
    if (((iVar2 != 0) && (iVar2 = iVar2 + param_1[0x1e], iVar2 != 0)) &&
       (uVar3 = 0, param_1[0x20] != 0)) {
      iVar4 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1[0x1f] + iVar4,uVar3,fVar1 * param_2);
        FUN_00ce00d0(param_1[0x1f] + iVar4,iVar2);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x1b0;
        iVar4 = iVar4 + 0x400;
      } while (uVar3 < (uint)param_1[0x20]);
    }
  }
  return;
}

// 00CF6490  cCustomObjCtrl::vf00  size=36  [class]
undefined4 * __thiscall cCustomObjCtrl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUICtrl::vftable;
  FUN_00cc7640();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF9000  FUN_00cf9000  size=1856  [callgraph]
void FUN_00cf9000(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 float *param_6,float *param_7,undefined4 param_8,int param_9,int param_10,
                 float *param_11)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int extraout_EDX;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_154;
  int *local_150;
  int local_14c;
  int local_148;
  int local_140;
  int local_13c;
  uint local_138;
  int local_134;
  int local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int local_108;
  int local_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 auStack_a0 [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  local_104 = *(int *)(param_9 + 0x78);
  if ((local_104 != 0) && (*(int *)(param_9 + 0x7c) != 0)) {
    if (*(int *)(local_104 + 0x10) == 0) {
      local_104 = 0;
    }
    else {
      local_104 = *(int *)(local_104 + 0x10) + local_104;
    }
    uVar11 = *(uint *)(param_9 + 0x80);
    local_154 = param_2;
    local_134 = 0;
    local_14c = 0;
    local_11c = 0;
    local_140 = 0;
    local_13c = 0x7fffffff;
    local_148 = 0x7fffffff;
    local_138 = 0;
    if (uVar11 != 0) {
      local_130 = 0;
      local_150 = (int *)(local_104 + 0x84);
      local_104 = -0x84 - local_104;
      do {
        iVar9 = local_130 + *(int *)(param_9 + 0x7c);
        local_108 = local_150[-0xd];
        if (local_13c < local_108) {
          if (local_13c == 0x7fffffff) goto LAB_00cf90d3;
        }
        else {
          local_13c = 0x7fffffff;
LAB_00cf90d3:
          if ((*(int *)(iVar9 + 0x3b0) != 0) || (local_13c = local_108, local_108 == 0x7fffffff)) {
            if (local_108 < local_148) {
              local_148 = 0x7fffffff;
            }
            bVar2 = true;
            iVar3 = param_2;
            if (local_148 != 0x7fffffff) {
              if (local_148 < local_108) {
                iVar3 = local_154;
                if ((local_154 != 5) && (local_154 != 10)) {
                  if (local_140 == 0) {
                    if (local_14c == 0) {
                      bVar2 = false;
                      iVar3 = (uint)(local_134 != 0) * 2 + 2;
                    }
                    else {
                      bVar2 = false;
                      iVar3 = (uint)(local_134 != 0) * 2 + 7;
                    }
                  }
                  else {
LAB_00cf912b:
                    iVar3 = 0xb;
                  }
                }
              }
              else if (local_11c == 0) {
                iVar3 = 0;
              }
              else {
                if (local_140 != 0) goto LAB_00cf912b;
                iVar3 = (-(uint)(local_14c != 0) & 5) + 5;
              }
            }
            local_154 = iVar3;
            if (*local_150 != 0) {
              bVar2 = false;
            }
            if ((((local_154 == 0) && (local_138 < uVar11)) &&
                (piVar8 = *(int **)(iVar9 + 0x3f0), piVar8 != (int *)0x0)) &&
               (iVar3 = (**(code **)(*piVar8 + 8))(), iVar3 == 5)) {
              local_134 = piVar8[2];
              local_14c = piVar8[3];
              local_140 = piVar8[1];
              local_11c = 1;
              local_148 = local_108;
            }
            if (bVar2) {
              pfVar4 = &fStack_b0;
              fStack_b0 = *param_6 * *(float *)(iVar9 + 0x340);
              fStack_ac = param_6[1] * *(float *)(iVar9 + 0x344);
              fStack_a8 = param_6[2] * *(float *)(iVar9 + 0x348);
              fStack_a4 = *(float *)(iVar9 + 0x34c) * param_6[3];
            }
            else {
              fStack_100 = *(float *)(iVar9 + 0x340);
              pfVar4 = &fStack_100;
              uStack_fc = *(undefined4 *)(iVar9 + 0x344);
              uStack_f8 = *(undefined4 *)(iVar9 + 0x348);
              uStack_f4 = *(undefined4 *)(iVar9 + 0x34c);
            }
            fStack_118 = *pfVar4;
            fStack_114 = pfVar4[1];
            fStack_110 = pfVar4[2];
            fStack_10c = pfVar4[3];
            fVar1 = *(float *)(iVar9 + 0x350);
            if (*(int *)(iVar9 + 0x3f8) == 0) {
              if (bVar2) {
                pfVar4 = &fStack_e0;
                fStack_e0 = *param_7 * fVar1;
                fStack_dc = param_7[1] * *(float *)(iVar9 + 0x354);
                fStack_d8 = param_7[2] * *(float *)(iVar9 + 0x358);
                fStack_d4 = *(float *)(iVar9 + 0x35c) * param_7[3];
              }
              else {
                fStack_c0 = fVar1;
                pfVar4 = &fStack_c0;
                uStack_bc = *(undefined4 *)(iVar9 + 0x354);
                uStack_b8 = *(undefined4 *)(iVar9 + 0x358);
                uStack_b4 = *(undefined4 *)(iVar9 + 0x35c);
              }
            }
            else if (bVar2) {
              pfVar4 = &fStack_d0;
              fStack_d0 = *param_6 * fVar1;
              fStack_cc = param_6[1] * *(float *)(iVar9 + 0x354);
              fStack_c8 = param_6[2] * *(float *)(iVar9 + 0x358);
              fStack_c4 = *(float *)(iVar9 + 0x35c) * param_6[3];
            }
            else {
              fStack_f0 = fVar1;
              pfVar4 = &fStack_f0;
              uStack_ec = *(undefined4 *)(iVar9 + 0x354);
              uStack_e8 = *(undefined4 *)(iVar9 + 0x358);
              uStack_e4 = *(undefined4 *)(iVar9 + 0x35c);
            }
            fStack_12c = *pfVar4;
            fStack_128 = pfVar4[1];
            fStack_124 = pfVar4[2];
            fStack_120 = pfVar4[3];
            if (((0.003921569 <= fStack_10c) || (0.003921569 <= fStack_120)) ||
               (*(int *)(iVar9 + 0x3f4) != 0)) {
              FUN_00cc6430(&fStack_118);
              FUN_00cc6430(&fStack_12c);
              puVar10 = (undefined4 *)(iVar9 + 0x300);
              puVar12 = auStack_a0;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              fStack_60 = fStack_118;
              fStack_5c = fStack_114;
              fStack_58 = fStack_110;
              fStack_54 = fStack_10c;
              fStack_50 = fStack_12c;
              fStack_4c = fStack_128;
              fStack_48 = fStack_124;
              bVar2 = false;
              fStack_44 = fStack_120;
              uStack_40 = *(undefined4 *)(iVar9 + 0x3e4);
              uStack_3c = *(undefined4 *)(iVar9 + 1000);
              uStack_2c = param_8;
              iStack_38 = local_154;
              iStack_34 = local_150[0x44];
              iStack_30 = *(int *)(iVar9 + 0x3b4) + param_3;
              uStack_28 = param_4;
              iStack_24 = param_10;
              fStack_70 = fStack_70 + *param_11;
              uStack_20 = param_5;
              fStack_6c = param_11[1] + fStack_6c;
              fStack_68 = param_11[2] + fStack_68;
              iVar3 = *(int *)(iVar9 + 0x3f4);
              if (param_10 == -1) {
LAB_00cf9610:
                bVar2 = true;
              }
              else {
                if (*(int *)(iVar9 + 0x3f8) != 0) {
                  iVar7 = *(int *)(param_9 + 0x78);
                  if (*(int *)(iVar7 + 0x10) == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = *(int *)(iVar7 + 0x10) + iVar7;
                  }
                  iVar5 = *(int *)((int)local_150 + iVar5 + local_104 + 0x1a4);
                  if (iVar5 == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = iVar5 + iVar7;
                  }
                  FUN_00cce6b0(auStack_a0,iVar5,param_10);
                  iVar7 = *(int *)(iVar9 + 0x3f4);
                  if ((iVar7 != extraout_EDX) && (*(int *)(iVar7 + 4) == 0x1f6)) {
                    if (param_10 == 1) {
                      *(undefined4 *)(iVar7 + 0x10) = 1;
                      *(int *)(iVar7 + 0x1c) = extraout_EDX;
                    }
                    else {
                      *(int *)(iVar7 + 0x10) = extraout_EDX;
                      *(undefined4 *)(iVar7 + 0x1c) = 1;
                    }
                  }
                  uVar6 = (**(code **)(**(int **)(iVar9 + 0x3f0) + 8))();
                  switch(uVar6) {
                  case 1:
                    FUN_00cb37a0(*(undefined4 *)(iVar9 + 0x3f0),param_10);
                    break;
                  case 3:
                    FUN_00ce5290(*(undefined4 *)(iVar9 + 0x3f0),param_10);
                    break;
                  case 4:
                    FUN_00ce52c0(*(undefined4 *)(iVar9 + 0x3f0),param_10);
                    break;
                  case 8:
                    FUN_00cb37f0(*(undefined4 *)(iVar9 + 0x3f0),param_10);
                  }
                  if ((*(int *)(*(int *)(iVar9 + 0x3f4) + 4) != 0x1f6) && (param_10 != 1)) {
                    iVar3 = 0;
                  }
                  goto LAB_00cf9610;
                }
                if (*(int *)(iVar9 + 0x3f0) == 0) {
LAB_00cf9608:
                  bVar13 = param_10 == 1;
                }
                else {
                  iVar7 = (**(code **)(**(int **)(iVar9 + 0x3f0) + 8))();
                  if (iVar7 == 1) {
                    if (*(int *)(*(int *)(iVar9 + 0x3f0) + 0x20) != 3) goto LAB_00cf9608;
                  }
                  else {
                    iVar7 = (**(code **)(**(int **)(iVar9 + 0x3f0) + 8))();
                    piVar8 = *(int **)(iVar9 + 0x3f0);
                    if (iVar7 != 3) {
                      iVar7 = (**(code **)(*piVar8 + 8))();
                      if (iVar7 != 4) goto LAB_00cf9608;
                      piVar8 = *(int **)(iVar9 + 0x3f0);
                    }
                    if (piVar8[10] == 0) goto LAB_00cf9608;
                  }
                  bVar13 = param_10 == 2;
                }
                if (bVar13) goto LAB_00cf9610;
              }
              if (local_150[0x43] == 0) {
                if (*(int *)(iVar9 + 0x3f0) != 0) {
                  FUN_00cf9000(param_1,iStack_38,iStack_30,uStack_28,uStack_20,&fStack_60,&fStack_50
                               ,uStack_2c,*(int *)(iVar9 + 0x3f0) + 0x10,param_10,param_11);
                }
              }
              else if (bVar2) {
                if (iVar3 == 0) {
                  if (*(int *)(iVar9 + 0x3f0) != 0) {
                    (**(code **)(**(int **)(iVar9 + 0x3f0) + 0x14))(param_1,auStack_a0);
                  }
                }
                else {
                  (**(code **)(**(int **)(iVar9 + 0x3f4) + 0x1c))
                            (param_1,auStack_a0,*(undefined4 *)(iVar9 + 0x3f0));
                }
              }
            }
          }
        }
        uVar11 = *(uint *)(param_9 + 0x80);
        local_130 = local_130 + 0x400;
        local_150 = local_150 + 0x6c;
        local_138 = local_138 + 1;
      } while (local_138 < uVar11);
    }
  }
  return;
}

// 00CF9770  FUN_00cf9770  size=86  [callgraph]
void __thiscall
FUN_00cf9770(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    uVar3 = FUN_00e03ea0(param_3,param_4,param_5);
    FUN_00cceeb0(uVar3,param_4,param_5);
  }
  return;
}

// 00CF97D0  FUN_00cf97d0  size=296  [callgraph]
undefined4 __thiscall FUN_00cf97d0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) {
    piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 3) {
        iVar2 = 0;
        do {
          iVar6 = iVar2;
          if ((iVar2 == 1) || (iVar2 == 2)) {
            iVar3 = FUN_00932720();
            if (DAT_01dc2e78 == iVar3) {
              iVar6 = (iVar2 != 1) + 1;
            }
            else {
              iVar3 = FUN_00932720();
              if (DAT_01dc2f4c == iVar3) {
                iVar6 = 2 - (uint)(iVar2 != 1);
              }
            }
          }
          if (((iVar6 * 0xd4 == -0x1dc2d9c) || ((&DAT_01dc2db8)[iVar6 * 0x35] == 0)) ||
             ((&DAT_01dc2dc0)[iVar6 * 0x35] == 0)) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = &DAT_01dc2dd4 + iVar6 * 0xd4;
          }
          piVar1[5] = (int)puVar4;
          uVar5 = FUN_00e03ea0(param_3);
          piVar1[0x2a] = -1;
          piVar1[0x2b] = param_4;
          if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
            iVar6 = FUN_00cb1cd0(uVar5);
            if (-1 < iVar6) {
              piVar1[0x2b] = param_4;
              piVar1[0x2a] = iVar6;
              piVar1[0x2e] = 0;
              return 1;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        return 0;
      }
    }
    return 0;
  }
  return 0;
}

// 00CF9900  FUN_00cf9900  size=94  [callgraph]
undefined4 __thiscall FUN_00cf9900(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
      (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0))
     || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
    piVar2 = (int *)0x0;
  }
  iVar1 = FUN_00ce5150(piVar2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

// 00CF9960  FUN_00cf9960  size=89  [callgraph]
undefined4 __thiscall FUN_00cf9960(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
      (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0))
     || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
    piVar2 = (int *)0x0;
  }
  iVar1 = FUN_00ce51d0(piVar2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

// 00CF99C0  cCustomObjCtrl::cCustomObjCtrl  size=126  [class]
undefined4 * __fastcall cCustomObjCtrl::cCustomObjCtrl(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = cCustomObjWorkBase::vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x10] = vftable;
  param_1[0x79] = 1;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  return param_1;
}

// 00D11EF0  cCustomObjCtrl::vf14  size=309  [class]
void __thiscall
cCustomObjCtrl::vf14
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  if (((*(int *)(param_1 + 0x1a8) != 0) && (*(int *)(param_1 + 0x1ac) != 0)) &&
     (local_4 = 0, 0 < *(int *)(param_1 + 0x1a4))) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1a8) + local_4 * 4) != 0) {
        iVar1 = *(int *)(param_1 + 0x1ac) + iVar2;
        if (*(int *)(param_1 + 0x150) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,0,
                       iVar1);
          FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,1,
                       *(int *)(param_1 + 0x1ac) + iVar2);
          iVar1 = *(int *)(param_1 + 0x1ac) + iVar2;
          uVar3 = 2;
        }
        FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,uVar3,
                     iVar1);
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (local_4 < *(int *)(param_1 + 0x1a4));
  }
  return;
}

// 00D1F8F0  cCustomObjCtrl::vf08  size=356  [class]
void __thiscall cCustomObjCtrl::vf08(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x1a4) = param_4;
  uVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4),param_2);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 0x10),param_2);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  iVar2 = 0;
  if (3 < (int)param_4) {
    iVar5 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar4 + iVar5) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar5) = 0;
      *(undefined4 *)(iVar4 + iVar5 + 8) = 0;
      iVar2 = iVar2 + 4;
      *(undefined4 *)(iVar4 + iVar5 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -0xc + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar5 + 0x10 + iVar4) = 0;
      *(undefined4 *)(iVar5 + 0x14 + iVar4) = 0;
      iVar4 = iVar5 + 0x10 + iVar4;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -8 + iVar2 * 4) = 1;
      iVar3 = *(int *)(param_1 + 0x1ac);
      iVar4 = iVar5 + 0x30;
      *(undefined4 *)(iVar5 + 0x20 + iVar3) = 0;
      iVar3 = iVar5 + 0x20 + iVar3;
      *(undefined4 *)(iVar3 + 4) = 0;
      iVar5 = iVar5 + 0x40;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -4 + iVar2 * 4) = 1;
      iVar3 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar3 + iVar4) = 0;
      iVar3 = iVar3 + iVar4;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
    } while (iVar2 < (int)(param_4 - 3));
  }
  if (iVar2 < (int)param_4) {
    iVar5 = iVar2 << 4;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar4 + iVar5) = 0;
      iVar4 = iVar4 + iVar5;
      *(undefined4 *)(iVar4 + 4) = 0;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar5 = iVar5 + 0x10;
      *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
    } while (iVar2 < (int)param_4);
  }
  FUN_00d1df70(param_2,param_3);
  return;
}

