// src/unsorted/unit_009B1E10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009B1E10..009B20F0, 2 functions

#include "mgrr.h"

// 009B1E10  FUN_009b1e10  size=628  [run]
undefined4 * __fastcall FUN_009b1e10(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *local_38 [4];
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  DAT_01bea064 = DAT_01bea064 | 0x1000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_38[0] = "ui\\combolist\\combo_img_99.wtb";
  local_38[1] = "ui\\combolist\\combo_img_56.wtb";
  local_38[2] = "ui\\combolist\\combo_img_14.wtb";
  local_38[3] = "ui\\combolist\\combo_img_15.wtb";
  local_28 = "ui\\combolist\\combo_img_13.wtb";
  local_24 = "ui\\combolist\\combo_img_54.wtb";
  local_20 = "ui\\combolist\\combo_img_50.wtb";
  local_1c = "ui\\combolist\\combo_img_12.wtb";
  local_18 = "ui\\combolist\\combo_img_16.wtb";
  local_14 = "ui\\combolist\\combo_img_30.wtb";
  local_10 = "ui\\combolist\\combo_img_31.wtb";
  local_c = "ui\\combolist\\combo_img_32.wtb";
  local_8 = "ui\\combolist\\combo_img_43.wtb";
  local_4 = "ui\\combolist\\combo_img_45.wtb";
  iVar2 = 0xe;
  puVar3 = param_1;
  do {
    uVar1 = FUN_00e9e570(7,*(undefined4 *)(((int)local_38 - (int)param_1) + (int)puVar3),
                         &DAT_01b82da0,1,0);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cXmlBinary::cXmlBinary_17();
  DAT_01b73a01 = 0;
  DAT_01b73a21 = 0;
  DAT_01b73a41 = 0;
  DAT_01b73a61 = 0;
  DAT_01b73a81 = 0;
  DAT_01b73aa1 = 0;
  DAT_01b73ac1 = 0;
  DAT_01b73ae1 = 0;
  DAT_01b73b01 = 0;
  uVar1 = FUN_009c4d90(0);
  switch(uVar1) {
  case 0:
    iVar2 = 0xd;
    break;
  case 1:
    iVar2 = 0xe;
    break;
  case 2:
    iVar2 = 0xf;
    break;
  case 3:
    iVar2 = 0x10;
    break;
  case 4:
    iVar2 = 0x11;
    break;
  case 5:
    iVar2 = 0x12;
    break;
  case 6:
    iVar2 = 0x14;
    break;
  case 7:
    iVar2 = 0x13;
    break;
  case 8:
    iVar2 = 0x15;
    break;
  default:
    goto switchD_009b1f26_default;
  }
  (&DAT_01b73860)[iVar2 * 0x20] = 3;
  (&DAT_01b73861)[iVar2 * 0x20] = 1;
switchD_009b1f26_default:
  DAT_01b73b21 = 0;
  DAT_01b73b41 = 0;
  DAT_01b73b61 = 0;
  if (DAT_01b7588c == 2) {
    iVar2 = 0x16;
LAB_009b1fb0:
    (&DAT_01b73860)[iVar2 * 0x20] = 3;
    (&DAT_01b73861)[iVar2 * 0x20] = 1;
  }
  else {
    if (DAT_01b7588c == 3) {
      iVar2 = 0x17;
      goto LAB_009b1fb0;
    }
    if (DAT_01b7588c == 4) {
      iVar2 = 0x18;
      goto LAB_009b1fb0;
    }
  }
  uVar1 = FUN_009c4f70(0);
  switch(uVar1) {
  case 0:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = 2;
    break;
  case 2:
    iVar2 = 1;
    break;
  case 3:
    iVar2 = 3;
    break;
  case 4:
    iVar2 = 4;
    break;
  case 5:
    iVar2 = 5;
    break;
  case 6:
    iVar2 = 6;
    break;
  case 7:
    iVar2 = 7;
    break;
  case 8:
    iVar2 = 8;
    break;
  case 9:
    iVar2 = 9;
    break;
  case 10:
    iVar2 = 10;
    break;
  case 0xb:
    iVar2 = 0xb;
    break;
  case 0xc:
    iVar2 = 0xc;
    break;
  default:
    goto switchD_009b1fd1_default;
  }
  (&DAT_01b73860)[iVar2 * 0x20] = 3;
  (&DAT_01b73861)[iVar2 * 0x20] = 1;
switchD_009b1fd1_default:
  uVar1 = FUN_009c4ed0(0);
  switch(uVar1) {
  default:
    goto switchD_009b204f_caseD_0;
  case 1:
    iVar2 = 0x19;
    break;
  case 2:
    iVar2 = 0x1a;
    break;
  case 3:
    iVar2 = 0x1b;
  }
  (&DAT_01b73860)[iVar2 * 0x20] = 3;
  (&DAT_01b73861)[iVar2 * 0x20] = 1;
switchD_009b204f_caseD_0:
  return param_1;
}

// 009B20F0  FUN_009b20f0  size=29  [run]
undefined4 FUN_009b20f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x50,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = FUN_009b1e10();
    return uVar2;
  }
  return 0;
}

