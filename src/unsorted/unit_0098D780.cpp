// src/unsorted/unit_0098D780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098D780..0098DC90, 6 functions

#include "mgrr.h"

// 0098D780  FUN_0098d780  size=88  [run]
void __fastcall FUN_0098d780(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 600) = 0;
  if (DAT_01dc14c8 != 0) {
    uVar1 = FUN_00b7f5f0();
    switch(uVar1) {
    case 0:
      *(undefined4 *)(param_1 + 600) = 0;
      return;
    case 2:
      *(undefined4 *)(param_1 + 600) = 1;
      return;
    case 3:
      *(undefined4 *)(param_1 + 600) = 2;
      return;
    case 4:
      *(undefined4 *)(param_1 + 600) = 3;
    }
  }
  return;
}

// 0098D7F0  FUN_0098d7f0  size=174  [run]
void __fastcall FUN_0098d7f0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  puVar2 = (uint *)(param_1 + 0x2a0);
  if (*(int *)(param_1 + 0x3f8) != 0) {
    do {
      *puVar2 = (uint)((1 << ((byte)uVar1 & 0x1f) & (&DAT_01b73814)[uVar1 >> 5]) == 0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while ((int)uVar1 < 0x20);
    return;
  }
  if (*(int *)(param_1 + 0x3fc) == 0) {
    do {
      *puVar2 = (uint)((1 << ((byte)uVar1 & 0x1f) & (&DAT_01b6f3d0)[uVar1 >> 5]) == 0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while ((int)uVar1 < 0x38);
    return;
  }
  do {
    *puVar2 = (uint)((1 << ((byte)uVar1 & 0x1f) & (&DAT_01b7382c)[uVar1 >> 5]) == 0);
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)uVar1 < 0x20);
  return;
}

// 0098D8A0  FUN_0098d8a0  size=528  [run]
void __fastcall FUN_0098d8a0(int param_1)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x3f8) == 0) {
    if (*(int *)(param_1 + 0x3fc) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(param_1 + 0x2a4);
      do {
        bVar3 = (byte)uVar4;
        (&DAT_01b7382c)[uVar4 >> 5] =
             (&DAT_01b7382c)[uVar4 >> 5] | (uint)(piVar5[-1] != 1) << (bVar3 & 0x1f);
        (&DAT_01b7382c)[uVar4 + 1 >> 5] =
             (&DAT_01b7382c)[uVar4 + 1 >> 5] | (uint)(*piVar5 != 1) << (bVar3 + 1 & 0x1f);
        (&DAT_01b7382c)[uVar4 + 2 >> 5] =
             (&DAT_01b7382c)[uVar4 + 2 >> 5] | (uint)(piVar5[1] != 1) << (bVar3 + 2 & 0x1f);
        uVar1 = uVar4 + 3;
        piVar2 = piVar5 + 2;
        uVar4 = uVar4 + 4;
        piVar5 = piVar5 + 4;
        (&DAT_01b7382c)[uVar1 >> 5] =
             (&DAT_01b7382c)[uVar1 >> 5] | (uint)(*piVar2 != 1) << (bVar3 + 3 & 0x1f);
      } while ((int)uVar4 < 0x20);
    }
  }
  else {
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x2a4);
    do {
      bVar3 = (byte)uVar4;
      (&DAT_01b73814)[uVar4 >> 5] =
           (&DAT_01b73814)[uVar4 >> 5] | (uint)(piVar5[-1] != 1) << (bVar3 & 0x1f);
      (&DAT_01b73814)[uVar4 + 1 >> 5] =
           (&DAT_01b73814)[uVar4 + 1 >> 5] | (uint)(*piVar5 != 1) << (bVar3 + 1 & 0x1f);
      (&DAT_01b73814)[uVar4 + 2 >> 5] =
           (&DAT_01b73814)[uVar4 + 2 >> 5] | (uint)(piVar5[1] != 1) << (bVar3 + 2 & 0x1f);
      uVar1 = uVar4 + 3;
      piVar2 = piVar5 + 2;
      uVar4 = uVar4 + 4;
      piVar5 = piVar5 + 4;
      (&DAT_01b73814)[uVar1 >> 5] =
           (&DAT_01b73814)[uVar1 >> 5] | (uint)(*piVar2 != 1) << (bVar3 + 3 & 0x1f);
    } while ((int)uVar4 < 0x20);
  }
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x2a4);
  do {
    bVar3 = (byte)uVar4;
    (&DAT_01b6f3d0)[uVar4 >> 5] =
         (&DAT_01b6f3d0)[uVar4 >> 5] | (uint)(piVar5[-1] != 1) << (bVar3 & 0x1f);
    (&DAT_01b6f3d0)[uVar4 + 1 >> 5] =
         (&DAT_01b6f3d0)[uVar4 + 1 >> 5] | (uint)(*piVar5 != 1) << (bVar3 + 1 & 0x1f);
    (&DAT_01b6f3d0)[uVar4 + 2 >> 5] =
         (&DAT_01b6f3d0)[uVar4 + 2 >> 5] | (uint)(piVar5[1] != 1) << (bVar3 + 2 & 0x1f);
    uVar1 = uVar4 + 3;
    piVar2 = piVar5 + 2;
    uVar4 = uVar4 + 4;
    piVar5 = piVar5 + 4;
    (&DAT_01b6f3d0)[uVar1 >> 5] =
         (&DAT_01b6f3d0)[uVar1 >> 5] | (uint)(*piVar2 != 1) << (bVar3 + 3 & 0x1f);
  } while ((int)uVar4 < 0x38);
  return;
}

// 0098DAB0  FUN_0098dab0  size=66  [run]
void __fastcall FUN_0098dab0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x25c) + 0x41) * 0x10) + -1;
  if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x404);
  }
  if (*(int *)(param_1 + 0x2a0 + iVar1 * 4) != 0) {
    *(undefined4 *)(param_1 + 0x29c) = 1;
  }
  *(undefined4 *)(param_1 + 0x2a0 + iVar1 * 4) = 0;
  return;
}

// 0098DB00  FUN_0098db00  size=371  [run]
void __fastcall FUN_0098db00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_80;
  undefined1 local_7f [127];
  
  iVar1 = *(int *)(param_1 + 0x380);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x25c) + 0x41) * 0x10);
    if (iVar1 < 1) {
      return;
    }
    if (iVar1 == *(int *)(param_1 + 900)) {
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
    *(int *)(param_1 + 900) = iVar1;
LAB_0098dc63:
    *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + 1;
    return;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x388) != 0) {
      FUN_00e9d6a0(*(int *)(param_1 + 0x388));
    }
    local_80 = '\0';
    _memset(local_7f,0,0x7f);
    _sprintf_s(&local_80,0x80,"ui\\combolist\\combo_img_%02d.wtb",*(undefined4 *)(param_1 + 900));
    iVar1 = FUN_00dec390(&local_80);
    if (iVar1 != 0) {
      iVar1 = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
      *(int *)(param_1 + 0x388) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x380) = 0;
        return;
      }
      goto LAB_0098dc63;
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x388));
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x388));
    FUN_00f972f0();
    FUN_00fa25d0(uVar2);
    *(int *)(param_1 + 0x390) = param_1 + 0x3a0;
    if (*(int *)(param_1 + 0x3ac) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x3a8);
    }
    *(undefined4 *)(param_1 + 0x39c) = uVar2;
    FUN_00ccde60(*(undefined4 *)(param_1 + 0x24),param_1 + 0x38c);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  return;
}

// 0098DC90  FUN_0098dc90  size=957  [run]
void __fastcall FUN_0098dc90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int local_8;
  
  if (DAT_01dc1418 == '\0') {
    local_8 = 9;
    do {
      iVar1 = -0xc;
      puVar3 = (undefined4 *)(param_1 + 0x14c);
      iVar2 = 0x38;
      do {
        if (*(int *)(param_1 + 0x3fc) != 0) {
          switch(iVar1) {
          case -8:
            uVar4 = *puVar3;
            pcVar5 = "MANUAL_COMMAND_LQ_05";
            break;
          case -7:
            uVar4 = *puVar3;
            pcVar5 = "MANUAL_COMMAND_LQ_06";
            break;
          default:
            goto switchD_0098ded9_caseD_fffffffa;
          case -2:
            pcVar5 = "MANUAL_COMMAND_LQ_11";
            goto LAB_0098e03a;
          case -1:
            uVar4 = *puVar3;
            pcVar5 = "MANUAL_COMMAND_LQ_12";
          }
          goto LAB_0098e03d;
        }
        if (*(int *)(param_1 + 0x3f8) != 0) {
          switch(iVar1) {
          case 0:
            uVar4 = *puVar3;
            pcVar5 = "MANUAL_COMMAND_SAM_13";
            goto LAB_0098e03d;
          case 1:
            pcVar5 = "MANUAL_COMMAND_SAM_14";
            goto LAB_0098e03a;
          case 7:
            uVar4 = *puVar3;
            pcVar5 = "MANUAL_COMMAND_SAM_20";
            goto LAB_0098e03d;
          case 8:
            FUN_00cf9770(*puVar3,"MANUAL_COMMAND_SAM_21",0,0xffffffff);
            FUN_00cb2bc0(*puVar3,0x3f800000);
            FUN_00cb2c20(*puVar3,0x3f800000);
          }
          goto switchD_0098ded9_caseD_fffffffa;
        }
        switch(iVar1) {
        case 0:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_13";
          break;
        case 1:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_14";
          break;
        case 2:
          pcVar5 = "MANUAL_COMMAND_15";
          goto LAB_0098e03a;
        case 3:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_16";
          break;
        default:
          goto switchD_0098ded9_caseD_fffffffa;
        case 0x11:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_30";
          break;
        case 0x12:
          pcVar5 = "MANUAL_COMMAND_31";
          goto LAB_0098e03a;
        case 0x13:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_32";
          break;
        case 0x29:
          uVar4 = *puVar3;
          pcVar5 = "MANUAL_COMMAND_54";
          break;
        case 0x2b:
          pcVar5 = "MANUAL_COMMAND_56";
LAB_0098e03a:
          uVar4 = *puVar3;
          break;
        case -1:
          pcVar5 = "MANUAL_COMMAND_12";
          goto LAB_0098e03a;
        }
LAB_0098e03d:
        FUN_00cf9770(uVar4,pcVar5,0,0xffffffff);
switchD_0098ded9_caseD_fffffffa:
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        return;
      }
    } while( true );
  }
  iVar1 = -0xc;
  local_8 = 9;
  iVar2 = 0x38;
  puVar3 = (undefined4 *)(param_1 + 0x14c);
  do {
    if (*(int *)(param_1 + 0x3fc) != 0) {
      switch(iVar1) {
      case -8:
        uVar4 = *puVar3;
        pcVar5 = "MANUAL_COMMAND_LQ_05_PC";
        break;
      case -7:
        uVar4 = *puVar3;
        pcVar5 = "MANUAL_COMMAND_LQ_06_PC";
        break;
      default:
        goto switchD_0098dcfb_caseD_fffffffa;
      case -2:
        pcVar5 = "MANUAL_COMMAND_LQ_11_PC";
        goto LAB_0098de68;
      case -1:
        uVar4 = *puVar3;
        pcVar5 = "MANUAL_COMMAND_LQ_12_PC";
      }
      goto LAB_0098de6b;
    }
    if (*(int *)(param_1 + 0x3f8) != 0) {
      switch(iVar1) {
      case 0:
        uVar4 = *puVar3;
        pcVar5 = "MANUAL_COMMAND_SAM_13_PC";
        goto LAB_0098de6b;
      case 1:
        pcVar5 = "MANUAL_COMMAND_SAM_14_PC";
        goto LAB_0098de68;
      case 7:
        uVar4 = *puVar3;
        pcVar5 = "MANUAL_COMMAND_SAM_20_PC";
        goto LAB_0098de6b;
      case 8:
        FUN_00cf9770(*puVar3,"MANUAL_COMMAND_SAM_21_PC",0,0xffffffff);
        FUN_00cb2bc0(*puVar3,0x3f4ccccd);
        FUN_00cb2c20(*puVar3,0x3f4ccccd);
      }
      goto switchD_0098dcfb_caseD_fffffffa;
    }
    switch(iVar1) {
    case 0:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_13_PC";
      break;
    case 1:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_14_PC";
      break;
    case 2:
      pcVar5 = "MANUAL_COMMAND_15_PC";
      goto LAB_0098de68;
    case 3:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_16_PC";
      break;
    default:
      goto switchD_0098dcfb_caseD_fffffffa;
    case 0x11:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_30_PC";
      break;
    case 0x12:
      pcVar5 = "MANUAL_COMMAND_31_PC";
      goto LAB_0098de68;
    case 0x13:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_32_PC";
      break;
    case 0x29:
      uVar4 = *puVar3;
      pcVar5 = "MANUAL_COMMAND_54_PC";
      break;
    case 0x2b:
      pcVar5 = "MANUAL_COMMAND_56_PC";
LAB_0098de68:
      uVar4 = *puVar3;
      break;
    case -1:
      pcVar5 = "MANUAL_COMMAND_12_PC";
      goto LAB_0098de68;
    }
LAB_0098de6b:
    FUN_00cf9770(uVar4,pcVar5,0,0xffffffff);
switchD_0098dcfb_caseD_fffffffa:
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        return;
      }
      iVar1 = -0xc;
      iVar2 = 0x38;
      puVar3 = (undefined4 *)(param_1 + 0x14c);
    }
  } while( true );
}

