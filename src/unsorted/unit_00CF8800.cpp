// src/unsorted/unit_00CF8800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF8800..00CF8890, 3 functions

#include "types.h"

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

