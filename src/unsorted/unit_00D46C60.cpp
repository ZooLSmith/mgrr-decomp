// src/unsorted/unit_00D46C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46C60..00D46CC0, 2 functions

#include "mgrr.h"

// 00D46C60  FUN_00d46c60  size=38  [run]
undefined4 FUN_00d46c60(void)

{
  switch(DAT_018b9148) {
  case 0xf01:
  case 0xf05:
  case 0xf06:
  case 0xf08:
  case 0xf0a:
  case 0xf0b:
  case 0xf30:
    return 1;
  default:
    return 0;
  }
}

// 00D46CC0  FUN_00d46cc0  size=410  [run]
int __fastcall FUN_00d46cc0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((DAT_01b7b914 & 8) == 0) {
    if ((DAT_01b7b914 & 4) == 0) {
      if ((DAT_01b7b914 & 1) == 0) {
        if ((DAT_01b7b914 & 2) == 0) {
          if ((DAT_01b7b914 & 0x10) == 0) {
            if ((DAT_01b7b914 & 0x20) == 0) {
              if ((DAT_01b7b914 & 0x40) == 0) {
                if ((char)DAT_01b7b914 < '\0') {
                  iVar5 = 0x80;
                }
                else if ((DAT_01b7b914 & 0x400) == 0) {
                  if ((DAT_01b7b914 & 0x2000) == 0) {
                    if ((DAT_01b7b914 & 0x800) == 0) {
                      if ((DAT_01b7b914 & 0x4000) == 0) {
                        return 0;
                      }
                      iVar5 = 0x4000;
                    }
                    else {
                      iVar5 = 0x800;
                    }
                  }
                  else {
                    iVar5 = 0x2000;
                  }
                }
                else {
                  iVar5 = 0x400;
                }
              }
              else {
                iVar5 = 0x40;
              }
            }
            else {
              iVar5 = 0x20;
            }
          }
          else {
            iVar5 = 0x10;
          }
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
  }
  else {
    iVar5 = 8;
  }
  cVar1 = '\0';
  piVar2 = local_28;
  piVar4 = (int *)(param_1 + 0x158);
  do {
    if (cVar1 < '\t') {
      *piVar2 = *piVar4;
    }
    else {
      *piVar2 = iVar5;
    }
    cVar1 = cVar1 + '\x01';
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (cVar1 < '\n');
  iVar5 = 1;
  cVar1 = '\0';
  while( true ) {
    switch(cVar1) {
    case '\0':
      bVar6 = local_28[0] == 8;
      break;
    case '\x01':
      bVar6 = local_28[1] == 8;
      break;
    case '\x02':
      bVar6 = local_28[2] == 4;
      break;
    case '\x03':
      bVar6 = local_28[3] == 4;
      break;
    case '\x04':
      bVar6 = local_18 == 1;
      break;
    case '\x05':
      bVar6 = local_14 == 2;
      break;
    case '\x06':
      bVar6 = local_10 == 1;
      break;
    case '\a':
      bVar6 = local_c == 2;
      break;
    case '\b':
      iVar3 = FUN_00df7fc0();
      if (iVar3 == 1) {
        bVar6 = local_8 == 0x10;
      }
      else {
        bVar6 = local_8 == 0x20;
      }
      break;
    case '\t':
      iVar3 = FUN_00df7fc0();
      if (iVar3 == 1) {
        bVar6 = local_4 == 0x20;
      }
      else {
        bVar6 = local_4 == 0x10;
      }
      break;
    default:
      goto switchD_00d46db8_default;
    }
    if (!bVar6) break;
switchD_00d46db8_default:
    cVar1 = cVar1 + '\x01';
    if ('\t' < cVar1) {
LAB_00d46e28:
      piVar2 = local_28;
      piVar4 = (int *)(param_1 + 0x154);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      if (iVar5 != 0) {
        FUN_00e5e050("core_se_sys_konami_cmd",0);
      }
      return iVar5;
    }
  }
  iVar5 = 0;
  goto LAB_00d46e28;
}

