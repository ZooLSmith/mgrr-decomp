// src/unsorted/unit_00CD93E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD93E0..00CD93E0, 1 functions

#include "mgrr.h"

// 00CD93E0  FUN_00cd93e0  size=589  [run]
void __fastcall FUN_00cd93e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_10 [12];
  
  switch(*(undefined4 *)(param_1 + 0xd0)) {
  case 0:
    iVar3 = *(int *)(param_1 + 0xd4);
    if (iVar3 != 1) {
      if ((iVar3 < 10) || (0x13 < iVar3)) {
        if ((iVar3 < 100) || (199 < iVar3)) {
          pcVar4 = "%03d";
        }
        else {
          iVar3 = iVar3 + -100;
          pcVar4 = "#%02d";
        }
      }
      else {
        iVar3 = iVar3 + -10;
        pcVar4 = "0#%d";
      }
      goto LAB_00cd959b;
    }
    FUN_0095c6a0(local_10,&DAT_016b8898);
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0xd4);
    if (iVar2 == 1) {
      iVar3 = 0x1e;
      pcVar4 = "#/%d";
      goto LAB_00cd959b;
    }
    if ((iVar2 < 10) || (0x13 < iVar2)) {
      iVar3 = 0x1e;
LAB_00cd94ac:
      FUN_0095c6a0(local_10,"%d/%d",iVar2,iVar3);
    }
    else {
      FUN_0095c6a0(local_10,"#%d/%d",iVar2 + -10,0x1e);
    }
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0xd4);
    if (iVar2 == 1) {
      iVar3 = 5;
      pcVar4 = "#/%d";
      goto LAB_00cd959b;
    }
    if ((iVar2 < 10) || (0x13 < iVar2)) {
      iVar3 = 5;
      goto LAB_00cd94ac;
    }
    FUN_0095c6a0(local_10,"#%d/%d",iVar2 + -10,5);
    break;
  case 3:
    iVar3 = 0x14;
    iVar2 = FUN_00d46780();
    if (iVar2 != 0) {
      iVar3 = 5;
    }
    iVar2 = FUN_00d467a0();
    if (iVar2 != 0) {
      iVar3 = 5;
    }
    iVar2 = *(int *)(param_1 + 0xd4);
    if (iVar2 == 1) {
      pcVar4 = "#/%d";
      goto LAB_00cd959b;
    }
    if ((iVar2 < 10) || (0x13 < iVar2)) goto LAB_00cd94ac;
    FUN_0095c6a0(local_10,"#%d/%d",iVar2 + -10,iVar3);
    break;
  case 4:
  case 5:
    goto switchD_00cd93fc_caseD_4;
  case 6:
    FUN_0095c6a0(local_10,"%d/%d",*(undefined4 *)(param_1 + 0xd4),5);
    break;
  default:
    iVar3 = *(int *)(param_1 + 0xd4);
    pcVar4 = "%03d";
LAB_00cd959b:
    FUN_0095c6a0(local_10,pcVar4,iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar3 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0xa8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar1,local_10);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar1,local_10);
  }
switchD_00cd93fc_caseD_4:
  return;
}

