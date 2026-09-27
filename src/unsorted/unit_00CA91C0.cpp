// src/unsorted/unit_00CA91C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA91C0..00CAE0D0, 116 functions

#include "types.h"

// 00CA91C0  FUN_00ca91c0  size=83  [run]
void __fastcall FUN_00ca91c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 3;
  param_1[0x16] = 0xc;
  return;
}

// 00CA92B0  FUN_00ca92b0  size=803  [run]
char * FUN_00ca92b0(uint param_1,short param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  
  if (param_1 < 0x20111) {
    if (param_1 == 0x20110) {
LAB_00ca9499:
      if (param_4 != 1) {
        return "HUD_CHARA_NAME_S_0019";
      }
      return "HUD_CHARA_NAME_S_0020";
    }
    switch(param_1) {
    case 0x20010:
switchD_00ca92d8_caseD_20010:
      return "HUD_TYPE_01";
    default:
      goto switchD_00ca92d8_caseD_20011;
    case 0x20020:
switchD_00ca92d8_caseD_20020:
      return "HUD_CHARA_NAME_S_0025";
    case 0x20030:
    case 0x20033:
    case 0x20035:
switchD_00ca92d8_caseD_20030:
      return "HUD_CHARA_NAME_S_0007";
    case 0x20040:
switchD_00ca92d8_caseD_20040:
      return "HUD_CHARA_NAME_S_0005";
    case 0x20060:
switchD_00ca92d8_caseD_20060:
      return "HUD_CHARA_NAME_S_0008";
    case 0x20070:
    case 0x20071:
switchD_00ca92d8_caseD_20070:
      return "HUD_CHARA_NAME_S_0006";
    case 0x20080:
    case 0x20081:
      goto switchD_00ca92d8_caseD_20080;
    case 0x20100:
switchD_00ca92d8_caseD_20100:
      return "HUD_CHARA_NAME_S_0009";
    }
  }
  if (param_1 < 0x20221) {
    if (param_1 == 0x20220) {
LAB_00ca956b:
      if (((param_5 & 2) != 0) && (param_4 == 0)) {
        return "HUD_CHARA_NAME_S_0010";
      }
      return "HUD_CHARA_NAME_S_0011";
    }
    switch(param_1) {
    case 0x20120:
    case 0x20121:
switchD_00ca9303_caseD_20120:
      return "HUD_CHARA_NAME_S_0004";
    default:
      goto switchD_00ca92d8_caseD_20011;
    case 0x20130:
switchD_00ca9303_caseD_20130:
      return "HUD_CHARA_NAME_S_0037";
    case 0x20140:
    case 0x20142:
    case 0x20144:
    case 0x2014a:
switchD_00ca9303_caseD_20140:
      return "HUD_CHARA_NAME_S_0001";
    case 0x20150:
    case 0x20152:
switchD_00ca9303_caseD_20150:
      return "HUD_CHARA_NAME_S_0002";
    case 0x20160:
switchD_00ca9303_caseD_20160:
      return "HUD_CHARA_NAME_S_0036";
    case 0x20170:
switchD_00ca9303_caseD_20170:
      return "HUD_CHARA_NAME_S_0003";
    case 0x20180:
switchD_00ca9303_caseD_20180:
      return "HUD_CHARA_NAME_S_0014";
    case 0x20190:
switchD_00ca9303_caseD_20190:
      return "HUD_CHARA_NAME_S_0012";
    case 0x201a0:
switchD_00ca9303_caseD_201a0:
      if (param_4 != 2) {
        return "HUD_CHARA_NAME_S_0021";
      }
      return "HUD_CHARA_NAME_S_0022";
    case 0x201c0:
switchD_00ca9303_caseD_201c0:
      return "HUD_CHARA_NAME_S_0013";
    case 0x20200:
    case 0x2020a:
    case 0x2020b:
      goto switchD_00ca9303_caseD_20200;
    }
  }
  if (param_1 < 0x28501) {
    if (param_1 == 0x28500) {
LAB_00ca95a7:
      return "HUD_CHARA_NAME_S_0033";
    }
    if (param_1 < 0x28111) {
      if (param_1 == 0x28110) goto LAB_00ca9499;
      if (0x28010 < param_1) {
        switch(param_1) {
        case 0x28020:
          goto switchD_00ca92d8_caseD_20020;
        default:
          goto switchD_00ca92d8_caseD_20011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          goto switchD_00ca92d8_caseD_20030;
        case 0x28040:
          goto switchD_00ca92d8_caseD_20040;
        case 0x28060:
          goto switchD_00ca92d8_caseD_20060;
        case 0x28070:
        case 0x28071:
          goto switchD_00ca92d8_caseD_20070;
        case 0x28080:
        case 0x28081:
          goto switchD_00ca92d8_caseD_20080;
        case 0x28100:
          goto switchD_00ca92d8_caseD_20100;
        }
      }
      if (param_1 == 0x28010) goto switchD_00ca92d8_caseD_20010;
      if (param_1 < 0x20601) {
        if (param_1 == 0x20600) goto LAB_00ca95ad;
        if (param_1 != 0x20221) {
          if (param_1 == 0x20310) goto LAB_00ca93f9;
          if (param_1 != 0x20500) {
            return (char *)(-(uint)(param_3 != 0) & 0x16b6d30);
          }
        }
        goto LAB_00ca95a7;
      }
      if ((param_1 != 0x20700) && (param_1 != 0x2070a)) {
        if (param_1 == 0x21010) {
          return "HUD_CHARA_NAME_S_0016";
        }
        goto switchD_00ca92d8_caseD_20011;
      }
      goto LAB_00ca95cd;
    }
    if (param_1 < 0x28221) {
      if (param_1 == 0x28220) goto LAB_00ca956b;
      switch(param_1) {
      case 0x28120:
      case 0x28121:
        goto switchD_00ca9303_caseD_20120;
      default:
        goto switchD_00ca92d8_caseD_20011;
      case 0x28130:
        goto switchD_00ca9303_caseD_20130;
      case 0x28140:
      case 0x28142:
      case 0x28144:
      case 0x2814a:
        goto switchD_00ca9303_caseD_20140;
      case 0x28150:
      case 0x28152:
        goto switchD_00ca9303_caseD_20150;
      case 0x28160:
        goto switchD_00ca9303_caseD_20160;
      case 0x28170:
        goto switchD_00ca9303_caseD_20170;
      case 0x28180:
        goto switchD_00ca9303_caseD_20180;
      case 0x28190:
        goto switchD_00ca9303_caseD_20190;
      case 0x281a0:
        goto switchD_00ca9303_caseD_201a0;
      case 0x281c0:
        goto switchD_00ca9303_caseD_201c0;
      case 0x28200:
      case 0x2820a:
      case 0x2820b:
        goto switchD_00ca9303_caseD_20200;
      }
    }
    if (param_1 == 0x28221) goto LAB_00ca95a7;
    if (param_1 == 0x28310) {
LAB_00ca93f9:
      return "HUD_CHARA_NAME_S_0023";
    }
  }
  else {
    if (param_1 < 0x2c111) {
      if (param_1 == 0x2c110) goto LAB_00ca9499;
      if (0x2c010 < param_1) {
        switch(param_1) {
        case 0x2c020:
          goto switchD_00ca92d8_caseD_20020;
        default:
          goto switchD_00ca92d8_caseD_20011;
        case 0x2c030:
        case 0x2c033:
        case 0x2c035:
          goto switchD_00ca92d8_caseD_20030;
        case 0x2c040:
          goto switchD_00ca92d8_caseD_20040;
        case 0x2c060:
          goto switchD_00ca92d8_caseD_20060;
        case 0x2c070:
        case 0x2c071:
          goto switchD_00ca92d8_caseD_20070;
        case 0x2c080:
        case 0x2c081:
          goto switchD_00ca92d8_caseD_20080;
        case 0x2c100:
          goto switchD_00ca92d8_caseD_20100;
        }
      }
      if (param_1 == 0x2c010) goto switchD_00ca92d8_caseD_20010;
      if (param_1 == 0x28600) goto LAB_00ca95ad;
      iVar1 = param_1 - 0x28700;
    }
    else {
      if (param_1 < 0x2c221) {
        if (param_1 != 0x2c220) {
          switch(param_1) {
          case 0x2c120:
          case 0x2c121:
            goto switchD_00ca9303_caseD_20120;
          default:
            goto switchD_00ca92d8_caseD_20011;
          case 0x2c130:
            goto switchD_00ca9303_caseD_20130;
          case 0x2c140:
          case 0x2c142:
          case 0x2c144:
          case 0x2c14a:
            goto switchD_00ca9303_caseD_20140;
          case 0x2c150:
          case 0x2c152:
            goto switchD_00ca9303_caseD_20150;
          case 0x2c160:
            goto switchD_00ca9303_caseD_20160;
          case 0x2c170:
            goto switchD_00ca9303_caseD_20170;
          case 0x2c180:
            goto switchD_00ca9303_caseD_20180;
          case 0x2c190:
            goto switchD_00ca9303_caseD_20190;
          case 0x2c1a0:
            goto switchD_00ca9303_caseD_201a0;
          case 0x2c1c0:
            goto switchD_00ca9303_caseD_201c0;
          case 0x2c200:
          case 0x2c20a:
          case 0x2c20b:
            goto switchD_00ca9303_caseD_20200;
          }
        }
        goto LAB_00ca956b;
      }
      if (param_1 < 0x2c601) {
        if (param_1 == 0x2c600) {
LAB_00ca95ad:
          return "HUD_CHARA_NAME_S_0026";
        }
        if (param_1 != 0x2c221) {
          if (param_1 == 0x2c310) goto LAB_00ca93f9;
          if (param_1 != 0x2c500) goto switchD_00ca92d8_caseD_20011;
        }
        goto LAB_00ca95a7;
      }
      iVar1 = param_1 - 0x2c700;
    }
    if ((iVar1 == 0) || (iVar1 == 10)) {
LAB_00ca95cd:
      return "HUD_CHARA_NAME_S_0038";
    }
  }
switchD_00ca92d8_caseD_20011:
  return (char *)(-(uint)(param_3 != 0) & 0x16b6d30);
switchD_00ca92d8_caseD_20080:
  if (param_2 != 0x23) {
    if (param_2 != 0x2d) {
      return "HUD_CHARA_NAME_S_0018";
    }
    goto LAB_00ca9487;
  }
  goto LAB_00ca947b;
switchD_00ca9303_caseD_20200:
  if ((param_2 == 0x114) || (param_2 == 6)) {
    return "HUD_P_NAME_00";
  }
  if (param_2 == 0x20) {
LAB_00ca9487:
    return "HUD_P_NAME_02";
  }
  if (param_2 != 0x2b) {
    if ((param_2 != 0x36) && (param_2 != 0x3b)) {
      return "HUD_CHARA_NAME_S_0017";
    }
    return "HUD_P_NAME_03";
  }
LAB_00ca947b:
  return "HUD_P_NAME_01";
}

// 00CA9C50  FUN_00ca9c50  size=29  [run]
undefined * FUN_00ca9c50(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x9c)) {
    return (&PTR_s_HUD_ITEM_NAME_S_0001_018b23d8)[param_1 * 3];
  }
  return (undefined *)0x0;
}

// 00CA9C70  FUN_00ca9c70  size=37  [run]
undefined4 FUN_00ca9c70(int param_1)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 0x9c)) {
    uVar1 = FUN_00e03ea0();
    return uVar1;
  }
  return 0;
}

// 00CA9CF0  FUN_00ca9cf0  size=12  [run]
undefined * FUN_00ca9cf0(int param_1)

{
  return (&PTR_s_COLLECT_TITLE_06_018b2ba0)[param_1];
}

// 00CA9D00  FUN_00ca9d00  size=12  [run]
undefined * FUN_00ca9d00(int param_1)

{
  return (&PTR_s_COLLECT_TITLE_02_018b2bc0)[param_1];
}

// 00CA9D10  FUN_00ca9d10  size=94  [run]
uint FUN_00ca9d10(int param_1)

{
  if ((param_1 < 0) || (0x5f < param_1)) {
    return 0xffffffff;
  }
  if (0x5a < param_1) {
    return 7;
  }
  if (0x57 < param_1) {
    return 6;
  }
  if (0x52 < param_1) {
    return 5;
  }
  if (0x4f < param_1) {
    return 4;
  }
  if (0x38 < param_1) {
    return 3;
  }
  if (0x33 < param_1) {
    return 2;
  }
  return (uint)(0x15 < param_1);
}

// 00CA9DA0  FUN_00ca9da0  size=167  [run]
char * FUN_00ca9da0(int param_1)

{
  if ((param_1 < 0) || (0x5f < param_1)) {
    return (char *)0x0;
  }
  if (0x5a < param_1) {
    return s_icon_data_001_018b3938 + (param_1 * 9 + -0x333) * 4;
  }
  if (0x57 < param_1) {
    return s_icon_honor_026_018b2f98 + (param_1 * 9 + -0x318) * 4;
  }
  if (0x52 < param_1) {
    return s_icon_data_001_018b3880 + (param_1 * 9 + -0x2eb) * 4;
  }
  if (0x4f < param_1) {
    return s_icon_honor_023_018b2ef8 + (param_1 * 9 + -0x2d0) * 4;
  }
  if (0x38 < param_1) {
    return s_icon_data_001_018b3528 + (param_1 * 9 + -0x201) * 4;
  }
  if (0x33 < param_1) {
    return s_icon_mib_001_018b3458 + (param_1 * 9 + -0x1d4) * 4;
  }
  if (0x15 < param_1) {
    return s_icon_id_001_018b3020 + (param_1 * 9 + -0xc6) * 4;
  }
  return s_icon_honor_001_018b2be0 + param_1 * 0x24;
}

// 00CA9E50  FUN_00ca9e50  size=80  [run]
int FUN_00ca9e50(int param_1)

{
  if ((param_1 < 0) || (0x5f < param_1)) {
    return -1;
  }
  if (0x5a < param_1) {
    return param_1 + -0x5b;
  }
  if (0x57 < param_1) {
    return param_1 + -0x58;
  }
  if (0x52 < param_1) {
    return param_1 + -0x53;
  }
  if (0x4f < param_1) {
    return param_1 + -0x50;
  }
  if (0x38 < param_1) {
    return param_1 + -0x39;
  }
  if (0x33 < param_1) {
    return param_1 + -0x34;
  }
  if (0x15 < param_1) {
    param_1 = param_1 + -0x16;
  }
  return param_1;
}

// 00CA9EA0  FUN_00ca9ea0  size=6  [run]
undefined4 FUN_00ca9ea0(void)

{
  return 0x79c096fa;
}

// 00CA9EB0  FUN_00ca9eb0  size=6  [run]
undefined4 FUN_00ca9eb0(void)

{
  return 0x6709e058;
}

// 00CA9EC0  FUN_00ca9ec0  size=48  [run]
undefined4 FUN_00ca9ec0(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return *(undefined4 *)(&DAT_016b55a4 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return 1;
}

// 00CA9F00  FUN_00ca9f00  size=45  [run]
float10 FUN_00ca9f00(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return (float10)*(float *)(&DAT_016b55a8 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return (float10)0;
}

// 00CA9F50  FUN_00ca9f50  size=48  [run]
undefined4 FUN_00ca9f50(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return *(undefined4 *)(&DAT_016b55b4 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return 1;
}

// 00CA9F90  FUN_00ca9f90  size=45  [run]
undefined * FUN_00ca9f90(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return (&PTR_s_CORE_KEY_MES_069_016b55c0)[(short)uVar1 * 10];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return (undefined *)0x0;
}

// 00CA9FD0  FUN_00ca9fd0  size=45  [run]
undefined * FUN_00ca9fd0(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return (&PTR_s_CORE_KEY_MES2_069_016b55c4)[(short)uVar1 * 10];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return (undefined *)0x0;
}

// 00CAA010  FUN_00caa010  size=87  [run]
undefined4 FUN_00caa010(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  do {
    if ((param_1 == 0) || ((&DAT_016b55bc)[(short)uVar2 * 10] != 0)) {
      iVar1 = FUN_00dd9400((&DAT_016b55b8)[(short)uVar2 * 10]);
      if (iVar1 != 0) {
        return (&DAT_016b55b8)[(short)uVar2 * 10];
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x6c);
  return 0xb7;
}

// 00CAA070  FUN_00caa070  size=54  [run]
undefined4 FUN_00caa070(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return *(undefined4 *)(&DAT_016b68d8 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}

// 00CAA0B0  FUN_00caa0b0  size=57  [run]
undefined4 FUN_00caa0b0(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return *(undefined4 *)(&DAT_016b68dc + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

// 00CAA100  FUN_00caa100  size=54  [run]
float10 FUN_00caa100(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return (float10)*(float *)(&DAT_016b68e0 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return (float10)0;
}

// 00CAA140  FUN_00caa140  size=54  [run]
undefined4 FUN_00caa140(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return *(undefined4 *)(&DAT_016b68e4 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}

// 00CAA190  FUN_00caa190  size=54  [run]
undefined4 FUN_00caa190(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return *(undefined4 *)(&DAT_016b68e8 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}

// 00CAA1D0  FUN_00caa1d0  size=57  [run]
undefined4 FUN_00caa1d0(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return *(undefined4 *)(&DAT_016b68ec + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

// 00CAA220  FUN_00caa220  size=54  [run]
undefined * FUN_00caa220(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return (&PTR_s_CORE_KEY_MES_A01_016b68f8)[(short)uVar1 * 10];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return (undefined *)0x0;
}

// 00CAA260  FUN_00caa260  size=54  [run]
undefined * FUN_00caa260(uint param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    if (((&DAT_016b68f0)[(short)uVar1 * 10] & param_1 & 0x7fffffff) != 0) {
      return (&PTR_s_CORE_KEY_MES2_A01_016b68fc)[(short)uVar1 * 10];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return (undefined *)0x0;
}

// 00CAA2A0  FUN_00caa2a0  size=83  [run]
undefined4 FUN_00caa2a0(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  while (((param_1 != 0 && ((&DAT_016b68f4)[(short)uVar1 * 10] == 0)) ||
         (((&DAT_016b68f0)[(short)uVar1 * 10] & DAT_01b7b79c & 0x7fffffff) == 0))) {
    uVar1 = uVar1 + 1;
    if (3 < uVar1) {
      return 0;
    }
  }
  return (&DAT_016b68f0)[(short)uVar1 * 10];
}

// 00CAA310  FUN_00caa310  size=26  [run]
void FUN_00caa310(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa0b0();
    return;
  }
  FUN_00ca9ec0();
  return;
}

// 00CAA330  FUN_00caa330  size=26  [run]
void FUN_00caa330(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa100();
    return;
  }
  FUN_00ca9f00();
  return;
}

// 00CAA370  FUN_00caa370  size=22  [run]
void FUN_00caa370(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa100();
    return;
  }
  FUN_00ca9f00();
  return;
}

// 00CAA390  FUN_00caa390  size=26  [run]
void FUN_00caa390(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa1d0();
    return;
  }
  FUN_00ca9f50();
  return;
}

// 00CAA3D0  FUN_00caa3d0  size=26  [run]
void FUN_00caa3d0(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa260();
    return;
  }
  FUN_00ca9fd0();
  return;
}

// 00CAABA0  FUN_00caaba0  size=39  [run]
void __fastcall FUN_00caaba0(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x14) != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 4)) &&
      (iVar1 != 1)) && ((iVar1 != 9 && (iVar1 != 0)))) {
    FUN_00983f60();
    return;
  }
  return;
}

// 00CAABD0  FUN_00caabd0  size=49  [run]
void __fastcall FUN_00caabd0(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x14) != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 4)) &&
      (iVar1 != 1)) && ((iVar1 != 9 && (iVar1 != 0)))) {
    FUN_009869b0();
    FUN_00983f60();
    return;
  }
  return;
}

// 00CAAC10  FUN_00caac10  size=18  [run]
int __fastcall FUN_00caac10(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    return *(int *)(param_1 + 0x60) + 0x40;
  }
  return param_1 + 0xb0;
}

// 00CAAC30  FUN_00caac30  size=196  [run]
undefined4 * __thiscall FUN_00caac30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100 + param_2 * 4);
  if (iVar2 == 0) {
    return (undefined4 *)(param_1 + 0xb0);
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0xa0) = 0xbcf3f530;
    puVar1 = (undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = 0x3d5a2728;
    *(undefined4 *)(param_1 + 0xa8) = 0x3deee632;
    *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    iVar2 = FUN_00d46780();
    if (iVar2 != 0) {
      *puVar1 = 0xbcf2f987;
      *(undefined4 *)(param_1 + 0xa4) = 0x3d9ddc1e;
      *(undefined4 *)(param_1 + 0xa8) = 0x3de238da;
    }
    iVar2 = FUN_00d467a0();
    if (iVar2 != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0xbdb396d1;
      *(undefined4 *)(param_1 + 0xa8) = 0x3e89096c;
    }
    D3DXVec4Transform(puVar1,puVar1,*(int *)(param_1 + 0x6c) + 0x10);
    return puVar1;
  }
  return (undefined4 *)(iVar2 + 0x40);
}

// 00CAAD00  FUN_00caad00  size=28  [run]
undefined4 __fastcall FUN_00caad00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00caad1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x32c))();
  return uVar1;
}

// 00CAAD20  FUN_00caad20  size=18  [run]
undefined4 __fastcall FUN_00caad20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0;
  }
  uVar1 = FUN_00b8c050();
  return uVar1;
}

// 00CAB140  FUN_00cab140  size=33  [run]
void __thiscall FUN_00cab140(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x80)) &&
     (iVar1 = param_2 * 0x400 + *(int *)(param_1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = param_3;
  }
  return;
}

// 00CAB440  FUN_00cab440  size=96  [run]
void __thiscall FUN_00cab440(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x80) == 0) goto LAB_00cab486;
    do {
      iVar1 = *(int *)(param_1 + 0x7c) + iVar3;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x3d8) = param_2;
        *(undefined1 *)(iVar1 + 0x3ec) = param_4;
        *(undefined1 *)(iVar1 + 0x3ed) = 0;
        *(undefined4 *)(iVar1 + 0x3dc) = param_3;
      }
LAB_00cab486:
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x400;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  return;
}

// 00CAB4A0  FUN_00cab4a0  size=73  [run]
void __thiscall FUN_00cab4a0(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x80) == 0) goto LAB_00cab4d1;
    do {
      iVar1 = *(int *)(param_1 + 0x7c) + iVar3;
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x3ed) = param_2;
        *(undefined1 *)(iVar1 + 0x3ee) = 1;
      }
LAB_00cab4d1:
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x400;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  return;
}

// 00CAB4F0  FUN_00cab4f0  size=72  [run]
void __thiscall FUN_00cab4f0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x80) == 0) goto LAB_00cab521;
    do {
      iVar1 = *(int *)(param_1 + 0x7c) + iVar3;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x3d4) = param_2;
        *(undefined1 *)(iVar1 + 0x3ee) = 1;
        *(undefined4 *)(iVar1 + 0x3d0) = param_2;
      }
LAB_00cab521:
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x400;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  return;
}

// 00CAB580  FUN_00cab580  size=62  [run]
undefined4 __fastcall FUN_00cab580(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    if (uVar1 == 0) goto LAB_00cab5a6;
    do {
      iVar2 = *(int *)(param_1 + 0x7c) + iVar4;
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x3ed) == '\0')) {
        return 0;
      }
LAB_00cab5a6:
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x400;
    } while (uVar3 < uVar1);
  }
  return 1;
}

// 00CAB6B0  FUN_00cab6b0  size=56  [run]
int * __thiscall FUN_00cab6b0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 < *(uint *)(param_1 + 0x80)) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar1 != (int *)0x0))
  {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      return piVar1;
    }
  }
  return (int *)0x0;
}

// 00CAB860  FUN_00cab860  size=197  [run]
undefined4 __thiscall FUN_00cab860(int param_1,float *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar3 = 0;
  bVar1 = false;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      if (bVar1) {
        iVar2 = FUN_00d381d0(uVar3,&local_20);
        if (iVar2 != 0) {
          if (local_20 < *param_2) {
            *param_2 = local_20;
          }
          if (local_1c < param_2[1]) {
            param_2[1] = local_1c;
          }
          if (param_2[2] < local_18) {
            param_2[2] = local_18;
          }
          if (param_2[3] < local_14) {
            param_2[3] = local_14;
          }
        }
      }
      else {
        iVar2 = FUN_00d381d0(uVar3,param_2);
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x80));
  }
  return 1;
}

// 00CAB930  FUN_00cab930  size=174  [run]
undefined4 __thiscall FUN_00cab930(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (((*(uint *)(param_1 + 0x80) <= param_2) ||
      (piVar3 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar3 == (int *)0x0)
      ) || (iVar1 = (**(code **)(*piVar3 + 8))(), iVar1 != 0)) {
    piVar3 = (int *)0x0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar1 = param_2 * 0x400 + 0x50 + *(int *)(param_1 + 0x7c);
    iVar2 = param_2 * 0x400 + 0x2a0 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
  }
  if (((piVar3 != (int *)0x0) && (iVar1 != 0)) && (iVar2 != 0)) {
    if ((piVar3[0x22] != 0) && (piVar3[0x23] != 0)) {
      FUN_00cab860(param_3);
    }
    return 1;
  }
  return 0;
}

// 00CAB9F0  FUN_00cab9f0  size=371  [run]
/* WARNING: Removing unreachable block (ram,0x00cabaee) */
/* WARNING: Removing unreachable block (ram,0x00caba72) */
/* WARNING: Removing unreachable block (ram,0x00cabab9) */
/* WARNING: Removing unreachable block (ram,0x00cabb23) */

void FUN_00cab9f0(undefined4 *param_1,float param_2,int param_3,float param_4,undefined1 param_5)

{
  float10 fVar1;
  undefined2 uVar2;
  float10 extraout_ST0;
  float10 fVar3;
  float10 fVar4;
  
  if (((0.0 < param_2) && (0 < param_3)) && (0.0 < param_4)) {
    *(undefined1 *)((int)param_1 + 9) = param_5;
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = param_2 / (float)param_3;
    uVar2 = FUN_00fdbc60();
    param_1[3] = (float)extraout_ST0;
    *(undefined2 *)((int)param_1 + 10) = uVar2;
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    fVar3 = (float10)5.960465e-08;
    fVar4 = (float10)2.0;
    fVar1 = (float10)1;
    param_1[4] = (float)((fVar1 - (float10)(DAT_01dd0814 >> 8) * fVar3 * fVar4) * extraout_ST0);
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    param_1[5] = (float)((fVar1 - (float10)(DAT_01dd0814 >> 8) * fVar3 * fVar4) * extraout_ST0);
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    param_1[6] = (float)((fVar1 - (float10)(DAT_01dd0814 >> 8) * fVar3 * fVar4) * extraout_ST0);
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    param_1[7] = (float)((fVar1 - fVar4 * (float10)(DAT_01dd0814 >> 8) * fVar3) * extraout_ST0);
    *param_1 = param_1[5];
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0x3f800000;
  return;
}

// 00CABB70  FUN_00cabb70  size=15  [run]
void FUN_00cabb70(float *param_1,float *param_2)

{
  *param_1 = *param_1 + *param_2;
  return;
}

// 00CABEC0  FUN_00cabec0  size=289  [run]
undefined4 FUN_00cabec0(float *param_1,int param_2,float *param_3,uint param_4,float param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == (float *)0x0) {
    return 0;
  }
  if (param_5 < *param_3 != (param_5 == *param_3)) {
    *param_1 = (float)*(ushort *)(param_3 + 1) * *(float *)(param_2 + 0x10) +
               *(float *)(param_2 + 0xc);
    return 1;
  }
  if (param_3[param_4 * 2 + -2] <= param_5) {
    *param_1 = (float)*(ushort *)(param_3 + param_4 * 2 + -1) * *(float *)(param_2 + 0x10) +
               *(float *)(param_2 + 0xc);
    return 1;
  }
  uVar3 = 0;
  uVar4 = param_4;
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = (uVar4 - uVar5 >> 1) + uVar5;
      if ((param_3[uVar2 * 2 + -2] <= param_5) && (param_5 < param_3[uVar2 * 2])) {
        fVar1 = (float)*(ushort *)(param_3 + uVar2 * 2 + -1) * *(float *)(param_2 + 0x10) +
                *(float *)(param_2 + 0xc);
        *param_1 = fVar1 + (((float)*(ushort *)(param_3 + uVar2 * 2 + 1) *
                             *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0xc)) - fVar1) *
                           ((param_5 - param_3[uVar2 * 2 + -2]) /
                           (param_3[uVar2 * 2] - param_3[uVar2 * 2 + -2]));
        if (uVar3 < param_4) {
          return 1;
        }
        return 0;
      }
      if (param_5 < param_3[uVar2 * 2]) {
        uVar4 = uVar2;
        uVar2 = uVar5;
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar2;
    } while (uVar3 < param_4);
  }
  return 0;
}

// 00CABFF0  FUN_00cabff0  size=411  [run]
undefined4 FUN_00cabff0(float *param_1,undefined4 param_2,int param_3,uint param_4,float param_5)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  
  *param_1 = 0.0;
  if (param_3 == 0) {
    return 0;
  }
  fVar1 = -3.4028235e+38;
  uVar3 = 0;
  if (3 < (int)param_4) {
    pfVar2 = (float *)(param_3 + 8);
    do {
      if (((fVar1 <= pfVar2[-2]) && (pfVar2[-2] <= param_5)) || (uVar3 == 0)) {
        fVar1 = pfVar2[-2];
        *param_1 = pfVar2[-1];
      }
      if (param_5 <= pfVar2[-2]) {
        return 1;
      }
      if (((fVar1 < *pfVar2 != (fVar1 == *pfVar2)) && (*pfVar2 <= param_5)) || (uVar3 == 0xffffffff)
         ) {
        fVar1 = *pfVar2;
        *param_1 = pfVar2[1];
      }
      if (param_5 <= *pfVar2) {
        return 1;
      }
      if (((fVar1 < pfVar2[2] != (fVar1 == pfVar2[2])) && (pfVar2[2] <= param_5)) ||
         (uVar3 == 0xfffffffe)) {
        fVar1 = pfVar2[2];
        *param_1 = pfVar2[3];
      }
      if (param_5 <= pfVar2[2]) {
        return 1;
      }
      if (((fVar1 < pfVar2[4] != (fVar1 == pfVar2[4])) && (pfVar2[4] <= param_5)) ||
         (uVar3 == 0xfffffffd)) {
        fVar1 = pfVar2[4];
        *param_1 = pfVar2[5];
      }
      if (param_5 <= pfVar2[4]) {
        return 1;
      }
      uVar3 = uVar3 + 4;
      pfVar2 = pfVar2 + 8;
    } while (uVar3 < param_4 - 3);
  }
  if (uVar3 < param_4) {
    do {
      if (((fVar1 <= *(float *)(param_3 + uVar3 * 8)) &&
          (*(float *)(param_3 + uVar3 * 8) <= param_5)) || (uVar3 == 0)) {
        fVar1 = *(float *)(param_3 + uVar3 * 8);
        *param_1 = *(float *)(param_3 + 4 + uVar3 * 8);
      }
    } while ((*(float *)(param_3 + uVar3 * 8) < param_5) && (uVar3 = uVar3 + 1, uVar3 < param_4));
    return 1;
  }
  return 1;
}

// 00CAC190  FUN_00cac190  size=107  [run]
float10 FUN_00cac190(float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  
  if (param_4 == 0) {
    return (float10)param_1;
  }
  fVar2 = (float10)param_1;
  if (fVar2 < (float10)param_2) {
    iVar1 = FUN_00fdbc60();
    return extraout_ST1 - extraout_ST0 * (float10)iVar1;
  }
  if ((float10)param_3 < fVar2) {
    iVar1 = FUN_00fdbc60();
    return extraout_ST1_00 - extraout_ST0_00 * (float10)iVar1;
  }
  return fVar2;
}

// 00CAC210  FUN_00cac210  size=79  [run]
uint FUN_00cac210(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = 0;
  do {
    pbVar3 = (&PTR_DAT_018b3a30)[uVar2];
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00cac250:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00cac255;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00cac250;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00cac255:
    if (iVar4 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    if (0x1b < uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

// 00CAC2C0  FUN_00cac2c0  size=6  [run]
undefined4 FUN_00cac2c0(void)

{
  return 1;
}

// 00CAC2D0  FUN_00cac2d0  size=6  [run]
undefined4 FUN_00cac2d0(void)

{
  return 1;
}

// 00CAC330  FUN_00cac330  size=35  [run]
bool __fastcall FUN_00cac330(int param_1)

{
  int iVar1;
  
  FUN_00c1cf50();
  iVar1 = FUN_00c1cfd0();
  if (iVar1 == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x664) == 5;
}

// 00CAC360  FUN_00cac360  size=48  [run]
undefined4 __thiscall FUN_00cac360(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = 0;
  while ((piVar1[2] != param_2 || (*piVar1 != -1))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x1d;
    if (0xd < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00CAC390  FUN_00cac390  size=92  [run]
void __fastcall FUN_00cac390(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 0x684) == 0) {
    uVar1 = FUN_00df7f70();
    FUN_00deb490(local_40,0x40,"ui\\dlc3\\ui_dlc3.dat",uVar1);
    iVar2 = FUN_00dec390(local_40);
    if (iVar2 != 0) {
      uVar1 = FUN_00e9e570(5,local_40,&DAT_01b7eb10,1,0);
      *(undefined4 *)(param_1 + 0x684) = uVar1;
    }
  }
  return;
}

// 00CAC3F0  FUN_00cac3f0  size=61  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cac3f0(int param_1)

{
  if (*(int *)(param_1 + 0x684) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x684));
    FUN_00de3540(0,0);
    *(undefined4 *)(param_1 + 0x684) = 0;
    _DAT_01d61390 = 0;
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  return;
}

// 00CAC450  FUN_00cac450  size=40  [run]
void __fastcall FUN_00cac450(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x684) != 0) {
    uVar1 = FUN_00e9d0b0(*(int *)(param_1 + 0x684));
    FUN_00de3540(uVar1,0);
  }
  return;
}

// 00CAC480  FUN_00cac480  size=7  [run]
int __fastcall FUN_00cac480(int param_1)

{
  return param_1 + 0x688;
}

// 00CAC570  FUN_00cac570  size=198  [run]
bool FUN_00cac570(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c20a30();
  if (iVar1 == 0) {
    return false;
  }
  if (((param_1 & 0x400) != 0) && (iVar1 = FUN_00dd93a0(0x92), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 0x2000) != 0) && (iVar1 = FUN_00dd93a0(0x93), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 1) != 0) && (iVar1 = FUN_00dd93a0(0x8d), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 2) != 0) && (iVar1 = FUN_00dd93a0(0x8e), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 4) != 0) && (iVar1 = FUN_00dd93a0(0x8c), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 8) != 0) && (iVar1 = FUN_00dd93a0(0x8f), iVar1 != 0)) {
    return true;
  }
  return (*(uint *)(&DAT_01b7b910 + param_2 * 0x30) & param_1) != 0;
}

// 00CAC640  FUN_00cac640  size=198  [run]
bool FUN_00cac640(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c20a30();
  if (iVar1 == 0) {
    return false;
  }
  if (((param_1 & 0x400) != 0) && (iVar1 = FUN_00dd9400(0x92), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 0x2000) != 0) && (iVar1 = FUN_00dd9400(0x93), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 1) != 0) && (iVar1 = FUN_00dd9400(0x8d), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 2) != 0) && (iVar1 = FUN_00dd9400(0x8e), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 4) != 0) && (iVar1 = FUN_00dd9400(0x8c), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 8) != 0) && (iVar1 = FUN_00dd9400(0x8f), iVar1 != 0)) {
    return true;
  }
  return ((&DAT_01b7b914)[param_2 * 0xc] & param_1) != 0;
}

// 00CAC7E0  FUN_00cac7e0  size=198  [run]
bool FUN_00cac7e0(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c20a30();
  if (iVar1 == 0) {
    return false;
  }
  if (((param_1 & 0x400) != 0) && (iVar1 = FUN_00dd94c0(0x92), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 0x2000) != 0) && (iVar1 = FUN_00dd94c0(0x93), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 1) != 0) && (iVar1 = FUN_00dd94c0(0x8d), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 2) != 0) && (iVar1 = FUN_00dd94c0(0x8e), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 4) != 0) && (iVar1 = FUN_00dd94c0(0x8c), iVar1 != 0)) {
    return true;
  }
  if (((param_1 & 8) != 0) && (iVar1 = FUN_00dd94c0(0x8f), iVar1 != 0)) {
    return true;
  }
  return (*(uint *)(&DAT_01b7b91c + param_2 * 0x30) & param_1) != 0;
}

// 00CAC950  FUN_00cac950  size=11  [run]
bool FUN_00cac950(void)

{
  return DAT_01b7b79c == 1;
}

// 00CAC960  FUN_00cac960  size=11  [run]
bool FUN_00cac960(void)

{
  return DAT_01b7b79c == 2;
}

// 00CAC970  FUN_00cac970  size=11  [run]
bool FUN_00cac970(void)

{
  return DAT_01b7b7a4 == 1;
}

// 00CAC9C0  FUN_00cac9c0  size=11  [run]
undefined1 __thiscall FUN_00cac9c0(int param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 8 + param_1);
}

// 00CAC9D0  FUN_00cac9d0  size=82  [run]
bool __fastcall FUN_00cac9d0(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00dd93a0(*(undefined4 *)((int)&DAT_018b5d80 + uVar3));
    if (iVar1 != 0) {
      return true;
    }
    uVar3 = uVar3 + 4;
    uVar2 = 0;
  } while (uVar3 < 0x1ac);
  do {
    if ((*(uint *)(&DAT_018b5d74 + uVar2) & DAT_01b7b798) != 0) {
      return true;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  if (*param_1 != '\0') {
    return true;
  }
  return param_1[1] != '\0';
}

// 00CACA30  FUN_00caca30  size=286  [run]
char FUN_00caca30(int param_1)

{
  int iVar1;
  
  if ((((param_1 == 0xa10) || (param_1 == 0xa15)) || (param_1 == 0xa50)) || (param_1 == 0xa70)) {
    return '\x02';
  }
  if (((param_1 == 0xf00) || (param_1 == 0xf01)) || (param_1 == 0xf02)) {
    return '\x04';
  }
  if (((param_1 == 0xf03) || (param_1 == 0xf04)) || (param_1 == 0xf15)) {
    return '\x01';
  }
  if (param_1 == 0xf05) {
    return '\x05';
  }
  if (param_1 != 0xf06) {
    if (param_1 == 0xf07) {
      return '\a';
    }
    if (param_1 == 0xf08) {
      return '\x0f';
    }
    if (param_1 != 0xf09) {
      if (param_1 == 0xf0a) {
        return '\t';
      }
      if (param_1 == 0xf0b) {
        return '\n';
      }
      if (param_1 == 0x50) {
        return '\x10';
      }
      if (param_1 - 0xe00U < 0x100) {
        return '\v';
      }
      if (param_1 == 0xf31) {
        return '\a';
      }
      if (param_1 != 0xf32) {
        if (param_1 == 0xf33) {
          return '\a';
        }
        if (param_1 != 0xf34) {
          if (param_1 == 0xf14) {
            return '\x11';
          }
          if (param_1 == 0xf30) {
            return '\x06';
          }
          iVar1 = FUN_00a4a350(param_1);
          return (-(iVar1 != 0) & 8U) + 3;
        }
      }
    }
    return '\b';
  }
  return '\x06';
}

// 00CACB50  FUN_00cacb50  size=72  [run]
void __thiscall
FUN_00cacb50(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  FUN_00ddccc0(param_1 + 0xb30,param_2 * 0.017453292,param_3 / param_4,param_5,param_6,0,0);
  return;
}

// 00CACBD0  FUN_00cacbd0  size=23  [run]
void __fastcall FUN_00cacbd0(int param_1)

{
  D3DXMatrixMultiply(param_1 + 0xb70,&DAT_01dc2b00,&DAT_01dc2b40);
  return;
}

// 00CACBF0  FUN_00cacbf0  size=72  [run]
void __thiscall
FUN_00cacbf0(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  FUN_00ddccc0(param_1 + 0xbf0,param_2 * 0.017453292,param_3 / param_4,param_5,param_6,0,0);
  return;
}

// 00CACC70  FUN_00cacc70  size=23  [run]
void __fastcall FUN_00cacc70(int param_1)

{
  D3DXMatrixMultiply(param_1 + 0xc30,&DAT_01dc2bc0,&DAT_01dc2c00);
  return;
}

// 00CACC90  FUN_00cacc90  size=34  [run]
void __fastcall FUN_00cacc90(int param_1)

{
  FUN_00a28070(param_1 + 0xc70,0,0x477fff00);
  return;
}

// 00CACCC0  FUN_00caccc0  size=283  [run]
undefined4 __thiscall FUN_00caccc0(int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = FUN_00f98a90();
  local_1c = FUN_00f98aa0();
  local_18 = 0;
  local_14 = 0x3f800000;
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  local_44 = param_3[3];
  local_50 = (*param_3 - (float)iVar1 * 0.5) * 0.01;
  local_4c = (param_3[1] - (float)iVar2 * 0.5) * 0.01;
  local_48 = param_3[2] * 0.01;
  thunk_FUN_00ddf0f0(param_2,&local_50,&local_28,param_1 + 0xb30,param_1 + 0xaf0);
  if ((0.0 <= (float)param_2[2]) && ((float)param_2[2] <= 1.0)) {
    D3DXVec3TransformNormal(local_40,&local_50,param_1 + 0xaf0);
    param_2[3] = (*(float *)(param_1 + 0xb28) + local_44) * -1.0;
    return 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xbdcccccd;
  return 0;
}

// 00CACDE0  FUN_00cacde0  size=262  [run]
void FUN_00cacde0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if ((param_2 == 2) || (param_2 == 3)) {
    local_5c = 0x3c23d70a;
    local_58 = 0xbc23d70a;
    local_54 = 0x3c23d70a;
    FUN_00ddd140(local_50,&local_5c);
    D3DXMatrixMultiply(param_1,local_50,param_1);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 0.99;
  }
  else if (param_2 == 1) {
    local_5c = 0x3c23d70a;
    local_58 = 0x3c23d70a;
    local_54 = 0x3c23d70a;
    FUN_00ddd140(local_50,&local_5c);
    D3DXMatrixMultiply(param_1,local_50,param_1);
    iVar1 = FUN_00f98a90();
    iVar2 = FUN_00f98aa0();
    *(float *)(param_1 + 0x30) = (*(float *)(param_1 + 0x30) - (float)iVar1 * 0.5) * 0.01;
    *(float *)(param_1 + 0x34) = (*(float *)(param_1 + 0x34) - (float)iVar2 * 0.5) * 0.01 + 0.99;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * 0.01;
    return;
  }
  return;
}

// 00CACF20  FUN_00cacf20  size=26  [run]
float10 FUN_00cacf20(void)

{
  if ((DAT_01bea064 & 0x4000) != 0) {
    return (float10)0.132;
  }
  return (float10)0.066;
}

// 00CACFA0  FUN_00cacfa0  size=13  [run]
void __thiscall FUN_00cacfa0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc8) = param_2;
  return;
}

// 00CACFB0  FUN_00cacfb0  size=7  [run]
undefined4 __fastcall FUN_00cacfb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc8);
}

// 00CACFC0  FUN_00cacfc0  size=69  [run]
undefined4 FUN_00cacfc0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 5;
  case 7:
    return 6;
  }
}

// 00CAD030  FUN_00cad030  size=69  [run]
undefined4 FUN_00cad030(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 1;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  case 5:
    return 6;
  case 6:
    return 7;
  }
}

// 00CAD0A0  FUN_00cad0a0  size=13  [run]
void __thiscall FUN_00cad0a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xccc) = param_2;
  return;
}

// 00CAD0C0  FUN_00cad0c0  size=11  [run]
void __fastcall FUN_00cad0c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xccc) = 4;
  return;
}

// 00CAD0D0  FUN_00cad0d0  size=112  [run]
void FUN_00cad0d0(int param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  if (param_1 == 8) {
    _sprintf_s(param_2,param_3,"ui\\dlc2\\ui_chapter_%02d.%s",8,param_4);
    return;
  }
  if (param_1 == 9) {
    _sprintf_s(param_2,param_3,"ui\\dlc3\\ui_chapter_%02d.%s",9,param_4);
    return;
  }
  _sprintf_s(param_2,param_3,"ui\\ui_chapter_%02d.%s",param_1,param_4);
  return;
}

// 00CAD140  FUN_00cad140  size=112  [run]
void FUN_00cad140(int param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  if (param_1 == 8) {
    _sprintf_s(param_2,param_3,"ui\\dlc2\\ui_chapter_pre_%02d.%s",8,param_4);
    return;
  }
  if (param_1 == 9) {
    _sprintf_s(param_2,param_3,"ui\\dlc3\\ui_chapter_pre_%02d.%s",9,param_4);
    return;
  }
  _sprintf_s(param_2,param_3,"ui\\ui_chapter_pre_%02d.%s",param_1,param_4);
  return;
}

// 00CAD1B0  FUN_00cad1b0  size=57  [run]
int __thiscall FUN_00cad1b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd44);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00CAD200  FUN_00cad200  size=57  [run]
int __thiscall FUN_00cad200(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd48);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00CAD240  FUN_00cad240  size=7  [run]
undefined4 __fastcall FUN_00cad240(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd48);
}

// 00CAD250  FUN_00cad250  size=57  [run]
int __thiscall FUN_00cad250(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd4c);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00CAD290  FUN_00cad290  size=7  [run]
undefined4 __fastcall FUN_00cad290(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd4c);
}

// 00CAD2A0  FUN_00cad2a0  size=56  [run]
int __fastcall FUN_00cad2a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd50);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00CAD2E0  FUN_00cad2e0  size=7  [run]
undefined4 __fastcall FUN_00cad2e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd50);
}

// 00CAD2F0  FUN_00cad2f0  size=57  [run]
int __thiscall FUN_00cad2f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd54);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = param_2;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00CAD330  FUN_00cad330  size=7  [run]
undefined4 __fastcall FUN_00cad330(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd54);
}

// 00CAD340  FUN_00cad340  size=32  [run]
void __thiscall FUN_00cad340(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xd60) == 0) {
    *(undefined4 *)(param_1 + 0xd58) = param_2;
    *(undefined4 *)(param_1 + 0xd5c) = 0;
  }
  return;
}

// 00CAD360  FUN_00cad360  size=34  [run]
void __thiscall FUN_00cad360(int param_1,int param_2)

{
  *(int *)(param_1 + 0xd60) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xd58) = 1;
    *(undefined4 *)(param_1 + 0xd5c) = 1;
  }
  return;
}

// 00CAD390  FUN_00cad390  size=67  [run]
undefined4 __fastcall FUN_00cad390(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x80000000) == 0) {
    iVar1 = FUN_00eb4340(DAT_01be8e4c);
    if (((iVar1 == 0) || (*(int *)(param_1 + 0xd58) == 0)) || ((DAT_01bea060 & 0x40000000) != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00CAD3E0  FUN_00cad3e0  size=53  [run]
void __fastcall FUN_00cad3e0(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea060 & 0x200) == 0) {
    iVar1 = FUN_00c1bd80();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xd64) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xd64) = 1;
  return;
}

// 00CAD420  FUN_00cad420  size=12  [run]
uint FUN_00cad420(void)

{
  return DAT_01bea090 >> 6 & 1;
}

// 00CAD430  FUN_00cad430  size=104  [run]
void FUN_00cad430(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_01b6efb0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc0e00000;
  param_1[3] = 0x3f800000;
  uVar1 = 0xc0e00000;
  switch(uVar2) {
  case 0:
    uVar1 = 0xc0ba3d71;
switchD_00cad454_caseD_2:
    param_1[2] = uVar1;
    return;
  case 1:
  case 3:
    param_1[2] = 0xc0eeb852;
    return;
  case 2:
    goto switchD_00cad454_caseD_2;
  case 4:
    param_1[2] = 0xc1233333;
    return;
  case 5:
    param_1[2] = 0xc1280000;
    return;
  default:
    return;
  }
}

// 00CAD4B0  FUN_00cad4b0  size=20  [run]
float10 __fastcall FUN_00cad4b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90(param_1);
  return (float10)iVar1 * (float10)0.00078125;
}

// 00CAD4D0  FUN_00cad4d0  size=20  [run]
float10 __fastcall FUN_00cad4d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f98aa0(param_1);
  return (float10)iVar1 * (float10)0.0013888889;
}

// 00CAD4F0  FUN_00cad4f0  size=105  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00cad4f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_68 [22];
  int local_10;
  
  iVar1 = FUN_00df8520();
  if (iVar1 == 0) {
    puVar2 = &DAT_01f20668;
    puVar3 = local_68;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = GetSystemMetrics(0);
    return ((float10)_DAT_01b7b7a8 - (float10)local_10) /
           ((float10)(iVar1 + local_10 * -2) * (float10)0.00078125);
  }
  iVar1 = FUN_00f98a90();
  return (float10)_DAT_01b7b7a8 / ((float10)iVar1 * (float10)0.00078125);
}

// 00CAD560  FUN_00cad560  size=106  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00cad560(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_68 [23];
  int local_c;
  
  iVar1 = FUN_00df8520();
  if (iVar1 == 0) {
    puVar2 = &DAT_01f20668;
    puVar3 = local_68;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = GetSystemMetrics(1);
    return ((float10)_DAT_01b7b7ac - (float10)local_c) /
           ((float10)(iVar1 + local_c * -2) * (float10)0.0013888889);
  }
  iVar1 = FUN_00f98aa0();
  return (float10)_DAT_01b7b7ac / ((float10)iVar1 * (float10)0.0013888889);
}

// 00CAD5D0  FUN_00cad5d0  size=28  [run]
void __fastcall FUN_00cad5d0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}

// 00CAD690  FUN_00cad690  size=199  [run]
void __fastcall FUN_00cad690(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x520) + 0x44))(0x100000,&DAT_01b7ef80,"cKMsgFile");
  (**(code **)(*(int *)(param_1 + 0x990) + 0x44))(0x280000,&DAT_01b83210,"cKMsgVram");
  *(int *)(param_1 + 0xf20) = param_1 + 0x520;
  *(int *)(param_1 + 0xf24) = param_1 + 0x990;
  *(undefined **)(param_1 + 0xf14) = &DAT_01b7eb10;
  *(undefined **)(param_1 + 0xf18) = &DAT_01b82da0;
  *(undefined4 *)(param_1 + 0xf1c) = 0;
  *(undefined4 *)(param_1 + 0xf28) = 0;
  *(undefined **)(param_1 + 0xf2c) = &DAT_01b7ef80;
  *(undefined **)(param_1 + 0xf30) = &DAT_01b83210;
  *(undefined4 *)(param_1 + 0xf34) = 1;
  *(undefined **)(param_1 + 0xf38) = &DAT_01b7eb10;
  *(undefined **)(param_1 + 0xf3c) = &DAT_01b82da0;
  *(undefined4 *)(param_1 + 0xf40) = 0;
  *(undefined4 *)(param_1 + 0x514) = 1;
  *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  return;
}

// 00CAD770  FUN_00cad770  size=103  [run]
undefined4 __fastcall FUN_00cad770(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xe0c) != '\0') {
    iVar1 = FUN_00dec390(param_1 + 0xe0c);
    if ((iVar1 != 0) && (iVar1 = FUN_00e9d4d0(param_1 + 0xe0c), iVar1 == 0)) {
      return 0;
    }
    if (*(char *)(param_1 + 0xe8c) != '\0') {
      iVar1 = FUN_00dec390(param_1 + 0xe8c);
      if ((iVar1 != 0) && (iVar1 = FUN_00e9d4d0(param_1 + 0xe8c), iVar1 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00CAD7E0  FUN_00cad7e0  size=27  [run]
undefined4 __fastcall FUN_00cad7e0(int param_1)

{
  if ((*(int *)(param_1 + 0x2c4) != 0) && (*(int *)(param_1 + 0x300) != 0)) {
    return 1;
  }
  return 0;
}

// 00CAD950  FUN_00cad950  size=13  [run]
bool __fastcall FUN_00cad950(int param_1)

{
  return *(int *)(param_1 + 0x504) == 2;
}

// 00CAD960  FUN_00cad960  size=200  [run]
void FUN_00cad960(char *param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char local_304 [4];
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  switch(param_4) {
  case 1:
    puVar1 = &DAT_0165c260;
    break;
  case 2:
    puVar1 = &DAT_016b6e74;
    break;
  case 3:
    puVar1 = &DAT_016b6e70;
    break;
  case 4:
    puVar1 = &DAT_016b6e6c;
    break;
  case 5:
    puVar1 = &DAT_016b6e68;
    break;
  case 6:
    puVar1 = &DAT_016b6e64;
    break;
  case 7:
    puVar1 = &DAT_016b6e60;
    break;
  default:
    puVar1 = &DAT_016416fa;
  }
  __splitpath_s(param_3,local_304,3,local_100,0x100,local_200,0x100,local_300,0x100);
  _sprintf_s(param_1,param_2,"%s%s%s%s%s",local_304,local_100,local_200,puVar1,local_300);
  return;
}

// 00CADA50  FUN_00cada50  size=223  [run]
void FUN_00cada50(char *param_1,size_t param_2,char *param_3,int param_4)

{
  undefined1 *puVar1;
  char local_304 [4];
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  switch(param_4) {
  case 1:
    puVar1 = &DAT_0165c260;
    break;
  case 2:
    puVar1 = &DAT_016b6e74;
    break;
  case 3:
    puVar1 = &DAT_016b6e70;
    break;
  case 4:
    puVar1 = &DAT_016b6e6c;
    break;
  case 5:
    puVar1 = &DAT_016b6e68;
    break;
  case 6:
    puVar1 = &DAT_016b6e64;
    break;
  case 7:
    puVar1 = &DAT_016b6e60;
    break;
  default:
    puVar1 = &DAT_016416fa;
  }
  if (((DAT_01bea064 & 0x8000) == 0) && (param_4 == 0)) {
    puVar1 = &DAT_016b6e78;
  }
  __splitpath_s(param_3,local_304,3,local_100,0x100,local_200,0x100,local_300,0x100);
  _sprintf_s(param_1,param_2,"%s%s%s%s%s",local_304,local_100,local_200,puVar1,local_300);
  return;
}

// 00CADB50  FUN_00cadb50  size=219  [run]
char FUN_00cadb50(int param_1)

{
  int iVar1;
  
  if (param_1 - 0xa00U < 0x100) {
    return '\0';
  }
  if (param_1 - 0x100U < 0x100) {
    return '\x01';
  }
  if (param_1 - 0x200U < 0x100) {
    return '\x02';
  }
  if (param_1 - 0x300U < 0x100) {
    return '\x03';
  }
  if (param_1 - 0x400U < 0x100) {
    return '\x04';
  }
  if (param_1 - 0x500U < 0x100) {
    return '\x05';
  }
  if (param_1 - 0x600U < 0x100) {
    return '\x06';
  }
  if (param_1 - 0x700U < 0x100) {
    return '\a';
  }
  if (param_1 - 0xe00U < 0x100) {
    return '\b';
  }
  iVar1 = FUN_00a4a350(param_1);
  return (-(iVar1 != 0) & 7U) + 1;
}

// 00CADD10  FUN_00cadd10  size=193  [run]
void FUN_00cadd10(char *param_1,size_t param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *_Format;
  
  while( true ) {
    switch(param_4) {
    case 1:
      puVar3 = &DAT_0165c260;
      break;
    case 2:
      puVar3 = &DAT_016b6e74;
      break;
    case 3:
      puVar3 = &DAT_016b6e70;
      break;
    case 4:
      puVar3 = &DAT_016b6e6c;
      break;
    case 5:
      puVar3 = &DAT_016b6e68;
      break;
    case 6:
      puVar3 = &DAT_016b6e64;
      break;
    case 7:
      puVar3 = &DAT_016b6e60;
      break;
    default:
      puVar3 = &DAT_016416fa;
    }
    if (param_6 == 0) {
      _Format = "%sCdp%03x%s.bxm";
      uVar1 = param_5;
    }
    else {
      uVar1 = FUN_00cadb50(param_5);
      _Format = "%sCd%dst%s.bxm";
    }
    _sprintf_s(param_1,param_2,_Format,param_3,uVar1,puVar3);
    if (((param_4 == 0) || (param_4 == 1)) || (iVar2 = FUN_00dec390(param_1), iVar2 != 0)) break;
    param_4 = 1;
  }
  return;
}

// 00CADE40  FUN_00cade40  size=165  [run]
undefined4 FUN_00cade40(uint param_1)

{
  if (param_1 < 0x5c0e869c) {
    if (param_1 == 0x5c0e869b) {
      return 0x1802bc8c;
    }
    if (param_1 < 0x364e5f3b) {
      if (param_1 == 0x364e5f3a) {
        return 0x669eb4f7;
      }
      if (param_1 == 0x2049edf7) {
        return 0x377ee86b;
      }
      if (param_1 == 0x3200e7b7) {
        return 0x320b7407;
      }
    }
    else {
      if (param_1 == 0x3940bc4d) {
        return 0x25cb4785;
      }
      if (param_1 == 0x41382254) {
        return 0x7208118;
      }
    }
  }
  else if (param_1 < 0x721c6fe9) {
    if (param_1 == 0x721c6fe8) {
      return 0x32b053c6;
    }
    if (param_1 == 0x6b153e52) {
      return 0x2005fc28;
    }
    if (param_1 == 0x6e38e419) {
      return 0x62c2efec;
    }
  }
  else if (param_1 == 0x7723d558) {
    return 0x5fa2c65c;
  }
  return 0;
}

// 00CAE000  FUN_00cae000  size=48  [run]
void __fastcall FUN_00cae000(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1e8) == 2 || (*(int *)(iVar1 + 0x1e8) == 1)))) {
    *(undefined4 *)(iVar1 + 0x1e8) = 3;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x204) = 0;
  }
  return;
}

// 00CAE0A0  FUN_00cae0a0  size=48  [run]
void __fastcall FUN_00cae0a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1e8) == 2 || (*(int *)(iVar1 + 0x1e8) == 1)))) {
    *(undefined4 *)(iVar1 + 0x1e8) = 3;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x204) = 0;
  }
  return;
}

// 00CAE0D0  FUN_00cae0d0  size=48  [run]
void __fastcall FUN_00cae0d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1e8) == 2 || (*(int *)(iVar1 + 0x1e8) == 1)))) {
    *(undefined4 *)(iVar1 + 0x1e8) = 3;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x204) = 0;
  }
  return;
}

