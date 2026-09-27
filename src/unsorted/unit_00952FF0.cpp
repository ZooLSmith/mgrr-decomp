// src/unsorted/unit_00952FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00952FF0..00952FF0, 1 functions

#include "mgrr.h"

// 00952FF0  FUN_00952ff0  size=167  [run]
int * FUN_00952ff0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropPassCordDlc::cItemStageDropPassCordDlc(), piVar4 != (int *)0x0))
  {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

