// src/misc/cFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1AB0..00EC1AB0, 1 functions

#include "mgrr.h"

// 00EC1AB0  cFade::set  size=180  [class]
int __thiscall
cFade::set(int param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,int param_7,
          int param_8)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + 0x84);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x84) = 1;
    }
    param_2 = *(int *)(param_1 + 0x84);
  }
  piVar1 = *(int **)(param_1 + 0x7c);
  do {
    if (piVar1 == *(int **)(param_1 + 0x80)) {
      piVar2 = (int *)FUN_00ebde50(param_2,param_7);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
LAB_00ec1b19:
      piVar2[3] = param_3;
      piVar2[5] = param_5;
      piVar2[6] = param_5;
      piVar2[2] = 0;
      piVar2[4] = param_4;
      piVar2[8] = param_8;
      piVar2[9] = 0;
      if ((param_6 & 1) != 0) {
        piVar2[2] = 1;
      }
      if ((param_6 & 2) != 0) {
        piVar2[2] = piVar2[2] | 2;
      }
      return param_2;
    }
    piVar2 = (int *)*piVar1;
    if (*piVar2 == param_2) {
      if (param_7 != piVar2[1]) {
        FUN_00dd5650(&DAT_016d2f90);
      }
      goto LAB_00ec1b19;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

