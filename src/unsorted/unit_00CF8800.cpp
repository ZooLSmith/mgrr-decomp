// src/unsorted/unit_00CF8800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF8800..00CF9960, 8 functions

#include "mgrr.h"

// 00CF8800  FUN_00cf8800  size=62  [run]
undefined4 __thiscall FUN_00cf8800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 != 0) {
    iVar1 = FUN_00cf5750(param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  return 0;
}

// 00CF8840  FUN_00cf8840  size=69  [run]
void __fastcall FUN_00cf8840(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00CF8890  FUN_00cf8890  size=1466  [run]
void FUN_00cf8890(undefined4 *param_1,short param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  undefined4 local_1c;
  int local_14;
  int local_10;
  undefined4 local_8;
  
  param_1[2] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *param_1 = 3;
  iVar2 = FUN_00cf7390(&local_14,0x79c096fa);
  if ((((iVar2 == 0) || (local_10 == 0)) || (local_14 == 0)) ||
     (((iVar2 = FUN_00cf7390(&local_28,0x6709e058), iVar2 == 0 || (local_24 == 0)) ||
      (local_28 == 0)))) goto switchD_00cf8a13_caseD_26;
  if ((ushort)(param_2 - 100U) < 0x1d) {
    uVar4 = *(uint *)(&DAT_018b41c8 + (DAT_01b77e30 + (uint)(ushort)(param_2 - 100) * 5) * 4);
    if (uVar4 == 0x1f) {
      uVar4 = *(uint *)(&DAT_018b3004 + DAT_01dc2cd8 * 4);
    }
    else if (uVar4 == 0x26) {
      uVar4 = *(uint *)(&DAT_018b350c + DAT_01dc2cd8 * 4);
    }
    else if (uVar4 == 0x2d) {
      uVar4 = *(uint *)(&DAT_018b3864 + DAT_01dc2cd8 * 4);
    }
    if (uVar4 == 0xffffffff) goto switchD_00cf8a13_caseD_26;
  }
  else {
    switch(param_2) {
    case 0:
      uVar4 = (uint)(DAT_01dc2cd4 == 0);
      break;
    case 1:
      uVar4 = (uint)(DAT_01dc2cd4 != 0);
      break;
    case 2:
      uVar4 = 0;
      break;
    case 3:
      uVar4 = 1;
      break;
    case 4:
      uVar4 = 2;
      break;
    case 5:
      uVar4 = 3;
      break;
    case 6:
      uVar4 = 4;
      break;
    case 7:
      uVar4 = 5;
      break;
    case 8:
      uVar4 = 6;
      break;
    case 9:
      uVar4 = 7;
      break;
    case 10:
      uVar4 = 8;
      break;
    case 0xb:
      uVar4 = 9;
      break;
    case 0xc:
      uVar4 = 10;
      break;
    case 0xd:
      uVar4 = 0xb;
      break;
    case 0xe:
      uVar4 = 0xc;
      break;
    case 0xf:
      uVar4 = 0xd;
      break;
    case 0x10:
      uVar4 = 0xe;
      break;
    case 0x11:
      uVar4 = 0xf;
      break;
    case 0x12:
      uVar4 = 0x10;
      break;
    case 0x13:
      uVar4 = 0x11;
      break;
    case 0x14:
      uVar4 = 0x12;
      break;
    case 0x15:
      uVar4 = 0x13;
      break;
    case 0x16:
      uVar4 = 0x14;
      break;
    case 0x17:
      uVar4 = 0x15;
      break;
    case 0x18:
      uVar4 = 0x16;
      break;
    case 0x19:
      uVar4 = 0x17;
      break;
    case 0x1a:
      uVar4 = 0x18;
      break;
    case 0x1b:
      uVar4 = 0x19;
      break;
    case 0x1c:
      uVar4 = 0x1a;
      break;
    case 0x1d:
      uVar4 = 0x1b;
      break;
    case 0x1e:
      uVar4 = 0x1c;
      break;
    case 0x1f:
      uVar4 = 0x1d;
      break;
    case 0x20:
      uVar4 = 0x34;
      break;
    case 0x21:
      uVar4 = 0x35;
      break;
    case 0x22:
      uVar4 = 0x36;
      break;
    case 0x23:
      uVar4 = 0x37;
      break;
    case 0x24:
      uVar4 = 0x38;
      break;
    case 0x25:
      uVar4 = 0x39;
      break;
    default:
      goto switchD_00cf8a13_caseD_26;
    case 0x28:
      uVar4 = 0x3c;
      break;
    case 0x29:
      uVar4 = 0x3d;
      break;
    case 0x2a:
      uVar4 = 0x3e;
      break;
    case 0x2b:
      uVar4 = 0x3f;
      break;
    case 0x2c:
      uVar4 = 0x40;
      break;
    case 0x2d:
      uVar4 = 0x41;
      break;
    case 0x31:
      uVar4 = 0x45;
      break;
    case 0x32:
      uVar4 = 0x46;
      break;
    case 0x33:
      uVar4 = 0x47;
      break;
    case 0x37:
      uVar4 = 0x4b;
      break;
    case 0x38:
      uVar4 = 0x4c;
    }
  }
  iVar2 = (param_3 * 0x4d + uVar4) * 8;
  fVar1 = *(float *)(&DAT_018b3cfc + iVar2);
  if (uVar4 - 0x34 < 0x19) {
    uVar3 = FUN_00cc95b0(0x6709e058,*(undefined4 *)(&DAT_018b3cf8 + iVar2));
    iVar2 = FUN_00ce13c0(&local_40,uVar3);
    local_8 = local_1c;
  }
  else {
    if (DAT_01dc1418 != '\0') {
      iVar5 = 0x17;
      switch(param_2) {
      case 0xc:
        iVar5 = DAT_01b77ea0;
        break;
      case 0x16:
      case 0x33:
        iVar5 = DAT_01b77ea4;
        break;
      case 0x2e:
      case 0x68:
      case 0x69:
      case 0x71:
        iVar5 = -0x7ffffff8;
        break;
      case 100:
        iVar5 = DAT_01b77e80;
        break;
      case 0x65:
        iVar5 = DAT_01b77e84;
        break;
      case 0x66:
        iVar5 = DAT_01b77e94;
        break;
      case 0x67:
        iVar5 = DAT_01b77e90;
        break;
      case 0x6a:
      case 0x74:
        iVar5 = DAT_01b77e78;
        break;
      case 0x6b:
      case 0x75:
        iVar5 = DAT_01b77e7c;
        break;
      case 0x6c:
        iVar5 = DAT_01b77e74;
        break;
      case 0x6d:
        iVar5 = DAT_01b77e88;
        break;
      case 0x6e:
        iVar5 = DAT_01b77eb4;
        break;
      case 0x6f:
      case 0x70:
      case 0x7b:
        iVar5 = DAT_01b77eb0;
        break;
      case 0x77:
        iVar5 = DAT_01b77e60;
        break;
      case 0x78:
        iVar5 = DAT_01b77e64;
        break;
      case 0x79:
        iVar5 = DAT_01b77e68;
        break;
      case 0x7a:
        iVar5 = DAT_01b77e6c;
        break;
      case 0x7c:
        iVar5 = DAT_01b77eac;
        break;
      case 0x7d:
        iVar5 = DAT_01b77e9c;
        break;
      case 0x7e:
        iVar5 = DAT_01b77e8c;
        break;
      case 0x80:
        iVar5 = DAT_01b77eb8;
      }
      if (param_2 == 0x7f) {
        uVar3 = FUN_00cc95b0(0x6709e058,*(undefined4 *)(&DAT_018b3f50 + param_3 * 0x268));
        iVar2 = FUN_00ce13c0(&local_40,uVar3);
        if (iVar2 != 0) {
          uVar3 = FUN_00fa0740(local_1c);
          param_1[9] = uVar3;
          fVar6 = (float10)*(float *)(&DAT_018b3f54 + param_3 * 0x268);
          goto LAB_00cf8de5;
        }
        goto switchD_00cf8a13_caseD_26;
      }
      if (iVar5 != 0x17) {
        if (param_3 == 0) {
          uVar3 = FUN_00cc7240();
        }
        else {
          uVar3 = FUN_00cc7260(iVar5);
        }
        uVar3 = FUN_00cc95b0(0x6709e058,uVar3);
        iVar2 = FUN_00ce13c0(&local_40,uVar3);
        if (iVar2 == 0) goto switchD_00cf8a13_caseD_26;
        uVar3 = FUN_00fa0740(local_1c);
        param_1[9] = uVar3;
        if (param_3 == 0) {
          fVar6 = (float10)FUN_00caa330();
        }
        else {
          fVar6 = (float10)FUN_00caa370(iVar5);
        }
        goto LAB_00cf8de5;
      }
    }
    uVar3 = FUN_00cc95b0(0x79c096fa,*(undefined4 *)(&DAT_018b3cf8 + iVar2));
    iVar2 = FUN_00ce13c0(&local_40,uVar3);
  }
  if (iVar2 != 0) {
    uVar3 = FUN_00fa0740(local_8);
    fVar6 = (float10)fVar1;
    param_1[9] = uVar3;
LAB_00cf8de5:
    param_1[6] = (float)fVar6;
    param_1[7] = local_38;
    param_1[8] = local_34;
    param_1[0xc] = local_30 * local_40;
    param_1[0xd] = local_2c * local_3c;
    param_1[0xe] = (local_40 + local_38) * local_30;
    param_1[0xf] = (local_3c + local_34) * local_2c;
    return;
  }
switchD_00cf8a13_caseD_26:
  param_1[7] = 0x42000000;
  param_1[8] = 0x42000000;
  return;
}

// 00CF9000  FUN_00cf9000  size=1856  [run]
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

// 00CF9770  FUN_00cf9770  size=86  [run]
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

// 00CF97D0  FUN_00cf97d0  size=296  [run]
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

// 00CF9900  FUN_00cf9900  size=94  [run]
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

// 00CF9960  FUN_00cf9960  size=89  [run]
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

